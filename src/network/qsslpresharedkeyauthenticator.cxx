// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qsslpresharedkeyauthenticator.h
// dst-file: /src/network/qsslpresharedkeyauthenticator.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsslpresharedkeyauthenticator.h>


#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qsslpresharedkeyauthenticator_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h', line 59, column 10>
//   // proto:  void QSslPreSharedKeyAuthenticator::swap(QSslPreSharedKeyAuthenticator & authenticator);
if (true) {
  auto f = [](QSslPreSharedKeyAuthenticator flythis, QSslPreSharedKeyAuthenticator & arg1) {
    ((QSslPreSharedKeyAuthenticator*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN29QSslPreSharedKeyAuthenticator4swapERS_ swap(class QSslPreSharedKeyAuthenticator &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSslPreSharedKeyAuthenticator_Class_Size()
{
  return sizeof(QSslPreSharedKeyAuthenticator);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h', line 51, column 22>
//   // proto:  void QSslPreSharedKeyAuthenticator::QSslPreSharedKeyAuthenticator(const QSslPreSharedKeyAuthenticator & authenticator);
extern "C"
QSslPreSharedKeyAuthenticator*
C_ZN29QSslPreSharedKeyAuthenticatorC2ERKS_(const QSslPreSharedKeyAuthenticator* arg1) {
  auto ret = new QSslPreSharedKeyAuthenticator(*((const QSslPreSharedKeyAuthenticator*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h', line 49, column 22>
//   // proto:  void QSslPreSharedKeyAuthenticator::QSslPreSharedKeyAuthenticator();
extern "C"
QSslPreSharedKeyAuthenticator*
C_ZN29QSslPreSharedKeyAuthenticatorC2Ev() {
  auto ret = new QSslPreSharedKeyAuthenticator();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h', line 64, column 33>
//   // proto:  QByteArray QSslPreSharedKeyAuthenticator::identityHint();
// _ZNK29QSslPreSharedKeyAuthenticator12identityHintEv identityHint()
extern "C"
QByteArray*
C_ZNK29QSslPreSharedKeyAuthenticator12identityHintEv(void *qthis) {
  auto ret =
  ((QSslPreSharedKeyAuthenticator*)qthis)->identityHint();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h', line 59, column 10>
//   // proto:  void QSslPreSharedKeyAuthenticator::swap(QSslPreSharedKeyAuthenticator & authenticator);
// _ZN29QSslPreSharedKeyAuthenticator4swapERS_ swap(class QSslPreSharedKeyAuthenticator &)
extern "C"
void
C_ZN29QSslPreSharedKeyAuthenticator4swapERS_(void *qthis,
QSslPreSharedKeyAuthenticator* arg1) {
  ((QSslPreSharedKeyAuthenticator*)qthis)->swap(*((QSslPreSharedKeyAuthenticator*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h', line 67, column 33>
//   // proto:  QByteArray QSslPreSharedKeyAuthenticator::identity();
// _ZNK29QSslPreSharedKeyAuthenticator8identityEv identity()
extern "C"
QByteArray*
C_ZNK29QSslPreSharedKeyAuthenticator8identityEv(void *qthis) {
  auto ret =
  ((QSslPreSharedKeyAuthenticator*)qthis)->identity();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h', line 66, column 27>
//   // proto:  void QSslPreSharedKeyAuthenticator::setIdentity(const QByteArray & identity);
// _ZN29QSslPreSharedKeyAuthenticator11setIdentityERK10QByteArray setIdentity(const class QByteArray &)
extern "C"
void
C_ZN29QSslPreSharedKeyAuthenticator11setIdentityERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QSslPreSharedKeyAuthenticator*)qthis)->setIdentity(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h', line 70, column 27>
//   // proto:  void QSslPreSharedKeyAuthenticator::setPreSharedKey(const QByteArray & preSharedKey);
// _ZN29QSslPreSharedKeyAuthenticator15setPreSharedKeyERK10QByteArray setPreSharedKey(const class QByteArray &)
extern "C"
void
C_ZN29QSslPreSharedKeyAuthenticator15setPreSharedKeyERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QSslPreSharedKeyAuthenticator*)qthis)->setPreSharedKey(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h', line 72, column 26>
//   // proto:  int QSslPreSharedKeyAuthenticator::maximumPreSharedKeyLength();
// _ZNK29QSslPreSharedKeyAuthenticator25maximumPreSharedKeyLengthEv maximumPreSharedKeyLength()
extern "C"
int
C_ZNK29QSslPreSharedKeyAuthenticator25maximumPreSharedKeyLengthEv(void *qthis) {
  auto ret =
  ((QSslPreSharedKeyAuthenticator*)qthis)->maximumPreSharedKeyLength();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h', line 68, column 26>
//   // proto:  int QSslPreSharedKeyAuthenticator::maximumIdentityLength();
// _ZNK29QSslPreSharedKeyAuthenticator21maximumIdentityLengthEv maximumIdentityLength()
extern "C"
int
C_ZNK29QSslPreSharedKeyAuthenticator21maximumIdentityLengthEv(void *qthis) {
  auto ret =
  ((QSslPreSharedKeyAuthenticator*)qthis)->maximumIdentityLength();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h', line 71, column 33>
//   // proto:  QByteArray QSslPreSharedKeyAuthenticator::preSharedKey();
// _ZNK29QSslPreSharedKeyAuthenticator12preSharedKeyEv preSharedKey()
extern "C"
QByteArray*
C_ZNK29QSslPreSharedKeyAuthenticator12preSharedKeyEv(void *qthis) {
  auto ret =
  ((QSslPreSharedKeyAuthenticator*)qthis)->preSharedKey();
  return new QByteArray(ret); // 5
}
//   // proto:  void QSslPreSharedKeyAuthenticator::~QSslPreSharedKeyAuthenticator();
extern "C"
void C_ZN29QSslPreSharedKeyAuthenticatorD2Ev(void *qthis) {
  delete (QSslPreSharedKeyAuthenticator*)qthis;
}
// <= ext block end

// body block begin =>
// <= body block end

