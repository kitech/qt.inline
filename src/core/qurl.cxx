// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qurl.h
// dst-file: /src/core/qurl.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qurl.h>


#include <qstring.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qlist.h>
#include <qdatastream.h>
#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qurl_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 183, column 17>
//   // proto:  void QUrl::swap(QUrl & other);
if (true) {
  auto f = [](QUrl flythis, QUrl & arg1) {
    ((QUrl*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN4QUrl4swapERS_ swap(class QUrl &)
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 176, column 5>
//   // proto:  void QUrl::QUrl(QUrl && other);
if (true) {
  auto f = [](QUrl && arg1) {
    new QUrl(arg1);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QUrl_Class_Size()
{
  return sizeof(QUrl);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 251, column 10>
//   // proto:  bool QUrl::isLocalFile();
// _ZNK4QUrl11isLocalFileEv isLocalFile()
extern "C"
bool
C_ZNK4QUrl11isLocalFileEv(void *qthis) {
  auto ret =
  ((QUrl*)qthis)->isLocalFile();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 227, column 13>
//   // proto:  QString QUrl::host(ComponentFormattingOptions );
// _ZNK4QUrl4hostE6QFlagsINS_25ComponentFormattingOptionEE host(ComponentFormattingOptions)
extern "C"
QString*
C_ZNK4QUrl4hostE6QFlagsINS_25ComponentFormattingOptionEE(void *qthis,
QUrl::ComponentFormattingOptions arg1) {
  auto ret =
  ((QUrl*)qthis)->host(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 221, column 13>
//   // proto:  QString QUrl::userName(ComponentFormattingOptions options);
// _ZNK4QUrl8userNameE6QFlagsINS_25ComponentFormattingOptionEE userName(ComponentFormattingOptions)
extern "C"
QString*
C_ZNK4QUrl8userNameE6QFlagsINS_25ComponentFormattingOptionEE(void *qthis,
QUrl::ComponentFormattingOptions arg1) {
  auto ret =
  ((QUrl*)qthis)->userName(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 208, column 10>
//   // proto:  bool QUrl::isEmpty();
// _ZNK4QUrl7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK4QUrl7isEmptyEv(void *qthis) {
  auto ret =
  ((QUrl*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 239, column 10>
//   // proto:  void QUrl::setQuery(const QUrlQuery & query);
// _ZN4QUrl8setQueryERK9QUrlQuery setQuery(const class QUrlQuery &)
extern "C"
void
C_ZN4QUrl8setQueryERK9QUrlQuery(void *qthis,
const QUrlQuery* arg1) {
  ((QUrl*)qthis)->setQuery(*((const QUrlQuery*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 228, column 13>
//   // proto:  QString QUrl::topLevelDomain(ComponentFormattingOptions options);
// _ZNK4QUrl14topLevelDomainE6QFlagsINS_25ComponentFormattingOptionEE topLevelDomain(ComponentFormattingOptions)
extern "C"
QString*
C_ZNK4QUrl14topLevelDomainE6QFlagsINS_25ComponentFormattingOptionEE(void *qthis,
QUrl::ComponentFormattingOptions arg1) {
  auto ret =
  ((QUrl*)qthis)->topLevelDomain(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 218, column 13>
//   // proto:  QString QUrl::userInfo(ComponentFormattingOptions options);
// _ZNK4QUrl8userInfoE6QFlagsINS_25ComponentFormattingOptionEE userInfo(ComponentFormattingOptions)
extern "C"
QString*
C_ZNK4QUrl8userInfoE6QFlagsINS_25ComponentFormattingOptionEE(void *qthis,
QUrl::ComponentFormattingOptions arg1) {
  auto ret =
  ((QUrl*)qthis)->userInfo(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 186, column 13>
//   // proto:  QString QUrl::url(FormattingOptions options);
// _ZNK4QUrl3urlE12QUrlTwoFlagsINS_19UrlFormattingOptionENS_25ComponentFormattingOptionEE url(FormattingOptions)
extern "C"
QString*
C_ZNK4QUrl3urlE12QUrlTwoFlagsINS_19UrlFormattingOptionENS_25ComponentFormattingOptionEE(void *qthis,
QUrl::FormattingOptions arg1) {
  auto ret =
  ((QUrl*)qthis)->url(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 240, column 13>
//   // proto:  QString QUrl::query(ComponentFormattingOptions );
// _ZNK4QUrl5queryE6QFlagsINS_25ComponentFormattingOptionEE query(ComponentFormattingOptions)
extern "C"
QString*
C_ZNK4QUrl5queryE6QFlagsINS_25ComponentFormattingOptionEE(void *qthis,
QUrl::ComponentFormattingOptions arg1) {
  auto ret =
  ((QUrl*)qthis)->query(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 349, column 24>
//   // proto: static QStringList QUrl::idnWhitelist();
// _ZN4QUrl12idnWhitelistEv idnWhitelist()
extern "C"
QStringList*
C_ZN4QUrl12idnWhitelistEv() {
  auto ret =
  QUrl::idnWhitelist();
  return new QStringList(ret); // 5
}
//   // proto:  void QUrl::~QUrl();
extern "C"
void C_ZN4QUrlD2Ev(void *qthis) {
  delete (QUrl*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 211, column 10>
//   // proto:  void QUrl::setScheme(const QString & scheme);
// _ZN4QUrl9setSchemeERK7QString setScheme(const class QString &)
extern "C"
void
C_ZN4QUrl9setSchemeERK7QString(void *qthis,
const QString* arg1) {
  ((QUrl*)qthis)->setScheme(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 249, column 10>
//   // proto:  bool QUrl::isParentOf(const QUrl & url);
// _ZNK4QUrl10isParentOfERKS_ isParentOf(const class QUrl &)
extern "C"
bool
C_ZNK4QUrl10isParentOfERKS_(void *qthis,
const QUrl* arg1) {
  auto ret =
  ((QUrl*)qthis)->isParentOf(*((const QUrl*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 238, column 10>
//   // proto:  void QUrl::setQuery(const QString & query, QUrl::ParsingMode mode);
// _ZN4QUrl8setQueryERK7QStringNS_11ParsingModeE setQuery(const class QString &, enum QUrl::ParsingMode)
extern "C"
void
C_ZN4QUrl8setQueryERK7QStringNS_11ParsingModeE(void *qthis,
const QString* arg1,
QUrl::ParsingMode arg2) {
  ((QUrl*)qthis)->setQuery(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 206, column 13>
//   // proto:  QString QUrl::errorString();
// _ZNK4QUrl11errorStringEv errorString()
extern "C"
QString*
C_ZNK4QUrl11errorStringEv(void *qthis) {
  auto ret =
  ((QUrl*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 262, column 10>
//   // proto:  bool QUrl::matches(const QUrl & url, FormattingOptions options);
// _ZNK4QUrl7matchesERKS_12QUrlTwoFlagsINS_19UrlFormattingOptionENS_25ComponentFormattingOptionEE matches(const class QUrl &, FormattingOptions)
extern "C"
bool
C_ZNK4QUrl7matchesERKS_12QUrlTwoFlagsINS_19UrlFormattingOptionENS_25ComponentFormattingOptionEE(void *qthis,
const QUrl* arg1,
QUrl::FormattingOptions arg2) {
  auto ret =
  ((QUrl*)qthis)->matches(*((const QUrl*)arg1),
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 231, column 9>
//   // proto:  int QUrl::port(int defaultPort);
// _ZNK4QUrl4portEi port(int)
extern "C"
int
C_ZNK4QUrl4portEi(void *qthis,
int arg1) {
  auto ret =
  ((QUrl*)qthis)->port(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 233, column 10>
//   // proto:  void QUrl::setPath(const QString & path, QUrl::ParsingMode mode);
// _ZN4QUrl7setPathERK7QStringNS_11ParsingModeE setPath(const class QString &, enum QUrl::ParsingMode)
extern "C"
void
C_ZN4QUrl7setPathERK7QStringNS_11ParsingModeE(void *qthis,
const QString* arg1,
QUrl::ParsingMode arg2) {
  ((QUrl*)qthis)->setPath(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 214, column 10>
//   // proto:  void QUrl::setAuthority(const QString & authority, QUrl::ParsingMode mode);
// _ZN4QUrl12setAuthorityERK7QStringNS_11ParsingModeE setAuthority(const class QString &, enum QUrl::ParsingMode)
extern "C"
void
C_ZN4QUrl12setAuthorityERK7QStringNS_11ParsingModeE(void *qthis,
const QString* arg1,
QUrl::ParsingMode arg2) {
  ((QUrl*)qthis)->setAuthority(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 230, column 10>
//   // proto:  void QUrl::setPort(int port);
// _ZN4QUrl7setPortEi setPort(int)
extern "C"
void
C_ZN4QUrl7setPortEi(void *qthis,
int arg1) {
  ((QUrl*)qthis)->setPort(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 167, column 5>
//   // proto:  void QUrl::QUrl(const QUrl & copy);
extern "C"
QUrl*
C_ZN4QUrlC2ERKS_(const QUrl* arg1) {
  auto ret = new QUrl(*((const QUrl*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 347, column 20>
//   // proto: static QString QUrl::fromAce(const QByteArray & );
// _ZN4QUrl7fromAceERK10QByteArray fromAce(const class QByteArray &)
extern "C"
QString*
C_ZN4QUrl7fromAceERK10QByteArray(const QByteArray* arg1) {
  auto ret =
  QUrl::fromAce(*((const QByteArray*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 246, column 10>
//   // proto:  QUrl QUrl::resolved(const QUrl & relative);
// _ZNK4QUrl8resolvedERKS_ resolved(const class QUrl &)
extern "C"
QUrl*
C_ZNK4QUrl8resolvedERKS_(void *qthis,
const QUrl* arg1) {
  auto ret =
  ((QUrl*)qthis)->resolved(*((const QUrl*)arg1));
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 217, column 10>
//   // proto:  void QUrl::setUserInfo(const QString & userInfo, QUrl::ParsingMode mode);
// _ZN4QUrl11setUserInfoERK7QStringNS_11ParsingModeE setUserInfo(const class QString &, enum QUrl::ParsingMode)
extern "C"
void
C_ZN4QUrl11setUserInfoERK7QStringNS_11ParsingModeE(void *qthis,
const QString* arg1,
QUrl::ParsingMode arg2) {
  ((QUrl*)qthis)->setUserInfo(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 234, column 13>
//   // proto:  QString QUrl::path(ComponentFormattingOptions options);
// _ZNK4QUrl4pathE6QFlagsINS_25ComponentFormattingOptionEE path(ComponentFormattingOptions)
extern "C"
QString*
C_ZNK4QUrl4pathE6QFlagsINS_25ComponentFormattingOptionEE(void *qthis,
QUrl::ComponentFormattingOptions arg1) {
  auto ret =
  ((QUrl*)qthis)->path(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 253, column 13>
//   // proto:  QString QUrl::toLocalFile();
// _ZNK4QUrl11toLocalFileEv toLocalFile()
extern "C"
QString*
C_ZNK4QUrl11toLocalFileEv(void *qthis) {
  auto ret =
  ((QUrl*)qthis)->toLocalFile();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 255, column 10>
//   // proto:  void QUrl::detach();
// _ZN4QUrl6detachEv detach()
extern "C"
void
C_ZN4QUrl6detachEv(void *qthis) {
  ((QUrl*)qthis)->detach();
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 215, column 13>
//   // proto:  QString QUrl::authority(ComponentFormattingOptions options);
// _ZNK4QUrl9authorityE6QFlagsINS_25ComponentFormattingOptionEE authority(ComponentFormattingOptions)
extern "C"
QString*
C_ZNK4QUrl9authorityE6QFlagsINS_25ComponentFormattingOptionEE(void *qthis,
QUrl::ComponentFormattingOptions arg1) {
  auto ret =
  ((QUrl*)qthis)->authority(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 351, column 24>
//   // proto: static QList<QUrl> QUrl::fromStringList(const QStringList & uris, QUrl::ParsingMode mode);
// _ZN4QUrl14fromStringListERK11QStringListNS_11ParsingModeE fromStringList(const class QStringList &, enum QUrl::ParsingMode)
extern "C"
QList<QUrl>*
C_ZN4QUrl14fromStringListERK11QStringListNS_11ParsingModeE(const QStringList* arg1,
QUrl::ParsingMode arg2) {
  auto ret =
  QUrl::fromStringList(*((const QStringList*)arg1),
arg2);
  return new QList<QUrl>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 242, column 10>
//   // proto:  bool QUrl::hasFragment();
// _ZNK4QUrl11hasFragmentEv hasFragment()
extern "C"
bool
C_ZNK4QUrl11hasFragmentEv(void *qthis) {
  auto ret =
  ((QUrl*)qthis)->hasFragment();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 189, column 10>
//   // proto:  QUrl QUrl::adjusted(FormattingOptions options);
// _ZNK4QUrl8adjustedE12QUrlTwoFlagsINS_19UrlFormattingOptionENS_25ComponentFormattingOptionEE adjusted(FormattingOptions)
extern "C"
QUrl*
C_ZNK4QUrl8adjustedE12QUrlTwoFlagsINS_19UrlFormattingOptionENS_25ComponentFormattingOptionEE(void *qthis,
QUrl::FormattingOptions arg1) {
  auto ret =
  ((QUrl*)qthis)->adjusted(arg1);
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 220, column 10>
//   // proto:  void QUrl::setUserName(const QString & userName, QUrl::ParsingMode mode);
// _ZN4QUrl11setUserNameERK7QStringNS_11ParsingModeE setUserName(const class QString &, enum QUrl::ParsingMode)
extern "C"
void
C_ZN4QUrl11setUserNameERK7QStringNS_11ParsingModeE(void *qthis,
const QString* arg1,
QUrl::ParsingMode arg2) {
  ((QUrl*)qthis)->setUserName(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 188, column 13>
//   // proto:  QString QUrl::toDisplayString(FormattingOptions options);
// _ZNK4QUrl15toDisplayStringE12QUrlTwoFlagsINS_19UrlFormattingOptionENS_25ComponentFormattingOptionEE toDisplayString(FormattingOptions)
extern "C"
QString*
C_ZNK4QUrl15toDisplayStringE12QUrlTwoFlagsINS_19UrlFormattingOptionENS_25ComponentFormattingOptionEE(void *qthis,
QUrl::FormattingOptions arg1) {
  auto ret =
  ((QUrl*)qthis)->toDisplayString(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 348, column 23>
//   // proto: static QByteArray QUrl::toAce(const QString & );
// _ZN4QUrl5toAceERK7QString toAce(const class QString &)
extern "C"
QByteArray*
C_ZN4QUrl5toAceERK7QString(const QString* arg1) {
  auto ret =
  QUrl::toAce(*((const QString*)arg1));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 191, column 16>
//   // proto:  QByteArray QUrl::toEncoded(FormattingOptions options);
// _ZNK4QUrl9toEncodedE12QUrlTwoFlagsINS_19UrlFormattingOptionENS_25ComponentFormattingOptionEE toEncoded(FormattingOptions)
extern "C"
QByteArray*
C_ZNK4QUrl9toEncodedE12QUrlTwoFlagsINS_19UrlFormattingOptionENS_25ComponentFormattingOptionEE(void *qthis,
QUrl::FormattingOptions arg1) {
  auto ret =
  ((QUrl*)qthis)->toEncoded(arg1);
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 237, column 10>
//   // proto:  bool QUrl::hasQuery();
// _ZNK4QUrl8hasQueryEv hasQuery()
extern "C"
bool
C_ZNK4QUrl8hasQueryEv(void *qthis) {
  auto ret =
  ((QUrl*)qthis)->hasQuery();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 252, column 17>
//   // proto: static QUrl QUrl::fromLocalFile(const QString & localfile);
// _ZN4QUrl13fromLocalFileERK7QString fromLocalFile(const class QString &)
extern "C"
QUrl*
C_ZN4QUrl13fromLocalFileERK7QString(const QString* arg1) {
  auto ret =
  QUrl::fromLocalFile(*((const QString*)arg1));
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 205, column 10>
//   // proto:  bool QUrl::isValid();
// _ZNK4QUrl7isValidEv isValid()
extern "C"
bool
C_ZNK4QUrl7isValidEv(void *qthis) {
  auto ret =
  ((QUrl*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 166, column 5>
//   // proto:  void QUrl::QUrl();
extern "C"
QUrl*
C_ZN4QUrlC2Ev() {
  auto ret = new QUrl();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 256, column 10>
//   // proto:  bool QUrl::isDetached();
// _ZNK4QUrl10isDetachedEv isDetached()
extern "C"
bool
C_ZNK4QUrl10isDetachedEv(void *qthis) {
  auto ret =
  ((QUrl*)qthis)->isDetached();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 248, column 10>
//   // proto:  bool QUrl::isRelative();
// _ZNK4QUrl10isRelativeEv isRelative()
extern "C"
bool
C_ZNK4QUrl10isRelativeEv(void *qthis) {
  auto ret =
  ((QUrl*)qthis)->isRelative();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 202, column 17>
//   // proto: static QUrl QUrl::fromUserInput(const QString & userInput, const QString & workingDirectory, UserInputResolutionOptions options);
// _ZN4QUrl13fromUserInputERK7QStringS2_6QFlagsINS_25UserInputResolutionOptionEE fromUserInput(const class QString &, const class QString &, UserInputResolutionOptions)
extern "C"
QUrl*
C_ZN4QUrl13fromUserInputERK7QStringS2_6QFlagsINS_25UserInputResolutionOptionEE(const QString* arg1,
const QString* arg2,
QUrl::UserInputResolutionOptions arg3) {
  auto ret =
  QUrl::fromUserInput(*((const QString*)arg1),
*((const QString*)arg2),
arg3);
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 244, column 10>
//   // proto:  void QUrl::setFragment(const QString & fragment, QUrl::ParsingMode mode);
// _ZN4QUrl11setFragmentERK7QStringNS_11ParsingModeE setFragment(const class QString &, enum QUrl::ParsingMode)
extern "C"
void
C_ZN4QUrl11setFragmentERK7QStringNS_11ParsingModeE(void *qthis,
const QString* arg1,
QUrl::ParsingMode arg2) {
  ((QUrl*)qthis)->setFragment(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 187, column 13>
//   // proto:  QString QUrl::toString(FormattingOptions options);
// _ZNK4QUrl8toStringE12QUrlTwoFlagsINS_19UrlFormattingOptionENS_25ComponentFormattingOptionEE toString(FormattingOptions)
extern "C"
QString*
C_ZNK4QUrl8toStringE12QUrlTwoFlagsINS_19UrlFormattingOptionENS_25ComponentFormattingOptionEE(void *qthis,
QUrl::FormattingOptions arg1) {
  auto ret =
  ((QUrl*)qthis)->toString(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 212, column 13>
//   // proto:  QString QUrl::scheme();
// _ZNK4QUrl6schemeEv scheme()
extern "C"
QString*
C_ZNK4QUrl6schemeEv(void *qthis) {
  auto ret =
  ((QUrl*)qthis)->scheme();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 235, column 13>
//   // proto:  QString QUrl::fileName(ComponentFormattingOptions options);
// _ZNK4QUrl8fileNameE6QFlagsINS_25ComponentFormattingOptionEE fileName(ComponentFormattingOptions)
extern "C"
QString*
C_ZNK4QUrl8fileNameE6QFlagsINS_25ComponentFormattingOptionEE(void *qthis,
QUrl::ComponentFormattingOptions arg1) {
  auto ret =
  ((QUrl*)qthis)->fileName(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 224, column 13>
//   // proto:  QString QUrl::password(ComponentFormattingOptions );
// _ZNK4QUrl8passwordE6QFlagsINS_25ComponentFormattingOptionEE password(ComponentFormattingOptions)
extern "C"
QString*
C_ZNK4QUrl8passwordE6QFlagsINS_25ComponentFormattingOptionEE(void *qthis,
QUrl::ComponentFormattingOptions arg1) {
  auto ret =
  ((QUrl*)qthis)->password(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 172, column 5>
//   // proto:  void QUrl::QUrl(const QString & url, QUrl::ParsingMode mode);
extern "C"
QUrl*
C_ZN4QUrlC2ERK7QStringNS_11ParsingModeE(const QString* arg1,
QUrl::ParsingMode arg2) {
  auto ret = new QUrl(*((const QString*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 350, column 24>
//   // proto: static QStringList QUrl::toStringList(const QList<QUrl> & uris, FormattingOptions options);
// _ZN4QUrl12toStringListERK5QListIS_E12QUrlTwoFlagsINS_19UrlFormattingOptionENS_25ComponentFormattingOptionEE toStringList(const QList<class QUrl> &, FormattingOptions)
extern "C"
QStringList*
C_ZN4QUrl12toStringListERK5QListIS_E12QUrlTwoFlagsINS_19UrlFormattingOptionENS_25ComponentFormattingOptionEE(const QList<QUrl>* arg1,
QUrl::FormattingOptions arg2) {
  auto ret =
  QUrl::toStringList(*((const QList<QUrl>*)arg1),
arg2);
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 192, column 17>
//   // proto: static QUrl QUrl::fromEncoded(const QByteArray & url, QUrl::ParsingMode mode);
// _ZN4QUrl11fromEncodedERK10QByteArrayNS_11ParsingModeE fromEncoded(const class QByteArray &, enum QUrl::ParsingMode)
extern "C"
QUrl*
C_ZN4QUrl11fromEncodedERK10QByteArrayNS_11ParsingModeE(const QByteArray* arg1,
QUrl::ParsingMode arg2) {
  auto ret =
  QUrl::fromEncoded(*((const QByteArray*)arg1),
arg2);
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 243, column 13>
//   // proto:  QString QUrl::fragment(ComponentFormattingOptions options);
// _ZNK4QUrl8fragmentE6QFlagsINS_25ComponentFormattingOptionEE fragment(ComponentFormattingOptions)
extern "C"
QString*
C_ZNK4QUrl8fragmentE6QFlagsINS_25ComponentFormattingOptionEE(void *qthis,
QUrl::ComponentFormattingOptions arg1) {
  auto ret =
  ((QUrl*)qthis)->fragment(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 265, column 23>
//   // proto: static QByteArray QUrl::toPercentEncoding(const QString & , const QByteArray & exclude, const QByteArray & include);
// _ZN4QUrl17toPercentEncodingERK7QStringRK10QByteArrayS5_ toPercentEncoding(const class QString &, const class QByteArray &, const class QByteArray &)
extern "C"
QByteArray*
C_ZN4QUrl17toPercentEncodingERK7QStringRK10QByteArrayS5_(const QString* arg1,
const QByteArray* arg2,
const QByteArray* arg3) {
  auto ret =
  QUrl::toPercentEncoding(*((const QString*)arg1),
*((const QByteArray*)arg2),
*((const QByteArray*)arg3));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 185, column 10>
//   // proto:  void QUrl::setUrl(const QString & url, QUrl::ParsingMode mode);
// _ZN4QUrl6setUrlERK7QStringNS_11ParsingModeE setUrl(const class QString &, enum QUrl::ParsingMode)
extern "C"
void
C_ZN4QUrl6setUrlERK7QStringNS_11ParsingModeE(void *qthis,
const QString* arg1,
QUrl::ParsingMode arg2) {
  ((QUrl*)qthis)->setUrl(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 223, column 10>
//   // proto:  void QUrl::setPassword(const QString & password, QUrl::ParsingMode mode);
// _ZN4QUrl11setPasswordERK7QStringNS_11ParsingModeE setPassword(const class QString &, enum QUrl::ParsingMode)
extern "C"
void
C_ZN4QUrl11setPasswordERK7QStringNS_11ParsingModeE(void *qthis,
const QString* arg1,
QUrl::ParsingMode arg2) {
  ((QUrl*)qthis)->setPassword(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 353, column 17>
//   // proto: static void QUrl::setIdnWhitelist(const QStringList & );
// _ZN4QUrl15setIdnWhitelistERK11QStringList setIdnWhitelist(const class QStringList &)
extern "C"
void
C_ZN4QUrl15setIdnWhitelistERK11QStringList(const QStringList* arg1) {
  QUrl::setIdnWhitelist(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 183, column 17>
//   // proto:  void QUrl::swap(QUrl & other);
// _ZN4QUrl4swapERS_ swap(class QUrl &)
extern "C"
void
C_ZN4QUrl4swapERS_(void *qthis,
QUrl* arg1) {
  ((QUrl*)qthis)->swap(*((QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 264, column 20>
//   // proto: static QString QUrl::fromPercentEncoding(const QByteArray & );
// _ZN4QUrl19fromPercentEncodingERK10QByteArray fromPercentEncoding(const class QByteArray &)
extern "C"
QString*
C_ZN4QUrl19fromPercentEncodingERK10QByteArray(const QByteArray* arg1) {
  auto ret =
  QUrl::fromPercentEncoding(*((const QByteArray*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 200, column 17>
//   // proto: static QUrl QUrl::fromUserInput(const QString & userInput);
// _ZN4QUrl13fromUserInputERK7QString fromUserInput(const class QString &)
extern "C"
QUrl*
C_ZN4QUrl13fromUserInputERK7QString(const QString* arg1) {
  auto ret =
  QUrl::fromUserInput(*((const QString*)arg1));
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 226, column 10>
//   // proto:  void QUrl::setHost(const QString & host, QUrl::ParsingMode mode);
// _ZN4QUrl7setHostERK7QStringNS_11ParsingModeE setHost(const class QString &, enum QUrl::ParsingMode)
extern "C"
void
C_ZN4QUrl7setHostERK7QStringNS_11ParsingModeE(void *qthis,
const QString* arg1,
QUrl::ParsingMode arg2) {
  ((QUrl*)qthis)->setHost(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 209, column 10>
//   // proto:  void QUrl::clear();
// _ZN4QUrl5clearEv clear()
extern "C"
void
C_ZN4QUrl5clearEv(void *qthis) {
  ((QUrl*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtCore/qurl.h', line 176, column 5>
//   // proto:  void QUrl::QUrl(QUrl && other);
extern "C"
QUrl*
C_ZN4QUrlC2EOS_(QUrl* arg1) {
  auto ret = new QUrl(*((QUrl*)arg1));
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

