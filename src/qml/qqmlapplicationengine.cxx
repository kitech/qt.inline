//  header block begin
// since 0x050100
// /usr/include/qt/QtQml/qqmlapplicationengine.h
#ifndef protected
#define protected public
#endif
#include <qqmlapplicationengine.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlApplicationEngine is pure virtual: false
// QQmlApplicationEngine has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQmlApplicationEngine : public QQmlApplicationEngine {
public:
  virtual ~MyQQmlApplicationEngine() {}
// void QQmlApplicationEngine(class QObject *)
MyQQmlApplicationEngine(QObject * parent) : QQmlApplicationEngine(parent) {}
// void QQmlApplicationEngine(const class QUrl &, class QObject *)
MyQQmlApplicationEngine(const QUrl & url, QObject * parent) : QQmlApplicationEngine(url, parent) {}
// void QQmlApplicationEngine(const class QString &, class QObject *)
MyQQmlApplicationEngine(const QString & filePath, QObject * parent) : QQmlApplicationEngine(filePath, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QQmlApplicationEngine10metaObjectEv(void *this_) {
  return (void*)((QQmlApplicationEngine*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:56
// [-2] void QQmlApplicationEngine(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QQmlApplicationEngineC2EP7QObject(QObject * parent) {
  return  new QQmlApplicationEngine(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:57
// [-2] void QQmlApplicationEngine(const class QUrl &, class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QQmlApplicationEngineC2ERK4QUrlP7QObject(QUrl* url, QObject * parent) {
  return  new QQmlApplicationEngine(*url, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:58
// [-2] void QQmlApplicationEngine(const class QString &, class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QQmlApplicationEngineC2ERK7QStringP7QObject(QString* filePath, QObject * parent) {
  return  new QQmlApplicationEngine(*filePath, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:59
// [-2] void ~QQmlApplicationEngine()
extern "C" Q_DECL_EXPORT
void C_ZN21QQmlApplicationEngineD2Ev(void *this_) {
  delete (QQmlApplicationEngine*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:67
// [-2] void load(const class QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQmlApplicationEngine4loadERK4QUrl(void *this_, QUrl* url) {
  ((QQmlApplicationEngine*)this_)->load(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:68
// [-2] void load(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQmlApplicationEngine4loadERK7QString(void *this_, QString* filePath) {
  ((QQmlApplicationEngine*)this_)->load(*filePath);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:69
// [-2] void loadData(const class QByteArray &, const class QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQmlApplicationEngine8loadDataERK10QByteArrayRK4QUrl(void *this_, QByteArray* data, QUrl* url) {
  ((QQmlApplicationEngine*)this_)->loadData(*data, *url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:72
// [-2] void objectCreated(class QObject *, const class QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQmlApplicationEngine13objectCreatedEP7QObjectRK4QUrl(void *this_, QObject * object, QUrl* url) {
  ((QQmlApplicationEngine*)this_)->objectCreated(object, *url);
}

//  main block end
