// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qabstractsocket.h
// dst-file: /src/network/qabstractsocket.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstractsocket.h>


#include <qhostaddress.h>
#include <qnetworkproxy.h>
#include <qglobal.h>
#include <qstring.h>
#include <qvariant.h>
// <= header block end

// main block begin =>
void __keep_qabstractsocket_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAbstractSocket_Class_Size()
{
  return sizeof(QAbstractSocket);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 131, column 5>
//   // proto:  void QAbstractSocket::QAbstractSocket(QAbstractSocket::SocketType socketType, QObject * parent);
extern "C"
QAbstractSocket*
C_ZN15QAbstractSocketC2ENS_10SocketTypeEP7QObject(QAbstractSocket::SocketType arg1,
QObject * arg2) {
  // auto ret = new QAbstractSocket(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 143, column 18>
//   // proto:  void QAbstractSocket::connectToHost(const QString & hostName, quint16 port, OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol);
// _ZN15QAbstractSocket13connectToHostERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEENS_20NetworkLayerProtocolE connectToHost(const class QString &, quint16, OpenMode, enum QAbstractSocket::NetworkLayerProtocol)
extern "C"
void
C_ZN15QAbstractSocket13connectToHostERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEENS_20NetworkLayerProtocolE(void *qthis,
const QString* arg1,
quint16 arg2,
QIODevice::OpenMode arg3,
QAbstractSocket::NetworkLayerProtocol arg4) {
  ((QAbstractSocket*)qthis)->connectToHost(*((const QString*)arg1),
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 174, column 17>
//   // proto:  QAbstractSocket::SocketError QAbstractSocket::error();
// _ZNK15QAbstractSocket5errorEv error()
extern "C"
QAbstractSocket::SocketError
C_ZNK15QAbstractSocket5errorEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->error();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 197, column 10>
//   // proto:  void QAbstractSocket::stateChanged(QAbstractSocket::SocketState );
// _ZN15QAbstractSocket12stateChangedENS_11SocketStateE stateChanged(class QAbstractSocket::SocketState)
extern "C"
void
C_ZN15QAbstractSocket12stateChangedENS_11SocketStateE(void *qthis,
QAbstractSocket::SocketState* arg1) {
  ((QAbstractSocket*)qthis)->stateChanged(*((QAbstractSocket::SocketState*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 135, column 16>
//   // proto:  PauseModes QAbstractSocket::pauseMode();
// _ZNK15QAbstractSocket9pauseModeEv pauseMode()
extern "C"
QFlags<QAbstractSocket::PauseMode>*
C_ZNK15QAbstractSocket9pauseModeEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->pauseMode();
  return new QFlags<QAbstractSocket::PauseMode>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 184, column 10>
//   // proto:  bool QAbstractSocket::waitForReadyRead(int msecs);
// _ZN15QAbstractSocket16waitForReadyReadEi waitForReadyRead(int)
extern "C"
bool
C_ZN15QAbstractSocket16waitForReadyReadEi(void *qthis,
int arg1) {
  auto ret =
  ((QAbstractSocket*)qthis)->waitForReadyRead(arg1);
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QAbstractSocket::~QAbstractSocket();
extern "C"
void C_ZN15QAbstractSocketD2Ev(void *qthis) {
  delete (QAbstractSocket*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 157, column 18>
//   // proto:  QHostAddress QAbstractSocket::peerAddress();
// _ZNK15QAbstractSocket11peerAddressEv peerAddress()
extern "C"
QHostAddress*
C_ZNK15QAbstractSocket11peerAddressEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->peerAddress();
  return new QHostAddress(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 55, column 5>
//   // proto:  const QMetaObject * QAbstractSocket::metaObject();
// _ZNK15QAbstractSocket10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QAbstractSocket10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 190, column 19>
//   // proto:  QNetworkProxy QAbstractSocket::proxy();
// _ZNK15QAbstractSocket5proxyEv proxy()
extern "C"
QNetworkProxy*
C_ZNK15QAbstractSocket5proxyEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->proxy();
  return new QNetworkProxy(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 196, column 10>
//   // proto:  void QAbstractSocket::disconnected();
// _ZN15QAbstractSocket12disconnectedEv disconnected()
extern "C"
void
C_ZN15QAbstractSocket12disconnectedEv(void *qthis) {
  ((QAbstractSocket*)qthis)->disconnected();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 150, column 12>
//   // proto:  qint64 QAbstractSocket::bytesToWrite();
// _ZNK15QAbstractSocket12bytesToWriteEv bytesToWrite()
extern "C"
long long
C_ZNK15QAbstractSocket12bytesToWriteEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->bytesToWrite();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 180, column 10>
//   // proto:  bool QAbstractSocket::flush();
// _ZN15QAbstractSocket5flushEv flush()
extern "C"
bool
C_ZN15QAbstractSocket5flushEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->flush();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 161, column 18>
//   // proto:  void QAbstractSocket::setReadBufferSize(qint64 size);
// _ZN15QAbstractSocket17setReadBufferSizeEx setReadBufferSize(qint64)
extern "C"
void
C_ZN15QAbstractSocket17setReadBufferSizeEx(void *qthis,
qint64 arg1) {
  ((QAbstractSocket*)qthis)->setReadBufferSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 185, column 10>
//   // proto:  bool QAbstractSocket::waitForBytesWritten(int msecs);
// _ZN15QAbstractSocket19waitForBytesWrittenEi waitForBytesWritten(int)
extern "C"
bool
C_ZN15QAbstractSocket19waitForBytesWrittenEi(void *qthis,
int arg1) {
  auto ret =
  ((QAbstractSocket*)qthis)->waitForBytesWritten(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 155, column 18>
//   // proto:  QHostAddress QAbstractSocket::localAddress();
// _ZNK15QAbstractSocket12localAddressEv localAddress()
extern "C"
QHostAddress*
C_ZNK15QAbstractSocket12localAddressEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->localAddress();
  return new QHostAddress(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 152, column 10>
//   // proto:  bool QAbstractSocket::canReadLine();
// _ZNK15QAbstractSocket11canReadLineEv canReadLine()
extern "C"
bool
C_ZNK15QAbstractSocket11canReadLineEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->canReadLine();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 145, column 18>
//   // proto:  void QAbstractSocket::disconnectFromHost();
// _ZN15QAbstractSocket18disconnectFromHostEv disconnectFromHost()
extern "C"
void
C_ZN15QAbstractSocket18disconnectFromHostEv(void *qthis) {
  ((QAbstractSocket*)qthis)->disconnectFromHost();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 172, column 16>
//   // proto:  QAbstractSocket::SocketType QAbstractSocket::socketType();
// _ZNK15QAbstractSocket10socketTypeEv socketType()
extern "C"
QAbstractSocket::SocketType
C_ZNK15QAbstractSocket10socketTypeEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->socketType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 134, column 18>
//   // proto:  void QAbstractSocket::resume();
// _ZN15QAbstractSocket6resumeEv resume()
extern "C"
void
C_ZN15QAbstractSocket6resumeEv(void *qthis) {
  ((QAbstractSocket*)qthis)->resume();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 156, column 13>
//   // proto:  quint16 QAbstractSocket::peerPort();
// _ZNK15QAbstractSocket8peerPortEv peerPort()
extern "C"
unsigned short
C_ZNK15QAbstractSocket8peerPortEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->peerPort();
  return ret; // 0 TypeKind.USHORT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 186, column 18>
//   // proto:  bool QAbstractSocket::waitForDisconnected(int msecs);
// _ZN15QAbstractSocket19waitForDisconnectedEi waitForDisconnected(int)
extern "C"
bool
C_ZN15QAbstractSocket19waitForDisconnectedEi(void *qthis,
int arg1) {
  auto ret =
  ((QAbstractSocket*)qthis)->waitForDisconnected(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 200, column 10>
//   // proto:  void QAbstractSocket::proxyAuthenticationRequired(const QNetworkProxy & proxy, QAuthenticator * authenticator);
// _ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator proxyAuthenticationRequired(const class QNetworkProxy &, class QAuthenticator *)
extern "C"
void
C_ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(void *qthis,
const QNetworkProxy* arg1,
QAuthenticator * arg2) {
  ((QAbstractSocket*)qthis)->proxyAuthenticationRequired(*((const QNetworkProxy*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 169, column 18>
//   // proto:  void QAbstractSocket::setSocketOption(QAbstractSocket::SocketOption option, const QVariant & value);
// _ZN15QAbstractSocket15setSocketOptionENS_12SocketOptionERK8QVariant setSocketOption(class QAbstractSocket::SocketOption, const class QVariant &)
extern "C"
void
C_ZN15QAbstractSocket15setSocketOptionENS_12SocketOptionERK8QVariant(void *qthis,
QAbstractSocket::SocketOption* arg1,
const QVariant* arg2) {
  ((QAbstractSocket*)qthis)->setSocketOption(*((QAbstractSocket::SocketOption*)arg1),
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 154, column 13>
//   // proto:  quint16 QAbstractSocket::localPort();
// _ZNK15QAbstractSocket9localPortEv localPort()
extern "C"
unsigned short
C_ZNK15QAbstractSocket9localPortEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->localPort();
  return ret; // 0 TypeKind.USHORT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 160, column 12>
//   // proto:  qint64 QAbstractSocket::readBufferSize();
// _ZNK15QAbstractSocket14readBufferSizeEv readBufferSize()
extern "C"
long long
C_ZNK15QAbstractSocket14readBufferSizeEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->readBufferSize();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 163, column 10>
//   // proto:  void QAbstractSocket::abort();
// _ZN15QAbstractSocket5abortEv abort()
extern "C"
void
C_ZN15QAbstractSocket5abortEv(void *qthis) {
  ((QAbstractSocket*)qthis)->abort();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 139, column 10>
//   // proto:  bool QAbstractSocket::bind(const QHostAddress & address, quint16 port, BindMode mode);
// _ZN15QAbstractSocket4bindERK12QHostAddresst6QFlagsINS_8BindFlagEE bind(const class QHostAddress &, quint16, BindMode)
extern "C"
bool
C_ZN15QAbstractSocket4bindERK12QHostAddresst6QFlagsINS_8BindFlagEE(void *qthis,
const QHostAddress* arg1,
quint16 arg2,
QAbstractSocket::BindMode arg3) {
  auto ret =
  ((QAbstractSocket*)qthis)->bind(*((const QHostAddress*)arg1),
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 140, column 10>
//   // proto:  bool QAbstractSocket::bind(quint16 port, BindMode mode);
// _ZN15QAbstractSocket4bindEt6QFlagsINS_8BindFlagEE bind(quint16, BindMode)
extern "C"
bool
C_ZN15QAbstractSocket4bindEt6QFlagsINS_8BindFlagEE(void *qthis,
quint16 arg1,
QAbstractSocket::BindMode arg2) {
  auto ret =
  ((QAbstractSocket*)qthis)->bind(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 136, column 10>
//   // proto:  void QAbstractSocket::setPauseMode(PauseModes pauseMode);
// _ZN15QAbstractSocket12setPauseModeE6QFlagsINS_9PauseModeEE setPauseMode(PauseModes)
extern "C"
void
C_ZN15QAbstractSocket12setPauseModeE6QFlagsINS_9PauseModeEE(void *qthis,
QAbstractSocket::PauseModes arg1) {
  ((QAbstractSocket*)qthis)->setPauseMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 158, column 13>
//   // proto:  QString QAbstractSocket::peerName();
// _ZNK15QAbstractSocket8peerNameEv peerName()
extern "C"
QString*
C_ZNK15QAbstractSocket8peerNameEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->peerName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 165, column 21>
//   // proto:  qintptr QAbstractSocket::socketDescriptor();
// _ZNK15QAbstractSocket16socketDescriptorEv socketDescriptor()
extern "C"
int
C_ZNK15QAbstractSocket16socketDescriptorEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->socketDescriptor();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 166, column 18>
//   // proto:  bool QAbstractSocket::setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, OpenMode openMode);
// _ZN15QAbstractSocket19setSocketDescriptorEiNS_11SocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE setSocketDescriptor(qintptr, enum QAbstractSocket::SocketState, OpenMode)
extern "C"
bool
C_ZN15QAbstractSocket19setSocketDescriptorEiNS_11SocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
qintptr arg1,
QAbstractSocket::SocketState arg2,
QIODevice::OpenMode arg3) {
  auto ret =
  ((QAbstractSocket*)qthis)->setSocketDescriptor(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 177, column 10>
//   // proto:  void QAbstractSocket::close();
// _ZN15QAbstractSocket5closeEv close()
extern "C"
void
C_ZN15QAbstractSocket5closeEv(void *qthis) {
  ((QAbstractSocket*)qthis)->close();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 195, column 10>
//   // proto:  void QAbstractSocket::connected();
// _ZN15QAbstractSocket9connectedEv connected()
extern "C"
void
C_ZN15QAbstractSocket9connectedEv(void *qthis) {
  ((QAbstractSocket*)qthis)->connected();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 198, column 10>
//   // proto:  void QAbstractSocket::error(QAbstractSocket::SocketError );
// _ZN15QAbstractSocket5errorENS_11SocketErrorE error(class QAbstractSocket::SocketError)
extern "C"
void
C_ZN15QAbstractSocket5errorENS_11SocketErrorE(void *qthis,
QAbstractSocket::SocketError* arg1) {
  ((QAbstractSocket*)qthis)->error(*((QAbstractSocket::SocketError*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 173, column 17>
//   // proto:  QAbstractSocket::SocketState QAbstractSocket::state();
// _ZNK15QAbstractSocket5stateEv state()
extern "C"
QAbstractSocket::SocketState
C_ZNK15QAbstractSocket5stateEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->state();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 183, column 18>
//   // proto:  bool QAbstractSocket::waitForConnected(int msecs);
// _ZN15QAbstractSocket16waitForConnectedEi waitForConnected(int)
extern "C"
bool
C_ZN15QAbstractSocket16waitForConnectedEi(void *qthis,
int arg1) {
  auto ret =
  ((QAbstractSocket*)qthis)->waitForConnected(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 149, column 12>
//   // proto:  qint64 QAbstractSocket::bytesAvailable();
// _ZNK15QAbstractSocket14bytesAvailableEv bytesAvailable()
extern "C"
long long
C_ZNK15QAbstractSocket14bytesAvailableEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->bytesAvailable();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 178, column 10>
//   // proto:  bool QAbstractSocket::isSequential();
// _ZNK15QAbstractSocket12isSequentialEv isSequential()
extern "C"
bool
C_ZNK15QAbstractSocket12isSequentialEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->isSequential();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 147, column 10>
//   // proto:  bool QAbstractSocket::isValid();
// _ZNK15QAbstractSocket7isValidEv isValid()
extern "C"
bool
C_ZNK15QAbstractSocket7isValidEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 194, column 10>
//   // proto:  void QAbstractSocket::hostFound();
// _ZN15QAbstractSocket9hostFoundEv hostFound()
extern "C"
void
C_ZN15QAbstractSocket9hostFoundEv(void *qthis) {
  ((QAbstractSocket*)qthis)->hostFound();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 170, column 22>
//   // proto:  QVariant QAbstractSocket::socketOption(QAbstractSocket::SocketOption option);
// _ZN15QAbstractSocket12socketOptionENS_12SocketOptionE socketOption(class QAbstractSocket::SocketOption)
extern "C"
QVariant*
C_ZN15QAbstractSocket12socketOptionENS_12SocketOptionE(void *qthis,
QAbstractSocket::SocketOption* arg1) {
  auto ret =
  ((QAbstractSocket*)qthis)->socketOption(*((QAbstractSocket::SocketOption*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 179, column 10>
//   // proto:  bool QAbstractSocket::atEnd();
// _ZNK15QAbstractSocket5atEndEv atEnd()
extern "C"
bool
C_ZNK15QAbstractSocket5atEndEv(void *qthis) {
  auto ret =
  ((QAbstractSocket*)qthis)->atEnd();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 189, column 10>
//   // proto:  void QAbstractSocket::setProxy(const QNetworkProxy & networkProxy);
// _ZN15QAbstractSocket8setProxyERK13QNetworkProxy setProxy(const class QNetworkProxy &)
extern "C"
void
C_ZN15QAbstractSocket8setProxyERK13QNetworkProxy(void *qthis,
const QNetworkProxy* arg1) {
  ((QAbstractSocket*)qthis)->setProxy(*((const QNetworkProxy*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 144, column 18>
//   // proto:  void QAbstractSocket::connectToHost(const QHostAddress & address, quint16 port, OpenMode mode);
// _ZN15QAbstractSocket13connectToHostERK12QHostAddresst6QFlagsIN9QIODevice12OpenModeFlagEE connectToHost(const class QHostAddress &, quint16, OpenMode)
extern "C"
void
C_ZN15QAbstractSocket13connectToHostERK12QHostAddresst6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
const QHostAddress* arg1,
quint16 arg2,
QIODevice::OpenMode arg3) {
  ((QAbstractSocket*)qthis)->connectToHost(*((const QHostAddress*)arg1),
arg2,
arg3);
}
// <= ext block end

// body block begin =>
// QAbstractSocket_SlotProxy here
class QAbstractSocket_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractSocket_SlotProxy():QObject(){}

public slots:
  // stateChanged(class QAbstractSocket::SocketState)
  void slot_proxy_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE(QAbstractSocket::SocketState arg0);
public:
  void (*slot_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE)(void* rsfptr, QAbstractSocket::SocketState arg0) = NULL;
public slots:
  // connected()
  void slot_proxy_func__ZN15QAbstractSocket9connectedEv();
public:
  void (*slot_func__ZN15QAbstractSocket9connectedEv)(void* rsfptr) = NULL;
public slots:
  // hostFound()
  void slot_proxy_func__ZN15QAbstractSocket9hostFoundEv();
public:
  void (*slot_func__ZN15QAbstractSocket9hostFoundEv)(void* rsfptr) = NULL;
public slots:
  // error(class QAbstractSocket::SocketError)
  void slot_proxy_func__ZN15QAbstractSocket5errorENS_11SocketErrorE(QAbstractSocket::SocketError arg0);
public:
  void (*slot_func__ZN15QAbstractSocket5errorENS_11SocketErrorE)(void* rsfptr, QAbstractSocket::SocketError arg0) = NULL;
public slots:
  // disconnected()
  void slot_proxy_func__ZN15QAbstractSocket12disconnectedEv();
public:
  void (*slot_func__ZN15QAbstractSocket12disconnectedEv)(void* rsfptr) = NULL;
public slots:
  // proxyAuthenticationRequired(const class QNetworkProxy &, class QAuthenticator *)
  void slot_proxy_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(const QNetworkProxy & arg0, QAuthenticator * arg1);
public:
  void (*slot_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator)(void* rsfptr, const QNetworkProxy & arg0, QAuthenticator * arg1) = NULL;
public: void* rsfptr = NULL;
};
#include "src/network/qabstractsocket.moc"

extern "C" {
  QAbstractSocket_SlotProxy* QAbstractSocket_SlotProxy_new()
  {
    return new QAbstractSocket_SlotProxy();
  }
};

void QAbstractSocket_SlotProxy::slot_proxy_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE(QAbstractSocket::SocketState arg0) {
  if (this->slot_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractSocket_SlotProxy_connect__ZN15QAbstractSocket12stateChangedENS_11SocketStateE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE = (decltype(that->slot_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE))ffifptr;
  QObject::connect((QAbstractSocket*)sender, SIGNAL(stateChanged(class QAbstractSocket::SocketState)), that, SLOT(slot_proxy_func__ZN15QAbstractSocket12stateChangedENS_11SocketStateE(QAbstractSocket::SocketState arg0)));
  return that;
}
extern "C"
void QAbstractSocket_SlotProxy_disconnect__ZN15QAbstractSocket12stateChangedENS_11SocketStateE(QAbstractSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSocket_SlotProxy::slot_proxy_func__ZN15QAbstractSocket9connectedEv() {
  if (this->slot_func__ZN15QAbstractSocket9connectedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSocket9connectedEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractSocket_SlotProxy_connect__ZN15QAbstractSocket9connectedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSocket9connectedEv = (decltype(that->slot_func__ZN15QAbstractSocket9connectedEv))ffifptr;
  QObject::connect((QAbstractSocket*)sender, SIGNAL(connected()), that, SLOT(slot_proxy_func__ZN15QAbstractSocket9connectedEv()));
  return that;
}
extern "C"
void QAbstractSocket_SlotProxy_disconnect__ZN15QAbstractSocket9connectedEv(QAbstractSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSocket_SlotProxy::slot_proxy_func__ZN15QAbstractSocket9hostFoundEv() {
  if (this->slot_func__ZN15QAbstractSocket9hostFoundEv != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSocket9hostFoundEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractSocket_SlotProxy_connect__ZN15QAbstractSocket9hostFoundEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSocket9hostFoundEv = (decltype(that->slot_func__ZN15QAbstractSocket9hostFoundEv))ffifptr;
  QObject::connect((QAbstractSocket*)sender, SIGNAL(hostFound()), that, SLOT(slot_proxy_func__ZN15QAbstractSocket9hostFoundEv()));
  return that;
}
extern "C"
void QAbstractSocket_SlotProxy_disconnect__ZN15QAbstractSocket9hostFoundEv(QAbstractSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSocket_SlotProxy::slot_proxy_func__ZN15QAbstractSocket5errorENS_11SocketErrorE(QAbstractSocket::SocketError arg0) {
  if (this->slot_func__ZN15QAbstractSocket5errorENS_11SocketErrorE != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSocket5errorENS_11SocketErrorE(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractSocket_SlotProxy_connect__ZN15QAbstractSocket5errorENS_11SocketErrorE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSocket5errorENS_11SocketErrorE = (decltype(that->slot_func__ZN15QAbstractSocket5errorENS_11SocketErrorE))ffifptr;
  QObject::connect((QAbstractSocket*)sender, SIGNAL(error(class QAbstractSocket::SocketError)), that, SLOT(slot_proxy_func__ZN15QAbstractSocket5errorENS_11SocketErrorE(QAbstractSocket::SocketError arg0)));
  return that;
}
extern "C"
void QAbstractSocket_SlotProxy_disconnect__ZN15QAbstractSocket5errorENS_11SocketErrorE(QAbstractSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSocket_SlotProxy::slot_proxy_func__ZN15QAbstractSocket12disconnectedEv() {
  if (this->slot_func__ZN15QAbstractSocket12disconnectedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSocket12disconnectedEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractSocket_SlotProxy_connect__ZN15QAbstractSocket12disconnectedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSocket12disconnectedEv = (decltype(that->slot_func__ZN15QAbstractSocket12disconnectedEv))ffifptr;
  QObject::connect((QAbstractSocket*)sender, SIGNAL(disconnected()), that, SLOT(slot_proxy_func__ZN15QAbstractSocket12disconnectedEv()));
  return that;
}
extern "C"
void QAbstractSocket_SlotProxy_disconnect__ZN15QAbstractSocket12disconnectedEv(QAbstractSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSocket_SlotProxy::slot_proxy_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(const QNetworkProxy & arg0, QAuthenticator * arg1) {
  if (this->slot_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QAbstractSocket_SlotProxy_connect__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator = (decltype(that->slot_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator))ffifptr;
  QObject::connect((QAbstractSocket*)sender, SIGNAL(proxyAuthenticationRequired(const class QNetworkProxy &, class QAuthenticator *)), that, SLOT(slot_proxy_func__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(const QNetworkProxy & arg0, QAuthenticator * arg1)));
  return that;
}
extern "C"
void QAbstractSocket_SlotProxy_disconnect__ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(QAbstractSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

