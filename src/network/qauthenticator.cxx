// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qauthenticator.h
// dst-file: /src/network/qauthenticator.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qauthenticator.h>


#include <qstring.h>
#include <qjsonobject.h>
#include <qvariant.h>
// <= header block end

// main block begin =>
void __keep_qauthenticator_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAuthenticator_Class_Size()
{
  return sizeof(QAuthenticator);
}

// <= use block end

// ext block begin =>
//   // proto:  void QAuthenticator::~QAuthenticator();
extern "C"
void C_ZN14QAuthenticatorD2Ev(void *qthis) {
  delete (QAuthenticator*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 65, column 10>
//   // proto:  void QAuthenticator::setRealm(const QString & realm);
// _ZN14QAuthenticator8setRealmERK7QString setRealm(const class QString &)
extern "C"
void
C_ZN14QAuthenticator8setRealmERK7QString(void *qthis,
const QString* arg1) {
  ((QAuthenticator*)qthis)->setRealm(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 61, column 13>
//   // proto:  QString QAuthenticator::password();
// _ZNK14QAuthenticator8passwordEv password()
extern "C"
QString*
C_ZNK14QAuthenticator8passwordEv(void *qthis) {
  auto ret =
  ((QAuthenticator*)qthis)->password();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 68, column 18>
//   // proto:  QVariantHash QAuthenticator::options();
// _ZNK14QAuthenticator7optionsEv options()
extern "C"
QHash<QString, QVariant>*
C_ZNK14QAuthenticator7optionsEv(void *qthis) {
  auto ret =
  ((QAuthenticator*)qthis)->options();
  return new QHash<QString, QVariant>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 49, column 5>
//   // proto:  void QAuthenticator::QAuthenticator();
extern "C"
QAuthenticator*
C_ZN14QAuthenticatorC2Ev() {
  auto ret = new QAuthenticator();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 64, column 13>
//   // proto:  QString QAuthenticator::realm();
// _ZNK14QAuthenticator5realmEv realm()
extern "C"
QString*
C_ZNK14QAuthenticator5realmEv(void *qthis) {
  auto ret =
  ((QAuthenticator*)qthis)->realm();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 69, column 10>
//   // proto:  void QAuthenticator::setOption(const QString & opt, const QVariant & value);
// _ZN14QAuthenticator9setOptionERK7QStringRK8QVariant setOption(const class QString &, const class QVariant &)
extern "C"
void
C_ZN14QAuthenticator9setOptionERK7QStringRK8QVariant(void *qthis,
const QString* arg1,
const QVariant* arg2) {
  ((QAuthenticator*)qthis)->setOption(*((const QString*)arg1),
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 58, column 13>
//   // proto:  QString QAuthenticator::user();
// _ZNK14QAuthenticator4userEv user()
extern "C"
QString*
C_ZNK14QAuthenticator4userEv(void *qthis) {
  auto ret =
  ((QAuthenticator*)qthis)->user();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 52, column 5>
//   // proto:  void QAuthenticator::QAuthenticator(const QAuthenticator & other);
extern "C"
QAuthenticator*
C_ZN14QAuthenticatorC2ERKS_(const QAuthenticator* arg1) {
  auto ret = new QAuthenticator(*((const QAuthenticator*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 67, column 14>
//   // proto:  QVariant QAuthenticator::option(const QString & opt);
// _ZNK14QAuthenticator6optionERK7QString option(const class QString &)
extern "C"
QVariant*
C_ZNK14QAuthenticator6optionERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QAuthenticator*)qthis)->option(*((const QString*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 62, column 10>
//   // proto:  void QAuthenticator::setPassword(const QString & password);
// _ZN14QAuthenticator11setPasswordERK7QString setPassword(const class QString &)
extern "C"
void
C_ZN14QAuthenticator11setPasswordERK7QString(void *qthis,
const QString* arg1) {
  ((QAuthenticator*)qthis)->setPassword(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 59, column 10>
//   // proto:  void QAuthenticator::setUser(const QString & user);
// _ZN14QAuthenticator7setUserERK7QString setUser(const class QString &)
extern "C"
void
C_ZN14QAuthenticator7setUserERK7QString(void *qthis,
const QString* arg1) {
  ((QAuthenticator*)qthis)->setUser(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 72, column 10>
//   // proto:  void QAuthenticator::detach();
// _ZN14QAuthenticator6detachEv detach()
extern "C"
void
C_ZN14QAuthenticator6detachEv(void *qthis) {
  ((QAuthenticator*)qthis)->detach();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qauthenticator.h', line 71, column 10>
//   // proto:  bool QAuthenticator::isNull();
// _ZNK14QAuthenticator6isNullEv isNull()
extern "C"
bool
C_ZNK14QAuthenticator6isNullEv(void *qthis) {
  auto ret =
  ((QAuthenticator*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

