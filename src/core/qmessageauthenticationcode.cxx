// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qmessageauthenticationcode.h
// dst-file: /src/core/qmessageauthenticationcode.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmessageauthenticationcode.h>


#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qmessageauthenticationcode_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMessageAuthenticationCode_Class_Size()
{
  return sizeof(QMessageAuthenticationCode);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qmessageauthenticationcode.h', line 60, column 16>
//   // proto:  QByteArray QMessageAuthenticationCode::result();
// _ZNK26QMessageAuthenticationCode6resultEv result()
extern "C"
QByteArray*
C_ZNK26QMessageAuthenticationCode6resultEv(void *qthis) {
  auto ret =
  ((QMessageAuthenticationCode*)qthis)->result();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmessageauthenticationcode.h', line 57, column 10>
//   // proto:  void QMessageAuthenticationCode::addData(const QByteArray & data);
// _ZN26QMessageAuthenticationCode7addDataERK10QByteArray addData(const class QByteArray &)
extern "C"
void
C_ZN26QMessageAuthenticationCode7addDataERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QMessageAuthenticationCode*)qthis)->addData(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qmessageauthenticationcode.h', line 48, column 14>
//   // proto:  void QMessageAuthenticationCode::QMessageAuthenticationCode(QCryptographicHash::Algorithm method, const QByteArray & key);
extern "C"
QMessageAuthenticationCode*
C_ZN26QMessageAuthenticationCodeC2EN18QCryptographicHash9AlgorithmERK10QByteArray(QCryptographicHash::Algorithm* arg1,
const QByteArray* arg2) {
  auto ret = new QMessageAuthenticationCode(*((QCryptographicHash::Algorithm*)arg1),
*((const QByteArray*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmessageauthenticationcode.h', line 56, column 10>
//   // proto:  void QMessageAuthenticationCode::addData(const char * data, int length);
// _ZN26QMessageAuthenticationCode7addDataEPKci addData(const char *, int)
extern "C"
void
C_ZN26QMessageAuthenticationCode7addDataEPKci(void *qthis,
const char * arg1,
int arg2) {
  ((QMessageAuthenticationCode*)qthis)->addData(arg1,
arg2);
}
//   // proto:  void QMessageAuthenticationCode::~QMessageAuthenticationCode();
extern "C"
void C_ZN26QMessageAuthenticationCodeD2Ev(void *qthis) {
  delete (QMessageAuthenticationCode*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmessageauthenticationcode.h', line 52, column 10>
//   // proto:  void QMessageAuthenticationCode::reset();
// _ZN26QMessageAuthenticationCode5resetEv reset()
extern "C"
void
C_ZN26QMessageAuthenticationCode5resetEv(void *qthis) {
  ((QMessageAuthenticationCode*)qthis)->reset();
}
// <SourceLocation file '/usr/include/qt/QtCore/qmessageauthenticationcode.h', line 58, column 10>
//   // proto:  bool QMessageAuthenticationCode::addData(QIODevice * device);
// _ZN26QMessageAuthenticationCode7addDataEP9QIODevice addData(class QIODevice *)
extern "C"
bool
C_ZN26QMessageAuthenticationCode7addDataEP9QIODevice(void *qthis,
QIODevice * arg1) {
  auto ret =
  ((QMessageAuthenticationCode*)qthis)->addData(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmessageauthenticationcode.h', line 54, column 10>
//   // proto:  void QMessageAuthenticationCode::setKey(const QByteArray & key);
// _ZN26QMessageAuthenticationCode6setKeyERK10QByteArray setKey(const class QByteArray &)
extern "C"
void
C_ZN26QMessageAuthenticationCode6setKeyERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QMessageAuthenticationCode*)qthis)->setKey(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qmessageauthenticationcode.h', line 62, column 23>
//   // proto: static QByteArray QMessageAuthenticationCode::hash(const QByteArray & message, const QByteArray & key, QCryptographicHash::Algorithm method);
// _ZN26QMessageAuthenticationCode4hashERK10QByteArrayS2_N18QCryptographicHash9AlgorithmE hash(const class QByteArray &, const class QByteArray &, class QCryptographicHash::Algorithm)
extern "C"
QByteArray*
C_ZN26QMessageAuthenticationCode4hashERK10QByteArrayS2_N18QCryptographicHash9AlgorithmE(const QByteArray* arg1,
const QByteArray* arg2,
QCryptographicHash::Algorithm* arg3) {
  auto ret =
  QMessageAuthenticationCode::hash(*((const QByteArray*)arg1),
*((const QByteArray*)arg2),
*((QCryptographicHash::Algorithm*)arg3));
  return new QByteArray(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

