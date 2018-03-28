//  header block begin
// since 0x040400
// /usr/include/qt/QtNetwork/qlocalsocket.h
#ifndef protected
#define protected public
#endif
#include <qlocalsocket.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QLocalSocket is pure virtual: false
// QLocalSocket has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQLocalSocket : public QLocalSocket {
public:
  virtual ~MyQLocalSocket() {}
// void QLocalSocket(QObject *)
MyQLocalSocket(QObject * parent) : QLocalSocket(parent) {}
// Protected virtual Visibility=Default Availability=Available
// qint64 readData(char *, qint64)
  virtual qint64 readData(char * arg0, qint64 arg1) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"readData", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // TypedefLongLonglong long
    } else {
    return QLocalSocket::readData(arg0, arg1);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * arg0, qint64 arg1) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"writeData", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // TypedefLongLonglong long
    } else {
    return QLocalSocket::writeData(arg0, arg1);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:124
// [8] qint64 readData(char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN12QLocalSocket8readDataEPcx(void *this_, char * arg0, qint64 arg1) {
  return (qint64)((QLocalSocket*)this_)->QLocalSocket::readData(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:125
// [8] qint64 writeData(const char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN12QLocalSocket9writeDataEPKcx(void *this_, const char * arg0, qint64 arg1) {
  return (qint64)((QLocalSocket*)this_)->QLocalSocket::writeData(arg0, arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QLocalSocket10metaObjectEv(void *this_) {
  return (void*)((QLocalSocket*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:82
// [-2] void QLocalSocket(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QLocalSocketC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQLocalSocket*)(0);
  return  new MyQLocalSocket(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:83
// [-2] void ~QLocalSocket()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocketD2Ev(void *this_) {
  delete (QLocalSocket*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:85
// [-2] void connectToServer(QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket15connectToServerE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> openMode) {
  ((QLocalSocket*)this_)->connectToServer(openMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:86
// [-2] void connectToServer(const QString &, QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket15connectToServerERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QString* name, QFlags<QIODevice::OpenModeFlag> openMode) {
  ((QLocalSocket*)this_)->connectToServer(*name, openMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:87
// [-2] void disconnectFromServer()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket20disconnectFromServerEv(void *this_) {
  ((QLocalSocket*)this_)->disconnectFromServer();
}

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtNetwork/qlocalsocket.h:89
// [-2] void setServerName(const QString &)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket13setServerNameERK7QString(void *this_, QString* name) {
  ((QLocalSocket*)this_)->setServerName(*name);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:90
// [8] QString serverName()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QLocalSocket10serverNameEv(void *this_) {
  auto rv = ((QLocalSocket*)this_)->serverName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:91
// [8] QString fullServerName()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QLocalSocket14fullServerNameEv(void *this_) {
  auto rv = ((QLocalSocket*)this_)->fullServerName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:93
// [-2] void abort()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket5abortEv(void *this_) {
  ((QLocalSocket*)this_)->abort();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:94
// [1] bool isSequential()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QLocalSocket12isSequentialEv(void *this_) {
  return (bool)((QLocalSocket*)this_)->isSequential();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:95
// [8] qint64 bytesAvailable()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QLocalSocket14bytesAvailableEv(void *this_) {
  return (qint64)((QLocalSocket*)this_)->bytesAvailable();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:96
// [8] qint64 bytesToWrite()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QLocalSocket12bytesToWriteEv(void *this_) {
  return (qint64)((QLocalSocket*)this_)->bytesToWrite();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:97
// [1] bool canReadLine()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QLocalSocket11canReadLineEv(void *this_) {
  return (bool)((QLocalSocket*)this_)->canReadLine();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:98
// [1] bool open(QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalSocket4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> openMode) {
  return (bool)((QLocalSocket*)this_)->open(openMode);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:99
// [-2] void close()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket5closeEv(void *this_) {
  ((QLocalSocket*)this_)->close();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:100
// [4] QLocalSocket::LocalSocketError error()
extern "C" Q_DECL_EXPORT
QLocalSocket::LocalSocketError C_ZNK12QLocalSocket5errorEv(void *this_) {
  return (QLocalSocket::LocalSocketError)((QLocalSocket*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:101
// [1] bool flush()
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalSocket5flushEv(void *this_) {
  return (bool)((QLocalSocket*)this_)->flush();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:102
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QLocalSocket7isValidEv(void *this_) {
  return (bool)((QLocalSocket*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:103
// [8] qint64 readBufferSize()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QLocalSocket14readBufferSizeEv(void *this_) {
  return (qint64)((QLocalSocket*)this_)->readBufferSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:104
// [-2] void setReadBufferSize(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket17setReadBufferSizeEx(void *this_, qint64 size) {
  ((QLocalSocket*)this_)->setReadBufferSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:106
// [1] bool setSocketDescriptor(qintptr, QLocalSocket::LocalSocketState, QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalSocket19setSocketDescriptorExNS_16LocalSocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, qintptr socketDescriptor, QLocalSocket::LocalSocketState socketState, QFlags<QIODevice::OpenModeFlag> openMode) {
  return (bool)((QLocalSocket*)this_)->setSocketDescriptor(socketDescriptor, socketState, openMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:109
// [8] qintptr socketDescriptor()
extern "C" Q_DECL_EXPORT
qintptr C_ZNK12QLocalSocket16socketDescriptorEv(void *this_) {
  return (qintptr)((QLocalSocket*)this_)->socketDescriptor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:111
// [4] QLocalSocket::LocalSocketState state()
extern "C" Q_DECL_EXPORT
QLocalSocket::LocalSocketState C_ZNK12QLocalSocket5stateEv(void *this_) {
  return (QLocalSocket::LocalSocketState)((QLocalSocket*)this_)->state();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:112
// [1] bool waitForBytesWritten(int)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalSocket19waitForBytesWrittenEi(void *this_, int msecs) {
  return (bool)((QLocalSocket*)this_)->waitForBytesWritten(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:113
// [1] bool waitForConnected(int)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalSocket16waitForConnectedEi(void *this_, int msecs) {
  return (bool)((QLocalSocket*)this_)->waitForConnected(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:114
// [1] bool waitForDisconnected(int)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalSocket19waitForDisconnectedEi(void *this_, int msecs) {
  return (bool)((QLocalSocket*)this_)->waitForDisconnected(msecs);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:115
// [1] bool waitForReadyRead(int)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalSocket16waitForReadyReadEi(void *this_, int msecs) {
  return (bool)((QLocalSocket*)this_)->waitForReadyRead(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:118
// [-2] void connected()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket9connectedEv(void *this_) {
  ((QLocalSocket*)this_)->connected();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:119
// [-2] void disconnected()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket12disconnectedEv(void *this_) {
  ((QLocalSocket*)this_)->disconnected();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:120
// [-2] void error(QLocalSocket::LocalSocketError)
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket5errorENS_16LocalSocketErrorE(void *this_, QLocalSocket::LocalSocketError socketError) {
  ((QLocalSocket*)this_)->error(socketError);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:121
// [-2] void stateChanged(QLocalSocket::LocalSocketState)
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(void *this_, QLocalSocket::LocalSocketState socketState) {
  ((QLocalSocket*)this_)->stateChanged(socketState);
}

//  main block end
