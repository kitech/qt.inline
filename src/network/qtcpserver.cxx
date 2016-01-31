#include <qhostaddress.h>
#include <qabstractsocket.h>
#include <qnetworkproxy.h>
#include <qglobal.h>
#include <qstring.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
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
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 82, column 10>
//   // proto:  void QTcpServer::setProxy(const QNetworkProxy & networkProxy);
if (true) {
  auto f = [](QTcpServer flythis, const QNetworkProxy & arg1) {
    ((QTcpServer*)0)->setProxy(arg1);
    flythis.setProxy(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QTcpServer8setProxyERK13QNetworkProxy setProxy(const class QNetworkProxy &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 71, column 10>
//   // proto:  bool QTcpServer::waitForNewConnection(int msec, bool * timedOut);
if (true) {
  auto f = [](QTcpServer flythis, int arg1, bool * arg2) {
    ((QTcpServer*)0)->waitForNewConnection(arg1, arg2);
    flythis.waitForNewConnection(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN10QTcpServer20waitForNewConnectionEiPb waitForNewConnection(int, _Bool *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 72, column 18>
//   // proto:  bool QTcpServer::hasPendingConnections();
if (true) {
  auto f = [](QTcpServer flythis) {
    ((QTcpServer*)0)->hasPendingConnections();
    flythis.hasPendingConnections();
  };
  if (f == nullptr){}
}
// _ZNK10QTcpServer21hasPendingConnectionsEv hasPendingConnections()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 57, column 10>
//   // proto:  bool QTcpServer::listen(const QHostAddress & address, quint16 port);
if (true) {
  auto f = [](QTcpServer flythis, const QHostAddress & arg1, quint16 arg2) {
    ((QTcpServer*)0)->listen(arg1, arg2);
    flythis.listen(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN10QTcpServer6listenERK12QHostAddresst listen(const class QHostAddress &, quint16)
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 76, column 13>
//   // proto:  QString QTcpServer::errorString();
if (true) {
  auto f = [](QTcpServer flythis) {
    ((QTcpServer*)0)->errorString();
    flythis.errorString();
  };
  if (f == nullptr){}
}
// _ZNK10QTcpServer11errorStringEv errorString()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 52, column 5>
//   // proto:  const QMetaObject * QTcpServer::metaObject();
if (true) {
  auto f = [](QTcpServer flythis) {
    ((QTcpServer*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK10QTcpServer10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 78, column 10>
//   // proto:  void QTcpServer::pauseAccepting();
if (true) {
  auto f = [](QTcpServer flythis) {
    ((QTcpServer*)0)->pauseAccepting();
    flythis.pauseAccepting();
  };
  if (f == nullptr){}
}
// _ZN10QTcpServer14pauseAcceptingEv pauseAccepting()
//   // proto:  void QTcpServer::~QTcpServer();
if (true) {
  delete ((QTcpServer*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 94, column 10>
//   // proto:  void QTcpServer::acceptError(QAbstractSocket::SocketError socketError);
if (true) {
  auto f = [](QTcpServer flythis, QAbstractSocket::SocketError arg1) {
    ((QTcpServer*)0)->acceptError(arg1);
    flythis.acceptError(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE acceptError(class QAbstractSocket::SocketError)
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 69, column 10>
//   // proto:  bool QTcpServer::setSocketDescriptor(qintptr socketDescriptor);
if (true) {
  auto f = [](QTcpServer flythis, qintptr arg1) {
    ((QTcpServer*)0)->setSocketDescriptor(arg1);
    flythis.setSocketDescriptor(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QTcpServer19setSocketDescriptorEi setSocketDescriptor(qintptr)
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 68, column 13>
//   // proto:  qintptr QTcpServer::socketDescriptor();
if (true) {
  auto f = [](QTcpServer flythis) {
    ((QTcpServer*)0)->socketDescriptor();
    flythis.socketDescriptor();
  };
  if (f == nullptr){}
}
// _ZNK10QTcpServer16socketDescriptorEv socketDescriptor()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 79, column 10>
//   // proto:  void QTcpServer::resumeAccepting();
if (true) {
  auto f = [](QTcpServer flythis) {
    ((QTcpServer*)0)->resumeAccepting();
    flythis.resumeAccepting();
  };
  if (f == nullptr){}
}
// _ZN10QTcpServer15resumeAcceptingEv resumeAccepting()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 58, column 10>
//   // proto:  void QTcpServer::close();
if (true) {
  auto f = [](QTcpServer flythis) {
    ((QTcpServer*)0)->close();
    flythis.close();
  };
  if (f == nullptr){}
}
// _ZN10QTcpServer5closeEv close()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 83, column 19>
//   // proto:  QNetworkProxy QTcpServer::proxy();
if (true) {
  auto f = [](QTcpServer flythis) {
    ((QTcpServer*)0)->proxy();
    flythis.proxy();
  };
  if (f == nullptr){}
}
// _ZNK10QTcpServer5proxyEv proxy()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 93, column 10>
//   // proto:  void QTcpServer::newConnection();
if (true) {
  auto f = [](QTcpServer flythis) {
    ((QTcpServer*)0)->newConnection();
    flythis.newConnection();
  };
  if (f == nullptr){}
}
// _ZN10QTcpServer13newConnectionEv newConnection()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 62, column 10>
//   // proto:  void QTcpServer::setMaxPendingConnections(int numConnections);
if (true) {
  auto f = [](QTcpServer flythis, int arg1) {
    ((QTcpServer*)0)->setMaxPendingConnections(arg1);
    flythis.setMaxPendingConnections(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QTcpServer24setMaxPendingConnectionsEi setMaxPendingConnections(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 63, column 9>
//   // proto:  int QTcpServer::maxPendingConnections();
if (true) {
  auto f = [](QTcpServer flythis) {
    ((QTcpServer*)0)->maxPendingConnections();
    flythis.maxPendingConnections();
  };
  if (f == nullptr){}
}
// _ZNK10QTcpServer21maxPendingConnectionsEv maxPendingConnections()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 73, column 25>
//   // proto:  QTcpSocket * QTcpServer::nextPendingConnection();
if (true) {
  auto f = [](QTcpServer flythis) {
    ((QTcpServer*)0)->nextPendingConnection();
    flythis.nextPendingConnection();
  };
  if (f == nullptr){}
}
// _ZN10QTcpServer21nextPendingConnectionEv nextPendingConnection()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 75, column 34>
//   // proto:  QAbstractSocket::SocketError QTcpServer::serverError();
if (true) {
  auto f = [](QTcpServer flythis) {
    ((QTcpServer*)0)->serverError();
    flythis.serverError();
  };
  if (f == nullptr){}
}
// _ZNK10QTcpServer11serverErrorEv serverError()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 54, column 14>
//   // proto:  void QTcpServer::QTcpServer(QObject * parent);
if (true) {
  auto f = [](QObject * arg1) {
    new QTcpServer(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 60, column 10>
//   // proto:  bool QTcpServer::isListening();
if (true) {
  auto f = [](QTcpServer flythis) {
    ((QTcpServer*)0)->isListening();
    flythis.isListening();
  };
  if (f == nullptr){}
}
// _ZNK10QTcpServer11isListeningEv isListening()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 66, column 18>
//   // proto:  QHostAddress QTcpServer::serverAddress();
if (true) {
  auto f = [](QTcpServer flythis) {
    ((QTcpServer*)0)->serverAddress();
    flythis.serverAddress();
  };
  if (f == nullptr){}
}
// _ZNK10QTcpServer13serverAddressEv serverAddress()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 65, column 13>
//   // proto:  quint16 QTcpServer::serverPort();
if (true) {
  auto f = [](QTcpServer flythis) {
    ((QTcpServer*)0)->serverPort();
    flythis.serverPort();
  };
  if (f == nullptr){}
}
// _ZNK10QTcpServer10serverPortEv serverPort()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 82, column 10>
//   // proto:  void QTcpServer::setProxy(const QNetworkProxy & networkProxy);
extern "C"
void C_ZN10QTcpServer8setProxyERK13QNetworkProxy(void *qthis, const QNetworkProxy & arg1) {
  ((QTcpServer*)qthis)->setProxy(arg1);
}
// _ZN10QTcpServer8setProxyERK13QNetworkProxy setProxy(const class QNetworkProxy &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 71, column 10>
//   // proto:  bool QTcpServer::waitForNewConnection(int msec, bool * timedOut);
extern "C"
void C_ZN10QTcpServer20waitForNewConnectionEiPb(void *qthis, int arg1, bool * arg2) {
  ((QTcpServer*)qthis)->waitForNewConnection(arg1, arg2);
}
// _ZN10QTcpServer20waitForNewConnectionEiPb waitForNewConnection(int, _Bool *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 72, column 18>
//   // proto:  bool QTcpServer::hasPendingConnections();
extern "C"
void C_ZNK10QTcpServer21hasPendingConnectionsEv(void *qthis) {
  ((QTcpServer*)qthis)->hasPendingConnections();
}
// _ZNK10QTcpServer21hasPendingConnectionsEv hasPendingConnections()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 57, column 10>
//   // proto:  bool QTcpServer::listen(const QHostAddress & address, quint16 port);
extern "C"
void C_ZN10QTcpServer6listenERK12QHostAddresst(void *qthis, const QHostAddress & arg1, quint16 arg2) {
  ((QTcpServer*)qthis)->listen(arg1, arg2);
}
// _ZN10QTcpServer6listenERK12QHostAddresst listen(const class QHostAddress &, quint16)
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 76, column 13>
//   // proto:  QString QTcpServer::errorString();
extern "C"
void C_ZNK10QTcpServer11errorStringEv(void *qthis) {
  ((QTcpServer*)qthis)->errorString();
}
// _ZNK10QTcpServer11errorStringEv errorString()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 52, column 5>
//   // proto:  const QMetaObject * QTcpServer::metaObject();
extern "C"
void C_ZNK10QTcpServer10metaObjectEv(void *qthis) {
  ((QTcpServer*)qthis)->metaObject();
}
// _ZNK10QTcpServer10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 78, column 10>
//   // proto:  void QTcpServer::pauseAccepting();
extern "C"
void C_ZN10QTcpServer14pauseAcceptingEv(void *qthis) {
  ((QTcpServer*)qthis)->pauseAccepting();
}
// _ZN10QTcpServer14pauseAcceptingEv pauseAccepting()
//   // proto:  void QTcpServer::~QTcpServer();
extern "C"
void C_ZN10QTcpServerD2Ev(void *qthis) {
  delete (QTcpServer*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 94, column 10>
//   // proto:  void QTcpServer::acceptError(QAbstractSocket::SocketError socketError);
extern "C"
void C_ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE(void *qthis, QAbstractSocket::SocketError arg1) {
  ((QTcpServer*)qthis)->acceptError(arg1);
}
// _ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE acceptError(class QAbstractSocket::SocketError)
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 69, column 10>
//   // proto:  bool QTcpServer::setSocketDescriptor(qintptr socketDescriptor);
extern "C"
void C_ZN10QTcpServer19setSocketDescriptorEi(void *qthis, qintptr arg1) {
  ((QTcpServer*)qthis)->setSocketDescriptor(arg1);
}
// _ZN10QTcpServer19setSocketDescriptorEi setSocketDescriptor(qintptr)
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 68, column 13>
//   // proto:  qintptr QTcpServer::socketDescriptor();
extern "C"
void C_ZNK10QTcpServer16socketDescriptorEv(void *qthis) {
  ((QTcpServer*)qthis)->socketDescriptor();
}
// _ZNK10QTcpServer16socketDescriptorEv socketDescriptor()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 79, column 10>
//   // proto:  void QTcpServer::resumeAccepting();
extern "C"
void C_ZN10QTcpServer15resumeAcceptingEv(void *qthis) {
  ((QTcpServer*)qthis)->resumeAccepting();
}
// _ZN10QTcpServer15resumeAcceptingEv resumeAccepting()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 58, column 10>
//   // proto:  void QTcpServer::close();
extern "C"
void C_ZN10QTcpServer5closeEv(void *qthis) {
  ((QTcpServer*)qthis)->close();
}
// _ZN10QTcpServer5closeEv close()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 83, column 19>
//   // proto:  QNetworkProxy QTcpServer::proxy();
extern "C"
void C_ZNK10QTcpServer5proxyEv(void *qthis) {
  ((QTcpServer*)qthis)->proxy();
}
// _ZNK10QTcpServer5proxyEv proxy()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 93, column 10>
//   // proto:  void QTcpServer::newConnection();
extern "C"
void C_ZN10QTcpServer13newConnectionEv(void *qthis) {
  ((QTcpServer*)qthis)->newConnection();
}
// _ZN10QTcpServer13newConnectionEv newConnection()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 62, column 10>
//   // proto:  void QTcpServer::setMaxPendingConnections(int numConnections);
extern "C"
void C_ZN10QTcpServer24setMaxPendingConnectionsEi(void *qthis, int arg1) {
  ((QTcpServer*)qthis)->setMaxPendingConnections(arg1);
}
// _ZN10QTcpServer24setMaxPendingConnectionsEi setMaxPendingConnections(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 63, column 9>
//   // proto:  int QTcpServer::maxPendingConnections();
extern "C"
void C_ZNK10QTcpServer21maxPendingConnectionsEv(void *qthis) {
  ((QTcpServer*)qthis)->maxPendingConnections();
}
// _ZNK10QTcpServer21maxPendingConnectionsEv maxPendingConnections()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 73, column 25>
//   // proto:  QTcpSocket * QTcpServer::nextPendingConnection();
extern "C"
void C_ZN10QTcpServer21nextPendingConnectionEv(void *qthis) {
  ((QTcpServer*)qthis)->nextPendingConnection();
}
// _ZN10QTcpServer21nextPendingConnectionEv nextPendingConnection()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 75, column 34>
//   // proto:  QAbstractSocket::SocketError QTcpServer::serverError();
extern "C"
void C_ZNK10QTcpServer11serverErrorEv(void *qthis) {
  ((QTcpServer*)qthis)->serverError();
}
// _ZNK10QTcpServer11serverErrorEv serverError()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 54, column 14>
//   // proto:  void QTcpServer::QTcpServer(QObject * parent);
extern "C"
void C_ZN10QTcpServerC2EP7QObject(QObject * arg1) {
  new QTcpServer(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 60, column 10>
//   // proto:  bool QTcpServer::isListening();
extern "C"
void C_ZNK10QTcpServer11isListeningEv(void *qthis) {
  ((QTcpServer*)qthis)->isListening();
}
// _ZNK10QTcpServer11isListeningEv isListening()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 66, column 18>
//   // proto:  QHostAddress QTcpServer::serverAddress();
extern "C"
void C_ZNK10QTcpServer13serverAddressEv(void *qthis) {
  ((QTcpServer*)qthis)->serverAddress();
}
// _ZNK10QTcpServer13serverAddressEv serverAddress()
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 65, column 13>
//   // proto:  quint16 QTcpServer::serverPort();
extern "C"
void C_ZNK10QTcpServer10serverPortEv(void *qthis) {
  ((QTcpServer*)qthis)->serverPort();
}
// _ZNK10QTcpServer10serverPortEv serverPort()
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

