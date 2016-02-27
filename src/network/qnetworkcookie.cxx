// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qnetworkcookie.h
// dst-file: /src/network/qnetworkcookie.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qnetworkcookie.h>


#include <qstring.h>
#include <qbytearray.h>
#include <qdatetime.h>
#include <qnetworkcookie.h>
#include <qlist.h>
#include <qnetworkaccessmanager.h>
// <= header block end

// main block begin =>
void __keep_qnetworkcookie_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 64, column 10>
//   // proto:  void QNetworkCookie::swap(QNetworkCookie & other);
if (true) {
  auto f = [](QNetworkCookie flythis, QNetworkCookie & arg1) {
    ((QNetworkCookie*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QNetworkCookie4swapERS_ swap(class QNetworkCookie &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QNetworkCookie_Class_Size()
{
  return sizeof(QNetworkCookie);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 71, column 10>
//   // proto:  void QNetworkCookie::setSecure(bool enable);
// _ZN14QNetworkCookie9setSecureEb setSecure(_Bool)
extern "C"
void
C_ZN14QNetworkCookie9setSecureEb(void *qthis,
bool arg1) {
  ((QNetworkCookie*)qthis)->setSecure(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 94, column 10>
//   // proto:  void QNetworkCookie::normalize(const QUrl & url);
// _ZN14QNetworkCookie9normalizeERK4QUrl normalize(const class QUrl &)
extern "C"
void
C_ZN14QNetworkCookie9normalizeERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QNetworkCookie*)qthis)->normalize(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 79, column 13>
//   // proto:  QString QNetworkCookie::domain();
// _ZNK14QNetworkCookie6domainEv domain()
extern "C"
QString*
C_ZNK14QNetworkCookie6domainEv(void *qthis) {
  auto ret =
  ((QNetworkCookie*)qthis)->domain();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 77, column 10>
//   // proto:  void QNetworkCookie::setExpirationDate(const QDateTime & date);
// _ZN14QNetworkCookie17setExpirationDateERK9QDateTime setExpirationDate(const class QDateTime &)
extern "C"
void
C_ZN14QNetworkCookie17setExpirationDateERK9QDateTime(void *qthis,
const QDateTime* arg1) {
  ((QNetworkCookie*)qthis)->setExpirationDate(*((const QDateTime*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 59, column 14>
//   // proto:  void QNetworkCookie::QNetworkCookie(const QByteArray & name, const QByteArray & value);
extern "C"
QNetworkCookie*
C_ZN14QNetworkCookieC2ERK10QByteArrayS2_(const QByteArray* arg1,
const QByteArray* arg2) {
  auto ret = new QNetworkCookie(*((const QByteArray*)arg1), *((const QByteArray*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 93, column 10>
//   // proto:  bool QNetworkCookie::hasSameIdentifier(const QNetworkCookie & other);
// _ZNK14QNetworkCookie17hasSameIdentifierERKS_ hasSameIdentifier(const class QNetworkCookie &)
extern "C"
bool
C_ZNK14QNetworkCookie17hasSameIdentifierERKS_(void *qthis,
const QNetworkCookie* arg1) {
  auto ret =
  ((QNetworkCookie*)qthis)->hasSameIdentifier(*((const QNetworkCookie*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 82, column 13>
//   // proto:  QString QNetworkCookie::path();
// _ZNK14QNetworkCookie4pathEv path()
extern "C"
QString*
C_ZNK14QNetworkCookie4pathEv(void *qthis) {
  auto ret =
  ((QNetworkCookie*)qthis)->path();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 85, column 16>
//   // proto:  QByteArray QNetworkCookie::name();
// _ZNK14QNetworkCookie4nameEv name()
extern "C"
QByteArray*
C_ZNK14QNetworkCookie4nameEv(void *qthis) {
  auto ret =
  ((QNetworkCookie*)qthis)->name();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 76, column 15>
//   // proto:  QDateTime QNetworkCookie::expirationDate();
// _ZNK14QNetworkCookie14expirationDateEv expirationDate()
extern "C"
QDateTime*
C_ZNK14QNetworkCookie14expirationDateEv(void *qthis) {
  auto ret =
  ((QNetworkCookie*)qthis)->expirationDate();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 75, column 10>
//   // proto:  bool QNetworkCookie::isSessionCookie();
// _ZNK14QNetworkCookie15isSessionCookieEv isSessionCookie()
extern "C"
bool
C_ZNK14QNetworkCookie15isSessionCookieEv(void *qthis) {
  auto ret =
  ((QNetworkCookie*)qthis)->isSessionCookie();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 86, column 10>
//   // proto:  void QNetworkCookie::setName(const QByteArray & cookieName);
// _ZN14QNetworkCookie7setNameERK10QByteArray setName(const class QByteArray &)
extern "C"
void
C_ZN14QNetworkCookie7setNameERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QNetworkCookie*)qthis)->setName(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 70, column 10>
//   // proto:  bool QNetworkCookie::isSecure();
// _ZNK14QNetworkCookie8isSecureEv isSecure()
extern "C"
bool
C_ZNK14QNetworkCookie8isSecureEv(void *qthis) {
  auto ret =
  ((QNetworkCookie*)qthis)->isSecure();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 73, column 10>
//   // proto:  void QNetworkCookie::setHttpOnly(bool enable);
// _ZN14QNetworkCookie11setHttpOnlyEb setHttpOnly(_Bool)
extern "C"
void
C_ZN14QNetworkCookie11setHttpOnlyEb(void *qthis,
bool arg1) {
  ((QNetworkCookie*)qthis)->setHttpOnly(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 80, column 10>
//   // proto:  void QNetworkCookie::setDomain(const QString & domain);
// _ZN14QNetworkCookie9setDomainERK7QString setDomain(const class QString &)
extern "C"
void
C_ZN14QNetworkCookie9setDomainERK7QString(void *qthis,
const QString* arg1) {
  ((QNetworkCookie*)qthis)->setDomain(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 72, column 10>
//   // proto:  bool QNetworkCookie::isHttpOnly();
// _ZNK14QNetworkCookie10isHttpOnlyEv isHttpOnly()
extern "C"
bool
C_ZNK14QNetworkCookie10isHttpOnlyEv(void *qthis) {
  auto ret =
  ((QNetworkCookie*)qthis)->isHttpOnly();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 64, column 10>
//   // proto:  void QNetworkCookie::swap(QNetworkCookie & other);
// _ZN14QNetworkCookie4swapERS_ swap(class QNetworkCookie &)
extern "C"
void
C_ZN14QNetworkCookie4swapERS_(void *qthis,
QNetworkCookie* arg1) {
  ((QNetworkCookie*)qthis)->swap(*((QNetworkCookie*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 91, column 16>
//   // proto:  QByteArray QNetworkCookie::toRawForm(QNetworkCookie::RawForm form);
// _ZNK14QNetworkCookie9toRawFormENS_7RawFormE toRawForm(enum QNetworkCookie::RawForm)
extern "C"
QByteArray*
C_ZNK14QNetworkCookie9toRawFormENS_7RawFormE(void *qthis,
QNetworkCookie::RawForm arg1) {
  auto ret =
  ((QNetworkCookie*)qthis)->toRawForm(arg1);
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 60, column 5>
//   // proto:  void QNetworkCookie::QNetworkCookie(const QNetworkCookie & other);
extern "C"
QNetworkCookie*
C_ZN14QNetworkCookieC2ERKS_(const QNetworkCookie* arg1) {
  auto ret = new QNetworkCookie(*((const QNetworkCookie*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 89, column 10>
//   // proto:  void QNetworkCookie::setValue(const QByteArray & value);
// _ZN14QNetworkCookie8setValueERK10QByteArray setValue(const class QByteArray &)
extern "C"
void
C_ZN14QNetworkCookie8setValueERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QNetworkCookie*)qthis)->setValue(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 88, column 16>
//   // proto:  QByteArray QNetworkCookie::value();
// _ZNK14QNetworkCookie5valueEv value()
extern "C"
QByteArray*
C_ZNK14QNetworkCookie5valueEv(void *qthis) {
  auto ret =
  ((QNetworkCookie*)qthis)->value();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 83, column 10>
//   // proto:  void QNetworkCookie::setPath(const QString & path);
// _ZN14QNetworkCookie7setPathERK7QString setPath(const class QString &)
extern "C"
void
C_ZN14QNetworkCookie7setPathERK7QString(void *qthis,
const QString* arg1) {
  ((QNetworkCookie*)qthis)->setPath(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 96, column 34>
//   // proto: static QList<QNetworkCookie> QNetworkCookie::parseCookies(const QByteArray & cookieString);
// _ZN14QNetworkCookie12parseCookiesERK10QByteArray parseCookies(const class QByteArray &)
extern "C"
QList<QNetworkCookie>*
C_ZN14QNetworkCookie12parseCookiesERK10QByteArray(const QByteArray* arg1) {
  auto ret =
  QNetworkCookie::parseCookies(*((const QByteArray*)arg1));
  return new QList<QNetworkCookie>(ret); // 5
}
//   // proto:  void QNetworkCookie::~QNetworkCookie();
extern "C"
void C_ZN14QNetworkCookieD2Ev(void *qthis) {
  delete (QNetworkCookie*)qthis;
}
// <= ext block end

// body block begin =>
// <= body block end

