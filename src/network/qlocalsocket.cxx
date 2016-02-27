// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qlocalsocket.h
// dst-file: /src/network/qlocalsocket.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qlocalsocket.h>


#include <qglobal.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qlocalsocket_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QLocalSocket_Class_Size()
{
  return sizeof(QLocalSocket);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 76, column 5>
//   // proto:  void QLocalSocket::QLocalSocket(QObject * parent);
extern "C"
QLocalSocket*
C_ZN12QLocalSocketC2EP7QObject(QObject * arg1) {
  auto ret = new QLocalSocket(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 97, column 12>
//   // proto:  qint64 QLocalSocket::readBufferSize();
// _ZNK12QLocalSocket14readBufferSizeEv readBufferSize()
extern "C"
long long
C_ZNK12QLocalSocket14readBufferSizeEv(void *qthis) {
  auto ret =
  ((QLocalSocket*)qthis)->readBufferSize();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 100, column 10>
//   // proto:  bool QLocalSocket::setSocketDescriptor(qintptr socketDescriptor, QLocalSocket::LocalSocketState socketState, OpenMode openMode);
// _ZN12QLocalSocket19setSocketDescriptorEiNS_16LocalSocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE setSocketDescriptor(qintptr, enum QLocalSocket::LocalSocketState, OpenMode)
extern "C"
bool
C_ZN12QLocalSocket19setSocketDescriptorEiNS_16LocalSocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
qintptr arg1,
QLocalSocket::LocalSocketState arg2,
QIODevice::OpenMode arg3) {
  auto ret =
  ((QLocalSocket*)qthis)->setSocketDescriptor(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 80, column 10>
//   // proto:  void QLocalSocket::connectToServer(const QString & name, OpenMode openMode);
// _ZN12QLocalSocket15connectToServerERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE connectToServer(const class QString &, OpenMode)
extern "C"
void
C_ZN12QLocalSocket15connectToServerERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
const QString* arg1,
QIODevice::OpenMode arg2) {
  ((QLocalSocket*)qthis)->connectToServer(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 85, column 13>
//   // proto:  QString QLocalSocket::fullServerName();
// _ZNK12QLocalSocket14fullServerNameEv fullServerName()
extern "C"
QString*
C_ZNK12QLocalSocket14fullServerNameEv(void *qthis) {
  auto ret =
  ((QLocalSocket*)qthis)->fullServerName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 81, column 10>
//   // proto:  void QLocalSocket::disconnectFromServer();
// _ZN12QLocalSocket20disconnectFromServerEv disconnectFromServer()
extern "C"
void
C_ZN12QLocalSocket20disconnectFromServerEv(void *qthis) {
  ((QLocalSocket*)qthis)->disconnectFromServer();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 94, column 22>
//   // proto:  QLocalSocket::LocalSocketError QLocalSocket::error();
// _ZNK12QLocalSocket5errorEv error()
extern "C"
QLocalSocket::LocalSocketError
C_ZNK12QLocalSocket5errorEv(void *qthis) {
  auto ret =
  ((QLocalSocket*)qthis)->error();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 112, column 10>
//   // proto:  void QLocalSocket::connected();
// _ZN12QLocalSocket9connectedEv connected()
extern "C"
void
C_ZN12QLocalSocket9connectedEv(void *qthis) {
  ((QLocalSocket*)qthis)->connected();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 106, column 10>
//   // proto:  bool QLocalSocket::waitForBytesWritten(int msecs);
// _ZN12QLocalSocket19waitForBytesWrittenEi waitForBytesWritten(int)
extern "C"
bool
C_ZN12QLocalSocket19waitForBytesWrittenEi(void *qthis,
int arg1) {
  auto ret =
  ((QLocalSocket*)qthis)->waitForBytesWritten(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 92, column 18>
//   // proto:  bool QLocalSocket::open(OpenMode openMode);
// _ZN12QLocalSocket4openE6QFlagsIN9QIODevice12OpenModeFlagEE open(OpenMode)
extern "C"
bool
C_ZN12QLocalSocket4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
QIODevice::OpenMode arg1) {
  auto ret =
  ((QLocalSocket*)qthis)->open(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 103, column 13>
//   // proto:  qintptr QLocalSocket::socketDescriptor();
// _ZNK12QLocalSocket16socketDescriptorEv socketDescriptor()
extern "C"
int
C_ZNK12QLocalSocket16socketDescriptorEv(void *qthis) {
  auto ret =
  ((QLocalSocket*)qthis)->socketDescriptor();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 115, column 10>
//   // proto:  void QLocalSocket::stateChanged(QLocalSocket::LocalSocketState socketState);
// _ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE stateChanged(class QLocalSocket::LocalSocketState)
extern "C"
void
C_ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(void *qthis,
QLocalSocket::LocalSocketState* arg1) {
  ((QLocalSocket*)qthis)->stateChanged(*((QLocalSocket::LocalSocketState*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 89, column 20>
//   // proto:  qint64 QLocalSocket::bytesAvailable();
// _ZNK12QLocalSocket14bytesAvailableEv bytesAvailable()
extern "C"
long long
C_ZNK12QLocalSocket14bytesAvailableEv(void *qthis) {
  auto ret =
  ((QLocalSocket*)qthis)->bytesAvailable();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 83, column 10>
//   // proto:  void QLocalSocket::setServerName(const QString & name);
// _ZN12QLocalSocket13setServerNameERK7QString setServerName(const class QString &)
extern "C"
void
C_ZN12QLocalSocket13setServerNameERK7QString(void *qthis,
const QString* arg1) {
  ((QLocalSocket*)qthis)->setServerName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 98, column 10>
//   // proto:  void QLocalSocket::setReadBufferSize(qint64 size);
// _ZN12QLocalSocket17setReadBufferSizeEx setReadBufferSize(qint64)
extern "C"
void
C_ZN12QLocalSocket17setReadBufferSizeEx(void *qthis,
qint64 arg1) {
  ((QLocalSocket*)qthis)->setReadBufferSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 93, column 18>
//   // proto:  void QLocalSocket::close();
// _ZN12QLocalSocket5closeEv close()
extern "C"
void
C_ZN12QLocalSocket5closeEv(void *qthis) {
  ((QLocalSocket*)qthis)->close();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 96, column 10>
//   // proto:  bool QLocalSocket::isValid();
// _ZNK12QLocalSocket7isValidEv isValid()
extern "C"
bool
C_ZNK12QLocalSocket7isValidEv(void *qthis) {
  auto ret =
  ((QLocalSocket*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 114, column 10>
//   // proto:  void QLocalSocket::error(QLocalSocket::LocalSocketError socketError);
// _ZN12QLocalSocket5errorENS_16LocalSocketErrorE error(class QLocalSocket::LocalSocketError)
extern "C"
void
C_ZN12QLocalSocket5errorENS_16LocalSocketErrorE(void *qthis,
QLocalSocket::LocalSocketError* arg1) {
  ((QLocalSocket*)qthis)->error(*((QLocalSocket::LocalSocketError*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 95, column 10>
//   // proto:  bool QLocalSocket::flush();
// _ZN12QLocalSocket5flushEv flush()
extern "C"
bool
C_ZN12QLocalSocket5flushEv(void *qthis) {
  auto ret =
  ((QLocalSocket*)qthis)->flush();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 91, column 18>
//   // proto:  bool QLocalSocket::canReadLine();
// _ZNK12QLocalSocket11canReadLineEv canReadLine()
extern "C"
bool
C_ZNK12QLocalSocket11canReadLineEv(void *qthis) {
  auto ret =
  ((QLocalSocket*)qthis)->canReadLine();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 49, column 5>
//   // proto:  const QMetaObject * QLocalSocket::metaObject();
// _ZNK12QLocalSocket10metaObjectEv metaObject()
extern "C"
void*
C_ZNK12QLocalSocket10metaObjectEv(void *qthis) {
  auto ret =
  ((QLocalSocket*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 113, column 10>
//   // proto:  void QLocalSocket::disconnected();
// _ZN12QLocalSocket12disconnectedEv disconnected()
extern "C"
void
C_ZN12QLocalSocket12disconnectedEv(void *qthis) {
  ((QLocalSocket*)qthis)->disconnected();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 88, column 18>
//   // proto:  bool QLocalSocket::isSequential();
// _ZNK12QLocalSocket12isSequentialEv isSequential()
extern "C"
bool
C_ZNK12QLocalSocket12isSequentialEv(void *qthis) {
  auto ret =
  ((QLocalSocket*)qthis)->isSequential();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 90, column 20>
//   // proto:  qint64 QLocalSocket::bytesToWrite();
// _ZNK12QLocalSocket12bytesToWriteEv bytesToWrite()
extern "C"
long long
C_ZNK12QLocalSocket12bytesToWriteEv(void *qthis) {
  auto ret =
  ((QLocalSocket*)qthis)->bytesToWrite();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 108, column 10>
//   // proto:  bool QLocalSocket::waitForDisconnected(int msecs);
// _ZN12QLocalSocket19waitForDisconnectedEi waitForDisconnected(int)
extern "C"
bool
C_ZN12QLocalSocket19waitForDisconnectedEi(void *qthis,
int arg1) {
  auto ret =
  ((QLocalSocket*)qthis)->waitForDisconnected(arg1);
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QLocalSocket::~QLocalSocket();
extern "C"
void C_ZN12QLocalSocketD2Ev(void *qthis) {
  delete (QLocalSocket*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 105, column 22>
//   // proto:  QLocalSocket::LocalSocketState QLocalSocket::state();
// _ZNK12QLocalSocket5stateEv state()
extern "C"
QLocalSocket::LocalSocketState
C_ZNK12QLocalSocket5stateEv(void *qthis) {
  auto ret =
  ((QLocalSocket*)qthis)->state();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 107, column 10>
//   // proto:  bool QLocalSocket::waitForConnected(int msecs);
// _ZN12QLocalSocket16waitForConnectedEi waitForConnected(int)
extern "C"
bool
C_ZN12QLocalSocket16waitForConnectedEi(void *qthis,
int arg1) {
  auto ret =
  ((QLocalSocket*)qthis)->waitForConnected(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 109, column 10>
//   // proto:  bool QLocalSocket::waitForReadyRead(int msecs);
// _ZN12QLocalSocket16waitForReadyReadEi waitForReadyRead(int)
extern "C"
bool
C_ZN12QLocalSocket16waitForReadyReadEi(void *qthis,
int arg1) {
  auto ret =
  ((QLocalSocket*)qthis)->waitForReadyRead(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 79, column 10>
//   // proto:  void QLocalSocket::connectToServer(OpenMode openMode);
// _ZN12QLocalSocket15connectToServerE6QFlagsIN9QIODevice12OpenModeFlagEE connectToServer(OpenMode)
extern "C"
void
C_ZN12QLocalSocket15connectToServerE6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
QIODevice::OpenMode arg1) {
  ((QLocalSocket*)qthis)->connectToServer(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 87, column 10>
//   // proto:  void QLocalSocket::abort();
// _ZN12QLocalSocket5abortEv abort()
extern "C"
void
C_ZN12QLocalSocket5abortEv(void *qthis) {
  ((QLocalSocket*)qthis)->abort();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 84, column 13>
//   // proto:  QString QLocalSocket::serverName();
// _ZNK12QLocalSocket10serverNameEv serverName()
extern "C"
QString*
C_ZNK12QLocalSocket10serverNameEv(void *qthis) {
  auto ret =
  ((QLocalSocket*)qthis)->serverName();
  return new QString(ret); // 5
}
// <= ext block end

// body block begin =>
// QLocalSocket_SlotProxy here
class QLocalSocket_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QLocalSocket_SlotProxy():QObject(){}

public slots:
  // disconnected()
  void slot_proxy_func__ZN12QLocalSocket12disconnectedEv();
public:
  void (*slot_func__ZN12QLocalSocket12disconnectedEv)(void* rsfptr) = NULL;
public slots:
  // connected()
  void slot_proxy_func__ZN12QLocalSocket9connectedEv();
public:
  void (*slot_func__ZN12QLocalSocket9connectedEv)(void* rsfptr) = NULL;
public slots:
  // stateChanged(class QLocalSocket::LocalSocketState)
  void slot_proxy_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(QLocalSocket::LocalSocketState arg0);
public:
  void (*slot_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE)(void* rsfptr, QLocalSocket::LocalSocketState arg0) = NULL;
public slots:
  // error(class QLocalSocket::LocalSocketError)
  void slot_proxy_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE(QLocalSocket::LocalSocketError arg0);
public:
  void (*slot_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE)(void* rsfptr, QLocalSocket::LocalSocketError arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/network/qlocalsocket.moc"

extern "C" {
  QLocalSocket_SlotProxy* QLocalSocket_SlotProxy_new()
  {
    return new QLocalSocket_SlotProxy();
  }
};

void QLocalSocket_SlotProxy::slot_proxy_func__ZN12QLocalSocket12disconnectedEv() {
  if (this->slot_func__ZN12QLocalSocket12disconnectedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QLocalSocket12disconnectedEv(this->rsfptr);
  }
}
extern "C"
void* QLocalSocket_SlotProxy_connect__ZN12QLocalSocket12disconnectedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLocalSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QLocalSocket12disconnectedEv = (decltype(that->slot_func__ZN12QLocalSocket12disconnectedEv))ffifptr;
  QObject::connect((QLocalSocket*)sender, SIGNAL(disconnected()), that, SLOT(slot_proxy_func__ZN12QLocalSocket12disconnectedEv()));
  return that;
}
extern "C"
void QLocalSocket_SlotProxy_disconnect__ZN12QLocalSocket12disconnectedEv(QLocalSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLocalSocket_SlotProxy::slot_proxy_func__ZN12QLocalSocket9connectedEv() {
  if (this->slot_func__ZN12QLocalSocket9connectedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QLocalSocket9connectedEv(this->rsfptr);
  }
}
extern "C"
void* QLocalSocket_SlotProxy_connect__ZN12QLocalSocket9connectedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLocalSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QLocalSocket9connectedEv = (decltype(that->slot_func__ZN12QLocalSocket9connectedEv))ffifptr;
  QObject::connect((QLocalSocket*)sender, SIGNAL(connected()), that, SLOT(slot_proxy_func__ZN12QLocalSocket9connectedEv()));
  return that;
}
extern "C"
void QLocalSocket_SlotProxy_disconnect__ZN12QLocalSocket9connectedEv(QLocalSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLocalSocket_SlotProxy::slot_proxy_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(QLocalSocket::LocalSocketState arg0) {
  if (this->slot_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE != NULL) {
    // do smth...
    this->slot_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(this->rsfptr, arg0);
  }
}
extern "C"
void* QLocalSocket_SlotProxy_connect__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLocalSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE = (decltype(that->slot_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE))ffifptr;
  QObject::connect((QLocalSocket*)sender, SIGNAL(stateChanged(class QLocalSocket::LocalSocketState)), that, SLOT(slot_proxy_func__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(QLocalSocket::LocalSocketState arg0)));
  return that;
}
extern "C"
void QLocalSocket_SlotProxy_disconnect__ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(QLocalSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLocalSocket_SlotProxy::slot_proxy_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE(QLocalSocket::LocalSocketError arg0) {
  if (this->slot_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE != NULL) {
    // do smth...
    this->slot_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE(this->rsfptr, arg0);
  }
}
extern "C"
void* QLocalSocket_SlotProxy_connect__ZN12QLocalSocket5errorENS_16LocalSocketErrorE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLocalSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE = (decltype(that->slot_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE))ffifptr;
  QObject::connect((QLocalSocket*)sender, SIGNAL(error(class QLocalSocket::LocalSocketError)), that, SLOT(slot_proxy_func__ZN12QLocalSocket5errorENS_16LocalSocketErrorE(QLocalSocket::LocalSocketError arg0)));
  return that;
}
extern "C"
void QLocalSocket_SlotProxy_disconnect__ZN12QLocalSocket5errorENS_16LocalSocketErrorE(QLocalSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

