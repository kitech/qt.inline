#include <qvariant.h>
#include <qstring.h>
#include <qglobal.h>
#include <qnetworkproxy.h>
#include <qhostaddress.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qabstractsocket.h
// dst-file: /src/network/qabstractsocket.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qabstractsocket.h>

extern "C" {

int QAbstractSocket_Class_Size()
{
  return sizeof(QAbstractSocket);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qabstractsocket_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 131, column 5>
//   // proto:  void QAbstractSocket::QAbstractSocket(QAbstractSocket::SocketType socketType, QObject * parent);
if (true) {
  auto f = [](QAbstractSocket::SocketType arg1, QObject * arg2) {
    // new QAbstractSocket(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 143, column 18>
//   // proto:  void QAbstractSocket::connectToHost(const QString & hostName, quint16 port, OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol);
if (true) {
  auto f = [](const QString & arg1, quint16 arg2, QIODevice::OpenMode arg3, QAbstractSocket::NetworkLayerProtocol arg4) {
    ((QAbstractSocket*)0)->connectToHost(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket13connectToHostERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEENS_20NetworkLayerProtocolE connectToHost(const class QString &, quint16, OpenMode, enum QAbstractSocket::NetworkLayerProtocol)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 174, column 17>
//   // proto:  QAbstractSocket::SocketError QAbstractSocket::error();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->error();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket5errorEv error()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 197, column 10>
//   // proto:  void QAbstractSocket::stateChanged(QAbstractSocket::SocketState );
if (true) {
  auto f = [](QAbstractSocket::SocketState arg1) {
    ((QAbstractSocket*)0)->stateChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket12stateChangedENS_11SocketStateE stateChanged(class QAbstractSocket::SocketState)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 135, column 16>
//   // proto:  PauseModes QAbstractSocket::pauseMode();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->pauseMode();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket9pauseModeEv pauseMode()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 184, column 10>
//   // proto:  bool QAbstractSocket::waitForReadyRead(int msecs);
if (true) {
  auto f = [](int arg1) {
    ((QAbstractSocket*)0)->waitForReadyRead(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket16waitForReadyReadEi waitForReadyRead(int)
//   // proto:  void QAbstractSocket::~QAbstractSocket();
if (true) {
  delete ((QAbstractSocket*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 157, column 18>
//   // proto:  QHostAddress QAbstractSocket::peerAddress();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->peerAddress();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket11peerAddressEv peerAddress()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 55, column 5>
//   // proto:  const QMetaObject * QAbstractSocket::metaObject();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->metaObject();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 190, column 19>
//   // proto:  QNetworkProxy QAbstractSocket::proxy();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->proxy();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket5proxyEv proxy()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 196, column 10>
//   // proto:  void QAbstractSocket::disconnected();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->disconnected();
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket12disconnectedEv disconnected()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 150, column 12>
//   // proto:  qint64 QAbstractSocket::bytesToWrite();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->bytesToWrite();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket12bytesToWriteEv bytesToWrite()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 180, column 10>
//   // proto:  bool QAbstractSocket::flush();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->flush();
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket5flushEv flush()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 161, column 18>
//   // proto:  void QAbstractSocket::setReadBufferSize(qint64 size);
if (true) {
  auto f = [](qint64 arg1) {
    ((QAbstractSocket*)0)->setReadBufferSize(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket17setReadBufferSizeEx setReadBufferSize(qint64)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 185, column 10>
//   // proto:  bool QAbstractSocket::waitForBytesWritten(int msecs);
if (true) {
  auto f = [](int arg1) {
    ((QAbstractSocket*)0)->waitForBytesWritten(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket19waitForBytesWrittenEi waitForBytesWritten(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 155, column 18>
//   // proto:  QHostAddress QAbstractSocket::localAddress();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->localAddress();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket12localAddressEv localAddress()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 152, column 10>
//   // proto:  bool QAbstractSocket::canReadLine();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->canReadLine();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket11canReadLineEv canReadLine()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 145, column 18>
//   // proto:  void QAbstractSocket::disconnectFromHost();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->disconnectFromHost();
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket18disconnectFromHostEv disconnectFromHost()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 172, column 16>
//   // proto:  QAbstractSocket::SocketType QAbstractSocket::socketType();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->socketType();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket10socketTypeEv socketType()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 134, column 18>
//   // proto:  void QAbstractSocket::resume();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->resume();
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket6resumeEv resume()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 156, column 13>
//   // proto:  quint16 QAbstractSocket::peerPort();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->peerPort();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket8peerPortEv peerPort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 186, column 18>
//   // proto:  bool QAbstractSocket::waitForDisconnected(int msecs);
if (true) {
  auto f = [](int arg1) {
    ((QAbstractSocket*)0)->waitForDisconnected(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket19waitForDisconnectedEi waitForDisconnected(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 200, column 10>
//   // proto:  void QAbstractSocket::proxyAuthenticationRequired(const QNetworkProxy & proxy, QAuthenticator * authenticator);
if (true) {
  auto f = [](const QNetworkProxy & arg1, QAuthenticator * arg2) {
    ((QAbstractSocket*)0)->proxyAuthenticationRequired(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator proxyAuthenticationRequired(const class QNetworkProxy &, class QAuthenticator *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 169, column 18>
//   // proto:  void QAbstractSocket::setSocketOption(QAbstractSocket::SocketOption option, const QVariant & value);
if (true) {
  auto f = [](QAbstractSocket::SocketOption arg1, const QVariant & arg2) {
    ((QAbstractSocket*)0)->setSocketOption(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket15setSocketOptionENS_12SocketOptionERK8QVariant setSocketOption(class QAbstractSocket::SocketOption, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 154, column 13>
//   // proto:  quint16 QAbstractSocket::localPort();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->localPort();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket9localPortEv localPort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 160, column 12>
//   // proto:  qint64 QAbstractSocket::readBufferSize();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->readBufferSize();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket14readBufferSizeEv readBufferSize()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 163, column 10>
//   // proto:  void QAbstractSocket::abort();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->abort();
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket5abortEv abort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 139, column 10>
//   // proto:  bool QAbstractSocket::bind(const QHostAddress & address, quint16 port, BindMode mode);
if (true) {
  auto f = [](const QHostAddress & arg1, quint16 arg2, QAbstractSocket::BindMode arg3) {
    ((QAbstractSocket*)0)->bind(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket4bindERK12QHostAddresst6QFlagsINS_8BindFlagEE bind(const class QHostAddress &, quint16, BindMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 140, column 10>
//   // proto:  bool QAbstractSocket::bind(quint16 port, BindMode mode);
if (true) {
  auto f = [](quint16 arg1, QAbstractSocket::BindMode arg2) {
    ((QAbstractSocket*)0)->bind(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket4bindEt6QFlagsINS_8BindFlagEE bind(quint16, BindMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 136, column 10>
//   // proto:  void QAbstractSocket::setPauseMode(PauseModes pauseMode);
if (true) {
  auto f = [](QAbstractSocket::PauseModes arg1) {
    ((QAbstractSocket*)0)->setPauseMode(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket12setPauseModeE6QFlagsINS_9PauseModeEE setPauseMode(PauseModes)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 158, column 13>
//   // proto:  QString QAbstractSocket::peerName();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->peerName();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket8peerNameEv peerName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 165, column 21>
//   // proto:  qintptr QAbstractSocket::socketDescriptor();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->socketDescriptor();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket16socketDescriptorEv socketDescriptor()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 166, column 18>
//   // proto:  bool QAbstractSocket::setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, OpenMode openMode);
if (true) {
  auto f = [](qintptr arg1, QAbstractSocket::SocketState arg2, QIODevice::OpenMode arg3) {
    ((QAbstractSocket*)0)->setSocketDescriptor(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket19setSocketDescriptorEiNS_11SocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE setSocketDescriptor(qintptr, enum QAbstractSocket::SocketState, OpenMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 177, column 10>
//   // proto:  void QAbstractSocket::close();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->close();
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket5closeEv close()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 195, column 10>
//   // proto:  void QAbstractSocket::connected();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->connected();
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket9connectedEv connected()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 198, column 10>
//   // proto:  void QAbstractSocket::error(QAbstractSocket::SocketError );
if (true) {
  auto f = [](QAbstractSocket::SocketError arg1) {
    ((QAbstractSocket*)0)->error(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket5errorENS_11SocketErrorE error(class QAbstractSocket::SocketError)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 173, column 17>
//   // proto:  QAbstractSocket::SocketState QAbstractSocket::state();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->state();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket5stateEv state()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 183, column 18>
//   // proto:  bool QAbstractSocket::waitForConnected(int msecs);
if (true) {
  auto f = [](int arg1) {
    ((QAbstractSocket*)0)->waitForConnected(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket16waitForConnectedEi waitForConnected(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 149, column 12>
//   // proto:  qint64 QAbstractSocket::bytesAvailable();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->bytesAvailable();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket14bytesAvailableEv bytesAvailable()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 178, column 10>
//   // proto:  bool QAbstractSocket::isSequential();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->isSequential();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket12isSequentialEv isSequential()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 147, column 10>
//   // proto:  bool QAbstractSocket::isValid();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->isValid();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 194, column 10>
//   // proto:  void QAbstractSocket::hostFound();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->hostFound();
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket9hostFoundEv hostFound()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 170, column 22>
//   // proto:  QVariant QAbstractSocket::socketOption(QAbstractSocket::SocketOption option);
if (true) {
  auto f = [](QAbstractSocket::SocketOption arg1) {
    ((QAbstractSocket*)0)->socketOption(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket12socketOptionENS_12SocketOptionE socketOption(class QAbstractSocket::SocketOption)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 179, column 10>
//   // proto:  bool QAbstractSocket::atEnd();
if (true) {
  auto f = []() {
    ((QAbstractSocket*)0)->atEnd();
  };
  if (f == nullptr){}
}
// _ZNK15QAbstractSocket5atEndEv atEnd()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 189, column 10>
//   // proto:  void QAbstractSocket::setProxy(const QNetworkProxy & networkProxy);
if (true) {
  auto f = [](const QNetworkProxy & arg1) {
    ((QAbstractSocket*)0)->setProxy(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket8setProxyERK13QNetworkProxy setProxy(const class QNetworkProxy &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 144, column 18>
//   // proto:  void QAbstractSocket::connectToHost(const QHostAddress & address, quint16 port, OpenMode mode);
if (true) {
  auto f = [](const QHostAddress & arg1, quint16 arg2, QIODevice::OpenMode arg3) {
    ((QAbstractSocket*)0)->connectToHost(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN15QAbstractSocket13connectToHostERK12QHostAddresst6QFlagsIN9QIODevice12OpenModeFlagEE connectToHost(const class QHostAddress &, quint16, OpenMode)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 131, column 5>
//   // proto:  void QAbstractSocket::QAbstractSocket(QAbstractSocket::SocketType socketType, QObject * parent);
extern "C"
void C_ZN15QAbstractSocketC2ENS_10SocketTypeEP7QObject(QAbstractSocket::SocketType arg1, QObject * arg2) {
  // new QAbstractSocket(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 143, column 18>
//   // proto:  void QAbstractSocket::connectToHost(const QString & hostName, quint16 port, OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol);
extern "C"
void C_ZN15QAbstractSocket13connectToHostERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEENS_20NetworkLayerProtocolE(void *qthis, const QString & arg1, quint16 arg2, QIODevice::OpenMode arg3, QAbstractSocket::NetworkLayerProtocol arg4) {
  ((QAbstractSocket*)qthis)->connectToHost(arg1, arg2, arg3, arg4);
}
// _ZN15QAbstractSocket13connectToHostERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEENS_20NetworkLayerProtocolE connectToHost(const class QString &, quint16, OpenMode, enum QAbstractSocket::NetworkLayerProtocol)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 174, column 17>
//   // proto:  QAbstractSocket::SocketError QAbstractSocket::error();
extern "C"
void C_ZNK15QAbstractSocket5errorEv(void *qthis) {
  ((QAbstractSocket*)qthis)->error();
}
// _ZNK15QAbstractSocket5errorEv error()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 197, column 10>
//   // proto:  void QAbstractSocket::stateChanged(QAbstractSocket::SocketState );
extern "C"
void C_ZN15QAbstractSocket12stateChangedENS_11SocketStateE(void *qthis, QAbstractSocket::SocketState arg1) {
  ((QAbstractSocket*)qthis)->stateChanged(arg1);
}
// _ZN15QAbstractSocket12stateChangedENS_11SocketStateE stateChanged(class QAbstractSocket::SocketState)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 135, column 16>
//   // proto:  PauseModes QAbstractSocket::pauseMode();
extern "C"
void C_ZNK15QAbstractSocket9pauseModeEv(void *qthis) {
  ((QAbstractSocket*)qthis)->pauseMode();
}
// _ZNK15QAbstractSocket9pauseModeEv pauseMode()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 184, column 10>
//   // proto:  bool QAbstractSocket::waitForReadyRead(int msecs);
extern "C"
void C_ZN15QAbstractSocket16waitForReadyReadEi(void *qthis, int arg1) {
  ((QAbstractSocket*)qthis)->waitForReadyRead(arg1);
}
// _ZN15QAbstractSocket16waitForReadyReadEi waitForReadyRead(int)
//   // proto:  void QAbstractSocket::~QAbstractSocket();
extern "C"
void C_ZN15QAbstractSocketD2Ev(void *qthis) {
  delete (QAbstractSocket*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 157, column 18>
//   // proto:  QHostAddress QAbstractSocket::peerAddress();
extern "C"
void C_ZNK15QAbstractSocket11peerAddressEv(void *qthis) {
  ((QAbstractSocket*)qthis)->peerAddress();
}
// _ZNK15QAbstractSocket11peerAddressEv peerAddress()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 55, column 5>
//   // proto:  const QMetaObject * QAbstractSocket::metaObject();
extern "C"
void C_ZNK15QAbstractSocket10metaObjectEv(void *qthis) {
  ((QAbstractSocket*)qthis)->metaObject();
}
// _ZNK15QAbstractSocket10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 190, column 19>
//   // proto:  QNetworkProxy QAbstractSocket::proxy();
extern "C"
void C_ZNK15QAbstractSocket5proxyEv(void *qthis) {
  ((QAbstractSocket*)qthis)->proxy();
}
// _ZNK15QAbstractSocket5proxyEv proxy()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 196, column 10>
//   // proto:  void QAbstractSocket::disconnected();
extern "C"
void C_ZN15QAbstractSocket12disconnectedEv(void *qthis) {
  ((QAbstractSocket*)qthis)->disconnected();
}
// _ZN15QAbstractSocket12disconnectedEv disconnected()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 150, column 12>
//   // proto:  qint64 QAbstractSocket::bytesToWrite();
extern "C"
void C_ZNK15QAbstractSocket12bytesToWriteEv(void *qthis) {
  ((QAbstractSocket*)qthis)->bytesToWrite();
}
// _ZNK15QAbstractSocket12bytesToWriteEv bytesToWrite()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 180, column 10>
//   // proto:  bool QAbstractSocket::flush();
extern "C"
void C_ZN15QAbstractSocket5flushEv(void *qthis) {
  ((QAbstractSocket*)qthis)->flush();
}
// _ZN15QAbstractSocket5flushEv flush()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 161, column 18>
//   // proto:  void QAbstractSocket::setReadBufferSize(qint64 size);
extern "C"
void C_ZN15QAbstractSocket17setReadBufferSizeEx(void *qthis, qint64 arg1) {
  ((QAbstractSocket*)qthis)->setReadBufferSize(arg1);
}
// _ZN15QAbstractSocket17setReadBufferSizeEx setReadBufferSize(qint64)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 185, column 10>
//   // proto:  bool QAbstractSocket::waitForBytesWritten(int msecs);
extern "C"
void C_ZN15QAbstractSocket19waitForBytesWrittenEi(void *qthis, int arg1) {
  ((QAbstractSocket*)qthis)->waitForBytesWritten(arg1);
}
// _ZN15QAbstractSocket19waitForBytesWrittenEi waitForBytesWritten(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 155, column 18>
//   // proto:  QHostAddress QAbstractSocket::localAddress();
extern "C"
void C_ZNK15QAbstractSocket12localAddressEv(void *qthis) {
  ((QAbstractSocket*)qthis)->localAddress();
}
// _ZNK15QAbstractSocket12localAddressEv localAddress()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 152, column 10>
//   // proto:  bool QAbstractSocket::canReadLine();
extern "C"
void C_ZNK15QAbstractSocket11canReadLineEv(void *qthis) {
  ((QAbstractSocket*)qthis)->canReadLine();
}
// _ZNK15QAbstractSocket11canReadLineEv canReadLine()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 145, column 18>
//   // proto:  void QAbstractSocket::disconnectFromHost();
extern "C"
void C_ZN15QAbstractSocket18disconnectFromHostEv(void *qthis) {
  ((QAbstractSocket*)qthis)->disconnectFromHost();
}
// _ZN15QAbstractSocket18disconnectFromHostEv disconnectFromHost()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 172, column 16>
//   // proto:  QAbstractSocket::SocketType QAbstractSocket::socketType();
extern "C"
void C_ZNK15QAbstractSocket10socketTypeEv(void *qthis) {
  ((QAbstractSocket*)qthis)->socketType();
}
// _ZNK15QAbstractSocket10socketTypeEv socketType()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 134, column 18>
//   // proto:  void QAbstractSocket::resume();
extern "C"
void C_ZN15QAbstractSocket6resumeEv(void *qthis) {
  ((QAbstractSocket*)qthis)->resume();
}
// _ZN15QAbstractSocket6resumeEv resume()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 156, column 13>
//   // proto:  quint16 QAbstractSocket::peerPort();
extern "C"
void C_ZNK15QAbstractSocket8peerPortEv(void *qthis) {
  ((QAbstractSocket*)qthis)->peerPort();
}
// _ZNK15QAbstractSocket8peerPortEv peerPort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 186, column 18>
//   // proto:  bool QAbstractSocket::waitForDisconnected(int msecs);
extern "C"
void C_ZN15QAbstractSocket19waitForDisconnectedEi(void *qthis, int arg1) {
  ((QAbstractSocket*)qthis)->waitForDisconnected(arg1);
}
// _ZN15QAbstractSocket19waitForDisconnectedEi waitForDisconnected(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 200, column 10>
//   // proto:  void QAbstractSocket::proxyAuthenticationRequired(const QNetworkProxy & proxy, QAuthenticator * authenticator);
extern "C"
void C_ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator(void *qthis, const QNetworkProxy & arg1, QAuthenticator * arg2) {
  ((QAbstractSocket*)qthis)->proxyAuthenticationRequired(arg1, arg2);
}
// _ZN15QAbstractSocket27proxyAuthenticationRequiredERK13QNetworkProxyP14QAuthenticator proxyAuthenticationRequired(const class QNetworkProxy &, class QAuthenticator *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 169, column 18>
//   // proto:  void QAbstractSocket::setSocketOption(QAbstractSocket::SocketOption option, const QVariant & value);
extern "C"
void C_ZN15QAbstractSocket15setSocketOptionENS_12SocketOptionERK8QVariant(void *qthis, QAbstractSocket::SocketOption arg1, const QVariant & arg2) {
  ((QAbstractSocket*)qthis)->setSocketOption(arg1, arg2);
}
// _ZN15QAbstractSocket15setSocketOptionENS_12SocketOptionERK8QVariant setSocketOption(class QAbstractSocket::SocketOption, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 154, column 13>
//   // proto:  quint16 QAbstractSocket::localPort();
extern "C"
void C_ZNK15QAbstractSocket9localPortEv(void *qthis) {
  ((QAbstractSocket*)qthis)->localPort();
}
// _ZNK15QAbstractSocket9localPortEv localPort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 160, column 12>
//   // proto:  qint64 QAbstractSocket::readBufferSize();
extern "C"
void C_ZNK15QAbstractSocket14readBufferSizeEv(void *qthis) {
  ((QAbstractSocket*)qthis)->readBufferSize();
}
// _ZNK15QAbstractSocket14readBufferSizeEv readBufferSize()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 163, column 10>
//   // proto:  void QAbstractSocket::abort();
extern "C"
void C_ZN15QAbstractSocket5abortEv(void *qthis) {
  ((QAbstractSocket*)qthis)->abort();
}
// _ZN15QAbstractSocket5abortEv abort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 139, column 10>
//   // proto:  bool QAbstractSocket::bind(const QHostAddress & address, quint16 port, BindMode mode);
extern "C"
void C_ZN15QAbstractSocket4bindERK12QHostAddresst6QFlagsINS_8BindFlagEE(void *qthis, const QHostAddress & arg1, quint16 arg2, QAbstractSocket::BindMode arg3) {
  ((QAbstractSocket*)qthis)->bind(arg1, arg2, arg3);
}
// _ZN15QAbstractSocket4bindERK12QHostAddresst6QFlagsINS_8BindFlagEE bind(const class QHostAddress &, quint16, BindMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 140, column 10>
//   // proto:  bool QAbstractSocket::bind(quint16 port, BindMode mode);
extern "C"
void C_ZN15QAbstractSocket4bindEt6QFlagsINS_8BindFlagEE(void *qthis, quint16 arg1, QAbstractSocket::BindMode arg2) {
  ((QAbstractSocket*)qthis)->bind(arg1, arg2);
}
// _ZN15QAbstractSocket4bindEt6QFlagsINS_8BindFlagEE bind(quint16, BindMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 136, column 10>
//   // proto:  void QAbstractSocket::setPauseMode(PauseModes pauseMode);
extern "C"
void C_ZN15QAbstractSocket12setPauseModeE6QFlagsINS_9PauseModeEE(void *qthis, QAbstractSocket::PauseModes arg1) {
  ((QAbstractSocket*)qthis)->setPauseMode(arg1);
}
// _ZN15QAbstractSocket12setPauseModeE6QFlagsINS_9PauseModeEE setPauseMode(PauseModes)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 158, column 13>
//   // proto:  QString QAbstractSocket::peerName();
extern "C"
void C_ZNK15QAbstractSocket8peerNameEv(void *qthis) {
  ((QAbstractSocket*)qthis)->peerName();
}
// _ZNK15QAbstractSocket8peerNameEv peerName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 165, column 21>
//   // proto:  qintptr QAbstractSocket::socketDescriptor();
extern "C"
void C_ZNK15QAbstractSocket16socketDescriptorEv(void *qthis) {
  ((QAbstractSocket*)qthis)->socketDescriptor();
}
// _ZNK15QAbstractSocket16socketDescriptorEv socketDescriptor()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 166, column 18>
//   // proto:  bool QAbstractSocket::setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, OpenMode openMode);
extern "C"
void C_ZN15QAbstractSocket19setSocketDescriptorEiNS_11SocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis, qintptr arg1, QAbstractSocket::SocketState arg2, QIODevice::OpenMode arg3) {
  ((QAbstractSocket*)qthis)->setSocketDescriptor(arg1, arg2, arg3);
}
// _ZN15QAbstractSocket19setSocketDescriptorEiNS_11SocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE setSocketDescriptor(qintptr, enum QAbstractSocket::SocketState, OpenMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 177, column 10>
//   // proto:  void QAbstractSocket::close();
extern "C"
void C_ZN15QAbstractSocket5closeEv(void *qthis) {
  ((QAbstractSocket*)qthis)->close();
}
// _ZN15QAbstractSocket5closeEv close()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 195, column 10>
//   // proto:  void QAbstractSocket::connected();
extern "C"
void C_ZN15QAbstractSocket9connectedEv(void *qthis) {
  ((QAbstractSocket*)qthis)->connected();
}
// _ZN15QAbstractSocket9connectedEv connected()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 198, column 10>
//   // proto:  void QAbstractSocket::error(QAbstractSocket::SocketError );
extern "C"
void C_ZN15QAbstractSocket5errorENS_11SocketErrorE(void *qthis, QAbstractSocket::SocketError arg1) {
  ((QAbstractSocket*)qthis)->error(arg1);
}
// _ZN15QAbstractSocket5errorENS_11SocketErrorE error(class QAbstractSocket::SocketError)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 173, column 17>
//   // proto:  QAbstractSocket::SocketState QAbstractSocket::state();
extern "C"
void C_ZNK15QAbstractSocket5stateEv(void *qthis) {
  ((QAbstractSocket*)qthis)->state();
}
// _ZNK15QAbstractSocket5stateEv state()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 183, column 18>
//   // proto:  bool QAbstractSocket::waitForConnected(int msecs);
extern "C"
void C_ZN15QAbstractSocket16waitForConnectedEi(void *qthis, int arg1) {
  ((QAbstractSocket*)qthis)->waitForConnected(arg1);
}
// _ZN15QAbstractSocket16waitForConnectedEi waitForConnected(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 149, column 12>
//   // proto:  qint64 QAbstractSocket::bytesAvailable();
extern "C"
void C_ZNK15QAbstractSocket14bytesAvailableEv(void *qthis) {
  ((QAbstractSocket*)qthis)->bytesAvailable();
}
// _ZNK15QAbstractSocket14bytesAvailableEv bytesAvailable()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 178, column 10>
//   // proto:  bool QAbstractSocket::isSequential();
extern "C"
void C_ZNK15QAbstractSocket12isSequentialEv(void *qthis) {
  ((QAbstractSocket*)qthis)->isSequential();
}
// _ZNK15QAbstractSocket12isSequentialEv isSequential()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 147, column 10>
//   // proto:  bool QAbstractSocket::isValid();
extern "C"
void C_ZNK15QAbstractSocket7isValidEv(void *qthis) {
  ((QAbstractSocket*)qthis)->isValid();
}
// _ZNK15QAbstractSocket7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 194, column 10>
//   // proto:  void QAbstractSocket::hostFound();
extern "C"
void C_ZN15QAbstractSocket9hostFoundEv(void *qthis) {
  ((QAbstractSocket*)qthis)->hostFound();
}
// _ZN15QAbstractSocket9hostFoundEv hostFound()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 170, column 22>
//   // proto:  QVariant QAbstractSocket::socketOption(QAbstractSocket::SocketOption option);
extern "C"
void C_ZN15QAbstractSocket12socketOptionENS_12SocketOptionE(void *qthis, QAbstractSocket::SocketOption arg1) {
  ((QAbstractSocket*)qthis)->socketOption(arg1);
}
// _ZN15QAbstractSocket12socketOptionENS_12SocketOptionE socketOption(class QAbstractSocket::SocketOption)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 179, column 10>
//   // proto:  bool QAbstractSocket::atEnd();
extern "C"
void C_ZNK15QAbstractSocket5atEndEv(void *qthis) {
  ((QAbstractSocket*)qthis)->atEnd();
}
// _ZNK15QAbstractSocket5atEndEv atEnd()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 189, column 10>
//   // proto:  void QAbstractSocket::setProxy(const QNetworkProxy & networkProxy);
extern "C"
void C_ZN15QAbstractSocket8setProxyERK13QNetworkProxy(void *qthis, const QNetworkProxy & arg1) {
  ((QAbstractSocket*)qthis)->setProxy(arg1);
}
// _ZN15QAbstractSocket8setProxyERK13QNetworkProxy setProxy(const class QNetworkProxy &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractsocket.h', line 144, column 18>
//   // proto:  void QAbstractSocket::connectToHost(const QHostAddress & address, quint16 port, OpenMode mode);
extern "C"
void C_ZN15QAbstractSocket13connectToHostERK12QHostAddresst6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis, const QHostAddress & arg1, quint16 arg2, QIODevice::OpenMode arg3) {
  ((QAbstractSocket*)qthis)->connectToHost(arg1, arg2, arg3);
}
// _ZN15QAbstractSocket13connectToHostERK12QHostAddresst6QFlagsIN9QIODevice12OpenModeFlagEE connectToHost(const class QHostAddress &, quint16, OpenMode)
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

