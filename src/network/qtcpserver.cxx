//  header block begin
// /usr/include/qt/QtNetwork/qtcpserver.h
#ifndef protected
#define protected public
#endif
#include <qtcpserver.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QTcpServer is pure virtual: false
// QTcpServer has virtual projected: true
//  header block end

//  main block begin

class MyQTcpServer : public QTcpServer {
public:
  virtual ~MyQTcpServer() {}
// void QTcpServer(class QObject *)
MyQTcpServer(QObject * parent) : QTcpServer(parent) {}
// Protected virtual Visibility=Default Availability=Available
// void incomingConnection(qintptr)
  virtual void incomingConnection(qintptr handle) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"incomingConnection", &handled, 1, (uint64_t)handle, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTcpServer::incomingConnection(handle);
  }
  }

// Protected Visibility=Default Availability=Available
// void addPendingConnection(class QTcpSocket *)
  virtual void addPendingConnection(QTcpSocket * socket) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"addPendingConnection", &handled, 1, (uint64_t)socket, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTcpServer::addPendingConnection(socket);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:94
// [-2] void incomingConnection(qintptr)
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer18incomingConnectionEx(void *this_, qintptr handle) {
  ((QTcpServer*)this_)->QTcpServer::incomingConnection(handle);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:95
// [-2] void addPendingConnection(class QTcpSocket *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer20addPendingConnectionEP10QTcpSocket(void *this_, QTcpSocket * socket) {
  ((QTcpServer*)this_)->QTcpServer::addPendingConnection(socket);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTcpServer10metaObjectEv(void *this_) {
  return (void*)((QTcpServer*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:61
// [-2] void QTcpServer(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTcpServerC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQTcpServer*)(0);
  return  new MyQTcpServer(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:62
// [-2] void ~QTcpServer()
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServerD2Ev(void *this_) {
  delete (QTcpServer*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:64
// [1] bool listen(const class QHostAddress &, quint16)
extern "C" Q_DECL_EXPORT
bool C_ZN10QTcpServer6listenERK12QHostAddresst(void *this_, QHostAddress* address, quint16 port) {
  return (bool)((QTcpServer*)this_)->listen(*address, port);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:65
// [-2] void close()
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer5closeEv(void *this_) {
  ((QTcpServer*)this_)->close();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:67
// [1] bool isListening()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTcpServer11isListeningEv(void *this_) {
  return (bool)((QTcpServer*)this_)->isListening();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:69
// [-2] void setMaxPendingConnections(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer24setMaxPendingConnectionsEi(void *this_, int numConnections) {
  ((QTcpServer*)this_)->setMaxPendingConnections(numConnections);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:70
// [4] int maxPendingConnections()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTcpServer21maxPendingConnectionsEv(void *this_) {
  return (int)((QTcpServer*)this_)->maxPendingConnections();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:72
// [2] quint16 serverPort()
extern "C" Q_DECL_EXPORT
quint16 C_ZNK10QTcpServer10serverPortEv(void *this_) {
  return (quint16)((QTcpServer*)this_)->serverPort();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:73
// [8] QHostAddress serverAddress()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTcpServer13serverAddressEv(void *this_) {
  auto rv = ((QTcpServer*)this_)->serverAddress();
return new QHostAddress(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:75
// [8] qintptr socketDescriptor()
extern "C" Q_DECL_EXPORT
qintptr C_ZNK10QTcpServer16socketDescriptorEv(void *this_) {
  return (qintptr)((QTcpServer*)this_)->socketDescriptor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:76
// [1] bool setSocketDescriptor(qintptr)
extern "C" Q_DECL_EXPORT
bool C_ZN10QTcpServer19setSocketDescriptorEx(void *this_, qintptr socketDescriptor) {
  return (bool)((QTcpServer*)this_)->setSocketDescriptor(socketDescriptor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:78
// [1] bool waitForNewConnection(int, _Bool *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QTcpServer20waitForNewConnectionEiPb(void *this_, int msec, bool * timedOut) {
  return (bool)((QTcpServer*)this_)->waitForNewConnection(msec, timedOut);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:79
// [1] bool hasPendingConnections()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTcpServer21hasPendingConnectionsEv(void *this_) {
  return (bool)((QTcpServer*)this_)->hasPendingConnections();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:80
// [8] QTcpSocket * nextPendingConnection()
extern "C" Q_DECL_EXPORT
void* C_ZN10QTcpServer21nextPendingConnectionEv(void *this_) {
  return (void*)((QTcpServer*)this_)->nextPendingConnection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:82
// [4] QAbstractSocket::SocketError serverError()
extern "C" Q_DECL_EXPORT
QAbstractSocket::SocketError C_ZNK10QTcpServer11serverErrorEv(void *this_) {
  return (QAbstractSocket::SocketError)((QTcpServer*)this_)->serverError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:83
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTcpServer11errorStringEv(void *this_) {
  auto rv = ((QTcpServer*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:85
// [-2] void pauseAccepting()
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer14pauseAcceptingEv(void *this_) {
  ((QTcpServer*)this_)->pauseAccepting();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:86
// [-2] void resumeAccepting()
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer15resumeAcceptingEv(void *this_) {
  ((QTcpServer*)this_)->resumeAccepting();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:89
// [-2] void setProxy(const class QNetworkProxy &)
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer8setProxyERK13QNetworkProxy(void *this_, QNetworkProxy* networkProxy) {
  ((QTcpServer*)this_)->setProxy(*networkProxy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:90
// [8] QNetworkProxy proxy()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTcpServer5proxyEv(void *this_) {
  auto rv = ((QTcpServer*)this_)->proxy();
return new QNetworkProxy(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:101
// [-2] void newConnection()
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer13newConnectionEv(void *this_) {
  ((QTcpServer*)this_)->newConnection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:102
// [-2] void acceptError(class QAbstractSocket::SocketError)
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE(void *this_, QAbstractSocket::SocketError socketError) {
  ((QTcpServer*)this_)->acceptError(socketError);
}

//  main block end
