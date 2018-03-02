#usage:
# defines: -DANDROID=on, -DMINGW_NOIPBIZ=on, -DWITH_QT_STATIC=on, -DWINARCH=x32
project(qt5inline)
cmake_minimum_required(VERSION 3.0)

set(CMAKE_VERBOSE_MAKEFILE on)

# don't use -std=c++11,
# use -std=gnu++11 to fix pch error: trigraphs was enabled in PCH file but is currently disabled
set(CMAKE_CXX_FLAGS "-g -O0 -std=gnu++11")
#set(CMAKE_C_COMPILER clang)
#set(CMAKE_CXX_COMPILER clang++)
IF(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  if(${CMAKE_C_COMPILER} MATCHES "clang")
    set(CMAKE_SHARED_LINKER_FLAGS "-Wl,-z,defs --no-undefined") ### linux clang only flags
  endif(${CMAKE_C_COMPILER} MATCHES "clang")
ENDIF(${CMAKE_SYSTEM_NAME} MATCHES "Linux")


# max effort for keep inline functions/methods.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_GLIBCXX_USE_CXX11_ABI=1 -fno-inline")

# set toolchains by cmake definition(s)
# for android arm build begin, usage: cmake -DANDROID=on .
if(ANDROID)
  set(CMAKE_C_COMPILER /opt/andndk16/bin/clang)
  set(CMAKE_CXX_COMPILER /opt/andndk16/bin/clang++)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -isystem /opt/andndk16/sysroot/usr/include")
  # set(CMAKE_SYSROOT "/home/me/Qt5.9.3/5.9.3/android_armv7/")
  # 这个参数可以设置多个值
  set(CMAKE_FIND_ROOT_PATH  /home/me/Qt5.10.0/5.10.0/android_armv7/ /home/me/Qt5.10.0/5.10.0/android_armv7/)
  set(CMAKE_SHARED_LINKER_FLAGS "--sysroot=/opt/andndk16/sysroot")
elseif(MINGW_NOIPBIZ)
  include(tc-mingw.cmake)
endif(ANDROID)
# for android arm build end

# usage: cmake -DWITH_MINGW_QT_STATIC
set(_QT_STATIC_PREF "")
if(WITH_QT_STATIC)
  if(MINGW_NOIPBIZ)
    set(_QT_STATIC_PREF "Static")
  endif(MINGW_NOIPBIZ)
endif(WITH_QT_STATIC)

set(CMAKE_AUTOMOC off)  ### it's sure, the wrapper not need moc
find_package(${_QT_STATIC_PREF}Qt5Core)
find_package(${_QT_STATIC_PREF}Qt5Gui)
find_package(${_QT_STATIC_PREF}Qt5Widgets)

find_package(${_QT_STATIC_PREF}Qt5Network)
find_package(${_QT_STATIC_PREF}Qt5Qml)
find_package(${_QT_STATIC_PREF}Qt5Quick)

# find_package(Qt5QuickTemplates2)
find_package(${_QT_STATIC_PREF}Qt5QuickControls2)
find_package(${_QT_STATIC_PREF}Qt5QuickWidgets)

# set(qt5_inline_core_srcs "src/core/qobject.cxx")
# set(qt5_inline_gui_srcs "src/gui/qevent.cxx")
# set(qt5_inline_widgets_srcs "src/widgets/qwidget.cxx")

# 用不用初始化这个值呢
# set(qt5_inline_core_srcs "")
# set(qt5_inline_gui_srcs "")
# set(qt5_inline_widgets_srcs "")

set(CMAKE_INCLUDE_CURRENT_DIR on)
include_directories("./src")

set(all_qt5_inline_srcs "")
file(GLOB qt5_inline_srcs
  # src/core/qstring.cxx # for compile test
  src/core/*.cxx
  src/gui/*.cxx
  src/widgets/*.cxx
  src/network/*.cxx
  src/qml/*.cxx
  src/quick/*.cxx
  # src/quicktemplates2/*.cxx
  src/quickcontrols2/*.cxx
  src/quickwidgets/*.cxx
  )
# message(${qt5_inline_srcs})
message("can you see that?")
foreach(var ${qt5_inline_srcs})
  # message(${var})
  set(all_qt5_inline_srcs ${all_qt5_inline_srcs} ${var})
endforeach(var)

set(qt5_inline_extra_srcs src/qihotfix.cpp src/qdynslotobject.cpp src/callback_inherit.cpp)

set(all_qt5_inline_srcs
  ${all_qt5_inline_srcs}
  ${qt5_inline_extra_srcs}
  )


# resolve static ldflags
# note: the order
set(LDFLAGS_FOR_CUSTOM_LINUX_STATIC_BUILD  Qt5::QXcbIntegrationPlugin Qt5XcbQpa xcb-static Qt5ThemeSupport Qt5EdidSupport Qt5FontDatabaseSupport Qt5ServiceSupport Qt5EventDispatcherSupport Qt5DBus qtfreetype     pthread GL qtlibpng qtharfbuzz qtpcre2 SM ICE X11 xcb X11-xcb dl)
set(LDFLAGS_FOR_CUSTOM_WIN_STATIC_BUILD StaticQt5::QWindowsIntegrationPlugin mpr)
set(LDFLAGS_FOR_CUSTOM_MAC_STATIC_BUILD Qt5::QCocoaIntegrationPlugin)
set(LDFLAGS_FOR_CUSTOM_STATIC_BUILD "")
if(WITH_QT_STATIC)
  if(MINGW_NOIPBIZ)
    set(LDFLAGS_FOR_CUSTOM_STATIC_BUILD ${LDFLAGS_FOR_CUSTOM_WIN_STATIC_BUILD})
  elseif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    set(LDFLAGS_FOR_CUSTOM_STATIC_BUILD ${LDFLAGS_FOR_CUSTOM_MAC_STATIC_BUILD})
  elseif(${CMAKE_SYSTEM_NAME} MATCHES "Android")
    set(LDFLAGS_FOR_CUSTOM_STATIC_BUILD log)
  else(MINGW_NOIPBIZ)
    set(LDFLAGS_FOR_CUSTOM_STATIC_BUILD ${LDFLAGS_FOR_CUSTOM_LINUX_STATIC_BUILD})
    link_directories(/opt/qt510st/lib/ /opt/qt510st/plugins/platforms/)
  endif(MINGW_NOIPBIZ)
endif(WITH_QT_STATIC)

add_library(Qt5Inline SHARED ${all_qt5_inline_srcs} preheaders/qthdrsrc.cpp preheaders/qthdrsrc.h)
target_link_libraries(Qt5Inline ${_QT_STATIC_PREF}Qt5::Core ${_QT_STATIC_PREF}Qt5::Gui ${_QT_STATIC_PREF}Qt5::Widgets ${_QT_STATIC_PREF}Qt5::Network ${_QT_STATIC_PREF}Qt5::Qml ${_QT_STATIC_PREF}Qt5::Quick ${_QT_STATIC_PREF}Qt5::QuickControls2 ${_QT_STATIC_PREF}Qt5::QuickWidgets)
target_link_libraries(Qt5Inline ${LDFLAGS_FOR_CUSTOM_STATIC_BUILD})
if(ANDROID)
  target_link_libraries(Qt5Inline log)
endif(ANDROID)

set (CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake")
include(PrecompiledHeader)
add_precompiled_header(Qt5Inline preheaders/qthdrsrc.h FORCEINCLUDE)

