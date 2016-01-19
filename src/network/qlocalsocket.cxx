// auto generated, do not modify.
// created: Tue Jan 19 21:43:55 2016
// src-file: /QtNetwork/qlocalsocket.h
// dst-file: /src/network/qlocalsocket.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qlocalsocket.h>

extern "C" {

int QLocalSocket_Class_Size()
{
  return sizeof(QLocalSocket);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qlocalsocket_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QLocalSocket_SlotProxy here
class QLocalSocket_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QLocalSocket_SlotProxy():QObject(){}

public slots:
  // disconnected()
  void slot_proxy_func__ZN12QLocalSocket12disconnectedEv();
public:
  void (*slot_func__ZN12QLocalSocket12disconnectedEv)(void* rsfptr) = NULL;
public slots:
  // connected()
  void slot_proxy_func__ZN12QLocalSocket9connectedEv();
public:
  void (*slot_func__ZN12QLocalSocket9connectedEv)(void* rsfptr) = NULL;
public slots:
  // stateChanged(class QLocalSocket::LocalSocketState)
  void slot_proxy_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(QLocalSocket::LocalSocketState arg0);
public:
  void (*slot_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE)(void* rsfptr, QLocalSocket::LocalSocketState arg0) = NULL;
public slots:
  // error(class QLocalSocket::LocalSocketError)
  void slot_proxy_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE(QLocalSocket::LocalSocketError arg0);
public:
  void (*slot_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE)(void* rsfptr, QLocalSocket::LocalSocketError arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/network/qlocalsocket.moc"

extern "C" {
  QLocalSocket_SlotProxy* QLocalSocket_SlotProxy_new()
  {
    return new QLocalSocket_SlotProxy();
  }
};

void QLocalSocket_SlotProxy::slot_proxy_func__ZN12QLocalSocket12disconnectedEv() {
  if (this->slot_func__ZN12QLocalSocket12disconnectedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QLocalSocket12disconnectedEv(this->rsfptr);
  }
}
extern "C"
void* QLocalSocket_SlotProxy_connect__ZN12QLocalSocket12disconnectedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLocalSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QLocalSocket12disconnectedEv = (decltype(that->slot_func__ZN12QLocalSocket12disconnectedEv))ffifptr;
  QObject::connect((QLocalSocket*)sender, SIGNAL(disconnected()), that, SLOT(slot_proxy_func__ZN12QLocalSocket12disconnectedEv()));
  return that;
}
extern "C"
void QLocalSocket_SlotProxy_disconnect__ZN12QLocalSocket12disconnectedEv(QLocalSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLocalSocket_SlotProxy::slot_proxy_func__ZN12QLocalSocket9connectedEv() {
  if (this->slot_func__ZN12QLocalSocket9connectedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QLocalSocket9connectedEv(this->rsfptr);
  }
}
extern "C"
void* QLocalSocket_SlotProxy_connect__ZN12QLocalSocket9connectedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLocalSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QLocalSocket9connectedEv = (decltype(that->slot_func__ZN12QLocalSocket9connectedEv))ffifptr;
  QObject::connect((QLocalSocket*)sender, SIGNAL(connected()), that, SLOT(slot_proxy_func__ZN12QLocalSocket9connectedEv()));
  return that;
}
extern "C"
void QLocalSocket_SlotProxy_disconnect__ZN12QLocalSocket9connectedEv(QLocalSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLocalSocket_SlotProxy::slot_proxy_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(QLocalSocket::LocalSocketState arg0) {
  if (this->slot_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE != NULL) {
    // do smth...
    this->slot_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(this->rsfptr, arg0);
  }
}
extern "C"
void* QLocalSocket_SlotProxy_connect__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLocalSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE = (decltype(that->slot_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE))ffifptr;
  QObject::connect((QLocalSocket*)sender, SIGNAL(stateChanged(class QLocalSocket::LocalSocketState)), that, SLOT(slot_proxy_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(QLocalSocket::LocalSocketState arg0)));
  return that;
}
extern "C"
void QLocalSocket_SlotProxy_disconnect__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(QLocalSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLocalSocket_SlotProxy::slot_proxy_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE(QLocalSocket::LocalSocketError arg0) {
  if (this->slot_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE != NULL) {
    // do smth...
    this->slot_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE(this->rsfptr, arg0);
  }
}
extern "C"
void* QLocalSocket_SlotProxy_connect__ZN12QLocalSocket5errorENS_16LocalSocketErrorE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLocalSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE = (decltype(that->slot_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE))ffifptr;
  QObject::connect((QLocalSocket*)sender, SIGNAL(error(class QLocalSocket::LocalSocketError)), that, SLOT(slot_proxy_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE(QLocalSocket::LocalSocketError arg0)));
  return that;
}
extern "C"
void QLocalSocket_SlotProxy_disconnect__ZN12QLocalSocket5errorENS_16LocalSocketErrorE(QLocalSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

