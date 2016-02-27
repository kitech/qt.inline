// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qsslkey.h
// dst-file: /src/network/qsslkey.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsslkey.h>


#include <qssl.h>
#include <qbytearray.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qsslkey_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 70, column 17>
//   // proto:  void QSslKey::swap(QSslKey & other);
if (true) {
  auto f = [](QSslKey flythis, QSslKey & arg1) {
    ((QSslKey*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN7QSslKey4swapERS_ swap(class QSslKey &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSslKey_Class_Size()
{
  return sizeof(QSslKey);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 77, column 24>
//   // proto:  QSsl::KeyAlgorithm QSslKey::algorithm();
// _ZNK7QSslKey9algorithmEv algorithm()
extern "C"
QSsl::KeyAlgorithm
C_ZNK7QSslKey9algorithmEv(void *qthis) {
  auto ret =
  ((QSslKey*)qthis)->algorithm();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 75, column 9>
//   // proto:  int QSslKey::length();
// _ZNK7QSslKey6lengthEv length()
extern "C"
int
C_ZNK7QSslKey6lengthEv(void *qthis) {
  auto ret =
  ((QSslKey*)qthis)->length();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 72, column 10>
//   // proto:  bool QSslKey::isNull();
// _ZNK7QSslKey6isNullEv isNull()
extern "C"
bool
C_ZNK7QSslKey6isNullEv(void *qthis) {
  auto ret =
  ((QSslKey*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 56, column 5>
//   // proto:  void QSslKey::QSslKey();
extern "C"
QSslKey*
C_ZN7QSslKeyC2Ev() {
  auto ret = new QSslKey();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 57, column 5>
//   // proto:  void QSslKey::QSslKey(const QByteArray & encoded, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type, const QByteArray & passPhrase);
extern "C"
QSslKey*
C_ZN7QSslKeyC2ERK10QByteArrayN4QSsl12KeyAlgorithmENS3_14EncodingFormatENS3_7KeyTypeES2_(const QByteArray* arg1,
QSsl::KeyAlgorithm* arg2,
QSsl::EncodingFormat* arg3,
QSsl::KeyType* arg4,
const QByteArray* arg5) {
  auto ret = new QSslKey(*((const QByteArray*)arg1), *((QSsl::KeyAlgorithm*)arg2), *((QSsl::EncodingFormat*)arg3), *((QSsl::KeyType*)arg4), *((const QByteArray*)arg5));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 66, column 5>
//   // proto:  void QSslKey::QSslKey(const QSslKey & other);
extern "C"
QSslKey*
C_ZN7QSslKeyC2ERKS_(const QSslKey* arg1) {
  auto ret = new QSslKey(*((const QSslKey*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 79, column 16>
//   // proto:  QByteArray QSslKey::toPem(const QByteArray & passPhrase);
// _ZNK7QSslKey5toPemERK10QByteArray toPem(const class QByteArray &)
extern "C"
QByteArray*
C_ZNK7QSslKey5toPemERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QSslKey*)qthis)->toPem(*((const QByteArray*)arg1));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 73, column 10>
//   // proto:  void QSslKey::clear();
// _ZN7QSslKey5clearEv clear()
extern "C"
void
C_ZN7QSslKey5clearEv(void *qthis) {
  ((QSslKey*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 70, column 17>
//   // proto:  void QSslKey::swap(QSslKey & other);
// _ZN7QSslKey4swapERS_ swap(class QSslKey &)
extern "C"
void
C_ZN7QSslKey4swapERS_(void *qthis,
QSslKey* arg1) {
  ((QSslKey*)qthis)->swap(*((QSslKey*)arg1));
}
//   // proto:  void QSslKey::~QSslKey();
extern "C"
void C_ZN7QSslKeyD2Ev(void *qthis) {
  delete (QSslKey*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 76, column 19>
//   // proto:  QSsl::KeyType QSslKey::type();
// _ZNK7QSslKey4typeEv type()
extern "C"
QSsl::KeyType
C_ZNK7QSslKey4typeEv(void *qthis) {
  auto ret =
  ((QSslKey*)qthis)->type();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 61, column 5>
//   // proto:  void QSslKey::QSslKey(QIODevice * device, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type, const QByteArray & passPhrase);
extern "C"
QSslKey*
C_ZN7QSslKeyC2EP9QIODeviceN4QSsl12KeyAlgorithmENS2_14EncodingFormatENS2_7KeyTypeERK10QByteArray(QIODevice * arg1,
QSsl::KeyAlgorithm* arg2,
QSsl::EncodingFormat* arg3,
QSsl::KeyType* arg4,
const QByteArray* arg5) {
  auto ret = new QSslKey(arg1, *((QSsl::KeyAlgorithm*)arg2), *((QSsl::EncodingFormat*)arg3), *((QSsl::KeyType*)arg4), *((const QByteArray*)arg5));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 80, column 16>
//   // proto:  QByteArray QSslKey::toDer(const QByteArray & passPhrase);
// _ZNK7QSslKey5toDerERK10QByteArray toDer(const class QByteArray &)
extern "C"
QByteArray*
C_ZNK7QSslKey5toDerERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QSslKey*)qthis)->toDer(*((const QByteArray*)arg1));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 82, column 16>
//   // proto:  Qt::HANDLE QSslKey::handle();
// _ZNK7QSslKey6handleEv handle()
extern "C"
void*
C_ZNK7QSslKey6handleEv(void *qthis) {
  auto ret =
  ((QSslKey*)qthis)->handle();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 65, column 14>
//   // proto:  void QSslKey::QSslKey(Qt::HANDLE handle, QSsl::KeyType type);
extern "C"
QSslKey*
C_ZN7QSslKeyC2EPvN4QSsl7KeyTypeE(Qt::HANDLE* arg1,
QSsl::KeyType* arg2) {
  auto ret = new QSslKey(*((Qt::HANDLE*)arg1), *((QSsl::KeyType*)arg2));
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

