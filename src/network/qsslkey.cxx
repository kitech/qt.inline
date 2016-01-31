#include <qnamespace.h>
#include <qbytearray.h>
#include <qssl.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qsslkey.h
// dst-file: /src/network/qsslkey.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qsslkey.h>

extern "C" {

int QSslKey_Class_Size()
{
  return sizeof(QSslKey);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsslkey_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 77, column 24>
//   // proto:  QSsl::KeyAlgorithm QSslKey::algorithm();
if (true) {
  auto f = [](QSslKey flythis) {
    ((QSslKey*)0)->algorithm();
    flythis.algorithm();
  };
  if (f == nullptr){}
}
// _ZNK7QSslKey9algorithmEv algorithm()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 75, column 9>
//   // proto:  int QSslKey::length();
if (true) {
  auto f = [](QSslKey flythis) {
    ((QSslKey*)0)->length();
    flythis.length();
  };
  if (f == nullptr){}
}
// _ZNK7QSslKey6lengthEv length()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 72, column 10>
//   // proto:  bool QSslKey::isNull();
if (true) {
  auto f = [](QSslKey flythis) {
    ((QSslKey*)0)->isNull();
    flythis.isNull();
  };
  if (f == nullptr){}
}
// _ZNK7QSslKey6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 56, column 5>
//   // proto:  void QSslKey::QSslKey();
if (true) {
  auto f = []() {
    new QSslKey();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 57, column 5>
//   // proto:  void QSslKey::QSslKey(const QByteArray & encoded, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type, const QByteArray & passPhrase);
if (true) {
  auto f = [](const QByteArray & arg1, QSsl::KeyAlgorithm arg2, QSsl::EncodingFormat arg3, QSsl::KeyType arg4, const QByteArray & arg5) {
    new QSslKey(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 66, column 5>
//   // proto:  void QSslKey::QSslKey(const QSslKey & other);
if (true) {
  auto f = [](const QSslKey & arg1) {
    new QSslKey(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 79, column 16>
//   // proto:  QByteArray QSslKey::toPem(const QByteArray & passPhrase);
if (true) {
  auto f = [](QSslKey flythis, const QByteArray & arg1) {
    ((QSslKey*)0)->toPem(arg1);
    flythis.toPem(arg1);
  };
  if (f == nullptr){}
}
// _ZNK7QSslKey5toPemERK10QByteArray toPem(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 73, column 10>
//   // proto:  void QSslKey::clear();
if (true) {
  auto f = [](QSslKey flythis) {
    ((QSslKey*)0)->clear();
    flythis.clear();
  };
  if (f == nullptr){}
}
// _ZN7QSslKey5clearEv clear()
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
//   // proto:  void QSslKey::~QSslKey();
if (true) {
  delete ((QSslKey*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 76, column 19>
//   // proto:  QSsl::KeyType QSslKey::type();
if (true) {
  auto f = [](QSslKey flythis) {
    ((QSslKey*)0)->type();
    flythis.type();
  };
  if (f == nullptr){}
}
// _ZNK7QSslKey4typeEv type()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 61, column 5>
//   // proto:  void QSslKey::QSslKey(QIODevice * device, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type, const QByteArray & passPhrase);
if (true) {
  auto f = [](QIODevice * arg1, QSsl::KeyAlgorithm arg2, QSsl::EncodingFormat arg3, QSsl::KeyType arg4, const QByteArray & arg5) {
    new QSslKey(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 80, column 16>
//   // proto:  QByteArray QSslKey::toDer(const QByteArray & passPhrase);
if (true) {
  auto f = [](QSslKey flythis, const QByteArray & arg1) {
    ((QSslKey*)0)->toDer(arg1);
    flythis.toDer(arg1);
  };
  if (f == nullptr){}
}
// _ZNK7QSslKey5toDerERK10QByteArray toDer(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 82, column 16>
//   // proto:  Qt::HANDLE QSslKey::handle();
if (true) {
  auto f = [](QSslKey flythis) {
    ((QSslKey*)0)->handle();
    flythis.handle();
  };
  if (f == nullptr){}
}
// _ZNK7QSslKey6handleEv handle()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 65, column 14>
//   // proto:  void QSslKey::QSslKey(Qt::HANDLE handle, QSsl::KeyType type);
if (true) {
  auto f = [](Qt::HANDLE arg1, QSsl::KeyType arg2) {
    new QSslKey(arg1, arg2);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 77, column 24>
//   // proto:  QSsl::KeyAlgorithm QSslKey::algorithm();
extern "C"
void C_ZNK7QSslKey9algorithmEv(void *qthis) {
  ((QSslKey*)qthis)->algorithm();
}
// _ZNK7QSslKey9algorithmEv algorithm()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 75, column 9>
//   // proto:  int QSslKey::length();
extern "C"
void C_ZNK7QSslKey6lengthEv(void *qthis) {
  ((QSslKey*)qthis)->length();
}
// _ZNK7QSslKey6lengthEv length()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 72, column 10>
//   // proto:  bool QSslKey::isNull();
extern "C"
void C_ZNK7QSslKey6isNullEv(void *qthis) {
  ((QSslKey*)qthis)->isNull();
}
// _ZNK7QSslKey6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 56, column 5>
//   // proto:  void QSslKey::QSslKey();
extern "C"
void C_ZN7QSslKeyC2Ev() {
  new QSslKey();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 57, column 5>
//   // proto:  void QSslKey::QSslKey(const QByteArray & encoded, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type, const QByteArray & passPhrase);
extern "C"
void C_ZN7QSslKeyC2ERK10QByteArrayN4QSsl12KeyAlgorithmENS3_14EncodingFormatENS3_7KeyTypeES2_(const QByteArray & arg1, QSsl::KeyAlgorithm arg2, QSsl::EncodingFormat arg3, QSsl::KeyType arg4, const QByteArray & arg5) {
  new QSslKey(arg1, arg2, arg3, arg4, arg5);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 66, column 5>
//   // proto:  void QSslKey::QSslKey(const QSslKey & other);
extern "C"
void C_ZN7QSslKeyC2ERKS_(const QSslKey & arg1) {
  new QSslKey(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 79, column 16>
//   // proto:  QByteArray QSslKey::toPem(const QByteArray & passPhrase);
extern "C"
void C_ZNK7QSslKey5toPemERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QSslKey*)qthis)->toPem(arg1);
}
// _ZNK7QSslKey5toPemERK10QByteArray toPem(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 73, column 10>
//   // proto:  void QSslKey::clear();
extern "C"
void C_ZN7QSslKey5clearEv(void *qthis) {
  ((QSslKey*)qthis)->clear();
}
// _ZN7QSslKey5clearEv clear()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 70, column 17>
//   // proto:  void QSslKey::swap(QSslKey & other);
extern "C"
void C_ZN7QSslKey4swapERS_(void *qthis, QSslKey & arg1) {
  ((QSslKey*)qthis)->swap(arg1);
}
// _ZN7QSslKey4swapERS_ swap(class QSslKey &)
//   // proto:  void QSslKey::~QSslKey();
extern "C"
void C_ZN7QSslKeyD2Ev(void *qthis) {
  delete (QSslKey*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 76, column 19>
//   // proto:  QSsl::KeyType QSslKey::type();
extern "C"
void C_ZNK7QSslKey4typeEv(void *qthis) {
  ((QSslKey*)qthis)->type();
}
// _ZNK7QSslKey4typeEv type()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 61, column 5>
//   // proto:  void QSslKey::QSslKey(QIODevice * device, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type, const QByteArray & passPhrase);
extern "C"
void C_ZN7QSslKeyC2EP9QIODeviceN4QSsl12KeyAlgorithmENS2_14EncodingFormatENS2_7KeyTypeERK10QByteArray(QIODevice * arg1, QSsl::KeyAlgorithm arg2, QSsl::EncodingFormat arg3, QSsl::KeyType arg4, const QByteArray & arg5) {
  new QSslKey(arg1, arg2, arg3, arg4, arg5);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 80, column 16>
//   // proto:  QByteArray QSslKey::toDer(const QByteArray & passPhrase);
extern "C"
void C_ZNK7QSslKey5toDerERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QSslKey*)qthis)->toDer(arg1);
}
// _ZNK7QSslKey5toDerERK10QByteArray toDer(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 82, column 16>
//   // proto:  Qt::HANDLE QSslKey::handle();
extern "C"
void C_ZNK7QSslKey6handleEv(void *qthis) {
  ((QSslKey*)qthis)->handle();
}
// _ZNK7QSslKey6handleEv handle()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslkey.h', line 65, column 14>
//   // proto:  void QSslKey::QSslKey(Qt::HANDLE handle, QSsl::KeyType type);
extern "C"
void C_ZN7QSslKeyC2EPvN4QSsl7KeyTypeE(Qt::HANDLE arg1, QSsl::KeyType arg2) {
  new QSslKey(arg1, arg2);
}
// <= ext block end

// body block begin =>
// <= body block end

