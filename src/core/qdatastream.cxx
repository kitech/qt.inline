//  header block begin
// /usr/include/qt/QtCore/qdatastream.h
#include <qdatastream.h>
#include <QtCore>
#include "callback_inherit.h"

// QDataStream is pure virtual: false
// QDataStream has virtual projected: false
//  header block end

//  main block begin

class MyQDataStream : public QDataStream {
public:
  virtual ~MyQDataStream() {}
// void QDataStream()
MyQDataStream() : QDataStream() {}
// void QDataStream(class QIODevice *)
MyQDataStream(QIODevice * arg0) : QDataStream(arg0) {}
// void QDataStream(class QByteArray *, class QIODevice::OpenMode)
MyQDataStream(QByteArray * arg0, QFlags<QIODevice::OpenModeFlag> flags) : QDataStream(arg0, flags) {}
// void QDataStream(const class QByteArray &)
MyQDataStream(const QByteArray & arg0) : QDataStream(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:123
// [-2] void QDataStream()
extern "C"
void* C_ZN11QDataStreamC2Ev() {
  return  new QDataStream();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:124
// [-2] void QDataStream(class QIODevice *)
extern "C"
void* C_ZN11QDataStreamC2EP9QIODevice(QIODevice * arg0) {
  return  new QDataStream(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:125
// [-2] void QDataStream(class QByteArray *, class QIODevice::OpenMode)
extern "C"
void* C_ZN11QDataStreamC2EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(QByteArray * arg0, QFlags<QIODevice::OpenModeFlag> flags) {
  return  new QDataStream(arg0, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:126
// [-2] void QDataStream(const class QByteArray &)
extern "C"
void* C_ZN11QDataStreamC2ERK10QByteArray(QByteArray* arg0) {
  return  new QDataStream(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:127
// [-2] void ~QDataStream()
extern "C"
void C_ZN11QDataStreamD2Ev(void *this_) {
  delete (QDataStream*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:129
// [8] QIODevice * device()
extern "C"
void* C_ZNK11QDataStream6deviceEv(void *this_) {
  return (void*)((QDataStream*)this_)->device();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:130
// [-2] void setDevice(class QIODevice *)
extern "C"
void C_ZN11QDataStream9setDeviceEP9QIODevice(void *this_, QIODevice * arg0) {
  ((QDataStream*)this_)->setDevice(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:131
// [-2] void unsetDevice()
extern "C"
void C_ZN11QDataStream11unsetDeviceEv(void *this_) {
  ((QDataStream*)this_)->unsetDevice();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:133
// [1] bool atEnd()
extern "C"
bool C_ZNK11QDataStream5atEndEv(void *this_) {
  return (bool)((QDataStream*)this_)->atEnd();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:135
// [4] QDataStream::Status status()
extern "C"
QDataStream::Status C_ZNK11QDataStream6statusEv(void *this_) {
  return (QDataStream::Status)((QDataStream*)this_)->status();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:136
// [-2] void setStatus(enum QDataStream::Status)
extern "C"
void C_ZN11QDataStream9setStatusENS_6StatusE(void *this_, QDataStream::Status status) {
  ((QDataStream*)this_)->setStatus(status);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:137
// [-2] void resetStatus()
extern "C"
void C_ZN11QDataStream11resetStatusEv(void *this_) {
  ((QDataStream*)this_)->resetStatus();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:139
// [4] QDataStream::FloatingPointPrecision floatingPointPrecision()
extern "C"
QDataStream::FloatingPointPrecision C_ZNK11QDataStream22floatingPointPrecisionEv(void *this_) {
  return (QDataStream::FloatingPointPrecision)((QDataStream*)this_)->floatingPointPrecision();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:140
// [-2] void setFloatingPointPrecision(enum QDataStream::FloatingPointPrecision)
extern "C"
void C_ZN11QDataStream25setFloatingPointPrecisionENS_22FloatingPointPrecisionE(void *this_, QDataStream::FloatingPointPrecision precision) {
  ((QDataStream*)this_)->setFloatingPointPrecision(precision);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:142
// [4] QDataStream::ByteOrder byteOrder()
extern "C"
QDataStream::ByteOrder C_ZNK11QDataStream9byteOrderEv(void *this_) {
  return (QDataStream::ByteOrder)((QDataStream*)this_)->byteOrder();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:143
// [-2] void setByteOrder(enum QDataStream::ByteOrder)
extern "C"
void C_ZN11QDataStream12setByteOrderENS_9ByteOrderE(void *this_, QDataStream::ByteOrder arg0) {
  ((QDataStream*)this_)->setByteOrder(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:145
// [4] int version()
extern "C"
int C_ZNK11QDataStream7versionEv(void *this_) {
  return (int)((QDataStream*)this_)->version();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:146
// [-2] void setVersion(int)
extern "C"
void C_ZN11QDataStream10setVersionEi(void *this_, int arg0) {
  ((QDataStream*)this_)->setVersion(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:179
// [32] QDataStream & readBytes(char *&, uint &)
extern "C"
void* C_ZN11QDataStream9readBytesERPcRj(void *this_, char *& arg0, uint & len) {
  auto& rv = ((QDataStream*)this_)->readBytes(arg0, len);
return &rv;
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:180
// [4] int readRawData(char *, int)
extern "C"
int C_ZN11QDataStream11readRawDataEPci(void *this_, char * arg0, int len) {
  return (int)((QDataStream*)this_)->readRawData(arg0, len);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:182
// [32] QDataStream & writeBytes(const char *, uint)
extern "C"
void* C_ZN11QDataStream10writeBytesEPKcj(void *this_, const char * arg0, uint len) {
  auto& rv = ((QDataStream*)this_)->writeBytes(arg0, len);
return &rv;
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:183
// [4] int writeRawData(const char *, int)
extern "C"
int C_ZN11QDataStream12writeRawDataEPKci(void *this_, const char * arg0, int len) {
  return (int)((QDataStream*)this_)->writeRawData(arg0, len);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:185
// [4] int skipRawData(int)
extern "C"
int C_ZN11QDataStream11skipRawDataEi(void *this_, int len) {
  return (int)((QDataStream*)this_)->skipRawData(len);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:187
// [-2] void startTransaction()
extern "C"
void C_ZN11QDataStream16startTransactionEv(void *this_) {
  ((QDataStream*)this_)->startTransaction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:188
// [1] bool commitTransaction()
extern "C"
bool C_ZN11QDataStream17commitTransactionEv(void *this_) {
  return (bool)((QDataStream*)this_)->commitTransaction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:189
// [-2] void rollbackTransaction()
extern "C"
void C_ZN11QDataStream19rollbackTransactionEv(void *this_) {
  ((QDataStream*)this_)->rollbackTransaction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:190
// [-2] void abortTransaction()
extern "C"
void C_ZN11QDataStream16abortTransactionEv(void *this_) {
  ((QDataStream*)this_)->abortTransaction();
}
//  main block end
