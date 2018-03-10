//  header block begin
// since 0x050000
// /usr/include/qt/QtQml/qjsengine.h
#ifndef protected
#define protected public
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
// void QJSEngine(class QObject *)
MyQJSEngine(QObject * parent) : QJSEngine(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QJSEngine10metaObjectEv(void *this_) {
  return (void*)((QJSEngine*)this_)->metaObject();
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
// [-2] void QJSEngine(class QObject *)
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
// [8] QJSValue evaluate(const class QString &, const class QString &, int)
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
// [8] QJSValue newQObject(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine10newQObjectEP7QObject(void *this_, QObject * object) {
  auto rv = ((QJSEngine*)this_)->newQObject(object);
return new QJSValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:96
// [-2] void collectGarbage()
extern "C" Q_DECL_EXPORT
void C_ZN9QJSEngine14collectGarbageEv(void *this_) {
  ((QJSEngine*)this_)->collectGarbage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:99
// [-2] void installTranslatorFunctions(const class QJSValue &)
extern "C" Q_DECL_EXPORT
void C_ZN9QJSEngine26installTranslatorFunctionsERK8QJSValue(void *this_, QJSValue* object) {
  ((QJSEngine*)this_)->installTranslatorFunctions(*object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:110
// [-2] void installExtensions(QJSEngine::Extensions, const class QJSValue &)
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
