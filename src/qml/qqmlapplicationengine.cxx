// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
// src-file: /QtQml/qqmlapplicationengine.h
// dst-file: /src/qml/qqmlapplicationengine.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qqmlapplicationengine.h>

extern "C" {

int QQmlApplicationEngine_Class_Size()
{
  return sizeof(QQmlApplicationEngine);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qqmlapplicationengine_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
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

