//  header block begin
// /usr/include/qt/QtQml/qqmlcontext.h
#ifndef protected
#define protected public
#endif
#include <qqmlcontext.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlContext is pure virtual: false
// QQmlContext has virtual projected: false
//  header block end

//  main block begin

class MyQQmlContext : public QQmlContext {
public:
  virtual ~MyQQmlContext() {}
// void QQmlContext(class QQmlEngine *, class QObject *)
MyQQmlContext(QQmlEngine * parent, QObject * objParent) : QQmlContext(parent, objParent) {}
// void QQmlContext(class QQmlContext *, class QObject *)
MyQQmlContext(QQmlContext * parent, QObject * objParent) : QQmlContext(parent, objParent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:61
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QQmlContext10metaObjectEv(void *this_) {
  return (void*)((QQmlContext*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:65
// [-2] void QQmlContext(class QQmlEngine *, class QObject *)
extern "C"
void* C_ZN11QQmlContextC2EP10QQmlEngineP7QObject(QQmlEngine * parent, QObject * objParent) {
  return  new QQmlContext(parent, objParent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:66
// [-2] void QQmlContext(class QQmlContext *, class QObject *)
extern "C"
void* C_ZN11QQmlContextC2EPS_P7QObject(QQmlContext * parent, QObject * objParent) {
  return  new QQmlContext(parent, objParent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:67
// [-2] void ~QQmlContext()
extern "C"
void C_ZN11QQmlContextD2Ev(void *this_) {
  delete (QQmlContext*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:69
// [1] bool isValid()
extern "C"
bool C_ZNK11QQmlContext7isValidEv(void *this_) {
  return (bool)((QQmlContext*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:71
// [8] QQmlEngine * engine()
extern "C"
void* C_ZNK11QQmlContext6engineEv(void *this_) {
  return (void*)((QQmlContext*)this_)->engine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:72
// [8] QQmlContext * parentContext()
extern "C"
void* C_ZNK11QQmlContext13parentContextEv(void *this_) {
  return (void*)((QQmlContext*)this_)->parentContext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:74
// [8] QObject * contextObject()
extern "C"
void* C_ZNK11QQmlContext13contextObjectEv(void *this_) {
  return (void*)((QQmlContext*)this_)->contextObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:75
// [-2] void setContextObject(class QObject *)
extern "C"
void C_ZN11QQmlContext16setContextObjectEP7QObject(void *this_, QObject * arg0) {
  ((QQmlContext*)this_)->setContextObject(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:77
// [16] QVariant contextProperty(const class QString &)
extern "C"
void* C_ZNK11QQmlContext15contextPropertyERK7QString(void *this_, QString* arg0) {
  auto rv = ((QQmlContext*)this_)->contextProperty(*arg0);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:78
// [-2] void setContextProperty(const class QString &, class QObject *)
extern "C"
void C_ZN11QQmlContext18setContextPropertyERK7QStringP7QObject(void *this_, QString* arg0, QObject * arg1) {
  ((QQmlContext*)this_)->setContextProperty(*arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:79
// [-2] void setContextProperty(const class QString &, const class QVariant &)
extern "C"
void C_ZN11QQmlContext18setContextPropertyERK7QStringRK8QVariant(void *this_, QString* arg0, QVariant* arg1) {
  ((QQmlContext*)this_)->setContextProperty(*arg0, *arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:82
// [8] QString nameForObject(class QObject *)
extern "C"
void* C_ZNK11QQmlContext13nameForObjectEP7QObject(void *this_, QObject * arg0) {
  auto rv = ((QQmlContext*)this_)->nameForObject(arg0);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:84
// [8] QUrl resolvedUrl(const class QUrl &)
extern "C"
void* C_ZN11QQmlContext11resolvedUrlERK4QUrl(void *this_, QUrl* arg0) {
  auto rv = ((QQmlContext*)this_)->resolvedUrl(*arg0);
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:86
// [-2] void setBaseUrl(const class QUrl &)
extern "C"
void C_ZN11QQmlContext10setBaseUrlERK4QUrl(void *this_, QUrl* arg0) {
  ((QQmlContext*)this_)->setBaseUrl(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:87
// [8] QUrl baseUrl()
extern "C"
void* C_ZNK11QQmlContext7baseUrlEv(void *this_) {
  auto rv = ((QQmlContext*)this_)->baseUrl();
return new QUrl(rv);
}

//  main block end
