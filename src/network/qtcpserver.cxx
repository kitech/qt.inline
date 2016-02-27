// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qtcpserver.h
// dst-file: /src/network/qtcpserver.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtcpserver.h>


#include <qstring.h>
#include <qglobal.h>
#include <qnetworkproxy.h>
#include <qabstractsocket.h>
#include <qhostaddress.h>
// <= header block end

// main block begin =>
void __keep_qtcpserver_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTcpServer_Class_Size()
{
  return sizeof(QTcpServer);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 82, column 10>
//   // proto:  void QTcpServer::setProxy(const QNetworkProxy & networkProxy);
// _ZN10QTcpServer8setProxyERK13QNetworkProxy setProxy(const class QNetworkProxy &)
extern "C"
void
C_ZN10QTcpServer8setProxyERK13QNetworkProxy(void *qthis,
const QNetworkProxy* arg1) {
  ((QTcpServer*)qthis)->setProxy(*((const QNetworkProxy*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 71, column 10>
//   // proto:  bool QTcpServer::waitForNewConnection(int msec, bool * timedOut);
// _ZN10QTcpServer20waitForNewConnectionEiPb waitForNewConnection(int, _Bool *)
extern "C"
bool
C_ZN10QTcpServer20waitForNewConnectionEiPb(void *qthis,
int arg1,
bool * arg2) {
  auto ret =
  ((QTcpServer*)qthis)->waitForNewConnection(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 72, column 18>
//   // proto:  bool QTcpServer::hasPendingConnections();
// _ZNK10QTcpServer21hasPendingConnectionsEv hasPendingConnections()
extern "C"
bool
C_ZNK10QTcpServer21hasPendingConnectionsEv(void *qthis) {
  auto ret =
  ((QTcpServer*)qthis)->hasPendingConnections();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 57, column 10>
//   // proto:  bool QTcpServer::listen(const QHostAddress & address, quint16 port);
// _ZN10QTcpServer6listenERK12QHostAddresst listen(const class QHostAddress &, quint16)
extern "C"
bool
C_ZN10QTcpServer6listenERK12QHostAddresst(void *qthis,
const QHostAddress* arg1,
quint16 arg2) {
  auto ret =
  ((QTcpServer*)qthis)->listen(*((const QHostAddress*)arg1),
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 76, column 13>
//   // proto:  QString QTcpServer::errorString();
// _ZNK10QTcpServer11errorStringEv errorString()
extern "C"
QString*
C_ZNK10QTcpServer11errorStringEv(void *qthis) {
  auto ret =
  ((QTcpServer*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 52, column 5>
//   // proto:  const QMetaObject * QTcpServer::metaObject();
// _ZNK10QTcpServer10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QTcpServer10metaObjectEv(void *qthis) {
  auto ret =
  ((QTcpServer*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 78, column 10>
//   // proto:  void QTcpServer::pauseAccepting();
// _ZN10QTcpServer14pauseAcceptingEv pauseAccepting()
extern "C"
void
C_ZN10QTcpServer14pauseAcceptingEv(void *qthis) {
  ((QTcpServer*)qthis)->pauseAccepting();
}
//   // proto:  void QTcpServer::~QTcpServer();
extern "C"
void C_ZN10QTcpServerD2Ev(void *qthis) {
  delete (QTcpServer*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 94, column 10>
//   // proto:  void QTcpServer::acceptError(QAbstractSocket::SocketError socketError);
// _ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE acceptError(class QAbstractSocket::SocketError)
extern "C"
void
C_ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE(void *qthis,
QAbstractSocket::SocketError* arg1) {
  ((QTcpServer*)qthis)->acceptError(*((QAbstractSocket::SocketError*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 69, column 10>
//   // proto:  bool QTcpServer::setSocketDescriptor(qintptr socketDescriptor);
// _ZN10QTcpServer19setSocketDescriptorEi setSocketDescriptor(qintptr)
extern "C"
bool
C_ZN10QTcpServer19setSocketDescriptorEi(void *qthis,
qintptr arg1) {
  auto ret =
  ((QTcpServer*)qthis)->setSocketDescriptor(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 68, column 13>
//   // proto:  qintptr QTcpServer::socketDescriptor();
// _ZNK10QTcpServer16socketDescriptorEv socketDescriptor()
extern "C"
int
C_ZNK10QTcpServer16socketDescriptorEv(void *qthis) {
  auto ret =
  ((QTcpServer*)qthis)->socketDescriptor();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 79, column 10>
//   // proto:  void QTcpServer::resumeAccepting();
// _ZN10QTcpServer15resumeAcceptingEv resumeAccepting()
extern "C"
void
C_ZN10QTcpServer15resumeAcceptingEv(void *qthis) {
  ((QTcpServer*)qthis)->resumeAccepting();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 58, column 10>
//   // proto:  void QTcpServer::close();
// _ZN10QTcpServer5closeEv close()
extern "C"
void
C_ZN10QTcpServer5closeEv(void *qthis) {
  ((QTcpServer*)qthis)->close();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 83, column 19>
//   // proto:  QNetworkProxy QTcpServer::proxy();
// _ZNK10QTcpServer5proxyEv proxy()
extern "C"
QNetworkProxy*
C_ZNK10QTcpServer5proxyEv(void *qthis) {
  auto ret =
  ((QTcpServer*)qthis)->proxy();
  return new QNetworkProxy(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 93, column 10>
//   // proto:  void QTcpServer::newConnection();
// _ZN10QTcpServer13newConnectionEv newConnection()
extern "C"
void
C_ZN10QTcpServer13newConnectionEv(void *qthis) {
  ((QTcpServer*)qthis)->newConnection();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 62, column 10>
//   // proto:  void QTcpServer::setMaxPendingConnections(int numConnections);
// _ZN10QTcpServer24setMaxPendingConnectionsEi setMaxPendingConnections(int)
extern "C"
void
C_ZN10QTcpServer24setMaxPendingConnectionsEi(void *qthis,
int arg1) {
  ((QTcpServer*)qthis)->setMaxPendingConnections(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 63, column 9>
//   // proto:  int QTcpServer::maxPendingConnections();
// _ZNK10QTcpServer21maxPendingConnectionsEv maxPendingConnections()
extern "C"
int
C_ZNK10QTcpServer21maxPendingConnectionsEv(void *qthis) {
  auto ret =
  ((QTcpServer*)qthis)->maxPendingConnections();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 73, column 25>
//   // proto:  QTcpSocket * QTcpServer::nextPendingConnection();
// _ZN10QTcpServer21nextPendingConnectionEv nextPendingConnection()
extern "C"
void*
C_ZN10QTcpServer21nextPendingConnectionEv(void *qthis) {
  auto ret =
  ((QTcpServer*)qthis)->nextPendingConnection();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 75, column 34>
//   // proto:  QAbstractSocket::SocketError QTcpServer::serverError();
// _ZNK10QTcpServer11serverErrorEv serverError()
extern "C"
QAbstractSocket::SocketError
C_ZNK10QTcpServer11serverErrorEv(void *qthis) {
  auto ret =
  ((QTcpServer*)qthis)->serverError();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 54, column 14>
//   // proto:  void QTcpServer::QTcpServer(QObject * parent);
extern "C"
QTcpServer*
C_ZN10QTcpServerC2EP7QObject(QObject * arg1) {
  auto ret = new QTcpServer(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 60, column 10>
//   // proto:  bool QTcpServer::isListening();
// _ZNK10QTcpServer11isListeningEv isListening()
extern "C"
bool
C_ZNK10QTcpServer11isListeningEv(void *qthis) {
  auto ret =
  ((QTcpServer*)qthis)->isListening();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 66, column 18>
//   // proto:  QHostAddress QTcpServer::serverAddress();
// _ZNK10QTcpServer13serverAddressEv serverAddress()
extern "C"
QHostAddress*
C_ZNK10QTcpServer13serverAddressEv(void *qthis) {
  auto ret =
  ((QTcpServer*)qthis)->serverAddress();
  return new QHostAddress(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qtcpserver.h', line 65, column 13>
//   // proto:  quint16 QTcpServer::serverPort();
// _ZNK10QTcpServer10serverPortEv serverPort()
extern "C"
unsigned short
C_ZNK10QTcpServer10serverPortEv(void *qthis) {
  auto ret =
  ((QTcpServer*)qthis)->serverPort();
  return ret; // 0 TypeKind.USHORT
}
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

