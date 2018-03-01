//  header block begin
// /usr/include/qt/QtNetwork/qlocalserver.h
#ifndef protected
#define protected public
#endif
#include <qlocalserver.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QLocalServer is pure virtual: false
// QLocalServer has virtual projected: true
//  header block end

//  main block begin

class MyQLocalServer : public QLocalServer {
public:
  virtual ~MyQLocalServer() {}
// void QLocalServer(class QObject *)
MyQLocalServer(QObject * parent) : QLocalServer(parent) {}
// Protected virtual Visibility=Default Availability=Available
// void incomingConnection(quintptr)
  virtual void incomingConnection(quintptr socketDescriptor) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"incomingConnection", &handled, 1, (uint64_t)socketDescriptor, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLocalServer::incomingConnection(socketDescriptor);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:98
// [-2] void incomingConnection(quintptr)
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalServer18incomingConnectionEy(void *this_, quintptr socketDescriptor) {
  ((QLocalServer*)this_)->QLocalServer::incomingConnection(socketDescriptor);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QLocalServer10metaObjectEv(void *this_) {
  return (void*)((QLocalServer*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:60
// [-2] void newConnection()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalServer13newConnectionEv(void *this_) {
  ((QLocalServer*)this_)->newConnection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:74
// [-2] void QLocalServer(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QLocalServerC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQLocalServer*)(0);
  return  new MyQLocalServer(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:75
// [-2] void ~QLocalServer()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalServerD2Ev(void *this_) {
  delete (QLocalServer*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:77
// [-2] void close()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalServer5closeEv(void *this_) {
  ((QLocalServer*)this_)->close();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:78
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QLocalServer11errorStringEv(void *this_) {
  auto rv = ((QLocalServer*)this_)->errorString();
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:79
// [1] bool hasPendingConnections()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QLocalServer21hasPendingConnectionsEv(void *this_) {
  return (bool)((QLocalServer*)this_)->hasPendingConnections();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:80
// [1] bool isListening()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QLocalServer11isListeningEv(void *this_) {
  return (bool)((QLocalServer*)this_)->isListening();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:81
// [1] bool listen(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalServer6listenERK7QString(void *this_, QString* name) {
  return (bool)((QLocalServer*)this_)->listen(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:82
// [1] bool listen(qintptr)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalServer6listenEx(void *this_, qintptr socketDescriptor) {
  return (bool)((QLocalServer*)this_)->listen(socketDescriptor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:83
// [4] int maxPendingConnections()
extern "C" Q_DECL_EXPORT
int C_ZNK12QLocalServer21maxPendingConnectionsEv(void *this_) {
  return (int)((QLocalServer*)this_)->maxPendingConnections();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:84
// [8] QLocalSocket * nextPendingConnection()
extern "C" Q_DECL_EXPORT
void* C_ZN12QLocalServer21nextPendingConnectionEv(void *this_) {
  return (void*)((QLocalServer*)this_)->nextPendingConnection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:85
// [8] QString serverName()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QLocalServer10serverNameEv(void *this_) {
  auto rv = ((QLocalServer*)this_)->serverName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:86
// [8] QString fullServerName()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QLocalServer14fullServerNameEv(void *this_) {
  auto rv = ((QLocalServer*)this_)->fullServerName();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:87
// [1] bool removeServer(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalServer12removeServerERK7QString(QString* name) {
  return (bool)QLocalServer::removeServer(*name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:88
// [4] QAbstractSocket::SocketError serverError()
extern "C" Q_DECL_EXPORT
QAbstractSocket::SocketError C_ZNK12QLocalServer11serverErrorEv(void *this_) {
  return (QAbstractSocket::SocketError)((QLocalServer*)this_)->serverError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:89
// [-2] void setMaxPendingConnections(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalServer24setMaxPendingConnectionsEi(void *this_, int numConnections) {
  ((QLocalServer*)this_)->setMaxPendingConnections(numConnections);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:90
// [1] bool waitForNewConnection(int, _Bool *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalServer20waitForNewConnectionEiPb(void *this_, int msec, bool * timedOut) {
  return (bool)((QLocalServer*)this_)->waitForNewConnection(msec, timedOut);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:92
// [-2] void setSocketOptions(QLocalServer::SocketOptions)
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalServer16setSocketOptionsE6QFlagsINS_12SocketOptionEE(void *this_, QFlags<QLocalServer::SocketOption> options) {
  ((QLocalServer*)this_)->setSocketOptions(options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:93
// [4] QLocalServer::SocketOptions socketOptions()
extern "C" Q_DECL_EXPORT
QLocalServer::SocketOptions* C_ZNK12QLocalServer13socketOptionsEv(void *this_) {
  auto rv = ((QLocalServer*)this_)->socketOptions();
return new QLocalServer::SocketOptions(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:95
// [8] qintptr socketDescriptor()
extern "C" Q_DECL_EXPORT
qintptr C_ZNK12QLocalServer16socketDescriptorEv(void *this_) {
  return (qintptr)((QLocalServer*)this_)->socketDescriptor();
}

//  main block end
