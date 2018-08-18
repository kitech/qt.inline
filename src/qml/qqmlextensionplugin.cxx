//  header block begin
// since 0x050000
// /usr/include/qt/QtQml/qqmlextensionplugin.h
#ifndef protected
#define protected public
#endif
#include <qqmlextensionplugin.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlExtensionPlugin is pure virtual: true
// QQmlExtensionPlugin has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQmlExtensionPlugin : public QQmlExtensionPlugin {
public:
  virtual ~MyQQmlExtensionPlugin() {}
// void QQmlExtensionPlugin(QObject *)
MyQQmlExtensionPlugin(QObject * parent) : QQmlExtensionPlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QQmlExtensionPlugin10metaObjectEv(void *this_) {
  return (void*)((QQmlExtensionPlugin*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQmlExtensionPlugin11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQmlExtensionPlugin*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QQmlExtensionPlugin11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQmlExtensionPlugin*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQmlExtensionPlugin2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlExtensionPlugin::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQmlExtensionPlugin6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlExtensionPlugin::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:61
// [-2] void QQmlExtensionPlugin(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQmlExtensionPluginC2EP7QObject(QObject * parent) {
  return 0; // new QQmlExtensionPlugin(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:62
// [-2] void ~QQmlExtensionPlugin()
extern "C" Q_DECL_EXPORT
void C_ZN19QQmlExtensionPluginD2Ev(void *this_) {
  delete (QQmlExtensionPlugin*)(this_);
}
// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtQml/qqmlextensionplugin.h:64
// [8] QUrl baseUrl()
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void* C_ZNK19QQmlExtensionPlugin7baseUrlEv(void *this_) {
  auto rv = ((QQmlExtensionPlugin*)this_)->baseUrl();
return new QUrl(rv);
}
#endif // QT_VERSION >= 0x050100

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:66
// [-2] void registerTypes(const char *)
extern "C" Q_DECL_EXPORT
void C_ZN19QQmlExtensionPlugin13registerTypesEPKc(void *this_, const char * uri) {
  ((QQmlExtensionPlugin*)this_)->registerTypes(uri);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:67
// [-2] void initializeEngine(QQmlEngine *, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN19QQmlExtensionPlugin16initializeEngineEP10QQmlEnginePKc(void *this_, QQmlEngine * engine, const char * uri) {
  ((QQmlExtensionPlugin*)this_)->initializeEngine(engine, uri);
}

//  main block end
