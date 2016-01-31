#include <qurl.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQml/qqmlextensionplugin.h
// dst-file: /src/qml/qqmlextensionplugin.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qqmlextensionplugin.h>

extern "C" {

int QQmlExtensionPlugin_Class_Size()
{
  return sizeof(QQmlExtensionPlugin);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qqmlextensionplugin_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensionplugin.h', line 55, column 14>
//   // proto:  void QQmlExtensionPlugin::QQmlExtensionPlugin(QObject * parent);
if (true) {
  auto f = [](QObject * arg1) {
    // new QQmlExtensionPlugin(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensionplugin.h', line 61, column 18>
//   // proto:  void QQmlExtensionPlugin::initializeEngine(QQmlEngine * engine, const char * uri);
if (true) {
  auto f = [](QQmlEngine * arg1, const char * arg2) {
    ((QQmlExtensionPlugin*)0)->initializeEngine(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN19QQmlExtensionPlugin16initializeEngineEP10QQmlEnginePKc initializeEngine(class QQmlEngine *, const char *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensionplugin.h', line 60, column 18>
//   // proto:  void QQmlExtensionPlugin::registerTypes(const char * uri);
if (true) {
  auto f = [](const char * arg1) {
    ((QQmlExtensionPlugin*)0)->registerTypes(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QQmlExtensionPlugin13registerTypesEPKc registerTypes(const char *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensionplugin.h', line 50, column 5>
//   // proto:  const QMetaObject * QQmlExtensionPlugin::metaObject();
if (true) {
  auto f = []() {
    ((QQmlExtensionPlugin*)0)->metaObject();
  };
  if (f == nullptr){}
}
// _ZNK19QQmlExtensionPlugin10metaObjectEv metaObject()
//   // proto:  void QQmlExtensionPlugin::~QQmlExtensionPlugin();
if (true) {
  delete ((QQmlExtensionPlugin*)0);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensionplugin.h', line 58, column 10>
//   // proto:  QUrl QQmlExtensionPlugin::baseUrl();
if (true) {
  auto f = []() {
    ((QQmlExtensionPlugin*)0)->baseUrl();
  };
  if (f == nullptr){}
}
// _ZNK19QQmlExtensionPlugin7baseUrlEv baseUrl()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensionplugin.h', line 55, column 14>
//   // proto:  void QQmlExtensionPlugin::QQmlExtensionPlugin(QObject * parent);
extern "C"
void C_ZN19QQmlExtensionPluginC2EP7QObject(QObject * arg1) {
  // new QQmlExtensionPlugin(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensionplugin.h', line 61, column 18>
//   // proto:  void QQmlExtensionPlugin::initializeEngine(QQmlEngine * engine, const char * uri);
extern "C"
void C_ZN19QQmlExtensionPlugin16initializeEngineEP10QQmlEnginePKc(void *qthis, QQmlEngine * arg1, const char * arg2) {
  ((QQmlExtensionPlugin*)qthis)->initializeEngine(arg1, arg2);
}
// _ZN19QQmlExtensionPlugin16initializeEngineEP10QQmlEnginePKc initializeEngine(class QQmlEngine *, const char *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensionplugin.h', line 60, column 18>
//   // proto:  void QQmlExtensionPlugin::registerTypes(const char * uri);
extern "C"
void C_ZN19QQmlExtensionPlugin13registerTypesEPKc(void *qthis, const char * arg1) {
  ((QQmlExtensionPlugin*)qthis)->registerTypes(arg1);
}
// _ZN19QQmlExtensionPlugin13registerTypesEPKc registerTypes(const char *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensionplugin.h', line 50, column 5>
//   // proto:  const QMetaObject * QQmlExtensionPlugin::metaObject();
extern "C"
void C_ZNK19QQmlExtensionPlugin10metaObjectEv(void *qthis) {
  ((QQmlExtensionPlugin*)qthis)->metaObject();
}
// _ZNK19QQmlExtensionPlugin10metaObjectEv metaObject()
//   // proto:  void QQmlExtensionPlugin::~QQmlExtensionPlugin();
extern "C"
void C_ZN19QQmlExtensionPluginD2Ev(void *qthis) {
  delete (QQmlExtensionPlugin*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensionplugin.h', line 58, column 10>
//   // proto:  QUrl QQmlExtensionPlugin::baseUrl();
extern "C"
void C_ZNK19QQmlExtensionPlugin7baseUrlEv(void *qthis) {
  ((QQmlExtensionPlugin*)qthis)->baseUrl();
}
// _ZNK19QQmlExtensionPlugin7baseUrlEv baseUrl()
// <= ext block end

// body block begin =>
// QQmlExtensionPlugin_SlotProxy here
class QQmlExtensionPlugin_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQmlExtensionPlugin_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/qml/qqmlextensionplugin.moc"

extern "C" {
  QQmlExtensionPlugin_SlotProxy* QQmlExtensionPlugin_SlotProxy_new()
  {
    return new QQmlExtensionPlugin_SlotProxy();
  }
};

// <= body block end

