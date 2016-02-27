// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qsslerror.h
// dst-file: /src/network/qsslerror.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsslerror.h>


#include <qsslcertificate.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qsslerror_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 87, column 17>
//   // proto:  void QSslError::swap(QSslError & other);
if (true) {
  auto f = [](QSslError flythis, QSslError & arg1) {
    ((QSslError*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QSslError4swapERS_ swap(class QSslError &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSslError_Class_Size()
{
  return sizeof(QSslError);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 81, column 5>
//   // proto:  void QSslError::QSslError();
extern "C"
QSslError*
C_ZN9QSslErrorC2Ev() {
  auto ret = new QSslError();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 87, column 17>
//   // proto:  void QSslError::swap(QSslError & other);
// _ZN9QSslError4swapERS_ swap(class QSslError &)
extern "C"
void
C_ZN9QSslError4swapERS_(void *qthis,
QSslError* arg1) {
  ((QSslError*)qthis)->swap(*((QSslError*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 96, column 14>
//   // proto:  QSslError::SslError QSslError::error();
// _ZNK9QSslError5errorEv error()
extern "C"
QSslError::SslError
C_ZNK9QSslError5errorEv(void *qthis) {
  auto ret =
  ((QSslError*)qthis)->error();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 85, column 5>
//   // proto:  void QSslError::QSslError(const QSslError & other);
extern "C"
QSslError*
C_ZN9QSslErrorC2ERKS_(const QSslError* arg1) {
  auto ret = new QSslError(*((const QSslError*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 83, column 5>
//   // proto:  void QSslError::QSslError(QSslError::SslError error, const QSslCertificate & certificate);
extern "C"
QSslError*
C_ZN9QSslErrorC2ENS_8SslErrorERK15QSslCertificate(QSslError::SslError arg1,
const QSslCertificate* arg2) {
  auto ret = new QSslError(arg1, *((const QSslCertificate*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 98, column 21>
//   // proto:  QSslCertificate QSslError::certificate();
// _ZNK9QSslError11certificateEv certificate()
extern "C"
QSslCertificate*
C_ZNK9QSslError11certificateEv(void *qthis) {
  auto ret =
  ((QSslError*)qthis)->certificate();
  return new QSslCertificate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 97, column 13>
//   // proto:  QString QSslError::errorString();
// _ZNK9QSslError11errorStringEv errorString()
extern "C"
QString*
C_ZNK9QSslError11errorStringEv(void *qthis) {
  auto ret =
  ((QSslError*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 82, column 5>
//   // proto:  void QSslError::QSslError(QSslError::SslError error);
extern "C"
QSslError*
C_ZN9QSslErrorC2ENS_8SslErrorE(QSslError::SslError arg1) {
  auto ret = new QSslError(arg1);
  return ret;
}
//   // proto:  void QSslError::~QSslError();
extern "C"
void C_ZN9QSslErrorD2Ev(void *qthis) {
  delete (QSslError*)qthis;
}
// <= ext block end

// body block begin =>
// <= body block end

