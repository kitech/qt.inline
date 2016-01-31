// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQml/qqmlextensioninterface.h
// dst-file: /src/qml/qqmlextensioninterface.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qqmlextensioninterface.h>

extern "C" {

int QQmlTypesExtensionInterface_Class_Size()
{
  return sizeof(QQmlTypesExtensionInterface);
}

int QQmlExtensionInterface_Class_Size()
{
  return sizeof(QQmlExtensionInterface);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qqmlextensioninterface_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensioninterface.h', line 49, column 18>
//   // proto:  void QQmlTypesExtensionInterface::registerTypes(const char * uri);
if (true) {
  auto f = [](const char * arg1) {
    ((QQmlTypesExtensionInterface*)0)->registerTypes(arg1);
  };
  if (f == nullptr){}
}
// _ZN27QQmlTypesExtensionInterface13registerTypesEPKc registerTypes(const char *)
//   // proto:  void QQmlTypesExtensionInterface::~QQmlTypesExtensionInterface();
if (true) {
  delete ((QQmlTypesExtensionInterface*)0);
}
//   // proto:  void QQmlExtensionInterface::~QQmlExtensionInterface();
if (true) {
  delete ((QQmlExtensionInterface*)0);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensioninterface.h', line 56, column 18>
//   // proto:  void QQmlExtensionInterface::initializeEngine(QQmlEngine * engine, const char * uri);
if (true) {
  auto f = [](QQmlEngine * arg1, const char * arg2) {
    ((QQmlExtensionInterface*)0)->initializeEngine(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN22QQmlExtensionInterface16initializeEngineEP10QQmlEnginePKc initializeEngine(class QQmlEngine *, const char *)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensioninterface.h', line 49, column 18>
//   // proto:  void QQmlTypesExtensionInterface::registerTypes(const char * uri);
extern "C"
void C_ZN27QQmlTypesExtensionInterface13registerTypesEPKc(void *qthis, const char * arg1) {
  ((QQmlTypesExtensionInterface*)qthis)->registerTypes(arg1);
}
// _ZN27QQmlTypesExtensionInterface13registerTypesEPKc registerTypes(const char *)
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
extern "C"
void C_ZN22QQmlExtensionInterface16initializeEngineEP10QQmlEnginePKc(void *qthis, QQmlEngine * arg1, const char * arg2) {
  ((QQmlExtensionInterface*)qthis)->initializeEngine(arg1, arg2);
}
// _ZN22QQmlExtensionInterface16initializeEngineEP10QQmlEnginePKc initializeEngine(class QQmlEngine *, const char *)
// <= ext block end

// body block begin =>
// <= body block end

