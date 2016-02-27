// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qcryptographichash.h
// dst-file: /src/core/qcryptographichash.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcryptographichash.h>


#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qcryptographichash_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QCryptographicHash_Class_Size()
{
  return sizeof(QCryptographicHash);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qcryptographichash.h', line 74, column 10>
//   // proto:  bool QCryptographicHash::addData(QIODevice * device);
// _ZN18QCryptographicHash7addDataEP9QIODevice addData(class QIODevice *)
extern "C"
bool
C_ZN18QCryptographicHash7addDataEP9QIODevice(void *qthis,
QIODevice * arg1) {
  auto ret =
  ((QCryptographicHash*)qthis)->addData(arg1);
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QCryptographicHash::~QCryptographicHash();
extern "C"
void C_ZN18QCryptographicHashD2Ev(void *qthis) {
  delete (QCryptographicHash*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcryptographichash.h', line 70, column 10>
//   // proto:  void QCryptographicHash::reset();
// _ZN18QCryptographicHash5resetEv reset()
extern "C"
void
C_ZN18QCryptographicHash5resetEv(void *qthis) {
  ((QCryptographicHash*)qthis)->reset();
}
// <SourceLocation file '/usr/include/qt/QtCore/qcryptographichash.h', line 72, column 10>
//   // proto:  void QCryptographicHash::addData(const char * data, int length);
// _ZN18QCryptographicHash7addDataEPKci addData(const char *, int)
extern "C"
void
C_ZN18QCryptographicHash7addDataEPKci(void *qthis,
const char * arg1,
int arg2) {
  ((QCryptographicHash*)qthis)->addData(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qcryptographichash.h', line 67, column 14>
//   // proto:  void QCryptographicHash::QCryptographicHash(QCryptographicHash::Algorithm method);
extern "C"
QCryptographicHash*
C_ZN18QCryptographicHashC2ENS_9AlgorithmE(QCryptographicHash::Algorithm arg1) {
  auto ret = new QCryptographicHash(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcryptographichash.h', line 76, column 16>
//   // proto:  QByteArray QCryptographicHash::result();
// _ZNK18QCryptographicHash6resultEv result()
extern "C"
QByteArray*
C_ZNK18QCryptographicHash6resultEv(void *qthis) {
  auto ret =
  ((QCryptographicHash*)qthis)->result();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcryptographichash.h', line 73, column 10>
//   // proto:  void QCryptographicHash::addData(const QByteArray & data);
// _ZN18QCryptographicHash7addDataERK10QByteArray addData(const class QByteArray &)
extern "C"
void
C_ZN18QCryptographicHash7addDataERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QCryptographicHash*)qthis)->addData(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcryptographichash.h', line 78, column 23>
//   // proto: static QByteArray QCryptographicHash::hash(const QByteArray & data, QCryptographicHash::Algorithm method);
// _ZN18QCryptographicHash4hashERK10QByteArrayNS_9AlgorithmE hash(const class QByteArray &, enum QCryptographicHash::Algorithm)
extern "C"
QByteArray*
C_ZN18QCryptographicHash4hashERK10QByteArrayNS_9AlgorithmE(const QByteArray* arg1,
QCryptographicHash::Algorithm arg2) {
  auto ret =
  QCryptographicHash::hash(*((const QByteArray*)arg1),
arg2);
  return new QByteArray(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

