// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qlocalserver.h
// dst-file: /src/network/qlocalserver.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qlocalserver.h>


#include <qstring.h>
#include <qabstractsocket.h>
// <= header block end

// main block begin =>
void __keep_qlocalserver_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QLocalServer_Class_Size()
{
  return sizeof(QLocalServer);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 73, column 10>
//   // proto:  bool QLocalServer::isListening();
// _ZNK12QLocalServer11isListeningEv isListening()
extern "C"
bool
C_ZNK12QLocalServer11isListeningEv(void *qthis) {
  auto ret =
  ((QLocalServer*)qthis)->isListening();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 85, column 10>
//   // proto:  void QLocalServer::setSocketOptions(SocketOptions options);
// _ZN12QLocalServer16setSocketOptionsE6QFlagsINS_12SocketOptionEE setSocketOptions(SocketOptions)
extern "C"
void
C_ZN12QLocalServer16setSocketOptionsE6QFlagsINS_12SocketOptionEE(void *qthis,
QLocalServer::SocketOptions arg1) {
  ((QLocalServer*)qthis)->setSocketOptions(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 79, column 13>
//   // proto:  QString QLocalServer::fullServerName();
// _ZNK12QLocalServer14fullServerNameEv fullServerName()
extern "C"
QString*
C_ZNK12QLocalServer14fullServerNameEv(void *qthis) {
  auto ret =
  ((QLocalServer*)qthis)->fullServerName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 78, column 13>
//   // proto:  QString QLocalServer::serverName();
// _ZNK12QLocalServer10serverNameEv serverName()
extern "C"
QString*
C_ZNK12QLocalServer10serverNameEv(void *qthis) {
  auto ret =
  ((QLocalServer*)qthis)->serverName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 70, column 10>
//   // proto:  void QLocalServer::close();
// _ZN12QLocalServer5closeEv close()
extern "C"
void
C_ZN12QLocalServer5closeEv(void *qthis) {
  ((QLocalServer*)qthis)->close();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 74, column 10>
//   // proto:  bool QLocalServer::listen(const QString & name);
// _ZN12QLocalServer6listenERK7QString listen(const class QString &)
extern "C"
bool
C_ZN12QLocalServer6listenERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QLocalServer*)qthis)->listen(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 75, column 10>
//   // proto:  bool QLocalServer::listen(qintptr socketDescriptor);
// _ZN12QLocalServer6listenEi listen(qintptr)
extern "C"
bool
C_ZN12QLocalServer6listenEi(void *qthis,
qintptr arg1) {
  auto ret =
  ((QLocalServer*)qthis)->listen(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 72, column 18>
//   // proto:  bool QLocalServer::hasPendingConnections();
// _ZNK12QLocalServer21hasPendingConnectionsEv hasPendingConnections()
extern "C"
bool
C_ZNK12QLocalServer21hasPendingConnectionsEv(void *qthis) {
  auto ret =
  ((QLocalServer*)qthis)->hasPendingConnections();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 49, column 5>
//   // proto:  const QMetaObject * QLocalServer::metaObject();
// _ZNK12QLocalServer10metaObjectEv metaObject()
extern "C"
void*
C_ZNK12QLocalServer10metaObjectEv(void *qthis) {
  auto ret =
  ((QLocalServer*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 55, column 10>
//   // proto:  void QLocalServer::newConnection();
// _ZN12QLocalServer13newConnectionEv newConnection()
extern "C"
void
C_ZN12QLocalServer13newConnectionEv(void *qthis) {
  ((QLocalServer*)qthis)->newConnection();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 86, column 19>
//   // proto:  SocketOptions QLocalServer::socketOptions();
// _ZNK12QLocalServer13socketOptionsEv socketOptions()
extern "C"
QFlags<QLocalServer::SocketOption>*
C_ZNK12QLocalServer13socketOptionsEv(void *qthis) {
  auto ret =
  ((QLocalServer*)qthis)->socketOptions();
  return new QFlags<QLocalServer::SocketOption>(ret); // 5
}
//   // proto:  void QLocalServer::~QLocalServer();
extern "C"
void C_ZN12QLocalServerD2Ev(void *qthis) {
  delete (QLocalServer*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 71, column 13>
//   // proto:  QString QLocalServer::errorString();
// _ZNK12QLocalServer11errorStringEv errorString()
extern "C"
QString*
C_ZNK12QLocalServer11errorStringEv(void *qthis) {
  auto ret =
  ((QLocalServer*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 80, column 17>
//   // proto: static bool QLocalServer::removeServer(const QString & name);
// _ZN12QLocalServer12removeServerERK7QString removeServer(const class QString &)
extern "C"
bool
C_ZN12QLocalServer12removeServerERK7QString(const QString* arg1) {
  auto ret =
  QLocalServer::removeServer(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 83, column 10>
//   // proto:  bool QLocalServer::waitForNewConnection(int msec, bool * timedOut);
// _ZN12QLocalServer20waitForNewConnectionEiPb waitForNewConnection(int, _Bool *)
extern "C"
bool
C_ZN12QLocalServer20waitForNewConnectionEiPb(void *qthis,
int arg1,
bool * arg2) {
  auto ret =
  ((QLocalServer*)qthis)->waitForNewConnection(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 77, column 27>
//   // proto:  QLocalSocket * QLocalServer::nextPendingConnection();
// _ZN12QLocalServer21nextPendingConnectionEv nextPendingConnection()
extern "C"
void*
C_ZN12QLocalServer21nextPendingConnectionEv(void *qthis) {
  auto ret =
  ((QLocalServer*)qthis)->nextPendingConnection();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 82, column 10>
//   // proto:  void QLocalServer::setMaxPendingConnections(int numConnections);
// _ZN12QLocalServer24setMaxPendingConnectionsEi setMaxPendingConnections(int)
extern "C"
void
C_ZN12QLocalServer24setMaxPendingConnectionsEi(void *qthis,
int arg1) {
  ((QLocalServer*)qthis)->setMaxPendingConnections(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 81, column 34>
//   // proto:  QAbstractSocket::SocketError QLocalServer::serverError();
// _ZNK12QLocalServer11serverErrorEv serverError()
extern "C"
QAbstractSocket::SocketError
C_ZNK12QLocalServer11serverErrorEv(void *qthis) {
  auto ret =
  ((QLocalServer*)qthis)->serverError();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 67, column 14>
//   // proto:  void QLocalServer::QLocalServer(QObject * parent);
extern "C"
QLocalServer*
C_ZN12QLocalServerC2EP7QObject(QObject * arg1) {
  auto ret = new QLocalServer(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 76, column 9>
//   // proto:  int QLocalServer::maxPendingConnections();
// _ZNK12QLocalServer21maxPendingConnectionsEv maxPendingConnections()
extern "C"
int
C_ZNK12QLocalServer21maxPendingConnectionsEv(void *qthis) {
  auto ret =
  ((QLocalServer*)qthis)->maxPendingConnections();
  return ret; // 0 TypeKind.INT
}
// <= ext block end

// body block begin =>
// QLocalServer_SlotProxy here
class QLocalServer_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QLocalServer_SlotProxy():QObject(){}

public slots:
  // newConnection()
  void slot_proxy_func__ZN12QLocalServer13newConnectionEv();
public:
  void (*slot_func__ZN12QLocalServer13newConnectionEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/network/qlocalserver.moc"

extern "C" {
  QLocalServer_SlotProxy* QLocalServer_SlotProxy_new()
  {
    return new QLocalServer_SlotProxy();
  }
};

void QLocalServer_SlotProxy::slot_proxy_func__ZN12QLocalServer13newConnectionEv() {
  if (this->slot_func__ZN12QLocalServer13newConnectionEv != NULL) {
    // do smth...
    this->slot_func__ZN12QLocalServer13newConnectionEv(this->rsfptr);
  }
}
extern "C"
void* QLocalServer_SlotProxy_connect__ZN12QLocalServer13newConnectionEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLocalServer_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QLocalServer13newConnectionEv = (decltype(that->slot_func__ZN12QLocalServer13newConnectionEv))ffifptr;
  QObject::connect((QLocalServer*)sender, SIGNAL(newConnection()), that, SLOT(slot_proxy_func__ZN12QLocalServer13newConnectionEv()));
  return that;
}
extern "C"
void QLocalServer_SlotProxy_disconnect__ZN12QLocalServer13newConnectionEv(QLocalServer_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

