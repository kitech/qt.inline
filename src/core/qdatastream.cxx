// /usr/include/qt/QtCore/qdatastream.h
#include <qdatastream.h>
#include <QtCore>

// /usr/include/qt/QtCore/qdatastream.h:117
// void QDataStream()
extern "C"
void* C_ZN11QDataStreamC1Ev() {
  return new QDataStream();
}
// /usr/include/qt/QtCore/qdatastream.h:118
// void QDataStream(class QIODevice *)
extern "C"
void* C_ZN11QDataStreamC1EP9QIODevice(QIODevice * a0) {
  return new QDataStream(a0);
}
// /usr/include/qt/QtCore/qdatastream.h:119
// void QDataStream(class QByteArray *, class QIODevice::OpenMode)
extern "C"
void* C_ZN11QDataStreamC1EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(QByteArray * a0, QFlags<QIODevice::OpenModeFlag> flags) {
  return new QDataStream(a0, flags);
}
// /usr/include/qt/QtCore/qdatastream.h:120
// void QDataStream(const class QByteArray &)
extern "C"
void* C_ZN11QDataStreamC1ERK10QByteArray(const QByteArray & a0) {
  return new QDataStream(a0);
}
// /usr/include/qt/QtCore/qdatastream.h:121
// void ~QDataStream()
extern "C"
void C_ZN11QDataStreamD1Ev(void *this_) {
  delete (QDataStream*)(this_);
}
// /usr/include/qt/QtCore/qdatastream.h:123
// QIODevice * device()
extern "C"
void C_ZNK11QDataStream6deviceEv(void *this_) {
  /*return*/ ((QDataStream*)this_)->device();
}
// /usr/include/qt/QtCore/qdatastream.h:124
// void setDevice(class QIODevice *)
extern "C"
void C_ZN11QDataStream9setDeviceEP9QIODevice(void *this_, QIODevice * a0) {
  ((QDataStream*)this_)->setDevice(a0);
}
// /usr/include/qt/QtCore/qdatastream.h:125
// void unsetDevice()
extern "C"
void C_ZN11QDataStream11unsetDeviceEv(void *this_) {
  ((QDataStream*)this_)->unsetDevice();
}
// /usr/include/qt/QtCore/qdatastream.h:127
// bool atEnd()
extern "C"
void C_ZNK11QDataStream5atEndEv(void *this_) {
  /*return*/ ((QDataStream*)this_)->atEnd();
}
// /usr/include/qt/QtCore/qdatastream.h:129
// QDataStream::Status status()
extern "C"
void C_ZNK11QDataStream6statusEv(void *this_) {
  /*return*/ ((QDataStream*)this_)->status();
}
// /usr/include/qt/QtCore/qdatastream.h:130
// void setStatus(enum QDataStream::Status)
extern "C"
void C_ZN11QDataStream9setStatusENS_6StatusE(void *this_, QDataStream::Status status) {
  ((QDataStream*)this_)->setStatus(status);
}
// /usr/include/qt/QtCore/qdatastream.h:131
// void resetStatus()
extern "C"
void C_ZN11QDataStream11resetStatusEv(void *this_) {
  ((QDataStream*)this_)->resetStatus();
}
// /usr/include/qt/QtCore/qdatastream.h:133
// QDataStream::FloatingPointPrecision floatingPointPrecision()
extern "C"
void C_ZNK11QDataStream22floatingPointPrecisionEv(void *this_) {
  /*return*/ ((QDataStream*)this_)->floatingPointPrecision();
}
// /usr/include/qt/QtCore/qdatastream.h:134
// void setFloatingPointPrecision(enum QDataStream::FloatingPointPrecision)
extern "C"
void C_ZN11QDataStream25setFloatingPointPrecisionENS_22FloatingPointPrecisionE(void *this_, QDataStream::FloatingPointPrecision precision) {
  ((QDataStream*)this_)->setFloatingPointPrecision(precision);
}
// /usr/include/qt/QtCore/qdatastream.h:136
// QDataStream::ByteOrder byteOrder()
extern "C"
void C_ZNK11QDataStream9byteOrderEv(void *this_) {
  /*return*/ ((QDataStream*)this_)->byteOrder();
}
// /usr/include/qt/QtCore/qdatastream.h:137
// void setByteOrder(enum QDataStream::ByteOrder)
extern "C"
void C_ZN11QDataStream12setByteOrderENS_9ByteOrderE(void *this_, QDataStream::ByteOrder a0) {
  ((QDataStream*)this_)->setByteOrder(a0);
}
// /usr/include/qt/QtCore/qdatastream.h:139
// int version()
extern "C"
void C_ZNK11QDataStream7versionEv(void *this_) {
  /*return*/ ((QDataStream*)this_)->version();
}
// /usr/include/qt/QtCore/qdatastream.h:140
// void setVersion(int)
extern "C"
void C_ZN11QDataStream10setVersionEi(void *this_, int a0) {
  ((QDataStream*)this_)->setVersion(a0);
}
// /usr/include/qt/QtCore/qdatastream.h:169
// QDataStream & readBytes(char *&, uint &)
extern "C"
void C_ZN11QDataStream9readBytesERPcRj(void *this_, char *& a0, uint & len) {
  /*return*/ ((QDataStream*)this_)->readBytes(a0, len);
}
// /usr/include/qt/QtCore/qdatastream.h:170
// int readRawData(char *, int)
extern "C"
void C_ZN11QDataStream11readRawDataEPci(void *this_, char * a0, int len) {
  /*return*/ ((QDataStream*)this_)->readRawData(a0, len);
}
// /usr/include/qt/QtCore/qdatastream.h:172
// QDataStream & writeBytes(const char *, uint)
extern "C"
void C_ZN11QDataStream10writeBytesEPKcj(void *this_, const char * a0, uint len) {
  /*return*/ ((QDataStream*)this_)->writeBytes(a0, len);
}
// /usr/include/qt/QtCore/qdatastream.h:173
// int writeRawData(const char *, int)
extern "C"
void C_ZN11QDataStream12writeRawDataEPKci(void *this_, const char * a0, int len) {
  /*return*/ ((QDataStream*)this_)->writeRawData(a0, len);
}
// /usr/include/qt/QtCore/qdatastream.h:175
// int skipRawData(int)
extern "C"
void C_ZN11QDataStream11skipRawDataEi(void *this_, int len) {
  /*return*/ ((QDataStream*)this_)->skipRawData(len);
}
// /usr/include/qt/QtCore/qdatastream.h:177
// void startTransaction()
extern "C"
void C_ZN11QDataStream16startTransactionEv(void *this_) {
  ((QDataStream*)this_)->startTransaction();
}
// /usr/include/qt/QtCore/qdatastream.h:178
// bool commitTransaction()
extern "C"
void C_ZN11QDataStream17commitTransactionEv(void *this_) {
  /*return*/ ((QDataStream*)this_)->commitTransaction();
}
// /usr/include/qt/QtCore/qdatastream.h:179
// void rollbackTransaction()
extern "C"
void C_ZN11QDataStream19rollbackTransactionEv(void *this_) {
  ((QDataStream*)this_)->rollbackTransaction();
}
// /usr/include/qt/QtCore/qdatastream.h:180
// void abortTransaction()
extern "C"
void C_ZN11QDataStream16abortTransactionEv(void *this_) {
  ((QDataStream*)this_)->abortTransaction();
}