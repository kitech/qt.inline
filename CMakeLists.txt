
project(qtinline)
cmake_minimum_required(VERSION 3.0)

set(CMAKE_VERBOSE_MAKEFILE on)

set(CMAKE_CXX_FLAGS "-g -O0 -std=c++11")
set(CMAKE_SHARED_LINKER_FLAGS "-Wl,-z,defs --no-undefined")
set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

# max effort for keep inline functions/methods.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_GLIBCXX_USE_CXX11_ABI=1 -fno-inline")

set(CMAKE_AUTOMOC on)
find_package(Qt5Core)
find_package(Qt5Gui)
find_package(Qt5Widgets)
# find_package(Qt5Network)
# find_package(Qt5Qml)
# find_package(Qt5Quick)

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
  src/core/*.cxx
  src/gui/*.cxx
  src/widgets/*.cxx
  )
# message(${qt5_inline_srcs})
message("can you see that?")
foreach(var ${qt5_inline_srcs})
  # message(${var})
  set(all_qt5_inline_srcs ${all_qt5_inline_srcs} ${var})
endforeach(var)

set(qt5_inline_extra_srcs src/qihotfix.cpp src/qdynslotobject.cpp)

set(all_qt5_inline_srcs
  ${all_qt5_inline_srcs}
  ${qt5_inline_extra_srcs}
  )

add_library(QtInline SHARED ${all_qt5_inline_srcs})
qt5_use_modules(QtInline Core Gui Widgets)

