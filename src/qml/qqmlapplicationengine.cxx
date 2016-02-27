// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmlapplicationengine.h
// dst-file: /src/qml/qqmlapplicationengine.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmlapplicationengine.h>


#include <qobject.h>
#include <qlist.h>
#include <qmetatype.h>
// <= header block end

// main block begin =>
void __keep_qqmlapplicationengine_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlApplicationEngine_Class_Size()
{
  return sizeof(QQmlApplicationEngine);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlapplicationengine.h', line 52, column 5>
//   // proto:  void QQmlApplicationEngine::QQmlApplicationEngine(const QString & filePath, QObject * parent);
extern "C"
QQmlApplicationEngine*
C_ZN21QQmlApplicationEngineC2ERK7QStringP7QObject(const QString* arg1,
QObject * arg2) {
  auto ret = new QQmlApplicationEngine(*((const QString*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlapplicationengine.h', line 62, column 10>
//   // proto:  void QQmlApplicationEngine::objectCreated(QObject * object, const QUrl & url);
// _ZN21QQmlApplicationEngine13objectCreatedEP7QObjectRK4QUrl objectCreated(class QObject *, const class QUrl &)
extern "C"
void
C_ZN21QQmlApplicationEngine13objectCreatedEP7QObjectRK4QUrl(void *qthis,
QObject * arg1,
const QUrl* arg2) {
  ((QQmlApplicationEngine*)qthis)->objectCreated(arg1,
*((const QUrl*)arg2));
}
//   // proto:  void QQmlApplicationEngine::~QQmlApplicationEngine();
extern "C"
void C_ZN21QQmlApplicationEngineD2Ev(void *qthis) {
  delete (QQmlApplicationEngine*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlapplicationengine.h', line 58, column 10>
//   // proto:  void QQmlApplicationEngine::load(const QString & filePath);
// _ZN21QQmlApplicationEngine4loadERK7QString load(const class QString &)
extern "C"
void
C_ZN21QQmlApplicationEngine4loadERK7QString(void *qthis,
const QString* arg1) {
  ((QQmlApplicationEngine*)qthis)->load(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlapplicationengine.h', line 50, column 5>
//   // proto:  void QQmlApplicationEngine::QQmlApplicationEngine(QObject * parent);
extern "C"
QQmlApplicationEngine*
C_ZN21QQmlApplicationEngineC2EP7QObject(QObject * arg1) {
  auto ret = new QQmlApplicationEngine(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlapplicationengine.h', line 51, column 5>
//   // proto:  void QQmlApplicationEngine::QQmlApplicationEngine(const QUrl & url, QObject * parent);
extern "C"
QQmlApplicationEngine*
C_ZN21QQmlApplicationEngineC2ERK4QUrlP7QObject(const QUrl* arg1,
QObject * arg2) {
  auto ret = new QQmlApplicationEngine(*((const QUrl*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlapplicationengine.h', line 57, column 10>
//   // proto:  void QQmlApplicationEngine::load(const QUrl & url);
// _ZN21QQmlApplicationEngine4loadERK4QUrl load(const class QUrl &)
extern "C"
void
C_ZN21QQmlApplicationEngine4loadERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QQmlApplicationEngine*)qthis)->load(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlapplicationengine.h', line 59, column 10>
//   // proto:  void QQmlApplicationEngine::loadData(const QByteArray & data, const QUrl & url);
// _ZN21QQmlApplicationEngine8loadDataERK10QByteArrayRK4QUrl loadData(const class QByteArray &, const class QUrl &)
extern "C"
void
C_ZN21QQmlApplicationEngine8loadDataERK10QByteArrayRK4QUrl(void *qthis,
const QByteArray* arg1,
const QUrl* arg2) {
  ((QQmlApplicationEngine*)qthis)->loadData(*((const QByteArray*)arg1),
*((const QUrl*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlapplicationengine.h', line 48, column 5>
//   // proto:  const QMetaObject * QQmlApplicationEngine::metaObject();
// _ZNK21QQmlApplicationEngine10metaObjectEv metaObject()
extern "C"
void*
C_ZNK21QQmlApplicationEngine10metaObjectEv(void *qthis) {
  auto ret =
  ((QQmlApplicationEngine*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlapplicationengine.h', line 55, column 21>
//   // proto:  QList<QObject *> QQmlApplicationEngine::rootObjects();
// _ZN21QQmlApplicationEngine11rootObjectsEv rootObjects()
extern "C"
QList<QObject *>*
C_ZN21QQmlApplicationEngine11rootObjectsEv(void *qthis) {
  auto ret =
  ((QQmlApplicationEngine*)qthis)->rootObjects();
  return new QList<QObject *>(ret); // 5
}
// <= ext block end

// body block begin =>
// QQmlApplicationEngine_SlotProxy here
class QQmlApplicationEngine_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQmlApplicationEngine_SlotProxy():QObject(){}

public slots:
  // objectCreated(class QObject *, const class QUrl &)
  void slot_proxy_func__ZN21QQmlApplicationEngine13objectCreatedEP7QObjectRK4QUrl(QObject * arg0, const QUrl & arg1);
public:
  void (*slot_func__ZN21QQmlApplicationEngine13objectCreatedEP7QObjectRK4QUrl)(void* rsfptr, QObject * arg0, const QUrl & arg1) = NULL;
public: void* rsfptr = NULL;
};
#include "src/qml/qqmlapplicationengine.moc"

extern "C" {
  QQmlApplicationEngine_SlotProxy* QQmlApplicationEngine_SlotProxy_new()
  {
    return new QQmlApplicationEngine_SlotProxy();
  }
};

void QQmlApplicationEngine_SlotProxy::slot_proxy_func__ZN21QQmlApplicationEngine13objectCreatedEP7QObjectRK4QUrl(QObject * arg0, const QUrl & arg1) {
  if (this->slot_func__ZN21QQmlApplicationEngine13objectCreatedEP7QObjectRK4QUrl != NULL) {
    // do smth...
    this->slot_func__ZN21QQmlApplicationEngine13objectCreatedEP7QObjectRK4QUrl(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QQmlApplicationEngine_SlotProxy_connect__ZN21QQmlApplicationEngine13objectCreatedEP7QObjectRK4QUrl(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQmlApplicationEngine_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN21QQmlApplicationEngine13objectCreatedEP7QObjectRK4QUrl = (decltype(that->slot_func__ZN21QQmlApplicationEngine13objectCreatedEP7QObjectRK4QUrl))ffifptr;
  QObject::connect((QQmlApplicationEngine*)sender, SIGNAL(objectCreated(class QObject *, const class QUrl &)), that, SLOT(slot_proxy_func__ZN21QQmlApplicationEngine13objectCreatedEP7QObjectRK4QUrl(QObject * arg0, const QUrl & arg1)));
  return that;
}
extern "C"
void QQmlApplicationEngine_SlotProxy_disconnect__ZN21QQmlApplicationEngine13objectCreatedEP7QObjectRK4QUrl(QQmlApplicationEngine_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

