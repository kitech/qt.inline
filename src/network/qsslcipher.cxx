// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qsslcipher.h
// dst-file: /src/network/qsslcipher.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsslcipher.h>


#include <qstring.h>
#include <qssl.h>
// <= header block end

// main block begin =>
void __keep_qsslcipher_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcipher.h', line 58, column 17>
//   // proto:  void QSslCipher::swap(QSslCipher & other);
if (true) {
  auto f = [](QSslCipher flythis, QSslCipher & arg1) {
    ((QSslCipher*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslCipher4swapERS_ swap(class QSslCipher &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSslCipher_Class_Size()
{
  return sizeof(QSslCipher);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcipher.h', line 65, column 13>
//   // proto:  QString QSslCipher::name();
// _ZNK10QSslCipher4nameEv name()
extern "C"
QString*
C_ZNK10QSslCipher4nameEv(void *qthis) {
  auto ret =
  ((QSslCipher*)qthis)->name();
  return new QString(ret); // 5
}
//   // proto:  void QSslCipher::~QSslCipher();
extern "C"
void C_ZN10QSslCipherD2Ev(void *qthis) {
  delete (QSslCipher*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcipher.h', line 53, column 5>
//   // proto:  void QSslCipher::QSslCipher(const QString & name, QSsl::SslProtocol protocol);
extern "C"
QSslCipher*
C_ZN10QSslCipherC2ERK7QStringN4QSsl11SslProtocolE(const QString* arg1,
QSsl::SslProtocol* arg2) {
  auto ret = new QSslCipher(*((const QString*)arg1), *((QSsl::SslProtocol*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcipher.h', line 51, column 5>
//   // proto:  void QSslCipher::QSslCipher();
extern "C"
QSslCipher*
C_ZN10QSslCipherC2Ev() {
  auto ret = new QSslCipher();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcipher.h', line 73, column 23>
//   // proto:  QSsl::SslProtocol QSslCipher::protocol();
// _ZNK10QSslCipher8protocolEv protocol()
extern "C"
QSsl::SslProtocol
C_ZNK10QSslCipher8protocolEv(void *qthis) {
  auto ret =
  ((QSslCipher*)qthis)->protocol();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcipher.h', line 52, column 14>
//   // proto:  void QSslCipher::QSslCipher(const QString & name);
extern "C"
QSslCipher*
C_ZN10QSslCipherC2ERK7QString(const QString* arg1) {
  auto ret = new QSslCipher(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcipher.h', line 72, column 13>
//   // proto:  QString QSslCipher::protocolString();
// _ZNK10QSslCipher14protocolStringEv protocolString()
extern "C"
QString*
C_ZNK10QSslCipher14protocolStringEv(void *qthis) {
  auto ret =
  ((QSslCipher*)qthis)->protocolString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcipher.h', line 66, column 9>
//   // proto:  int QSslCipher::supportedBits();
// _ZNK10QSslCipher13supportedBitsEv supportedBits()
extern "C"
int
C_ZNK10QSslCipher13supportedBitsEv(void *qthis) {
  auto ret =
  ((QSslCipher*)qthis)->supportedBits();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcipher.h', line 67, column 9>
//   // proto:  int QSslCipher::usedBits();
// _ZNK10QSslCipher8usedBitsEv usedBits()
extern "C"
int
C_ZNK10QSslCipher8usedBitsEv(void *qthis) {
  auto ret =
  ((QSslCipher*)qthis)->usedBits();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcipher.h', line 58, column 17>
//   // proto:  void QSslCipher::swap(QSslCipher & other);
// _ZN10QSslCipher4swapERS_ swap(class QSslCipher &)
extern "C"
void
C_ZN10QSslCipher4swapERS_(void *qthis,
QSslCipher* arg1) {
  ((QSslCipher*)qthis)->swap(*((QSslCipher*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcipher.h', line 69, column 13>
//   // proto:  QString QSslCipher::keyExchangeMethod();
// _ZNK10QSslCipher17keyExchangeMethodEv keyExchangeMethod()
extern "C"
QString*
C_ZNK10QSslCipher17keyExchangeMethodEv(void *qthis) {
  auto ret =
  ((QSslCipher*)qthis)->keyExchangeMethod();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcipher.h', line 54, column 5>
//   // proto:  void QSslCipher::QSslCipher(const QSslCipher & other);
extern "C"
QSslCipher*
C_ZN10QSslCipherC2ERKS_(const QSslCipher* arg1) {
  auto ret = new QSslCipher(*((const QSslCipher*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcipher.h', line 70, column 13>
//   // proto:  QString QSslCipher::authenticationMethod();
// _ZNK10QSslCipher20authenticationMethodEv authenticationMethod()
extern "C"
QString*
C_ZNK10QSslCipher20authenticationMethodEv(void *qthis) {
  auto ret =
  ((QSslCipher*)qthis)->authenticationMethod();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcipher.h', line 64, column 10>
//   // proto:  bool QSslCipher::isNull();
// _ZNK10QSslCipher6isNullEv isNull()
extern "C"
bool
C_ZNK10QSslCipher6isNullEv(void *qthis) {
  auto ret =
  ((QSslCipher*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcipher.h', line 71, column 13>
//   // proto:  QString QSslCipher::encryptionMethod();
// _ZNK10QSslCipher16encryptionMethodEv encryptionMethod()
extern "C"
QString*
C_ZNK10QSslCipher16encryptionMethodEv(void *qthis) {
  auto ret =
  ((QSslCipher*)qthis)->encryptionMethod();
  return new QString(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

