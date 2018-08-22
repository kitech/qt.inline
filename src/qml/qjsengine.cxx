//  header block begin
// since 0x050000
// /usr/include/qt/QtQml/qjsengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsengine.h>
#include <QtQml>
#include "callback_inherit.h"

// QJSEngine is pure virtual: false
// QJSEngine has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQJSEngine : public QJSEngine {
public:
  virtual ~MyQJSEngine() {}
// void QJSEngine()
MyQJSEngine() : QJSEngine() {}
// void QJSEngine(QObject *)
MyQJSEngine(QObject * parent) : QJSEngine(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QJSEngine10metaObjectEv(void *this_) {
  return (void*)((QJSEngine*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QJSEngine*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QJSEngine11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QJSEngine*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QJSEngine::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QJSEngine::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:64
// [-2] void QJSEngine()
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngineC2Ev() {
  return  new QJSEngine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:65
// [-2] void QJSEngine(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngineC2EP7QObject(QObject * parent) {
  return  new QJSEngine(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:66
// [-2] void ~QJSEngine()
extern "C" Q_DECL_EXPORT
void C_ZN9QJSEngineD2Ev(void *this_) {
  delete (QJSEngine*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:68
// [8] QJSValue globalObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QJSEngine12globalObjectEv(void *this_) {
  auto rv = ((QJSEngine*)this_)->globalObject();
return new QJSValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:70
// [8] QJSValue evaluate(const QString &, const QString &, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine8evaluateERK7QStringS2_i(void *this_, QString* program, QString* fileName, int lineNumber) {
  auto rv = ((QJSEngine*)this_)->evaluate(*program, *fileName, lineNumber);
return new QJSValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:72
// [8] QJSValue newObject()
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine9newObjectEv(void *this_) {
  auto rv = ((QJSEngine*)this_)->newObject();
return new QJSValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:73
// [8] QJSValue newArray(uint)
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine8newArrayEj(void *this_, uint length) {
  auto rv = ((QJSEngine*)this_)->newArray(length);
return new QJSValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:75
// [8] QJSValue newQObject(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine10newQObjectEP7QObject(void *this_, QObject * object) {
  auto rv = ((QJSEngine*)this_)->newQObject(object);
return new QJSValue(rv);
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtQml/qjsengine.h:77
// [8] QJSValue newQMetaObject(const QMetaObject *)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine14newQMetaObjectEPK11QMetaObject(void *this_, const QMetaObject * metaObject) {
  auto rv = ((QJSEngine*)this_)->newQMetaObject(metaObject);
return new QJSValue(rv);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:96
// [-2] void collectGarbage()
extern "C" Q_DECL_EXPORT
void C_ZN9QJSEngine14collectGarbageEv(void *this_) {
  ((QJSEngine*)this_)->collectGarbage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:99
// [-2] void installTranslatorFunctions(const QJSValue &)
extern "C" Q_DECL_EXPORT
void C_ZN9QJSEngine26installTranslatorFunctionsERK8QJSValue(void *this_, QJSValue* object) {
  ((QJSEngine*)this_)->installTranslatorFunctions(*object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:110
// [-2] void installExtensions(QJSEngine::Extensions, const QJSValue &)
extern "C" Q_DECL_EXPORT
void C_ZN9QJSEngine17installExtensionsE6QFlagsINS_9ExtensionEERK8QJSValue(void *this_, QFlags<QJSEngine::Extension> extensions, QJSValue* object) {
  ((QJSEngine*)this_)->installExtensions(extensions, *object);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:112
// [8] QV8Engine * handle()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QJSEngine6handleEv(void *this_) {
  return (void*)((QJSEngine*)this_)->handle();
}

//  main block end
