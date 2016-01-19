// auto generated, do not modify.
// created: Tue Jan 19 21:43:55 2016
// src-file: /QtNetwork/qtcpserver.h
// dst-file: /src/network/qtcpserver.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qtcpserver.h>

extern "C" {

int QTcpServer_Class_Size()
{
  return sizeof(QTcpServer);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qtcpserver_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QTcpServer_SlotProxy here
class QTcpServer_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTcpServer_SlotProxy():QObject(){}

public slots:
  // acceptError(class QAbstractSocket::SocketError)
  void slot_proxy_func__ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE(QAbstractSocket::SocketError arg0);
public:
  void (*slot_func__ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE)(void* rsfptr, QAbstractSocket::SocketError arg0) = NULL;
public slots:
  // newConnection()
  void slot_proxy_func__ZN10QTcpServer13newConnectionEv();
public:
  void (*slot_func__ZN10QTcpServer13newConnectionEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/network/qtcpserver.moc"

extern "C" {
  QTcpServer_SlotProxy* QTcpServer_SlotProxy_new()
  {
    return new QTcpServer_SlotProxy();
  }
};

void QTcpServer_SlotProxy::slot_proxy_func__ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE(QAbstractSocket::SocketError arg0) {
  if (this->slot_func__ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE != NULL) {
    // do smth...
    this->slot_func__ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE(this->rsfptr, arg0);
  }
}
extern "C"
void* QTcpServer_SlotProxy_connect__ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTcpServer_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE = (decltype(that->slot_func__ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE))ffifptr;
  QObject::connect((QTcpServer*)sender, SIGNAL(acceptError(class QAbstractSocket::SocketError)), that, SLOT(slot_proxy_func__ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE(QAbstractSocket::SocketError arg0)));
  return that;
}
extern "C"
void QTcpServer_SlotProxy_disconnect__ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE(QTcpServer_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTcpServer_SlotProxy::slot_proxy_func__ZN10QTcpServer13newConnectionEv() {
  if (this->slot_func__ZN10QTcpServer13newConnectionEv != NULL) {
    // do smth...
    this->slot_func__ZN10QTcpServer13newConnectionEv(this->rsfptr);
  }
}
extern "C"
void* QTcpServer_SlotProxy_connect__ZN10QTcpServer13newConnectionEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTcpServer_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QTcpServer13newConnectionEv = (decltype(that->slot_func__ZN10QTcpServer13newConnectionEv))ffifptr;
  QObject::connect((QTcpServer*)sender, SIGNAL(newConnection()), that, SLOT(slot_proxy_func__ZN10QTcpServer13newConnectionEv()));
  return that;
}
extern "C"
void QTcpServer_SlotProxy_disconnect__ZN10QTcpServer13newConnectionEv(QTcpServer_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

