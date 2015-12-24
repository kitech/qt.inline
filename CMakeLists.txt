
project(qtinline)
cmake_minimum_required(VERSION 3.0)

set(CMAKE_VERBOSE_MAKEFILE on)

set(CMAKE_CXX_FLAGS "-g -O2 -std=c++11")
set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

find_package(Qt5Core)
find_package(Qt5Gui)
find_package(Qt5Widgets)

# set(qt5_inline_core_srcs "src/core/qobject.cxx")
# set(qt5_inline_gui_srcs "src/gui/qevent.cxx")
# set(qt5_inline_widgets_srcs "src/widgets/qwidget.cxx")

# 用不用初始化这个值呢
# set(qt5_inline_core_srcs "")
# set(qt5_inline_gui_srcs "")
# set(qt5_inline_widgets_srcs "")

include(src/core/mod.cmake)
include(src/gui/mod.cmake)
include(src/widgets/mod.cmake)


set(all_qt5_inline_srcs ${qt5_inline_core_srcs} ${qt5_inline_gui_srcs} ${qt5_inline_widgets_srcs})

add_library(QtInline SHARED ${all_qt5_inline_srcs})
qt5_use_modules(QtInline Core Gui Widgets)

