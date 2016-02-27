// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmlextensioninterface.h
// dst-file: /src/qml/qqmlextensioninterface.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmlextensioninterface.h>


// <= header block end

// main block begin =>
void __keep_qqmlextensioninterface_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlTypesExtensionInterface_Class_Size()
{
  return sizeof(QQmlTypesExtensionInterface);
}

extern "C"
int QQmlExtensionInterface_Class_Size()
{
  return sizeof(QQmlExtensionInterface);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensioninterface.h', line 49, column 18>
//   // proto:  void QQmlTypesExtensionInterface::registerTypes(const char * uri);
// _ZN27QQmlTypesExtensionInterface13registerTypesEPKc registerTypes(const char *)
extern "C"
void
C_ZN27QQmlTypesExtensionInterface13registerTypesEPKc(void *qthis,
const char * arg1) {
  ((QQmlTypesExtensionInterface*)qthis)->registerTypes(arg1);
}
//   // proto:  void QQmlTypesExtensionInterface::~QQmlTypesExtensionInterface();
extern "C"
void C_ZN27QQmlTypesExtensionInterfaceD2Ev(void *qthis) {
  delete (QQmlTypesExtensionInterface*)qthis;
}
//   // proto:  void QQmlExtensionInterface::~QQmlExtensionInterface();
extern "C"
void C_ZN22QQmlExtensionInterfaceD2Ev(void *qthis) {
  delete (QQmlExtensionInterface*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensioninterface.h', line 56, column 18>
//   // proto:  void QQmlExtensionInterface::initializeEngine(QQmlEngine * engine, const char * uri);
// _ZN22QQmlExtensionInterface16initializeEngineEP10QQmlEnginePKc initializeEngine(class QQmlEngine *, const char *)
extern "C"
void
C_ZN22QQmlExtensionInterface16initializeEngineEP10QQmlEnginePKc(void *qthis,
QQmlEngine * arg1,
const char * arg2) {
  ((QQmlExtensionInterface*)qthis)->initializeEngine(arg1,
arg2);
}
// <= ext block end

// body block begin =>
// <= body block end

