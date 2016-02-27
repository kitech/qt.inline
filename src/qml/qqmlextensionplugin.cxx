// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmlextensionplugin.h
// dst-file: /src/qml/qqmlextensionplugin.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmlextensionplugin.h>


#include <qurl.h>
// <= header block end

// main block begin =>
void __keep_qqmlextensionplugin_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlExtensionPlugin_Class_Size()
{
  return sizeof(QQmlExtensionPlugin);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensionplugin.h', line 55, column 14>
//   // proto:  void QQmlExtensionPlugin::QQmlExtensionPlugin(QObject * parent);
extern "C"
QQmlExtensionPlugin*
C_ZN19QQmlExtensionPluginC2EP7QObject(QObject * arg1) {
  // auto ret = new QQmlExtensionPlugin(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensionplugin.h', line 61, column 18>
//   // proto:  void QQmlExtensionPlugin::initializeEngine(QQmlEngine * engine, const char * uri);
// _ZN19QQmlExtensionPlugin16initializeEngineEP10QQmlEnginePKc initializeEngine(class QQmlEngine *, const char *)
extern "C"
void
C_ZN19QQmlExtensionPlugin16initializeEngineEP10QQmlEnginePKc(void *qthis,
QQmlEngine * arg1,
const char * arg2) {
  ((QQmlExtensionPlugin*)qthis)->initializeEngine(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensionplugin.h', line 60, column 18>
//   // proto:  void QQmlExtensionPlugin::registerTypes(const char * uri);
// _ZN19QQmlExtensionPlugin13registerTypesEPKc registerTypes(const char *)
extern "C"
void
C_ZN19QQmlExtensionPlugin13registerTypesEPKc(void *qthis,
const char * arg1) {
  ((QQmlExtensionPlugin*)qthis)->registerTypes(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensionplugin.h', line 50, column 5>
//   // proto:  const QMetaObject * QQmlExtensionPlugin::metaObject();
// _ZNK19QQmlExtensionPlugin10metaObjectEv metaObject()
extern "C"
void*
C_ZNK19QQmlExtensionPlugin10metaObjectEv(void *qthis) {
  auto ret =
  ((QQmlExtensionPlugin*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QQmlExtensionPlugin::~QQmlExtensionPlugin();
extern "C"
void C_ZN19QQmlExtensionPluginD2Ev(void *qthis) {
  delete (QQmlExtensionPlugin*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlextensionplugin.h', line 58, column 10>
//   // proto:  QUrl QQmlExtensionPlugin::baseUrl();
// _ZNK19QQmlExtensionPlugin7baseUrlEv baseUrl()
extern "C"
QUrl*
C_ZNK19QQmlExtensionPlugin7baseUrlEv(void *qthis) {
  auto ret =
  ((QQmlExtensionPlugin*)qthis)->baseUrl();
  return new QUrl(ret); // 5
}
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

