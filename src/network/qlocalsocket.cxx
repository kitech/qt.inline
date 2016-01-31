#include <qstring.h>
#include <qglobal.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qlocalsocket.h
// dst-file: /src/network/qlocalsocket.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qlocalsocket.h>

extern "C" {

int QLocalSocket_Class_Size()
{
  return sizeof(QLocalSocket);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qlocalsocket_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 76, column 5>
//   // proto:  void QLocalSocket::QLocalSocket(QObject * parent);
if (true) {
  auto f = [](QObject * arg1) {
    new QLocalSocket(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 97, column 12>
//   // proto:  qint64 QLocalSocket::readBufferSize();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->readBufferSize();
    flythis.readBufferSize();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalSocket14readBufferSizeEv readBufferSize()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 100, column 10>
//   // proto:  bool QLocalSocket::setSocketDescriptor(qintptr socketDescriptor, QLocalSocket::LocalSocketState socketState, OpenMode openMode);
if (true) {
  auto f = [](QLocalSocket flythis, qintptr arg1, QLocalSocket::LocalSocketState arg2, QIODevice::OpenMode arg3) {
    ((QLocalSocket*)0)->setSocketDescriptor(arg1, arg2, arg3);
    flythis.setSocketDescriptor(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket19setSocketDescriptorEiNS_16LocalSocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE setSocketDescriptor(qintptr, enum QLocalSocket::LocalSocketState, OpenMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 80, column 10>
//   // proto:  void QLocalSocket::connectToServer(const QString & name, OpenMode openMode);
if (true) {
  auto f = [](QLocalSocket flythis, const QString & arg1, QIODevice::OpenMode arg2) {
    ((QLocalSocket*)0)->connectToServer(arg1, arg2);
    flythis.connectToServer(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket15connectToServerERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE connectToServer(const class QString &, OpenMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 85, column 13>
//   // proto:  QString QLocalSocket::fullServerName();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->fullServerName();
    flythis.fullServerName();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalSocket14fullServerNameEv fullServerName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 81, column 10>
//   // proto:  void QLocalSocket::disconnectFromServer();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->disconnectFromServer();
    flythis.disconnectFromServer();
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket20disconnectFromServerEv disconnectFromServer()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 94, column 22>
//   // proto:  QLocalSocket::LocalSocketError QLocalSocket::error();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->error();
    flythis.error();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalSocket5errorEv error()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 112, column 10>
//   // proto:  void QLocalSocket::connected();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->connected();
    flythis.connected();
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket9connectedEv connected()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 106, column 10>
//   // proto:  bool QLocalSocket::waitForBytesWritten(int msecs);
if (true) {
  auto f = [](QLocalSocket flythis, int arg1) {
    ((QLocalSocket*)0)->waitForBytesWritten(arg1);
    flythis.waitForBytesWritten(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket19waitForBytesWrittenEi waitForBytesWritten(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 92, column 18>
//   // proto:  bool QLocalSocket::open(OpenMode openMode);
if (true) {
  auto f = [](QLocalSocket flythis, QIODevice::OpenMode arg1) {
    ((QLocalSocket*)0)->open(arg1);
    flythis.open(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket4openE6QFlagsIN9QIODevice12OpenModeFlagEE open(OpenMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 103, column 13>
//   // proto:  qintptr QLocalSocket::socketDescriptor();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->socketDescriptor();
    flythis.socketDescriptor();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalSocket16socketDescriptorEv socketDescriptor()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 115, column 10>
//   // proto:  void QLocalSocket::stateChanged(QLocalSocket::LocalSocketState socketState);
if (true) {
  auto f = [](QLocalSocket flythis, QLocalSocket::LocalSocketState arg1) {
    ((QLocalSocket*)0)->stateChanged(arg1);
    flythis.stateChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE stateChanged(class QLocalSocket::LocalSocketState)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 89, column 20>
//   // proto:  qint64 QLocalSocket::bytesAvailable();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->bytesAvailable();
    flythis.bytesAvailable();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalSocket14bytesAvailableEv bytesAvailable()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 83, column 10>
//   // proto:  void QLocalSocket::setServerName(const QString & name);
if (true) {
  auto f = [](QLocalSocket flythis, const QString & arg1) {
    ((QLocalSocket*)0)->setServerName(arg1);
    flythis.setServerName(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket13setServerNameERK7QString setServerName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 98, column 10>
//   // proto:  void QLocalSocket::setReadBufferSize(qint64 size);
if (true) {
  auto f = [](QLocalSocket flythis, qint64 arg1) {
    ((QLocalSocket*)0)->setReadBufferSize(arg1);
    flythis.setReadBufferSize(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket17setReadBufferSizeEx setReadBufferSize(qint64)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 93, column 18>
//   // proto:  void QLocalSocket::close();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->close();
    flythis.close();
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket5closeEv close()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 96, column 10>
//   // proto:  bool QLocalSocket::isValid();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalSocket7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 114, column 10>
//   // proto:  void QLocalSocket::error(QLocalSocket::LocalSocketError socketError);
if (true) {
  auto f = [](QLocalSocket flythis, QLocalSocket::LocalSocketError arg1) {
    ((QLocalSocket*)0)->error(arg1);
    flythis.error(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket5errorENS_16LocalSocketErrorE error(class QLocalSocket::LocalSocketError)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 95, column 10>
//   // proto:  bool QLocalSocket::flush();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->flush();
    flythis.flush();
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket5flushEv flush()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 91, column 18>
//   // proto:  bool QLocalSocket::canReadLine();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->canReadLine();
    flythis.canReadLine();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalSocket11canReadLineEv canReadLine()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 49, column 5>
//   // proto:  const QMetaObject * QLocalSocket::metaObject();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalSocket10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 113, column 10>
//   // proto:  void QLocalSocket::disconnected();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->disconnected();
    flythis.disconnected();
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket12disconnectedEv disconnected()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 88, column 18>
//   // proto:  bool QLocalSocket::isSequential();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->isSequential();
    flythis.isSequential();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalSocket12isSequentialEv isSequential()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 90, column 20>
//   // proto:  qint64 QLocalSocket::bytesToWrite();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->bytesToWrite();
    flythis.bytesToWrite();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalSocket12bytesToWriteEv bytesToWrite()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 108, column 10>
//   // proto:  bool QLocalSocket::waitForDisconnected(int msecs);
if (true) {
  auto f = [](QLocalSocket flythis, int arg1) {
    ((QLocalSocket*)0)->waitForDisconnected(arg1);
    flythis.waitForDisconnected(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket19waitForDisconnectedEi waitForDisconnected(int)
//   // proto:  void QLocalSocket::~QLocalSocket();
if (true) {
  delete ((QLocalSocket*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 105, column 22>
//   // proto:  QLocalSocket::LocalSocketState QLocalSocket::state();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->state();
    flythis.state();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalSocket5stateEv state()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 107, column 10>
//   // proto:  bool QLocalSocket::waitForConnected(int msecs);
if (true) {
  auto f = [](QLocalSocket flythis, int arg1) {
    ((QLocalSocket*)0)->waitForConnected(arg1);
    flythis.waitForConnected(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket16waitForConnectedEi waitForConnected(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 109, column 10>
//   // proto:  bool QLocalSocket::waitForReadyRead(int msecs);
if (true) {
  auto f = [](QLocalSocket flythis, int arg1) {
    ((QLocalSocket*)0)->waitForReadyRead(arg1);
    flythis.waitForReadyRead(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket16waitForReadyReadEi waitForReadyRead(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 79, column 10>
//   // proto:  void QLocalSocket::connectToServer(OpenMode openMode);
if (true) {
  auto f = [](QLocalSocket flythis, QIODevice::OpenMode arg1) {
    ((QLocalSocket*)0)->connectToServer(arg1);
    flythis.connectToServer(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket15connectToServerE6QFlagsIN9QIODevice12OpenModeFlagEE connectToServer(OpenMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 87, column 10>
//   // proto:  void QLocalSocket::abort();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->abort();
    flythis.abort();
  };
  if (f == nullptr){}
}
// _ZN12QLocalSocket5abortEv abort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 84, column 13>
//   // proto:  QString QLocalSocket::serverName();
if (true) {
  auto f = [](QLocalSocket flythis) {
    ((QLocalSocket*)0)->serverName();
    flythis.serverName();
  };
  if (f == nullptr){}
}
// _ZNK12QLocalSocket10serverNameEv serverName()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 76, column 5>
//   // proto:  void QLocalSocket::QLocalSocket(QObject * parent);
extern "C"
void C_ZN12QLocalSocketC2EP7QObject(QObject * arg1) {
  new QLocalSocket(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 97, column 12>
//   // proto:  qint64 QLocalSocket::readBufferSize();
extern "C"
void C_ZNK12QLocalSocket14readBufferSizeEv(void *qthis) {
  ((QLocalSocket*)qthis)->readBufferSize();
}
// _ZNK12QLocalSocket14readBufferSizeEv readBufferSize()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 100, column 10>
//   // proto:  bool QLocalSocket::setSocketDescriptor(qintptr socketDescriptor, QLocalSocket::LocalSocketState socketState, OpenMode openMode);
extern "C"
void C_ZN12QLocalSocket19setSocketDescriptorEiNS_16LocalSocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis, qintptr arg1, QLocalSocket::LocalSocketState arg2, QIODevice::OpenMode arg3) {
  ((QLocalSocket*)qthis)->setSocketDescriptor(arg1, arg2, arg3);
}
// _ZN12QLocalSocket19setSocketDescriptorEiNS_16LocalSocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE setSocketDescriptor(qintptr, enum QLocalSocket::LocalSocketState, OpenMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 80, column 10>
//   // proto:  void QLocalSocket::connectToServer(const QString & name, OpenMode openMode);
extern "C"
void C_ZN12QLocalSocket15connectToServerERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis, const QString & arg1, QIODevice::OpenMode arg2) {
  ((QLocalSocket*)qthis)->connectToServer(arg1, arg2);
}
// _ZN12QLocalSocket15connectToServerERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE connectToServer(const class QString &, OpenMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 85, column 13>
//   // proto:  QString QLocalSocket::fullServerName();
extern "C"
void C_ZNK12QLocalSocket14fullServerNameEv(void *qthis) {
  ((QLocalSocket*)qthis)->fullServerName();
}
// _ZNK12QLocalSocket14fullServerNameEv fullServerName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 81, column 10>
//   // proto:  void QLocalSocket::disconnectFromServer();
extern "C"
void C_ZN12QLocalSocket20disconnectFromServerEv(void *qthis) {
  ((QLocalSocket*)qthis)->disconnectFromServer();
}
// _ZN12QLocalSocket20disconnectFromServerEv disconnectFromServer()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 94, column 22>
//   // proto:  QLocalSocket::LocalSocketError QLocalSocket::error();
extern "C"
void C_ZNK12QLocalSocket5errorEv(void *qthis) {
  ((QLocalSocket*)qthis)->error();
}
// _ZNK12QLocalSocket5errorEv error()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 112, column 10>
//   // proto:  void QLocalSocket::connected();
extern "C"
void C_ZN12QLocalSocket9connectedEv(void *qthis) {
  ((QLocalSocket*)qthis)->connected();
}
// _ZN12QLocalSocket9connectedEv connected()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 106, column 10>
//   // proto:  bool QLocalSocket::waitForBytesWritten(int msecs);
extern "C"
void C_ZN12QLocalSocket19waitForBytesWrittenEi(void *qthis, int arg1) {
  ((QLocalSocket*)qthis)->waitForBytesWritten(arg1);
}
// _ZN12QLocalSocket19waitForBytesWrittenEi waitForBytesWritten(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 92, column 18>
//   // proto:  bool QLocalSocket::open(OpenMode openMode);
extern "C"
void C_ZN12QLocalSocket4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis, QIODevice::OpenMode arg1) {
  ((QLocalSocket*)qthis)->open(arg1);
}
// _ZN12QLocalSocket4openE6QFlagsIN9QIODevice12OpenModeFlagEE open(OpenMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 103, column 13>
//   // proto:  qintptr QLocalSocket::socketDescriptor();
extern "C"
void C_ZNK12QLocalSocket16socketDescriptorEv(void *qthis) {
  ((QLocalSocket*)qthis)->socketDescriptor();
}
// _ZNK12QLocalSocket16socketDescriptorEv socketDescriptor()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 115, column 10>
//   // proto:  void QLocalSocket::stateChanged(QLocalSocket::LocalSocketState socketState);
extern "C"
void C_ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(void *qthis, QLocalSocket::LocalSocketState arg1) {
  ((QLocalSocket*)qthis)->stateChanged(arg1);
}
// _ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE stateChanged(class QLocalSocket::LocalSocketState)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 89, column 20>
//   // proto:  qint64 QLocalSocket::bytesAvailable();
extern "C"
void C_ZNK12QLocalSocket14bytesAvailableEv(void *qthis) {
  ((QLocalSocket*)qthis)->bytesAvailable();
}
// _ZNK12QLocalSocket14bytesAvailableEv bytesAvailable()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 83, column 10>
//   // proto:  void QLocalSocket::setServerName(const QString & name);
extern "C"
void C_ZN12QLocalSocket13setServerNameERK7QString(void *qthis, const QString & arg1) {
  ((QLocalSocket*)qthis)->setServerName(arg1);
}
// _ZN12QLocalSocket13setServerNameERK7QString setServerName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 98, column 10>
//   // proto:  void QLocalSocket::setReadBufferSize(qint64 size);
extern "C"
void C_ZN12QLocalSocket17setReadBufferSizeEx(void *qthis, qint64 arg1) {
  ((QLocalSocket*)qthis)->setReadBufferSize(arg1);
}
// _ZN12QLocalSocket17setReadBufferSizeEx setReadBufferSize(qint64)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 93, column 18>
//   // proto:  void QLocalSocket::close();
extern "C"
void C_ZN12QLocalSocket5closeEv(void *qthis) {
  ((QLocalSocket*)qthis)->close();
}
// _ZN12QLocalSocket5closeEv close()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 96, column 10>
//   // proto:  bool QLocalSocket::isValid();
extern "C"
void C_ZNK12QLocalSocket7isValidEv(void *qthis) {
  ((QLocalSocket*)qthis)->isValid();
}
// _ZNK12QLocalSocket7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 114, column 10>
//   // proto:  void QLocalSocket::error(QLocalSocket::LocalSocketError socketError);
extern "C"
void C_ZN12QLocalSocket5errorENS_16LocalSocketErrorE(void *qthis, QLocalSocket::LocalSocketError arg1) {
  ((QLocalSocket*)qthis)->error(arg1);
}
// _ZN12QLocalSocket5errorENS_16LocalSocketErrorE error(class QLocalSocket::LocalSocketError)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 95, column 10>
//   // proto:  bool QLocalSocket::flush();
extern "C"
void C_ZN12QLocalSocket5flushEv(void *qthis) {
  ((QLocalSocket*)qthis)->flush();
}
// _ZN12QLocalSocket5flushEv flush()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 91, column 18>
//   // proto:  bool QLocalSocket::canReadLine();
extern "C"
void C_ZNK12QLocalSocket11canReadLineEv(void *qthis) {
  ((QLocalSocket*)qthis)->canReadLine();
}
// _ZNK12QLocalSocket11canReadLineEv canReadLine()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 49, column 5>
//   // proto:  const QMetaObject * QLocalSocket::metaObject();
extern "C"
void C_ZNK12QLocalSocket10metaObjectEv(void *qthis) {
  ((QLocalSocket*)qthis)->metaObject();
}
// _ZNK12QLocalSocket10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 113, column 10>
//   // proto:  void QLocalSocket::disconnected();
extern "C"
void C_ZN12QLocalSocket12disconnectedEv(void *qthis) {
  ((QLocalSocket*)qthis)->disconnected();
}
// _ZN12QLocalSocket12disconnectedEv disconnected()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 88, column 18>
//   // proto:  bool QLocalSocket::isSequential();
extern "C"
void C_ZNK12QLocalSocket12isSequentialEv(void *qthis) {
  ((QLocalSocket*)qthis)->isSequential();
}
// _ZNK12QLocalSocket12isSequentialEv isSequential()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 90, column 20>
//   // proto:  qint64 QLocalSocket::bytesToWrite();
extern "C"
void C_ZNK12QLocalSocket12bytesToWriteEv(void *qthis) {
  ((QLocalSocket*)qthis)->bytesToWrite();
}
// _ZNK12QLocalSocket12bytesToWriteEv bytesToWrite()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 108, column 10>
//   // proto:  bool QLocalSocket::waitForDisconnected(int msecs);
extern "C"
void C_ZN12QLocalSocket19waitForDisconnectedEi(void *qthis, int arg1) {
  ((QLocalSocket*)qthis)->waitForDisconnected(arg1);
}
// _ZN12QLocalSocket19waitForDisconnectedEi waitForDisconnected(int)
//   // proto:  void QLocalSocket::~QLocalSocket();
extern "C"
void C_ZN12QLocalSocketD2Ev(void *qthis) {
  delete (QLocalSocket*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 105, column 22>
//   // proto:  QLocalSocket::LocalSocketState QLocalSocket::state();
extern "C"
void C_ZNK12QLocalSocket5stateEv(void *qthis) {
  ((QLocalSocket*)qthis)->state();
}
// _ZNK12QLocalSocket5stateEv state()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 107, column 10>
//   // proto:  bool QLocalSocket::waitForConnected(int msecs);
extern "C"
void C_ZN12QLocalSocket16waitForConnectedEi(void *qthis, int arg1) {
  ((QLocalSocket*)qthis)->waitForConnected(arg1);
}
// _ZN12QLocalSocket16waitForConnectedEi waitForConnected(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 109, column 10>
//   // proto:  bool QLocalSocket::waitForReadyRead(int msecs);
extern "C"
void C_ZN12QLocalSocket16waitForReadyReadEi(void *qthis, int arg1) {
  ((QLocalSocket*)qthis)->waitForReadyRead(arg1);
}
// _ZN12QLocalSocket16waitForReadyReadEi waitForReadyRead(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 79, column 10>
//   // proto:  void QLocalSocket::connectToServer(OpenMode openMode);
extern "C"
void C_ZN12QLocalSocket15connectToServerE6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis, QIODevice::OpenMode arg1) {
  ((QLocalSocket*)qthis)->connectToServer(arg1);
}
// _ZN12QLocalSocket15connectToServerE6QFlagsIN9QIODevice12OpenModeFlagEE connectToServer(OpenMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 87, column 10>
//   // proto:  void QLocalSocket::abort();
extern "C"
void C_ZN12QLocalSocket5abortEv(void *qthis) {
  ((QLocalSocket*)qthis)->abort();
}
// _ZN12QLocalSocket5abortEv abort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qlocalsocket.h', line 84, column 13>
//   // proto:  QString QLocalSocket::serverName();
extern "C"
void C_ZNK12QLocalSocket10serverNameEv(void *qthis) {
  ((QLocalSocket*)qthis)->serverName();
}
// _ZNK12QLocalSocket10serverNameEv serverName()
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

