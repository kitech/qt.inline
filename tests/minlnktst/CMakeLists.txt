project(Qt5Inline)
cmake_minimum_required(VERSION 3.0)

set(CMAKE_VERBOSE_MAKEFILE on)

set(CMAKE_AUTOMOC off)  ### it's sure, the wrapper not need moc

find_package(PkgConfig REQUIRED)
pkg_check_modules(FreeType2 freetype2)
pkg_check_modules(OpenSSL openssl)
#find_package(OpenSSL)
find_package(${_QT_STATIC_PFX}Qt5Core)
find_package(${_QT_STATIC_PFX}Qt5Gui)
find_package(${_QT_STATIC_PFX}Qt5Widgets)

find_package(${_QT_STATIC_PFX}Qt5Network)
find_package(${_QT_STATIC_PFX}Qt5Qml)
find_package(${_QT_STATIC_PFX}Qt5Quick)

# find_package(Qt5QuickTemplates2)
find_package(${_QT_STATIC_PFX}Qt5QuickControls2)
find_package(${_QT_STATIC_PFX}Qt5QuickWidgets)


add_library(Qt5Inline SHARED callback_inherit.cpp qgraphicsview.cxx qfontdatabase.cxx qnetworkinterface.cxx qsslsocket.cxx qdnslookup.cxx)
target_link_libraries(Qt5Inline
  ${_QT_STATIC_PFX}Qt5::Core ${_QT_STATIC_PFX}Qt5::Gui ${_QT_STATIC_PFX}Qt5::Widgets ${_QT_STATIC_PFX}Qt5::Network
  ${_QT_STATIC_PFX}Qt5::Qml ${_QT_STATIC_PFX}Qt5::Quick ${_QT_STATIC_PFX}Qt5::QuickControls2 ${_QT_STATIC_PFX}Qt5::QuickWidgets
  ${Qt5Core_DIR}/../../libQt5AccessibilitySupport.a
  ${Qt5Core_DIR}/../../libQt5EventDispatcherSupport.a
  ${Qt5Core_DIR}/../../libQt5FontDatabaseSupport.a
  ${Qt5Core_DIR}/../../libQt5ThemeSupport.a
  Qt5::QWindowsIntegrationPlugin ${OpenSSL_LIBRARIES} -ldnsapi -liphlpapi ${FreeType2_LIBRARIES}
  )

add_executable(lnktst lnktst.c)
target_link_libraries(lnktst Qt5Inline)
