//  header block begin
// /usr/include/qt/QtNetwork/qabstractsocket.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractsocket.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QAbstractSocket is pure virtual: true
// QAbstractSocket has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractSocket : public QAbstractSocket {
public:
  virtual ~MyQAbstractSocket() {}
// void QAbstractSocket(QAbstractSocket::SocketType, QObject *)
MyQAbstractSocket(QAbstractSocket::SocketType socketType, QObject * parent) : QAbstractSocket(socketType, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [8] qint64 readData(char *, qint64)
  virtual qint64 readData(char * data, qint64 maxlen)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"readData", &handled, 2, (uint64_t)data, (uint64_t)maxlen, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QAbstractSocket::readData(data, maxlen);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] qint64 readLineData(char *, qint64)
  virtual qint64 readLineData(char * data, qint64 maxlen)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"readLineData", &handled, 2, (uint64_t)data, (uint64_t)maxlen, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QAbstractSocket::readLineData(data, maxlen);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * data, qint64 len_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"writeData", &handled, 2, (uint64_t)data, (uint64_t)len_, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QAbstractSocket::writeData(data, len_);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setSocketState(QAbstractSocket::SocketState)
  virtual void setSocketState(QAbstractSocket::SocketState state)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSocketState", &handled, 1, (uint64_t)state, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSocket::setSocketState(state);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setSocketError(QAbstractSocket::SocketError)
  virtual void setSocketError(QAbstractSocket::SocketError socketError)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSocketError", &handled, 1, (uint64_t)socketError, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSocket::setSocketError(socketError);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setLocalPort(quint16)
  virtual void setLocalPort(quint16 port)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setLocalPort", &handled, 1, (uint64_t)port, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSocket::setLocalPort(port);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setLocalAddress(const QHostAddress &)
  virtual void setLocalAddress(const QHostAddress & address)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setLocalAddress", &handled, 1, (uint64_t)&address, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSocket::setLocalAddress(address);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setPeerPort(quint16)
  virtual void setPeerPort(quint16 port)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setPeerPort", &handled, 1, (uint64_t)port, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSocket::setPeerPort(port);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setPeerAddress(const QHostAddress &)
  virtual void setPeerAddress(const QHostAddress & address)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setPeerAddress", &handled, 1, (uint64_t)&address, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSocket::setPeerAddress(address);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setPeerName(const QString &)
  virtual void setPeerName(const QString & name)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setPeerName", &handled, 1, (uint64_t)&name, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSocket::setPeerName(name);
  }
  }

// void QAbstractSocket(QAbstractSocket::SocketType, QAbstractSocketPrivate &, QObject *)
MyQAbstractSocket(QAbstractSocket::SocketType socketType, QAbstractSocketPrivate & dd, QObject * parent) : QAbstractSocket(socketType, dd, parent) {}
};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:212
// [8] qint64 readData(char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN15QAbstractSocket8readDataEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QAbstractSocket*)this_)->QAbstractSocket::readData(data, maxlen);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:213
// [8] qint64 readLineData(char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN15QAbstractSocket12readLineDataEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QAbstractSocket*)this_)->QAbstractSocket::readLineData(data, maxlen);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:214
// [8] qint64 writeData(const char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN15QAbstractSocket9writeDataEPKcx(void *this_, const char * data, qint64 len_) {
  return (qint64)((QAbstractSocket*)this_)->QAbstractSocket::writeData(data, len_);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:216
// [-2] void setSocketState(QAbstractSocket::SocketState)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket14setSocketStateENS_11SocketStateE(void *this_, QAbstractSocket::SocketState state) {
  ((QAbstractSocket*)this_)->QAbstractSocket::setSocketState(state);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:217
// [-2] void setSocketError(QAbstractSocket::SocketError)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket14setSocketErrorENS_11SocketErrorE(void *this_, QAbstractSocket::SocketError socketError) {
  ((QAbstractSocket*)this_)->QAbstractSocket::setSocketError(socketError);
}

// Protected Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtNetwork/qabstractsocket.h:218
// [-2] void setLocalPort(quint16)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket12setLocalPortEt(void *this_, quint16 port) {
  ((QAbstractSocket*)this_)->QAbstractSocket::setLocalPort(port);
}
#endif // QT_VERSION >= 0x040100

