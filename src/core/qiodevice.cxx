// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qiodevice.h
// dst-file: /src/core/qiodevice.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qiodevice.h>


#include <qstring.h>
#include <qglobal.h>
#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qiodevice_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 134, column 19>
//   // proto:  qint64 QIODevice::write(const QByteArray & data);
if (true) {
  auto f = [](const QByteArray & arg1) {
    ((QIODevice*)0)->write(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QIODevice5writeERK10QByteArray write(const class QByteArray &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QIODevice_Class_Size()
{
  return sizeof(QIODevice);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 154, column 10>
//   // proto:  void QIODevice::channelBytesWritten(int channel, qint64 bytes);
// _ZN9QIODevice19channelBytesWrittenEix channelBytesWritten(int, qint64)
extern "C"
void
C_ZN9QIODevice19channelBytesWrittenEix(void *qthis,
int arg1,
qint64 arg2) {
  ((QIODevice*)qthis)->channelBytesWritten(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 104, column 10>
//   // proto:  void QIODevice::setCurrentWriteChannel(int channel);
// _ZN9QIODevice22setCurrentWriteChannelEi setCurrentWriteChannel(int)
extern "C"
void
C_ZN9QIODevice22setCurrentWriteChannelEi(void *qthis,
int arg1) {
  ((QIODevice*)qthis)->setCurrentWriteChannel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 143, column 10>
//   // proto:  void QIODevice::ungetChar(char c);
// _ZN9QIODevice9ungetCharEc ungetChar(char)
extern "C"
void
C_ZN9QIODevice9ungetCharEc(void *qthis,
char arg1) {
  ((QIODevice*)qthis)->ungetChar(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 147, column 13>
//   // proto:  QString QIODevice::errorString();
// _ZNK9QIODevice11errorStringEv errorString()
extern "C"
QString*
C_ZNK9QIODevice11errorStringEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 101, column 9>
//   // proto:  int QIODevice::currentReadChannel();
// _ZNK9QIODevice18currentReadChannelEv currentReadChannel()
extern "C"
int
C_ZNK9QIODevice18currentReadChannelEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->currentReadChannel();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 100, column 9>
//   // proto:  int QIODevice::writeChannelCount();
// _ZNK9QIODevice17writeChannelCountEv writeChannelCount()
extern "C"
int
C_ZNK9QIODevice17writeChannelCountEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->writeChannelCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 134, column 19>
//   // proto:  qint64 QIODevice::write(const QByteArray & data);
// _ZN9QIODevice5writeERK10QByteArray write(const class QByteArray &)
extern "C"
long long
C_ZN9QIODevice5writeERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QIODevice*)qthis)->write(*((const QByteArray*)arg1));
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 133, column 12>
//   // proto:  qint64 QIODevice::write(const char * data);
// _ZN9QIODevice5writeEPKc write(const char *)
extern "C"
long long
C_ZN9QIODevice5writeEPKc(void *qthis,
const char * arg1) {
  auto ret =
  ((QIODevice*)qthis)->write(arg1);
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 95, column 10>
//   // proto:  bool QIODevice::isReadable();
// _ZNK9QIODevice10isReadableEv isReadable()
extern "C"
bool
C_ZNK9QIODevice10isReadableEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->isReadable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 151, column 10>
//   // proto:  void QIODevice::readyRead();
// _ZN9QIODevice9readyReadEv readyRead()
extern "C"
void
C_ZN9QIODevice9readyReadEv(void *qthis) {
  ((QIODevice*)qthis)->readyRead();
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 127, column 10>
//   // proto:  void QIODevice::startTransaction();
// _ZN9QIODevice16startTransactionEv startTransaction()
extern "C"
void
C_ZN9QIODevice16startTransactionEv(void *qthis) {
  ((QIODevice*)qthis)->startTransaction();
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 123, column 12>
//   // proto:  qint64 QIODevice::readLine(char * data, qint64 maxlen);
// _ZN9QIODevice8readLineEPcx readLine(char *, qint64)
extern "C"
long long
C_ZN9QIODevice8readLineEPcx(void *qthis,
char * arg1,
qint64 arg2) {
  auto ret =
  ((QIODevice*)qthis)->readLine(arg1,
arg2);
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 89, column 14>
//   // proto:  OpenMode QIODevice::openMode();
// _ZNK9QIODevice8openModeEv openMode()
extern "C"
QFlags<QIODevice::OpenModeFlag>*
C_ZNK9QIODevice8openModeEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->openMode();
  return new QFlags<QIODevice::OpenModeFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 124, column 16>
//   // proto:  QByteArray QIODevice::readLine(qint64 maxlen);
// _ZN9QIODevice8readLineEx readLine(qint64)
extern "C"
QByteArray*
C_ZN9QIODevice8readLineEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QIODevice*)qthis)->readLine(arg1);
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 140, column 18>
//   // proto:  bool QIODevice::waitForReadyRead(int msecs);
// _ZN9QIODevice16waitForReadyReadEi waitForReadyRead(int)
extern "C"
bool
C_ZN9QIODevice16waitForReadyReadEi(void *qthis,
int arg1) {
  auto ret =
  ((QIODevice*)qthis)->waitForReadyRead(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 155, column 10>
//   // proto:  void QIODevice::aboutToClose();
// _ZN9QIODevice12aboutToCloseEv aboutToClose()
extern "C"
void
C_ZN9QIODevice12aboutToCloseEv(void *qthis) {
  ((QIODevice*)qthis)->aboutToClose();
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 129, column 10>
//   // proto:  void QIODevice::rollbackTransaction();
// _ZN9QIODevice19rollbackTransactionEv rollbackTransaction()
extern "C"
void
C_ZN9QIODevice19rollbackTransactionEv(void *qthis) {
  ((QIODevice*)qthis)->rollbackTransaction();
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 112, column 20>
//   // proto:  qint64 QIODevice::size();
// _ZNK9QIODevice4sizeEv size()
extern "C"
long long
C_ZNK9QIODevice4sizeEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->size();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 102, column 10>
//   // proto:  void QIODevice::setCurrentReadChannel(int channel);
// _ZN9QIODevice21setCurrentReadChannelEi setCurrentReadChannel(int)
extern "C"
void
C_ZN9QIODevice21setCurrentReadChannelEi(void *qthis,
int arg1) {
  ((QIODevice*)qthis)->setCurrentReadChannel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 121, column 16>
//   // proto:  QByteArray QIODevice::read(qint64 maxlen);
// _ZN9QIODevice4readEx read(qint64)
extern "C"
QByteArray*
C_ZN9QIODevice4readEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QIODevice*)qthis)->read(arg1);
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 145, column 10>
//   // proto:  bool QIODevice::getChar(char * c);
// _ZN9QIODevice7getCharEPc getChar(char *)
extern "C"
bool
C_ZN9QIODevice7getCharEPc(void *qthis,
char * arg1) {
  auto ret =
  ((QIODevice*)qthis)->getChar(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 144, column 10>
//   // proto:  bool QIODevice::putChar(char c);
// _ZN9QIODevice7putCharEc putChar(char)
extern "C"
bool
C_ZN9QIODevice7putCharEc(void *qthis,
char arg1) {
  auto ret =
  ((QIODevice*)qthis)->putChar(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 92, column 10>
//   // proto:  bool QIODevice::isTextModeEnabled();
// _ZNK9QIODevice17isTextModeEnabledEv isTextModeEnabled()
extern "C"
bool
C_ZNK9QIODevice17isTextModeEnabledEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->isTextModeEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 97, column 18>
//   // proto:  bool QIODevice::isSequential();
// _ZNK9QIODevice12isSequentialEv isSequential()
extern "C"
bool
C_ZNK9QIODevice12isSequentialEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->isSequential();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 117, column 20>
//   // proto:  qint64 QIODevice::bytesAvailable();
// _ZNK9QIODevice14bytesAvailableEv bytesAvailable()
extern "C"
long long
C_ZNK9QIODevice14bytesAvailableEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->bytesAvailable();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 132, column 12>
//   // proto:  qint64 QIODevice::write(const char * data, qint64 len);
// _ZN9QIODevice5writeEPKcx write(const char *, qint64)
extern "C"
long long
C_ZN9QIODevice5writeEPKcx(void *qthis,
const char * arg1,
qint64 arg2) {
  auto ret =
  ((QIODevice*)qthis)->write(arg1,
arg2);
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 128, column 10>
//   // proto:  void QIODevice::commitTransaction();
// _ZN9QIODevice17commitTransactionEv commitTransaction()
extern "C"
void
C_ZN9QIODevice17commitTransactionEv(void *qthis) {
  ((QIODevice*)qthis)->commitTransaction();
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 107, column 18>
//   // proto:  void QIODevice::close();
// _ZN9QIODevice5closeEv close()
extern "C"
void
C_ZN9QIODevice5closeEv(void *qthis) {
  ((QIODevice*)qthis)->close();
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 122, column 16>
//   // proto:  QByteArray QIODevice::readAll();
// _ZN9QIODevice7readAllEv readAll()
extern "C"
QByteArray*
C_ZN9QIODevice7readAllEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->readAll();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 152, column 10>
//   // proto:  void QIODevice::channelReadyRead(int channel);
// _ZN9QIODevice16channelReadyReadEi channelReadyRead(int)
extern "C"
void
C_ZN9QIODevice16channelReadyReadEi(void *qthis,
int arg1) {
  ((QIODevice*)qthis)->channelReadyRead(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 114, column 18>
//   // proto:  bool QIODevice::atEnd();
// _ZNK9QIODevice5atEndEv atEnd()
extern "C"
bool
C_ZNK9QIODevice5atEndEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->atEnd();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 130, column 10>
//   // proto:  bool QIODevice::isTransactionStarted();
// _ZNK9QIODevice20isTransactionStartedEv isTransactionStarted()
extern "C"
bool
C_ZNK9QIODevice20isTransactionStartedEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->isTransactionStarted();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 103, column 9>
//   // proto:  int QIODevice::currentWriteChannel();
// _ZNK9QIODevice19currentWriteChannelEv currentWriteChannel()
extern "C"
int
C_ZNK9QIODevice19currentWriteChannelEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->currentWriteChannel();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 113, column 18>
//   // proto:  bool QIODevice::seek(qint64 pos);
// _ZN9QIODevice4seekEx seek(qint64)
extern "C"
bool
C_ZN9QIODevice4seekEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QIODevice*)qthis)->seek(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 111, column 20>
//   // proto:  qint64 QIODevice::pos();
// _ZNK9QIODevice3posEv pos()
extern "C"
long long
C_ZNK9QIODevice3posEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->pos();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 156, column 10>
//   // proto:  void QIODevice::readChannelFinished();
// _ZN9QIODevice19readChannelFinishedEv readChannelFinished()
extern "C"
void
C_ZN9QIODevice19readChannelFinishedEv(void *qthis) {
  ((QIODevice*)qthis)->readChannelFinished();
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 99, column 9>
//   // proto:  int QIODevice::readChannelCount();
// _ZNK9QIODevice16readChannelCountEv readChannelCount()
extern "C"
int
C_ZNK9QIODevice16readChannelCountEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->readChannelCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 106, column 18>
//   // proto:  bool QIODevice::open(OpenMode mode);
// _ZN9QIODevice4openE6QFlagsINS_12OpenModeFlagEE open(OpenMode)
extern "C"
bool
C_ZN9QIODevice4openE6QFlagsINS_12OpenModeFlagEE(void *qthis,
QIODevice::OpenMode arg1) {
  auto ret =
  ((QIODevice*)qthis)->open(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 137, column 12>
//   // proto:  qint64 QIODevice::peek(char * data, qint64 maxlen);
// _ZN9QIODevice4peekEPcx peek(char *, qint64)
extern "C"
long long
C_ZN9QIODevice4peekEPcx(void *qthis,
char * arg1,
qint64 arg2) {
  auto ret =
  ((QIODevice*)qthis)->peek(arg1,
arg2);
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 120, column 12>
//   // proto:  qint64 QIODevice::read(char * data, qint64 maxlen);
// _ZN9QIODevice4readEPcx read(char *, qint64)
extern "C"
long long
C_ZN9QIODevice4readEPcx(void *qthis,
char * arg1,
qint64 arg2) {
  auto ret =
  ((QIODevice*)qthis)->read(arg1,
arg2);
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 153, column 10>
//   // proto:  void QIODevice::bytesWritten(qint64 bytes);
// _ZN9QIODevice12bytesWrittenEx bytesWritten(qint64)
extern "C"
void
C_ZN9QIODevice12bytesWrittenEx(void *qthis,
qint64 arg1) {
  ((QIODevice*)qthis)->bytesWritten(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 141, column 18>
//   // proto:  bool QIODevice::waitForBytesWritten(int msecs);
// _ZN9QIODevice19waitForBytesWrittenEi waitForBytesWritten(int)
extern "C"
bool
C_ZN9QIODevice19waitForBytesWrittenEi(void *qthis,
int arg1) {
  auto ret =
  ((QIODevice*)qthis)->waitForBytesWritten(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 118, column 20>
//   // proto:  qint64 QIODevice::bytesToWrite();
// _ZNK9QIODevice12bytesToWriteEv bytesToWrite()
extern "C"
long long
C_ZNK9QIODevice12bytesToWriteEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->bytesToWrite();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 115, column 18>
//   // proto:  bool QIODevice::reset();
// _ZN9QIODevice5resetEv reset()
extern "C"
bool
C_ZN9QIODevice5resetEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->reset();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 96, column 10>
//   // proto:  bool QIODevice::isWritable();
// _ZNK9QIODevice10isWritableEv isWritable()
extern "C"
bool
C_ZNK9QIODevice10isWritableEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->isWritable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 138, column 16>
//   // proto:  QByteArray QIODevice::peek(qint64 maxlen);
// _ZN9QIODevice4peekEx peek(qint64)
extern "C"
QByteArray*
C_ZN9QIODevice4peekEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QIODevice*)qthis)->peek(arg1);
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 85, column 14>
//   // proto:  void QIODevice::QIODevice(QObject * parent);
extern "C"
QIODevice*
C_ZN9QIODeviceC2EP7QObject(QObject * arg1) {
  // auto ret = new QIODevice(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 68, column 5>
//   // proto:  const QMetaObject * QIODevice::metaObject();
// _ZNK9QIODevice10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QIODevice10metaObjectEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 91, column 10>
//   // proto:  void QIODevice::setTextModeEnabled(bool enabled);
// _ZN9QIODevice18setTextModeEnabledEb setTextModeEnabled(_Bool)
extern "C"
void
C_ZN9QIODevice18setTextModeEnabledEb(void *qthis,
bool arg1) {
  ((QIODevice*)qthis)->setTextModeEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 83, column 5>
//   // proto:  void QIODevice::QIODevice();
extern "C"
QIODevice*
C_ZN9QIODeviceC2Ev() {
  // auto ret = new QIODevice();
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 94, column 10>
//   // proto:  bool QIODevice::isOpen();
// _ZNK9QIODevice6isOpenEv isOpen()
extern "C"
bool
C_ZNK9QIODevice6isOpenEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->isOpen();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qiodevice.h', line 125, column 18>
//   // proto:  bool QIODevice::canReadLine();
// _ZNK9QIODevice11canReadLineEv canReadLine()
extern "C"
bool
C_ZNK9QIODevice11canReadLineEv(void *qthis) {
  auto ret =
  ((QIODevice*)qthis)->canReadLine();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QIODevice::~QIODevice();
extern "C"
void C_ZN9QIODeviceD2Ev(void *qthis) {
  delete (QIODevice*)qthis;
}
// <= ext block end

// body block begin =>
// QIODevice_SlotProxy here
class QIODevice_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QIODevice_SlotProxy():QObject(){}

public slots:
  // bytesWritten(qint64)
  void slot_proxy_func__ZN9QIODevice12bytesWrittenEx(qint64 arg0);
public:
  void (*slot_func__ZN9QIODevice12bytesWrittenEx)(void* rsfptr, qint64 arg0) = NULL;
public slots:
  // readChannelFinished()
  void slot_proxy_func__ZN9QIODevice19readChannelFinishedEv();
public:
  void (*slot_func__ZN9QIODevice19readChannelFinishedEv)(void* rsfptr) = NULL;
public slots:
  // aboutToClose()
  void slot_proxy_func__ZN9QIODevice12aboutToCloseEv();
public:
  void (*slot_func__ZN9QIODevice12aboutToCloseEv)(void* rsfptr) = NULL;
public slots:
  // channelReadyRead(int)
  void slot_proxy_func__ZN9QIODevice16channelReadyReadEi(int arg0);
public:
  void (*slot_func__ZN9QIODevice16channelReadyReadEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // channelBytesWritten(int, qint64)
  void slot_proxy_func__ZN9QIODevice19channelBytesWrittenEix(int arg0, qint64 arg1);
public:
  void (*slot_func__ZN9QIODevice19channelBytesWrittenEix)(void* rsfptr, int arg0, qint64 arg1) = NULL;
public slots:
  // readyRead()
  void slot_proxy_func__ZN9QIODevice9readyReadEv();
public:
  void (*slot_func__ZN9QIODevice9readyReadEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qiodevice.moc"

extern "C" {
  QIODevice_SlotProxy* QIODevice_SlotProxy_new()
  {
    return new QIODevice_SlotProxy();
  }
};

void QIODevice_SlotProxy::slot_proxy_func__ZN9QIODevice12bytesWrittenEx(qint64 arg0) {
  if (this->slot_func__ZN9QIODevice12bytesWrittenEx != NULL) {
    // do smth...
    this->slot_func__ZN9QIODevice12bytesWrittenEx(this->rsfptr, arg0);
  }
}
extern "C"
void* QIODevice_SlotProxy_connect__ZN9QIODevice12bytesWrittenEx(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QIODevice_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QIODevice12bytesWrittenEx = (decltype(that->slot_func__ZN9QIODevice12bytesWrittenEx))ffifptr;
  QObject::connect((QIODevice*)sender, SIGNAL(bytesWritten(qint64)), that, SLOT(slot_proxy_func__ZN9QIODevice12bytesWrittenEx(qint64 arg0)));
  return that;
}
extern "C"
void QIODevice_SlotProxy_disconnect__ZN9QIODevice12bytesWrittenEx(QIODevice_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QIODevice_SlotProxy::slot_proxy_func__ZN9QIODevice19readChannelFinishedEv() {
  if (this->slot_func__ZN9QIODevice19readChannelFinishedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QIODevice19readChannelFinishedEv(this->rsfptr);
  }
}
extern "C"
void* QIODevice_SlotProxy_connect__ZN9QIODevice19readChannelFinishedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QIODevice_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QIODevice19readChannelFinishedEv = (decltype(that->slot_func__ZN9QIODevice19readChannelFinishedEv))ffifptr;
  QObject::connect((QIODevice*)sender, SIGNAL(readChannelFinished()), that, SLOT(slot_proxy_func__ZN9QIODevice19readChannelFinishedEv()));
  return that;
}
extern "C"
void QIODevice_SlotProxy_disconnect__ZN9QIODevice19readChannelFinishedEv(QIODevice_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QIODevice_SlotProxy::slot_proxy_func__ZN9QIODevice12aboutToCloseEv() {
  if (this->slot_func__ZN9QIODevice12aboutToCloseEv != NULL) {
    // do smth...
    this->slot_func__ZN9QIODevice12aboutToCloseEv(this->rsfptr);
  }
}
extern "C"
void* QIODevice_SlotProxy_connect__ZN9QIODevice12aboutToCloseEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QIODevice_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QIODevice12aboutToCloseEv = (decltype(that->slot_func__ZN9QIODevice12aboutToCloseEv))ffifptr;
  QObject::connect((QIODevice*)sender, SIGNAL(aboutToClose()), that, SLOT(slot_proxy_func__ZN9QIODevice12aboutToCloseEv()));
  return that;
}
extern "C"
void QIODevice_SlotProxy_disconnect__ZN9QIODevice12aboutToCloseEv(QIODevice_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QIODevice_SlotProxy::slot_proxy_func__ZN9QIODevice16channelReadyReadEi(int arg0) {
  if (this->slot_func__ZN9QIODevice16channelReadyReadEi != NULL) {
    // do smth...
    this->slot_func__ZN9QIODevice16channelReadyReadEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QIODevice_SlotProxy_connect__ZN9QIODevice16channelReadyReadEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QIODevice_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QIODevice16channelReadyReadEi = (decltype(that->slot_func__ZN9QIODevice16channelReadyReadEi))ffifptr;
  QObject::connect((QIODevice*)sender, SIGNAL(channelReadyRead(int)), that, SLOT(slot_proxy_func__ZN9QIODevice16channelReadyReadEi(int arg0)));
  return that;
}
extern "C"
void QIODevice_SlotProxy_disconnect__ZN9QIODevice16channelReadyReadEi(QIODevice_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QIODevice_SlotProxy::slot_proxy_func__ZN9QIODevice19channelBytesWrittenEix(int arg0, qint64 arg1) {
  if (this->slot_func__ZN9QIODevice19channelBytesWrittenEix != NULL) {
    // do smth...
    this->slot_func__ZN9QIODevice19channelBytesWrittenEix(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QIODevice_SlotProxy_connect__ZN9QIODevice19channelBytesWrittenEix(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QIODevice_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QIODevice19channelBytesWrittenEix = (decltype(that->slot_func__ZN9QIODevice19channelBytesWrittenEix))ffifptr;
  QObject::connect((QIODevice*)sender, SIGNAL(channelBytesWritten(int, qint64)), that, SLOT(slot_proxy_func__ZN9QIODevice19channelBytesWrittenEix(int arg0, qint64 arg1)));
  return that;
}
extern "C"
void QIODevice_SlotProxy_disconnect__ZN9QIODevice19channelBytesWrittenEix(QIODevice_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QIODevice_SlotProxy::slot_proxy_func__ZN9QIODevice9readyReadEv() {
  if (this->slot_func__ZN9QIODevice9readyReadEv != NULL) {
    // do smth...
    this->slot_func__ZN9QIODevice9readyReadEv(this->rsfptr);
  }
}
extern "C"
void* QIODevice_SlotProxy_connect__ZN9QIODevice9readyReadEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QIODevice_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QIODevice9readyReadEv = (decltype(that->slot_func__ZN9QIODevice9readyReadEv))ffifptr;
  QObject::connect((QIODevice*)sender, SIGNAL(readyRead()), that, SLOT(slot_proxy_func__ZN9QIODevice9readyReadEv()));
  return that;
}
extern "C"
void QIODevice_SlotProxy_disconnect__ZN9QIODevice9readyReadEv(QIODevice_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

