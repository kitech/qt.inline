#include <qnetworkaccessmanager.h>
#include <qlist.h>
#include <qdatetime.h>
#include <qbytearray.h>
#include <qstring.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qnetworkcookie.h
// dst-file: /src/network/qnetworkcookie.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qnetworkcookie.h>

extern "C" {

int QNetworkCookie_Class_Size()
{
  return sizeof(QNetworkCookie);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qnetworkcookie_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 71, column 10>
//   // proto:  void QNetworkCookie::setSecure(bool enable);
if (true) {
  auto f = [](QNetworkCookie flythis, bool arg1) {
    ((QNetworkCookie*)0)->setSecure(arg1);
    flythis.setSecure(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QNetworkCookie9setSecureEb setSecure(_Bool)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 94, column 10>
//   // proto:  void QNetworkCookie::normalize(const QUrl & url);
if (true) {
  auto f = [](QNetworkCookie flythis, const QUrl & arg1) {
    ((QNetworkCookie*)0)->normalize(arg1);
    flythis.normalize(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QNetworkCookie9normalizeERK4QUrl normalize(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 79, column 13>
//   // proto:  QString QNetworkCookie::domain();
if (true) {
  auto f = [](QNetworkCookie flythis) {
    ((QNetworkCookie*)0)->domain();
    flythis.domain();
  };
  if (f == nullptr){}
}
// _ZNK14QNetworkCookie6domainEv domain()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 77, column 10>
//   // proto:  void QNetworkCookie::setExpirationDate(const QDateTime & date);
if (true) {
  auto f = [](QNetworkCookie flythis, const QDateTime & arg1) {
    ((QNetworkCookie*)0)->setExpirationDate(arg1);
    flythis.setExpirationDate(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QNetworkCookie17setExpirationDateERK9QDateTime setExpirationDate(const class QDateTime &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 59, column 14>
//   // proto:  void QNetworkCookie::QNetworkCookie(const QByteArray & name, const QByteArray & value);
if (true) {
  auto f = [](const QByteArray & arg1, const QByteArray & arg2) {
    new QNetworkCookie(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 93, column 10>
//   // proto:  bool QNetworkCookie::hasSameIdentifier(const QNetworkCookie & other);
if (true) {
  auto f = [](QNetworkCookie flythis, const QNetworkCookie & arg1) {
    ((QNetworkCookie*)0)->hasSameIdentifier(arg1);
    flythis.hasSameIdentifier(arg1);
  };
  if (f == nullptr){}
}
// _ZNK14QNetworkCookie17hasSameIdentifierERKS_ hasSameIdentifier(const class QNetworkCookie &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 82, column 13>
//   // proto:  QString QNetworkCookie::path();
if (true) {
  auto f = [](QNetworkCookie flythis) {
    ((QNetworkCookie*)0)->path();
    flythis.path();
  };
  if (f == nullptr){}
}
// _ZNK14QNetworkCookie4pathEv path()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 85, column 16>
//   // proto:  QByteArray QNetworkCookie::name();
if (true) {
  auto f = [](QNetworkCookie flythis) {
    ((QNetworkCookie*)0)->name();
    flythis.name();
  };
  if (f == nullptr){}
}
// _ZNK14QNetworkCookie4nameEv name()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 76, column 15>
//   // proto:  QDateTime QNetworkCookie::expirationDate();
if (true) {
  auto f = [](QNetworkCookie flythis) {
    ((QNetworkCookie*)0)->expirationDate();
    flythis.expirationDate();
  };
  if (f == nullptr){}
}
// _ZNK14QNetworkCookie14expirationDateEv expirationDate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 75, column 10>
//   // proto:  bool QNetworkCookie::isSessionCookie();
if (true) {
  auto f = [](QNetworkCookie flythis) {
    ((QNetworkCookie*)0)->isSessionCookie();
    flythis.isSessionCookie();
  };
  if (f == nullptr){}
}
// _ZNK14QNetworkCookie15isSessionCookieEv isSessionCookie()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 86, column 10>
//   // proto:  void QNetworkCookie::setName(const QByteArray & cookieName);
if (true) {
  auto f = [](QNetworkCookie flythis, const QByteArray & arg1) {
    ((QNetworkCookie*)0)->setName(arg1);
    flythis.setName(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QNetworkCookie7setNameERK10QByteArray setName(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 70, column 10>
//   // proto:  bool QNetworkCookie::isSecure();
if (true) {
  auto f = [](QNetworkCookie flythis) {
    ((QNetworkCookie*)0)->isSecure();
    flythis.isSecure();
  };
  if (f == nullptr){}
}
// _ZNK14QNetworkCookie8isSecureEv isSecure()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 73, column 10>
//   // proto:  void QNetworkCookie::setHttpOnly(bool enable);
if (true) {
  auto f = [](QNetworkCookie flythis, bool arg1) {
    ((QNetworkCookie*)0)->setHttpOnly(arg1);
    flythis.setHttpOnly(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QNetworkCookie11setHttpOnlyEb setHttpOnly(_Bool)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 80, column 10>
//   // proto:  void QNetworkCookie::setDomain(const QString & domain);
if (true) {
  auto f = [](QNetworkCookie flythis, const QString & arg1) {
    ((QNetworkCookie*)0)->setDomain(arg1);
    flythis.setDomain(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QNetworkCookie9setDomainERK7QString setDomain(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 72, column 10>
//   // proto:  bool QNetworkCookie::isHttpOnly();
if (true) {
  auto f = [](QNetworkCookie flythis) {
    ((QNetworkCookie*)0)->isHttpOnly();
    flythis.isHttpOnly();
  };
  if (f == nullptr){}
}
// _ZNK14QNetworkCookie10isHttpOnlyEv isHttpOnly()
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
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 91, column 16>
//   // proto:  QByteArray QNetworkCookie::toRawForm(QNetworkCookie::RawForm form);
if (true) {
  auto f = [](QNetworkCookie flythis, QNetworkCookie::RawForm arg1) {
    ((QNetworkCookie*)0)->toRawForm(arg1);
    flythis.toRawForm(arg1);
  };
  if (f == nullptr){}
}
// _ZNK14QNetworkCookie9toRawFormENS_7RawFormE toRawForm(enum QNetworkCookie::RawForm)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 60, column 5>
//   // proto:  void QNetworkCookie::QNetworkCookie(const QNetworkCookie & other);
if (true) {
  auto f = [](const QNetworkCookie & arg1) {
    new QNetworkCookie(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 89, column 10>
//   // proto:  void QNetworkCookie::setValue(const QByteArray & value);
if (true) {
  auto f = [](QNetworkCookie flythis, const QByteArray & arg1) {
    ((QNetworkCookie*)0)->setValue(arg1);
    flythis.setValue(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QNetworkCookie8setValueERK10QByteArray setValue(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 88, column 16>
//   // proto:  QByteArray QNetworkCookie::value();
if (true) {
  auto f = [](QNetworkCookie flythis) {
    ((QNetworkCookie*)0)->value();
    flythis.value();
  };
  if (f == nullptr){}
}
// _ZNK14QNetworkCookie5valueEv value()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 83, column 10>
//   // proto:  void QNetworkCookie::setPath(const QString & path);
if (true) {
  auto f = [](QNetworkCookie flythis, const QString & arg1) {
    ((QNetworkCookie*)0)->setPath(arg1);
    flythis.setPath(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QNetworkCookie7setPathERK7QString setPath(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 96, column 34>
//   // proto: static QList<QNetworkCookie> QNetworkCookie::parseCookies(const QByteArray & cookieString);
if (true) {
  auto f = [](QNetworkCookie flythis, const QByteArray & arg1) {
    ((QNetworkCookie*)0)->parseCookies(arg1);
    flythis.parseCookies(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QNetworkCookie12parseCookiesERK10QByteArray parseCookies(const class QByteArray &)
//   // proto:  void QNetworkCookie::~QNetworkCookie();
if (true) {
  delete ((QNetworkCookie*)0);
}
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 71, column 10>
//   // proto:  void QNetworkCookie::setSecure(bool enable);
extern "C"
void C_ZN14QNetworkCookie9setSecureEb(void *qthis, bool arg1) {
  ((QNetworkCookie*)qthis)->setSecure(arg1);
}
// _ZN14QNetworkCookie9setSecureEb setSecure(_Bool)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 94, column 10>
//   // proto:  void QNetworkCookie::normalize(const QUrl & url);
extern "C"
void C_ZN14QNetworkCookie9normalizeERK4QUrl(void *qthis, const QUrl & arg1) {
  ((QNetworkCookie*)qthis)->normalize(arg1);
}
// _ZN14QNetworkCookie9normalizeERK4QUrl normalize(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 79, column 13>
//   // proto:  QString QNetworkCookie::domain();
extern "C"
void C_ZNK14QNetworkCookie6domainEv(void *qthis) {
  ((QNetworkCookie*)qthis)->domain();
}
// _ZNK14QNetworkCookie6domainEv domain()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 77, column 10>
//   // proto:  void QNetworkCookie::setExpirationDate(const QDateTime & date);
extern "C"
void C_ZN14QNetworkCookie17setExpirationDateERK9QDateTime(void *qthis, const QDateTime & arg1) {
  ((QNetworkCookie*)qthis)->setExpirationDate(arg1);
}
// _ZN14QNetworkCookie17setExpirationDateERK9QDateTime setExpirationDate(const class QDateTime &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 59, column 14>
//   // proto:  void QNetworkCookie::QNetworkCookie(const QByteArray & name, const QByteArray & value);
extern "C"
void C_ZN14QNetworkCookieC2ERK10QByteArrayS2_(const QByteArray & arg1, const QByteArray & arg2) {
  new QNetworkCookie(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 93, column 10>
//   // proto:  bool QNetworkCookie::hasSameIdentifier(const QNetworkCookie & other);
extern "C"
void C_ZNK14QNetworkCookie17hasSameIdentifierERKS_(void *qthis, const QNetworkCookie & arg1) {
  ((QNetworkCookie*)qthis)->hasSameIdentifier(arg1);
}
// _ZNK14QNetworkCookie17hasSameIdentifierERKS_ hasSameIdentifier(const class QNetworkCookie &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 82, column 13>
//   // proto:  QString QNetworkCookie::path();
extern "C"
void C_ZNK14QNetworkCookie4pathEv(void *qthis) {
  ((QNetworkCookie*)qthis)->path();
}
// _ZNK14QNetworkCookie4pathEv path()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 85, column 16>
//   // proto:  QByteArray QNetworkCookie::name();
extern "C"
void C_ZNK14QNetworkCookie4nameEv(void *qthis) {
  ((QNetworkCookie*)qthis)->name();
}
// _ZNK14QNetworkCookie4nameEv name()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 76, column 15>
//   // proto:  QDateTime QNetworkCookie::expirationDate();
extern "C"
void C_ZNK14QNetworkCookie14expirationDateEv(void *qthis) {
  ((QNetworkCookie*)qthis)->expirationDate();
}
// _ZNK14QNetworkCookie14expirationDateEv expirationDate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 75, column 10>
//   // proto:  bool QNetworkCookie::isSessionCookie();
extern "C"
void C_ZNK14QNetworkCookie15isSessionCookieEv(void *qthis) {
  ((QNetworkCookie*)qthis)->isSessionCookie();
}
// _ZNK14QNetworkCookie15isSessionCookieEv isSessionCookie()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 86, column 10>
//   // proto:  void QNetworkCookie::setName(const QByteArray & cookieName);
extern "C"
void C_ZN14QNetworkCookie7setNameERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QNetworkCookie*)qthis)->setName(arg1);
}
// _ZN14QNetworkCookie7setNameERK10QByteArray setName(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 70, column 10>
//   // proto:  bool QNetworkCookie::isSecure();
extern "C"
void C_ZNK14QNetworkCookie8isSecureEv(void *qthis) {
  ((QNetworkCookie*)qthis)->isSecure();
}
// _ZNK14QNetworkCookie8isSecureEv isSecure()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 73, column 10>
//   // proto:  void QNetworkCookie::setHttpOnly(bool enable);
extern "C"
void C_ZN14QNetworkCookie11setHttpOnlyEb(void *qthis, bool arg1) {
  ((QNetworkCookie*)qthis)->setHttpOnly(arg1);
}
// _ZN14QNetworkCookie11setHttpOnlyEb setHttpOnly(_Bool)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 80, column 10>
//   // proto:  void QNetworkCookie::setDomain(const QString & domain);
extern "C"
void C_ZN14QNetworkCookie9setDomainERK7QString(void *qthis, const QString & arg1) {
  ((QNetworkCookie*)qthis)->setDomain(arg1);
}
// _ZN14QNetworkCookie9setDomainERK7QString setDomain(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 72, column 10>
//   // proto:  bool QNetworkCookie::isHttpOnly();
extern "C"
void C_ZNK14QNetworkCookie10isHttpOnlyEv(void *qthis) {
  ((QNetworkCookie*)qthis)->isHttpOnly();
}
// _ZNK14QNetworkCookie10isHttpOnlyEv isHttpOnly()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 64, column 10>
//   // proto:  void QNetworkCookie::swap(QNetworkCookie & other);
extern "C"
void C_ZN14QNetworkCookie4swapERS_(void *qthis, QNetworkCookie & arg1) {
  ((QNetworkCookie*)qthis)->swap(arg1);
}
// _ZN14QNetworkCookie4swapERS_ swap(class QNetworkCookie &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 91, column 16>
//   // proto:  QByteArray QNetworkCookie::toRawForm(QNetworkCookie::RawForm form);
extern "C"
void C_ZNK14QNetworkCookie9toRawFormENS_7RawFormE(void *qthis, QNetworkCookie::RawForm arg1) {
  ((QNetworkCookie*)qthis)->toRawForm(arg1);
}
// _ZNK14QNetworkCookie9toRawFormENS_7RawFormE toRawForm(enum QNetworkCookie::RawForm)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 60, column 5>
//   // proto:  void QNetworkCookie::QNetworkCookie(const QNetworkCookie & other);
extern "C"
void C_ZN14QNetworkCookieC2ERKS_(const QNetworkCookie & arg1) {
  new QNetworkCookie(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 89, column 10>
//   // proto:  void QNetworkCookie::setValue(const QByteArray & value);
extern "C"
void C_ZN14QNetworkCookie8setValueERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QNetworkCookie*)qthis)->setValue(arg1);
}
// _ZN14QNetworkCookie8setValueERK10QByteArray setValue(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 88, column 16>
//   // proto:  QByteArray QNetworkCookie::value();
extern "C"
void C_ZNK14QNetworkCookie5valueEv(void *qthis) {
  ((QNetworkCookie*)qthis)->value();
}
// _ZNK14QNetworkCookie5valueEv value()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 83, column 10>
//   // proto:  void QNetworkCookie::setPath(const QString & path);
extern "C"
void C_ZN14QNetworkCookie7setPathERK7QString(void *qthis, const QString & arg1) {
  ((QNetworkCookie*)qthis)->setPath(arg1);
}
// _ZN14QNetworkCookie7setPathERK7QString setPath(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookie.h', line 96, column 34>
//   // proto: static QList<QNetworkCookie> QNetworkCookie::parseCookies(const QByteArray & cookieString);
extern "C"
void C_ZN14QNetworkCookie12parseCookiesERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QNetworkCookie*)qthis)->parseCookies(arg1);
}
// _ZN14QNetworkCookie12parseCookiesERK10QByteArray parseCookies(const class QByteArray &)
//   // proto:  void QNetworkCookie::~QNetworkCookie();
extern "C"
void C_ZN14QNetworkCookieD2Ev(void *qthis) {
  delete (QNetworkCookie*)qthis;
}
// <= ext block end

// body block begin =>
// <= body block end

