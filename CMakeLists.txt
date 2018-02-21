
project(qtinline)
cmake_minimum_required(VERSION 3.0)

set(CMAKE_VERBOSE_MAKEFILE on)

set(CMAKE_CXX_FLAGS "-g -O0 -std=c++11")
set(CMAKE_SHARED_LINKER_FLAGS "-Wl,-z,defs --no-undefined") ### clang only flags
set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

# max effort for keep inline functions/methods.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_GLIBCXX_USE_CXX11_ABI=1 -fno-inline")

# for android arm build begin, usage: cmake -DANDROID=on .
if(ANDROID)
  set(CMAKE_C_COMPILER /opt/andndk16/bin/arm-linux-androideabi-gcc)
  set(CMAKE_CXX_COMPILER /opt/andndk16/bin/arm-linux-androideabi-g++)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -isystem /opt/andndk16/sysroot/usr/include")
  # set(CMAKE_SYSROOT "/home/me/Qt5.9.3/5.9.3/android_armv7/")
  # 这个参数可以设置多个值
  set(CMAKE_FIND_ROOT_PATH  /home/me/Qt5.10.0/5.10.0/android_armv7/ /home/me/Qt5.10.0/5.10.0/android_armv7/)
  set(CMAKE_SHARED_LINKER_FLAGS "--sysroot=/opt/andndk16/sysroot")
endif(ANDROID)
# for android arm build end

set(CMAKE_AUTOMOC off)  ### it's sure, the wrapper not need moc
find_package(Qt5Core)
find_package(Qt5Gui)
find_package(Qt5Widgets)

find_package(Qt5Network)
find_package(Qt5Qml)
find_package(Qt5Quick)

# find_package(Qt5QuickTemplates2)
find_package(Qt5QuickControls2)
find_package(Qt5QuickWidgets)

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

add_library(QtInline SHARED ${all_qt5_inline_srcs})
qt5_use_modules(QtInline Core Gui Widgets Network Qml Quick QuickControls2 QuickWidgets)
if(ANDROID)
  target_link_libraries(QtInline log)
endif(ANDROID)


