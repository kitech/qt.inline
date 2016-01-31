#include <qstring.h>
#include <qsslcertificate.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qsslerror.h
// dst-file: /src/network/qsslerror.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qsslerror.h>

extern "C" {

int QSslError_Class_Size()
{
  return sizeof(QSslError);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsslerror_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 81, column 5>
//   // proto:  void QSslError::QSslError();
if (true) {
  auto f = []() {
    new QSslError();
  };
  if (f == nullptr){}
}
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
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 96, column 14>
//   // proto:  QSslError::SslError QSslError::error();
if (true) {
  auto f = [](QSslError flythis) {
    ((QSslError*)0)->error();
    flythis.error();
  };
  if (f == nullptr){}
}
// _ZNK9QSslError5errorEv error()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 85, column 5>
//   // proto:  void QSslError::QSslError(const QSslError & other);
if (true) {
  auto f = [](const QSslError & arg1) {
    new QSslError(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 83, column 5>
//   // proto:  void QSslError::QSslError(QSslError::SslError error, const QSslCertificate & certificate);
if (true) {
  auto f = [](QSslError::SslError arg1, const QSslCertificate & arg2) {
    new QSslError(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 98, column 21>
//   // proto:  QSslCertificate QSslError::certificate();
if (true) {
  auto f = [](QSslError flythis) {
    ((QSslError*)0)->certificate();
    flythis.certificate();
  };
  if (f == nullptr){}
}
// _ZNK9QSslError11certificateEv certificate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 97, column 13>
//   // proto:  QString QSslError::errorString();
if (true) {
  auto f = [](QSslError flythis) {
    ((QSslError*)0)->errorString();
    flythis.errorString();
  };
  if (f == nullptr){}
}
// _ZNK9QSslError11errorStringEv errorString()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 82, column 5>
//   // proto:  void QSslError::QSslError(QSslError::SslError error);
if (true) {
  auto f = [](QSslError::SslError arg1) {
    new QSslError(arg1);
  };
  if (f == nullptr){}
}
//   // proto:  void QSslError::~QSslError();
if (true) {
  delete ((QSslError*)0);
}
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 81, column 5>
//   // proto:  void QSslError::QSslError();
extern "C"
void C_ZN9QSslErrorC2Ev() {
  new QSslError();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 87, column 17>
//   // proto:  void QSslError::swap(QSslError & other);
extern "C"
void C_ZN9QSslError4swapERS_(void *qthis, QSslError & arg1) {
  ((QSslError*)qthis)->swap(arg1);
}
// _ZN9QSslError4swapERS_ swap(class QSslError &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 96, column 14>
//   // proto:  QSslError::SslError QSslError::error();
extern "C"
void C_ZNK9QSslError5errorEv(void *qthis) {
  ((QSslError*)qthis)->error();
}
// _ZNK9QSslError5errorEv error()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 85, column 5>
//   // proto:  void QSslError::QSslError(const QSslError & other);
extern "C"
void C_ZN9QSslErrorC2ERKS_(const QSslError & arg1) {
  new QSslError(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 83, column 5>
//   // proto:  void QSslError::QSslError(QSslError::SslError error, const QSslCertificate & certificate);
extern "C"
void C_ZN9QSslErrorC2ENS_8SslErrorERK15QSslCertificate(QSslError::SslError arg1, const QSslCertificate & arg2) {
  new QSslError(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 98, column 21>
//   // proto:  QSslCertificate QSslError::certificate();
extern "C"
void C_ZNK9QSslError11certificateEv(void *qthis) {
  ((QSslError*)qthis)->certificate();
}
// _ZNK9QSslError11certificateEv certificate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 97, column 13>
//   // proto:  QString QSslError::errorString();
extern "C"
void C_ZNK9QSslError11errorStringEv(void *qthis) {
  ((QSslError*)qthis)->errorString();
}
// _ZNK9QSslError11errorStringEv errorString()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslerror.h', line 82, column 5>
//   // proto:  void QSslError::QSslError(QSslError::SslError error);
extern "C"
void C_ZN9QSslErrorC2ENS_8SslErrorE(QSslError::SslError arg1) {
  new QSslError(arg1);
}
//   // proto:  void QSslError::~QSslError();
extern "C"
void C_ZN9QSslErrorD2Ev(void *qthis) {
  delete (QSslError*)qthis;
}
// <= ext block end

// body block begin =>
// <= body block end

