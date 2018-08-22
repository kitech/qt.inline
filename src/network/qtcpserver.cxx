//  header block begin
// /usr/include/qt/QtNetwork/qtcpserver.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtcpserver.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QTcpServer is pure virtual: false
// QTcpServer has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTcpServer : public QTcpServer {
public:
  virtual ~MyQTcpServer() {}
// void QTcpServer(QObject *)
MyQTcpServer(QObject * parent) : QTcpServer(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void incomingConnection(qintptr)
  virtual void incomingConnection(qintptr handle)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"incomingConnection", &handled, 1, (uint64_t)handle, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTcpServer::incomingConnection(handle);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void addPendingConnection(QTcpSocket *)
  virtual void addPendingConnection(QTcpSocket * socket)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"addPendingConnection", &handled, 1, (uint64_t)socket, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTcpServer::addPendingConnection(socket);
  }
  }

// void QTcpServer(QAbstractSocket::SocketType, QTcpServerPrivate &, QObject *)
MyQTcpServer(QAbstractSocket::SocketType socketType, QTcpServerPrivate & dd, QObject * parent) : QTcpServer(socketType, dd, parent) {}
};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:94
// [-2] void incomingConnection(qintptr)
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer18incomingConnectionEx(void *this_, qintptr handle) {
  ((QTcpServer*)this_)->QTcpServer::incomingConnection(handle);
}

// Protected Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qtcpserver.h:95
// [-2] void addPendingConnection(QTcpSocket *)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer20addPendingConnectionEP10QTcpSocket(void *this_, QTcpSocket * socket) {
  ((QTcpServer*)this_)->QTcpServer::addPendingConnection(socket);
}
#endif // QT_VERSION >= 0x040700

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTcpServer10metaObjectEv(void *this_) {
  return (void*)((QTcpServer*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:59
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTcpServer11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTcpServer*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:59
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QTcpServer11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTcpServer*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:59
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTcpServer2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTcpServer::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:59
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTcpServer6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTcpServer::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:61
// [-2] void QTcpServer(QObject *)
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
// [1] bool listen(const QHostAddress &, quint16)
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
// [1] bool waitForNewConnection(int, bool *)
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
// since 5.0
// /usr/include/qt/QtNetwork/qtcpserver.h:85
// [-2] void pauseAccepting()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer14pauseAcceptingEv(void *this_) {
  ((QTcpServer*)this_)->pauseAccepting();
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qtcpserver.h:86
// [-2] void resumeAccepting()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer15resumeAcceptingEv(void *this_) {
  ((QTcpServer*)this_)->resumeAccepting();
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtNetwork/qtcpserver.h:89
// [-2] void setProxy(const QNetworkProxy &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer8setProxyERK13QNetworkProxy(void *this_, QNetworkProxy* networkProxy) {
  ((QTcpServer*)this_)->setProxy(*networkProxy);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtNetwork/qtcpserver.h:90
// [8] QNetworkProxy proxy()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTcpServer5proxyEv(void *this_) {
  auto rv = ((QTcpServer*)this_)->proxy();
return new QNetworkProxy(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpserver.h:101
// [-2] void newConnection()
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer13newConnectionEv(void *this_) {
  ((QTcpServer*)this_)->newConnection();
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qtcpserver.h:102
// [-2] void acceptError(QAbstractSocket::SocketError)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN10QTcpServer11acceptErrorEN15QAbstractSocket11SocketErrorE(void *this_, QAbstractSocket::SocketError socketError) {
  ((QTcpServer*)this_)->acceptError(socketError);
}
#endif // QT_VERSION >= 0x050000

//  main block end