// Protected Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtNetwork/qabstractsocket.h:219
// [-2] void setLocalAddress(const QHostAddress &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket15setLocalAddressERK12QHostAddress(void *this_, QHostAddress* address) {
  ((QAbstractSocket*)this_)->QAbstractSocket::setLocalAddress(*address);
}
#endif // QT_VERSION >= 0x040100

// Protected Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtNetwork/qabstractsocket.h:220
// [-2] void setPeerPort(quint16)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket11setPeerPortEt(void *this_, quint16 port) {
  ((QAbstractSocket*)this_)->QAbstractSocket::setPeerPort(port);
}
#endif // QT_VERSION >= 0x040100

// Protected Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtNetwork/qabstractsocket.h:221
// [-2] void setPeerAddress(const QHostAddress &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket14setPeerAddressERK12QHostAddress(void *this_, QHostAddress* address) {
  ((QAbstractSocket*)this_)->QAbstractSocket::setPeerAddress(*address);
}
#endif // QT_VERSION >= 0x040100

// Protected Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtNetwork/qabstractsocket.h:222
// [-2] void setPeerName(const QString &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket11setPeerNameERK7QString(void *this_, QString* name) {
  ((QAbstractSocket*)this_)->QAbstractSocket::setPeerName(*name);
}
#endif // QT_VERSION >= 0x040100

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractSocket10metaObjectEv(void *this_) {
  return (void*)((QAbstractSocket*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAbstractSocket11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractSocket*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QAbstractSocket11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractSocket*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAbstractSocket2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractSocket::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAbstractSocket6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractSocket::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:139
// [-2] void QAbstractSocket(QAbstractSocket::SocketType, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAbstractSocketC2ENS_10SocketTypeEP7QObject(QAbstractSocket::SocketType socketType, QObject * parent) {
  auto _nilp = (MyQAbstractSocket*)(0);
  return 0; // new MyQAbstractSocket(socketType, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:140
// [-2] void ~QAbstractSocket()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocketD2Ev(void *this_) {
  delete (QAbstractSocket*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qabstractsocket.h:142
// [-2] void resume()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket6resumeEv(void *this_) {
  ((QAbstractSocket*)this_)->resume();
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qabstractsocket.h:143
// [4] QAbstractSocket::PauseModes pauseMode()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
QAbstractSocket::PauseModes* C_ZNK15QAbstractSocket9pauseModeEv(void *this_) {
  auto rv = ((QAbstractSocket*)this_)->pauseMode();
return new QAbstractSocket::PauseModes(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:144
// [-2] void setPauseMode(QAbstractSocket::PauseModes)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket12setPauseModeE6QFlagsINS_9PauseModeEE(void *this_, QFlags<QAbstractSocket::PauseMode> pauseMode) {
  ((QAbstractSocket*)this_)->setPauseMode(pauseMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:147
// [1] bool bind(const QHostAddress &, quint16, QAbstractSocket::BindMode)
extern "C" Q_DECL_EXPORT
bool C_ZN15QAbstractSocket4bindERK12QHostAddresst6QFlagsINS_8BindFlagEE(void *this_, QHostAddress* address, quint16 port, QFlags<QAbstractSocket::BindFlag> mode) {
  return (bool)((QAbstractSocket*)this_)->bind(*address, port, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:148
// [1] bool bind(quint16, QAbstractSocket::BindMode)
extern "C" Q_DECL_EXPORT
bool C_ZN15QAbstractSocket4bindEt6QFlagsINS_8BindFlagEE(void *this_, quint16 port, QFlags<QAbstractSocket::BindFlag> mode) {
  return (bool)((QAbstractSocket*)this_)->bind(port, mode);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:151
// [-2] void connectToHost(const QString &, quint16, QIODevice::OpenMode, QAbstractSocket::NetworkLayerProtocol)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket13connectToHostERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEENS_20NetworkLayerProtocolE(void *this_, QString* hostName, quint16 port, QFlags<QIODevice::OpenModeFlag> mode, QAbstractSocket::NetworkLayerProtocol protocol) {
  ((QAbstractSocket*)this_)->connectToHost(*hostName, port, mode, protocol);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:152
// [-2] void connectToHost(const QHostAddress &, quint16, QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket13connectToHostERK12QHostAddresst6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QHostAddress* address, quint16 port, QFlags<QIODevice::OpenModeFlag> mode) {
  ((QAbstractSocket*)this_)->connectToHost(*address, port, mode);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:153
// [-2] void disconnectFromHost()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket18disconnectFromHostEv(void *this_) {
  ((QAbstractSocket*)this_)->disconnectFromHost();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:155
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractSocket7isValidEv(void *this_) {
  return (bool)((QAbstractSocket*)this_)->isValid();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:157
// [8] qint64 bytesAvailable()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK15QAbstractSocket14bytesAvailableEv(void *this_) {
  return (qint64)((QAbstractSocket*)this_)->bytesAvailable();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:158
// [8] qint64 bytesToWrite()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK15QAbstractSocket12bytesToWriteEv(void *this_) {
  return (qint64)((QAbstractSocket*)this_)->bytesToWrite();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:160
// [1] bool canReadLine()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractSocket11canReadLineEv(void *this_) {
  return (bool)((QAbstractSocket*)this_)->canReadLine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:162
// [2] quint16 localPort()
extern "C" Q_DECL_EXPORT
quint16 C_ZNK15QAbstractSocket9localPortEv(void *this_) {
  return (quint16)((QAbstractSocket*)this_)->localPort();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:163
// [8] QHostAddress localAddress()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractSocket12localAddressEv(void *this_) {
  auto rv = ((QAbstractSocket*)this_)->localAddress();
return new QHostAddress(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:164
// [2] quint16 peerPort()
extern "C" Q_DECL_EXPORT
quint16 C_ZNK15QAbstractSocket8peerPortEv(void *this_) {
  return (quint16)((QAbstractSocket*)this_)->peerPort();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:165
// [8] QHostAddress peerAddress()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractSocket11peerAddressEv(void *this_) {
  auto rv = ((QAbstractSocket*)this_)->peerAddress();
return new QHostAddress(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:166
// [8] QString peerName()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractSocket8peerNameEv(void *this_) {
  auto rv = ((QAbstractSocket*)this_)->peerName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:168
// [8] qint64 readBufferSize()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK15QAbstractSocket14readBufferSizeEv(void *this_) {
  return (qint64)((QAbstractSocket*)this_)->readBufferSize();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:169
// [-2] void setReadBufferSize(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket17setReadBufferSizeEx(void *this_, qint64 size) {
  ((QAbstractSocket*)this_)->setReadBufferSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:171
// [-2] void abort()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket5abortEv(void *this_) {
  ((QAbstractSocket*)this_)->abort();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:173
// [8] qintptr socketDescriptor()
extern "C" Q_DECL_EXPORT
qintptr C_ZNK15QAbstractSocket16socketDescriptorEv(void *this_) {
  return (qintptr)((QAbstractSocket*)this_)->socketDescriptor();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:174
// [1] bool setSocketDescriptor(qintptr, QAbstractSocket::SocketState, QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
bool C_ZN15QAbstractSocket19setSocketDescriptorExNS_11SocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, qintptr socketDescriptor, QAbstractSocket::SocketState state, QFlags<QIODevice::OpenModeFlag> openMode) {
  return (bool)((QAbstractSocket*)this_)->setSocketDescriptor(socketDescriptor, state, openMode);
}

// Public virtual Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtNetwork/qabstractsocket.h:177
// [-2] void setSocketOption(QAbstractSocket::SocketOption, const QVariant &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket15setSocketOptionENS_12SocketOptionERK8QVariant(void *this_, QAbstractSocket::SocketOption option, QVariant* value) {
  ((QAbstractSocket*)this_)->setSocketOption(option, *value);
}
#endif // QT_VERSION >= 0x040600

// Public virtual Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtNetwork/qabstractsocket.h:178
// [16] QVariant socketOption(QAbstractSocket::SocketOption)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZN15QAbstractSocket12socketOptionENS_12SocketOptionE(void *this_, QAbstractSocket::SocketOption option) {
  auto rv = ((QAbstractSocket*)this_)->socketOption(option);
return new QVariant(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:180
// [4] QAbstractSocket::SocketType socketType()
extern "C" Q_DECL_EXPORT
QAbstractSocket::SocketType C_ZNK15QAbstractSocket10socketTypeEv(void *this_) {
  return (QAbstractSocket::SocketType)((QAbstractSocket*)this_)->socketType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:181
// [4] QAbstractSocket::SocketState state()
extern "C" Q_DECL_EXPORT
QAbstractSocket::SocketState C_ZNK15QAbstractSocket5stateEv(void *this_) {
  return (QAbstractSocket::SocketState)((QAbstractSocket*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:182
// [4] QAbstractSocket::SocketError error()
extern "C" Q_DECL_EXPORT
QAbstractSocket::SocketError C_ZNK15QAbstractSocket5errorEv(void *this_) {
  return (QAbstractSocket::SocketError)((QAbstractSocket*)this_)->error();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:185
// [-2] void close()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket5closeEv(void *this_) {
  ((QAbstractSocket*)this_)->close();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:186
// [1] bool isSequential()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractSocket12isSequentialEv(void *this_) {
  return (bool)((QAbstractSocket*)this_)->isSequential();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:187
// [1] bool atEnd()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractSocket5atEndEv(void *this_) {
  return (bool)((QAbstractSocket*)this_)->atEnd();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:188
// [1] bool flush()
extern "C" Q_DECL_EXPORT
bool C_ZN15QAbstractSocket5flushEv(void *this_) {
  return (bool)((QAbstractSocket*)this_)->flush();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:191
// [1] bool waitForConnected(int)
extern "C" Q_DECL_EXPORT
bool C_ZN15QAbstractSocket16waitForConnectedEi(void *this_, int msecs) {
  return (bool)((QAbstractSocket*)this_)->waitForConnected(msecs);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:192
// [1] bool waitForReadyRead(int)
extern "C" Q_DECL_EXPORT
bool C_ZN15QAbstractSocket16waitForReadyReadEi(void *this_, int msecs) {
  return (bool)((QAbstractSocket*)this_)->waitForReadyRead(msecs);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:193
// [1] bool waitForBytesWritten(int)
extern "C" Q_DECL_EXPORT
bool C_ZN15QAbstractSocket19waitForBytesWrittenEi(void *this_, int msecs) {
  return (bool)((QAbstractSocket*)this_)->waitForBytesWritten(msecs);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:194
// [1] bool waitForDisconnected(int)
extern "C" Q_DECL_EXPORT
bool C_ZN15QAbstractSocket19waitForDisconnectedEi(void *this_, int msecs) {
  return (bool)((QAbstractSocket*)this_)->waitForDisconnected(msecs);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtNetwork/qabstractsocket.h:197
// [-2] void setProxy(const QNetworkProxy &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket8setProxyERK13QNetworkProxy(void *this_, QNetworkProxy* networkProxy) {
  ((QAbstractSocket*)this_)->setProxy(*networkProxy);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtNetwork/qabstractsocket.h:198
// [8] QNetworkProxy proxy()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractSocket5proxyEv(void *this_) {
  auto rv = ((QAbstractSocket*)this_)->proxy();
return new QNetworkProxy(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:202
// [-2] void hostFound()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket9hostFoundEv(void *this_) {
  ((QAbstractSocket*)this_)->hostFound();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:203
// [-2] void connected()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket9connectedEv(void *this_) {
  ((QAbstractSocket*)this_)->connected();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:204
// [-2] void disconnected()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket12disconnectedEv(void *this_) {
  ((QAbstractSocket*)this_)->disconnected();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:205
// [-2] void stateChanged(QAbstractSocket::SocketState)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket12stateChangedENS_11SocketStateE(void *this_, QAbstractSocket::SocketState arg0) {
  ((QAbstractSocket*)this_)->stateChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:206
// [-2] void error(QAbstractSocket::SocketError)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket5errorENS_11SocketErrorE(void *this_, QAbstractSocket::SocketError arg0) {
  ((QAbstractSocket*)this_)->error(arg0);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtNetwork/qabstractsocket.h:208
// [-2] void proxyAuthenticationRequired(const QNetworkProxy &, QAuthenticator *)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(void *this_, QNetworkProxy* proxy, QAuthenticator * authenticator) {
  ((QAbstractSocket*)this_)->proxyAuthenticationRequired(*proxy, authenticator);
}
#endif // QT_VERSION >= 0x040300

//  main block end
