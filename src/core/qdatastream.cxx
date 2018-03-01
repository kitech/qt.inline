//  header block begin
// /usr/include/qt/QtCore/qdatastream.h
#ifndef protected
#define protected public
#endif
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
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamC2Ev() {
  return  new QDataStream();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:124
// [-2] void QDataStream(class QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamC2EP9QIODevice(QIODevice * arg0) {
  return  new QDataStream(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:125
// [-2] void QDataStream(class QByteArray *, class QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamC2EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(QByteArray * arg0, QFlags<QIODevice::OpenModeFlag> flags) {
  return  new QDataStream(arg0, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:126
// [-2] void QDataStream(const class QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamC2ERK10QByteArray(QByteArray* arg0) {
  return  new QDataStream(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:127
// [-2] void ~QDataStream()
extern "C" Q_DECL_EXPORT
void C_ZN11QDataStreamD2Ev(void *this_) {
  delete (QDataStream*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:129
// [8] QIODevice * device()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QDataStream6deviceEv(void *this_) {
  return (void*)((QDataStream*)this_)->device();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:130
// [-2] void setDevice(class QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN11QDataStream9setDeviceEP9QIODevice(void *this_, QIODevice * arg0) {
  ((QDataStream*)this_)->setDevice(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:131
// [-2] void unsetDevice()
extern "C" Q_DECL_EXPORT
void C_ZN11QDataStream11unsetDeviceEv(void *this_) {
  ((QDataStream*)this_)->unsetDevice();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:133
// [1] bool atEnd()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QDataStream5atEndEv(void *this_) {
  return (bool)((QDataStream*)this_)->atEnd();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:135
// [4] QDataStream::Status status()
extern "C" Q_DECL_EXPORT
QDataStream::Status C_ZNK11QDataStream6statusEv(void *this_) {
  return (QDataStream::Status)((QDataStream*)this_)->status();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:136
// [-2] void setStatus(enum QDataStream::Status)
extern "C" Q_DECL_EXPORT
void C_ZN11QDataStream9setStatusENS_6StatusE(void *this_, QDataStream::Status status) {
  ((QDataStream*)this_)->setStatus(status);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:137
// [-2] void resetStatus()
extern "C" Q_DECL_EXPORT
void C_ZN11QDataStream11resetStatusEv(void *this_) {
  ((QDataStream*)this_)->resetStatus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:139
// [4] QDataStream::FloatingPointPrecision floatingPointPrecision()
extern "C" Q_DECL_EXPORT
QDataStream::FloatingPointPrecision C_ZNK11QDataStream22floatingPointPrecisionEv(void *this_) {
  return (QDataStream::FloatingPointPrecision)((QDataStream*)this_)->floatingPointPrecision();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:140
// [-2] void setFloatingPointPrecision(enum QDataStream::FloatingPointPrecision)
extern "C" Q_DECL_EXPORT
void C_ZN11QDataStream25setFloatingPointPrecisionENS_22FloatingPointPrecisionE(void *this_, QDataStream::FloatingPointPrecision precision) {
  ((QDataStream*)this_)->setFloatingPointPrecision(precision);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:142
// [4] QDataStream::ByteOrder byteOrder()
extern "C" Q_DECL_EXPORT
QDataStream::ByteOrder C_ZNK11QDataStream9byteOrderEv(void *this_) {
  return (QDataStream::ByteOrder)((QDataStream*)this_)->byteOrder();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:143
// [-2] void setByteOrder(enum QDataStream::ByteOrder)
extern "C" Q_DECL_EXPORT
void C_ZN11QDataStream12setByteOrderENS_9ByteOrderE(void *this_, QDataStream::ByteOrder arg0) {
  ((QDataStream*)this_)->setByteOrder(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:145
// [4] int version()
extern "C" Q_DECL_EXPORT
int C_ZNK11QDataStream7versionEv(void *this_) {
  return (int)((QDataStream*)this_)->version();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:146
// [-2] void setVersion(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QDataStream10setVersionEi(void *this_, int arg0) {
  ((QDataStream*)this_)->setVersion(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:149
// [32] QDataStream & operator>>(quint8 &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamrsERh(void *this_, quint8 & i) {
  auto& rv = ((QDataStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:150
// [32] QDataStream & operator>>(qint16 &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamrsERs(void *this_, qint16 & i) {
  auto& rv = ((QDataStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:151
// [32] QDataStream & operator>>(quint16 &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamrsERt(void *this_, quint16 & i) {
  auto& rv = ((QDataStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:152
// [32] QDataStream & operator>>(qint32 &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamrsERi(void *this_, qint32 & i) {
  auto& rv = ((QDataStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:153
// [32] QDataStream & operator>>(quint32 &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamrsERj(void *this_, quint32 & i) {
  auto& rv = ((QDataStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:154
// [32] QDataStream & operator>>(qint64 &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamrsERx(void *this_, qint64 & i) {
  auto& rv = ((QDataStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:155
// [32] QDataStream & operator>>(quint64 &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamrsERy(void *this_, quint64 & i) {
  auto& rv = ((QDataStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:158
// [32] QDataStream & operator>>(_Bool &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamrsERb(void *this_, bool & i) {
  auto& rv = ((QDataStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:160
// [32] QDataStream & operator>>(float &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamrsERf(void *this_, float & f) {
  auto& rv = ((QDataStream*)this_)->operator>>(f);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:161
// [32] QDataStream & operator>>(double &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamrsERd(void *this_, double & f) {
  auto& rv = ((QDataStream*)this_)->operator>>(f);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:162
// [32] QDataStream & operator>>(char *&)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamrsERPc(void *this_, char *& str) {
  auto& rv = ((QDataStream*)this_)->operator>>(str);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:165
// [32] QDataStream & operator<<(quint8)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamlsEh(void *this_, quint8 i) {
  auto& rv = ((QDataStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:166
// [32] QDataStream & operator<<(qint16)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamlsEs(void *this_, qint16 i) {
  auto& rv = ((QDataStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:167
// [32] QDataStream & operator<<(quint16)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamlsEt(void *this_, quint16 i) {
  auto& rv = ((QDataStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:168
// [32] QDataStream & operator<<(qint32)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamlsEi(void *this_, qint32 i) {
  auto& rv = ((QDataStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:169
// [32] QDataStream & operator<<(quint32)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamlsEj(void *this_, quint32 i) {
  auto& rv = ((QDataStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:170
// [32] QDataStream & operator<<(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamlsEx(void *this_, qint64 i) {
  auto& rv = ((QDataStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:171
// [32] QDataStream & operator<<(quint64)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamlsEy(void *this_, quint64 i) {
  auto& rv = ((QDataStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:173
// [32] QDataStream & operator<<(_Bool)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamlsEb(void *this_, bool i) {
  auto& rv = ((QDataStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:175
// [32] QDataStream & operator<<(float)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamlsEf(void *this_, float f) {
  auto& rv = ((QDataStream*)this_)->operator<<(f);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:176
// [32] QDataStream & operator<<(double)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamlsEd(void *this_, double f) {
  auto& rv = ((QDataStream*)this_)->operator<<(f);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:177
// [32] QDataStream & operator<<(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStreamlsEPKc(void *this_, const char * str) {
  auto& rv = ((QDataStream*)this_)->operator<<(str);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:179
// [32] QDataStream & readBytes(char *&, uint &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStream9readBytesERPcRj(void *this_, char *& arg0, uint & len_) {
  auto& rv = ((QDataStream*)this_)->readBytes(arg0, len_);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:180
// [4] int readRawData(char *, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QDataStream11readRawDataEPci(void *this_, char * arg0, int len_) {
  return (int)((QDataStream*)this_)->readRawData(arg0, len_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:182
// [32] QDataStream & writeBytes(const char *, uint)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDataStream10writeBytesEPKcj(void *this_, const char * arg0, uint len_) {
  auto& rv = ((QDataStream*)this_)->writeBytes(arg0, len_);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:183
// [4] int writeRawData(const char *, int)
extern "C" Q_DECL_EXPORT
int C_ZN11QDataStream12writeRawDataEPKci(void *this_, const char * arg0, int len_) {
  return (int)((QDataStream*)this_)->writeRawData(arg0, len_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:185
// [4] int skipRawData(int)
extern "C" Q_DECL_EXPORT
int C_ZN11QDataStream11skipRawDataEi(void *this_, int len_) {
  return (int)((QDataStream*)this_)->skipRawData(len_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:187
// [-2] void startTransaction()
extern "C" Q_DECL_EXPORT
void C_ZN11QDataStream16startTransactionEv(void *this_) {
  ((QDataStream*)this_)->startTransaction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:188
// [1] bool commitTransaction()
extern "C" Q_DECL_EXPORT
bool C_ZN11QDataStream17commitTransactionEv(void *this_) {
  return (bool)((QDataStream*)this_)->commitTransaction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:189
// [-2] void rollbackTransaction()
extern "C" Q_DECL_EXPORT
void C_ZN11QDataStream19rollbackTransactionEv(void *this_) {
  ((QDataStream*)this_)->rollbackTransaction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:190
// [-2] void abortTransaction()
extern "C" Q_DECL_EXPORT
void C_ZN11QDataStream16abortTransactionEv(void *this_) {
  ((QDataStream*)this_)->abortTransaction();
}

//  main block end
