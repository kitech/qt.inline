#include <qabstractsocket.h>
#include <qstring.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qlocalserver.h
// dst-file: /src/network/qlocalserver.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qlocalserver.h>

extern "C" {

int QLocalServer_Class_Size()
{
  return sizeof(QLocalServer);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qlocalserver_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 73, column 10>
//   // proto:  bool QLocalServer::isListening();
if (true) {
  auto f = [](QLocalServer flythis) {
    ((QLocalServer*)0)->isListening();
    flythis.isListening();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalServer11isListeningEv isListening()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 85, column 10>
//   // proto:  void QLocalServer::setSocketOptions(SocketOptions options);
if (true) {
  auto f = [](QLocalServer flythis, QLocalServer::SocketOptions arg1) {
    ((QLocalServer*)0)->setSocketOptions(arg1);
    flythis.setSocketOptions(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QLocalServer16setSocketOptionsE6QFlagsINS_12SocketOptionEE setSocketOptions(SocketOptions)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 79, column 13>
//   // proto:  QString QLocalServer::fullServerName();
if (true) {
  auto f = [](QLocalServer flythis) {
    ((QLocalServer*)0)->fullServerName();
    flythis.fullServerName();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalServer14fullServerNameEv fullServerName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 78, column 13>
//   // proto:  QString QLocalServer::serverName();
if (true) {
  auto f = [](QLocalServer flythis) {
    ((QLocalServer*)0)->serverName();
    flythis.serverName();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalServer10serverNameEv serverName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 70, column 10>
//   // proto:  void QLocalServer::close();
if (true) {
  auto f = [](QLocalServer flythis) {
    ((QLocalServer*)0)->close();
    flythis.close();
  };
  if (f == nullptr){}
}
// _ZN12QLocalServer5closeEv close()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 74, column 10>
//   // proto:  bool QLocalServer::listen(const QString & name);
if (true) {
  auto f = [](QLocalServer flythis, const QString & arg1) {
    ((QLocalServer*)0)->listen(arg1);
    flythis.listen(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QLocalServer6listenERK7QString listen(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 75, column 10>
//   // proto:  bool QLocalServer::listen(qintptr socketDescriptor);
if (true) {
  auto f = [](QLocalServer flythis, qintptr arg1) {
    ((QLocalServer*)0)->listen(arg1);
    flythis.listen(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QLocalServer6listenEi listen(qintptr)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 72, column 18>
//   // proto:  bool QLocalServer::hasPendingConnections();
if (true) {
  auto f = [](QLocalServer flythis) {
    ((QLocalServer*)0)->hasPendingConnections();
    flythis.hasPendingConnections();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalServer21hasPendingConnectionsEv hasPendingConnections()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 49, column 5>
//   // proto:  const QMetaObject * QLocalServer::metaObject();
if (true) {
  auto f = [](QLocalServer flythis) {
    ((QLocalServer*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalServer10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 55, column 10>
//   // proto:  void QLocalServer::newConnection();
if (true) {
  auto f = [](QLocalServer flythis) {
    ((QLocalServer*)0)->newConnection();
    flythis.newConnection();
  };
  if (f == nullptr){}
}
// _ZN12QLocalServer13newConnectionEv newConnection()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 86, column 19>
//   // proto:  SocketOptions QLocalServer::socketOptions();
if (true) {
  auto f = [](QLocalServer flythis) {
    ((QLocalServer*)0)->socketOptions();
    flythis.socketOptions();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalServer13socketOptionsEv socketOptions()
//   // proto:  void QLocalServer::~QLocalServer();
if (true) {
  delete ((QLocalServer*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 71, column 13>
//   // proto:  QString QLocalServer::errorString();
if (true) {
  auto f = [](QLocalServer flythis) {
    ((QLocalServer*)0)->errorString();
    flythis.errorString();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalServer11errorStringEv errorString()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 80, column 17>
//   // proto: static bool QLocalServer::removeServer(const QString & name);
if (true) {
  auto f = [](QLocalServer flythis, const QString & arg1) {
    ((QLocalServer*)0)->removeServer(arg1);
    flythis.removeServer(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QLocalServer12removeServerERK7QString removeServer(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 83, column 10>
//   // proto:  bool QLocalServer::waitForNewConnection(int msec, bool * timedOut);
if (true) {
  auto f = [](QLocalServer flythis, int arg1, bool * arg2) {
    ((QLocalServer*)0)->waitForNewConnection(arg1, arg2);
    flythis.waitForNewConnection(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN12QLocalServer20waitForNewConnectionEiPb waitForNewConnection(int, _Bool *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 77, column 27>
//   // proto:  QLocalSocket * QLocalServer::nextPendingConnection();
if (true) {
  auto f = [](QLocalServer flythis) {
    ((QLocalServer*)0)->nextPendingConnection();
    flythis.nextPendingConnection();
  };
  if (f == nullptr){}
}
// _ZN12QLocalServer21nextPendingConnectionEv nextPendingConnection()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 82, column 10>
//   // proto:  void QLocalServer::setMaxPendingConnections(int numConnections);
if (true) {
  auto f = [](QLocalServer flythis, int arg1) {
    ((QLocalServer*)0)->setMaxPendingConnections(arg1);
    flythis.setMaxPendingConnections(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QLocalServer24setMaxPendingConnectionsEi setMaxPendingConnections(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 81, column 34>
//   // proto:  QAbstractSocket::SocketError QLocalServer::serverError();
if (true) {
  auto f = [](QLocalServer flythis) {
    ((QLocalServer*)0)->serverError();
    flythis.serverError();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalServer11serverErrorEv serverError()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 67, column 14>
//   // proto:  void QLocalServer::QLocalServer(QObject * parent);
if (true) {
  auto f = [](QObject * arg1) {
    new QLocalServer(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 76, column 9>
//   // proto:  int QLocalServer::maxPendingConnections();
if (true) {
  auto f = [](QLocalServer flythis) {
    ((QLocalServer*)0)->maxPendingConnections();
    flythis.maxPendingConnections();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalServer21maxPendingConnectionsEv maxPendingConnections()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 73, column 10>
//   // proto:  bool QLocalServer::isListening();
extern "C"
void C_ZNK12QLocalServer11isListeningEv(void *qthis) {
  ((QLocalServer*)qthis)->isListening();
}
// _ZNK12QLocalServer11isListeningEv isListening()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 85, column 10>
//   // proto:  void QLocalServer::setSocketOptions(SocketOptions options);
extern "C"
void C_ZN12QLocalServer16setSocketOptionsE6QFlagsINS_12SocketOptionEE(void *qthis, QLocalServer::SocketOptions arg1) {
  ((QLocalServer*)qthis)->setSocketOptions(arg1);
}
// _ZN12QLocalServer16setSocketOptionsE6QFlagsINS_12SocketOptionEE setSocketOptions(SocketOptions)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 79, column 13>
//   // proto:  QString QLocalServer::fullServerName();
extern "C"
void C_ZNK12QLocalServer14fullServerNameEv(void *qthis) {
  ((QLocalServer*)qthis)->fullServerName();
}
// _ZNK12QLocalServer14fullServerNameEv fullServerName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 78, column 13>
//   // proto:  QString QLocalServer::serverName();
extern "C"
void C_ZNK12QLocalServer10serverNameEv(void *qthis) {
  ((QLocalServer*)qthis)->serverName();
}
// _ZNK12QLocalServer10serverNameEv serverName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 70, column 10>
//   // proto:  void QLocalServer::close();
extern "C"
void C_ZN12QLocalServer5closeEv(void *qthis) {
  ((QLocalServer*)qthis)->close();
}
// _ZN12QLocalServer5closeEv close()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 74, column 10>
//   // proto:  bool QLocalServer::listen(const QString & name);
extern "C"
void C_ZN12QLocalServer6listenERK7QString(void *qthis, const QString & arg1) {
  ((QLocalServer*)qthis)->listen(arg1);
}
// _ZN12QLocalServer6listenERK7QString listen(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 75, column 10>
//   // proto:  bool QLocalServer::listen(qintptr socketDescriptor);
extern "C"
void C_ZN12QLocalServer6listenEi(void *qthis, qintptr arg1) {
  ((QLocalServer*)qthis)->listen(arg1);
}
// _ZN12QLocalServer6listenEi listen(qintptr)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 72, column 18>
//   // proto:  bool QLocalServer::hasPendingConnections();
extern "C"
void C_ZNK12QLocalServer21hasPendingConnectionsEv(void *qthis) {
  ((QLocalServer*)qthis)->hasPendingConnections();
}
// _ZNK12QLocalServer21hasPendingConnectionsEv hasPendingConnections()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 49, column 5>
//   // proto:  const QMetaObject * QLocalServer::metaObject();
extern "C"
void C_ZNK12QLocalServer10metaObjectEv(void *qthis) {
  ((QLocalServer*)qthis)->metaObject();
}
// _ZNK12QLocalServer10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 55, column 10>
//   // proto:  void QLocalServer::newConnection();
extern "C"
void C_ZN12QLocalServer13newConnectionEv(void *qthis) {
  ((QLocalServer*)qthis)->newConnection();
}
// _ZN12QLocalServer13newConnectionEv newConnection()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 86, column 19>
//   // proto:  SocketOptions QLocalServer::socketOptions();
extern "C"
void C_ZNK12QLocalServer13socketOptionsEv(void *qthis) {
  ((QLocalServer*)qthis)->socketOptions();
}
// _ZNK12QLocalServer13socketOptionsEv socketOptions()
//   // proto:  void QLocalServer::~QLocalServer();
extern "C"
void C_ZN12QLocalServerD2Ev(void *qthis) {
  delete (QLocalServer*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 71, column 13>
//   // proto:  QString QLocalServer::errorString();
extern "C"
void C_ZNK12QLocalServer11errorStringEv(void *qthis) {
  ((QLocalServer*)qthis)->errorString();
}
// _ZNK12QLocalServer11errorStringEv errorString()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 80, column 17>
//   // proto: static bool QLocalServer::removeServer(const QString & name);
extern "C"
void C_ZN12QLocalServer12removeServerERK7QString(void *qthis, const QString & arg1) {
  ((QLocalServer*)qthis)->removeServer(arg1);
}
// _ZN12QLocalServer12removeServerERK7QString removeServer(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 83, column 10>
//   // proto:  bool QLocalServer::waitForNewConnection(int msec, bool * timedOut);
extern "C"
void C_ZN12QLocalServer20waitForNewConnectionEiPb(void *qthis, int arg1, bool * arg2) {
  ((QLocalServer*)qthis)->waitForNewConnection(arg1, arg2);
}
// _ZN12QLocalServer20waitForNewConnectionEiPb waitForNewConnection(int, _Bool *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 77, column 27>
//   // proto:  QLocalSocket * QLocalServer::nextPendingConnection();
extern "C"
void C_ZN12QLocalServer21nextPendingConnectionEv(void *qthis) {
  ((QLocalServer*)qthis)->nextPendingConnection();
}
// _ZN12QLocalServer21nextPendingConnectionEv nextPendingConnection()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 82, column 10>
//   // proto:  void QLocalServer::setMaxPendingConnections(int numConnections);
extern "C"
void C_ZN12QLocalServer24setMaxPendingConnectionsEi(void *qthis, int arg1) {
  ((QLocalServer*)qthis)->setMaxPendingConnections(arg1);
}
// _ZN12QLocalServer24setMaxPendingConnectionsEi setMaxPendingConnections(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 81, column 34>
//   // proto:  QAbstractSocket::SocketError QLocalServer::serverError();
extern "C"
void C_ZNK12QLocalServer11serverErrorEv(void *qthis) {
  ((QLocalServer*)qthis)->serverError();
}
// _ZNK12QLocalServer11serverErrorEv serverError()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 67, column 14>
//   // proto:  void QLocalServer::QLocalServer(QObject * parent);
extern "C"
void C_ZN12QLocalServerC2EP7QObject(QObject * arg1) {
  new QLocalServer(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalserver.h', line 76, column 9>
//   // proto:  int QLocalServer::maxPendingConnections();
extern "C"
void C_ZNK12QLocalServer21maxPendingConnectionsEv(void *qthis) {
  ((QLocalServer*)qthis)->maxPendingConnections();
}
// _ZNK12QLocalServer21maxPendingConnectionsEv maxPendingConnections()
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

