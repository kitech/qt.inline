// auto generated, do not modify.
// created: Tue Jan 19 21:43:55 2016
// src-file: /QtNetwork/qabstractsocket.h
// dst-file: /src/network/qabstractsocket.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qabstractsocket.h>

extern "C" {

int QAbstractSocket_Class_Size()
{
  return sizeof(QAbstractSocket);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qabstractsocket_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QAbstractSocket_SlotProxy here
class QAbstractSocket_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractSocket_SlotProxy():QObject(){}

public slots:
  // stateChanged(class QAbstractSocket::SocketState)
  void slot_proxy_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE(QAbstractSocket::SocketState arg0);
public:
  void (*slot_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE)(void* rsfptr, QAbstractSocket::SocketState arg0) = NULL;
public slots:
  // connected()
  void slot_proxy_func__ZN15QAbstractSocket9connectedEv();
public:
  void (*slot_func__ZN15QAbstractSocket9connectedEv)(void* rsfptr) = NULL;
public slots:
  // hostFound()
  void slot_proxy_func__ZN15QAbstractSocket9hostFoundEv();
public:
  void (*slot_func__ZN15QAbstractSocket9hostFoundEv)(void* rsfptr) = NULL;
public slots:
  // error(class QAbstractSocket::SocketError)
  void slot_proxy_func__ZN15QAbstractSocket5errorENS_11SocketErrorE(QAbstractSocket::SocketError arg0);
public:
  void (*slot_func__ZN15QAbstractSocket5errorENS_11SocketErrorE)(void* rsfptr, QAbstractSocket::SocketError arg0) = NULL;
public slots:
  // disconnected()
  void slot_proxy_func__ZN15QAbstractSocket12disconnectedEv();
public:
  void (*slot_func__ZN15QAbstractSocket12disconnectedEv)(void* rsfptr) = NULL;
public slots:
  // proxyAuthenticationRequired(const class QNetworkProxy &, class QAuthenticator *)
  void slot_proxy_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(const QNetworkProxy & arg0, QAuthenticator * arg1);
public:
  void (*slot_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator)(void* rsfptr, const QNetworkProxy & arg0, QAuthenticator * arg1) = NULL;
public: void* rsfptr = NULL;
};
#include "src/network/qabstractsocket.moc"

extern "C" {
  QAbstractSocket_SlotProxy* QAbstractSocket_SlotProxy_new()
  {
    return new QAbstractSocket_SlotProxy();
  }
};

void QAbstractSocket_SlotProxy::slot_proxy_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE(QAbstractSocket::SocketState arg0) {
  if (this->slot_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractSocket_SlotProxy_connect__ZN15QAbstractSocket12stateChangedENS_11SocketStateE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE = (decltype(that->slot_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE))ffifptr;
  QObject::connect((QAbstractSocket*)sender, SIGNAL(stateChanged(class QAbstractSocket::SocketState)), that, SLOT(slot_proxy_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE(QAbstractSocket::SocketState arg0)));
  return that;
}
extern "C"
void QAbstractSocket_SlotProxy_disconnect__ZN15QAbstractSocket12stateChangedENS_11SocketStateE(QAbstractSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSocket_SlotProxy::slot_proxy_func__ZN15QAbstractSocket9connectedEv() {
  if (this->slot_func__ZN15QAbstractSocket9connectedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSocket9connectedEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractSocket_SlotProxy_connect__ZN15QAbstractSocket9connectedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSocket9connectedEv = (decltype(that->slot_func__ZN15QAbstractSocket9connectedEv))ffifptr;
  QObject::connect((QAbstractSocket*)sender, SIGNAL(connected()), that, SLOT(slot_proxy_func__ZN15QAbstractSocket9connectedEv()));
  return that;
}
extern "C"
void QAbstractSocket_SlotProxy_disconnect__ZN15QAbstractSocket9connectedEv(QAbstractSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSocket_SlotProxy::slot_proxy_func__ZN15QAbstractSocket9hostFoundEv() {
  if (this->slot_func__ZN15QAbstractSocket9hostFoundEv != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSocket9hostFoundEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractSocket_SlotProxy_connect__ZN15QAbstractSocket9hostFoundEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSocket9hostFoundEv = (decltype(that->slot_func__ZN15QAbstractSocket9hostFoundEv))ffifptr;
  QObject::connect((QAbstractSocket*)sender, SIGNAL(hostFound()), that, SLOT(slot_proxy_func__ZN15QAbstractSocket9hostFoundEv()));
  return that;
}
extern "C"
void QAbstractSocket_SlotProxy_disconnect__ZN15QAbstractSocket9hostFoundEv(QAbstractSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSocket_SlotProxy::slot_proxy_func__ZN15QAbstractSocket5errorENS_11SocketErrorE(QAbstractSocket::SocketError arg0) {
  if (this->slot_func__ZN15QAbstractSocket5errorENS_11SocketErrorE != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSocket5errorENS_11SocketErrorE(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractSocket_SlotProxy_connect__ZN15QAbstractSocket5errorENS_11SocketErrorE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSocket5errorENS_11SocketErrorE = (decltype(that->slot_func__ZN15QAbstractSocket5errorENS_11SocketErrorE))ffifptr;
  QObject::connect((QAbstractSocket*)sender, SIGNAL(error(class QAbstractSocket::SocketError)), that, SLOT(slot_proxy_func__ZN15QAbstractSocket5errorENS_11SocketErrorE(QAbstractSocket::SocketError arg0)));
  return that;
}
extern "C"
void QAbstractSocket_SlotProxy_disconnect__ZN15QAbstractSocket5errorENS_11SocketErrorE(QAbstractSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSocket_SlotProxy::slot_proxy_func__ZN15QAbstractSocket12disconnectedEv() {
  if (this->slot_func__ZN15QAbstractSocket12disconnectedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSocket12disconnectedEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractSocket_SlotProxy_connect__ZN15QAbstractSocket12disconnectedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSocket12disconnectedEv = (decltype(that->slot_func__ZN15QAbstractSocket12disconnectedEv))ffifptr;
  QObject::connect((QAbstractSocket*)sender, SIGNAL(disconnected()), that, SLOT(slot_proxy_func__ZN15QAbstractSocket12disconnectedEv()));
  return that;
}
extern "C"
void QAbstractSocket_SlotProxy_disconnect__ZN15QAbstractSocket12disconnectedEv(QAbstractSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSocket_SlotProxy::slot_proxy_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(const QNetworkProxy & arg0, QAuthenticator * arg1) {
  if (this->slot_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QAbstractSocket_SlotProxy_connect__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator = (decltype(that->slot_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator))ffifptr;
  QObject::connect((QAbstractSocket*)sender, SIGNAL(proxyAuthenticationRequired(const class QNetworkProxy &, class QAuthenticator *)), that, SLOT(slot_proxy_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(const QNetworkProxy & arg0, QAuthenticator * arg1)));
  return that;
}
extern "C"
void QAbstractSocket_SlotProxy_disconnect__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(QAbstractSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

