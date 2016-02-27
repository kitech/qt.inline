// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qdatastream.h
// dst-file: /src/core/qdatastream.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qdatastream.h>


// <= header block end

// main block begin =>
void __keep_qdatastream_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 131, column 9>
//   // proto:  int QDataStream::version();
if (true) {
  auto f = [](QDataStream flythis) {
    ((QDataStream*)0)->version();
    flythis.version();
  };
  if (f == nullptr){}
}
// _ZNK11QDataStream7versionEv version()
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 128, column 15>
//   // proto:  QDataStream::ByteOrder QDataStream::byteOrder();
if (true) {
  auto f = [](QDataStream flythis) {
    ((QDataStream*)0)->byteOrder();
    flythis.byteOrder();
  };
  if (f == nullptr){}
}
// _ZNK11QDataStream9byteOrderEv byteOrder()
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 132, column 10>
//   // proto:  void QDataStream::setVersion(int );
if (true) {
  auto f = [](QDataStream flythis, int arg1) {
    ((QDataStream*)0)->setVersion(arg1);
    flythis.setVersion(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QDataStream10setVersionEi setVersion(int)
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 115, column 16>
//   // proto:  QIODevice * QDataStream::device();
if (true) {
  auto f = [](QDataStream flythis) {
    ((QDataStream*)0)->device();
    flythis.device();
  };
  if (f == nullptr){}
}
// _ZNK11QDataStream6deviceEv device()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QDataStream_Class_Size()
{
  return sizeof(QDataStream);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 161, column 18>
//   // proto:  QDataStream & QDataStream::readBytes(char *& , uint & len);
// _ZN11QDataStream9readBytesERPcRj readBytes(char *&, uint &)
extern "C"
QDataStream*
C_ZN11QDataStream9readBytesERPcRj(void *qthis,
char ** arg1,
uint* arg2) {
  auto& ret =
  ((QDataStream*)qthis)->readBytes(*((char **)arg1),
*((uint*)arg2));
  return &ret; // return new QDataStream(ret);
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 129, column 10>
//   // proto:  void QDataStream::setByteOrder(QDataStream::ByteOrder );
// _ZN11QDataStream12setByteOrderENS_9ByteOrderE setByteOrder(enum QDataStream::ByteOrder)
extern "C"
void
C_ZN11QDataStream12setByteOrderENS_9ByteOrderE(void *qthis,
QDataStream::ByteOrder arg1) {
  ((QDataStream*)qthis)->setByteOrder(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 117, column 10>
//   // proto:  void QDataStream::unsetDevice();
// _ZN11QDataStream11unsetDeviceEv unsetDevice()
extern "C"
void
C_ZN11QDataStream11unsetDeviceEv(void *qthis) {
  ((QDataStream*)qthis)->unsetDevice();
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 110, column 14>
//   // proto:  void QDataStream::QDataStream(QIODevice * );
extern "C"
QDataStream*
C_ZN11QDataStreamC2EP9QIODevice(QIODevice * arg1) {
  auto ret = new QDataStream(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 111, column 5>
//   // proto:  void QDataStream::QDataStream(QByteArray * , QIODevice::OpenMode flags);
extern "C"
QDataStream*
C_ZN11QDataStreamC2EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(QByteArray * arg1,
QIODevice::OpenMode* arg2) {
  auto ret = new QDataStream(arg1, *((QIODevice::OpenMode*)arg2));
  return ret;
}
//   // proto:  void QDataStream::~QDataStream();
extern "C"
void C_ZN11QDataStreamD2Ev(void *qthis) {
  delete (QDataStream*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 167, column 9>
//   // proto:  int QDataStream::skipRawData(int len);
// _ZN11QDataStream11skipRawDataEi skipRawData(int)
extern "C"
int
C_ZN11QDataStream11skipRawDataEi(void *qthis,
int arg1) {
  auto ret =
  ((QDataStream*)qthis)->skipRawData(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 164, column 18>
//   // proto:  QDataStream & QDataStream::writeBytes(const char * , uint len);
// _ZN11QDataStream10writeBytesEPKcj writeBytes(const char *, uint)
extern "C"
QDataStream*
C_ZN11QDataStream10writeBytesEPKcj(void *qthis,
const char * arg1,
uint arg2) {
  auto& ret =
  ((QDataStream*)qthis)->writeBytes(arg1,
arg2);
  return &ret; // return new QDataStream(ret);
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 109, column 5>
//   // proto:  void QDataStream::QDataStream();
extern "C"
QDataStream*
C_ZN11QDataStreamC2Ev() {
  auto ret = new QDataStream();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 123, column 10>
//   // proto:  void QDataStream::resetStatus();
// _ZN11QDataStream11resetStatusEv resetStatus()
extern "C"
void
C_ZN11QDataStream11resetStatusEv(void *qthis) {
  ((QDataStream*)qthis)->resetStatus();
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 126, column 10>
//   // proto:  void QDataStream::setFloatingPointPrecision(QDataStream::FloatingPointPrecision precision);
// _ZN11QDataStream25setFloatingPointPrecisionENS_22FloatingPointPrecisionE setFloatingPointPrecision(enum QDataStream::FloatingPointPrecision)
extern "C"
void
C_ZN11QDataStream25setFloatingPointPrecisionENS_22FloatingPointPrecisionE(void *qthis,
QDataStream::FloatingPointPrecision arg1) {
  ((QDataStream*)qthis)->setFloatingPointPrecision(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 125, column 28>
//   // proto:  QDataStream::FloatingPointPrecision QDataStream::floatingPointPrecision();
// _ZNK11QDataStream22floatingPointPrecisionEv floatingPointPrecision()
extern "C"
QDataStream::FloatingPointPrecision
C_ZNK11QDataStream22floatingPointPrecisionEv(void *qthis) {
  auto ret =
  ((QDataStream*)qthis)->floatingPointPrecision();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 112, column 5>
//   // proto:  void QDataStream::QDataStream(const QByteArray & );
extern "C"
QDataStream*
C_ZN11QDataStreamC2ERK10QByteArray(const QByteArray* arg1) {
  auto ret = new QDataStream(*((const QByteArray*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 131, column 9>
//   // proto:  int QDataStream::version();
// _ZNK11QDataStream7versionEv version()
extern "C"
int
C_ZNK11QDataStream7versionEv(void *qthis) {
  auto ret =
  ((QDataStream*)qthis)->version();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 121, column 12>
//   // proto:  QDataStream::Status QDataStream::status();
// _ZNK11QDataStream6statusEv status()
extern "C"
QDataStream::Status
C_ZNK11QDataStream6statusEv(void *qthis) {
  auto ret =
  ((QDataStream*)qthis)->status();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 128, column 15>
//   // proto:  QDataStream::ByteOrder QDataStream::byteOrder();
// _ZNK11QDataStream9byteOrderEv byteOrder()
extern "C"
QDataStream::ByteOrder
C_ZNK11QDataStream9byteOrderEv(void *qthis) {
  auto ret =
  ((QDataStream*)qthis)->byteOrder();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 119, column 10>
//   // proto:  bool QDataStream::atEnd();
// _ZNK11QDataStream5atEndEv atEnd()
extern "C"
bool
C_ZNK11QDataStream5atEndEv(void *qthis) {
  auto ret =
  ((QDataStream*)qthis)->atEnd();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 132, column 10>
//   // proto:  void QDataStream::setVersion(int );
// _ZN11QDataStream10setVersionEi setVersion(int)
extern "C"
void
C_ZN11QDataStream10setVersionEi(void *qthis,
int arg1) {
  ((QDataStream*)qthis)->setVersion(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 116, column 10>
//   // proto:  void QDataStream::setDevice(QIODevice * );
// _ZN11QDataStream9setDeviceEP9QIODevice setDevice(class QIODevice *)
extern "C"
void
C_ZN11QDataStream9setDeviceEP9QIODevice(void *qthis,
QIODevice * arg1) {
  ((QDataStream*)qthis)->setDevice(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 165, column 9>
//   // proto:  int QDataStream::writeRawData(const char * , int len);
// _ZN11QDataStream12writeRawDataEPKci writeRawData(const char *, int)
extern "C"
int
C_ZN11QDataStream12writeRawDataEPKci(void *qthis,
const char * arg1,
int arg2) {
  auto ret =
  ((QDataStream*)qthis)->writeRawData(arg1,
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 162, column 9>
//   // proto:  int QDataStream::readRawData(char * , int len);
// _ZN11QDataStream11readRawDataEPci readRawData(char *, int)
extern "C"
int
C_ZN11QDataStream11readRawDataEPci(void *qthis,
char * arg1,
int arg2) {
  auto ret =
  ((QDataStream*)qthis)->readRawData(arg1,
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 115, column 16>
//   // proto:  QIODevice * QDataStream::device();
// _ZNK11QDataStream6deviceEv device()
extern "C"
void*
C_ZNK11QDataStream6deviceEv(void *qthis) {
  auto ret =
  ((QDataStream*)qthis)->device();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qdatastream.h', line 122, column 10>
//   // proto:  void QDataStream::setStatus(QDataStream::Status status);
// _ZN11QDataStream9setStatusENS_6StatusE setStatus(enum QDataStream::Status)
extern "C"
void
C_ZN11QDataStream9setStatusENS_6StatusE(void *qthis,
QDataStream::Status arg1) {
  ((QDataStream*)qthis)->setStatus(arg1);
}
// <= ext block end

// body block begin =>
// <= body block end

