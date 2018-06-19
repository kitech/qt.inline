//  header block begin
// /usr/include/qt/QtCore/qurl.h
#ifndef protected
#define protected public
#endif
#include <qurl.h>
#include <QtCore>
#include "callback_inherit.h"

// QUrl is pure virtual: false
// QUrl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQUrl : public QUrl {
public:
  virtual ~MyQUrl() {}
// void QUrl()
MyQUrl() : QUrl() {}
// void QUrl(const QString &, QUrl::ParsingMode)
MyQUrl(const QString & url, QUrl::ParsingMode mode) : QUrl(url, mode) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:176
// [-2] void QUrl()
extern "C" Q_DECL_EXPORT
void* C_ZN4QUrlC2Ev() {
  return  new QUrl();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:178
// [8] QUrl & operator=(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QUrlaSERKS_(void *this_, QUrl* copy) {
  auto& rv = ((QUrl*)this_)->operator=(*copy);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:182
// [-2] void QUrl(const QString &, QUrl::ParsingMode)
extern "C" Q_DECL_EXPORT
void* C_ZN4QUrlC2ERK7QStringNS_11ParsingModeE(QString* url, QUrl::ParsingMode mode) {
  return  new QUrl(*url, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:183
// [8] QUrl & operator=(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QUrlaSERK7QString(void *this_, QString* url) {
  auto& rv = ((QUrl*)this_)->operator=(*url);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:188
// [8] QUrl & operator=(QUrl &&)
extern "C" Q_DECL_EXPORT
void* C_ZN4QUrlaSEOS_(void *this_, QUrl && other) {
  auto& rv = ((QUrl*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:191
// [-2] void ~QUrl()
extern "C" Q_DECL_EXPORT
void C_ZN4QUrlD2Ev(void *this_) {
  delete (QUrl*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qurl.h:193
// [-2] void swap(QUrl &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl4swapERS_(void *this_, QUrl* other) {
  ((QUrl*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:195
// [-2] void setUrl(const QString &, QUrl::ParsingMode)
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl6setUrlERK7QStringNS_11ParsingModeE(void *this_, QString* url, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setUrl(*url, mode);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:202
// [8] QUrl fromEncoded(const QByteArray &, QUrl::ParsingMode)
extern "C" Q_DECL_EXPORT
void* C_ZN4QUrl11fromEncodedERK10QByteArrayNS_11ParsingModeE(QByteArray* url, QUrl::ParsingMode mode) {
  auto rv = QUrl::fromEncoded(*url, mode);
return new QUrl(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qurl.h:210
// [8] QUrl fromUserInput(const QString &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZN4QUrl13fromUserInputERK7QString(QString* userInput) {
  auto rv = QUrl::fromUserInput(*userInput);
return new QUrl(rv);
}
#endif // QT_VERSION >= 0x040600

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:212
// [8] QUrl fromUserInput(const QString &, const QString &, QUrl::UserInputResolutionOptions)
extern "C" Q_DECL_EXPORT
void* C_ZN4QUrl13fromUserInputERK7QStringS2_6QFlagsINS_25UserInputResolutionOptionEE(QString* userInput, QString* workingDirectory, QFlags<QUrl::UserInputResolutionOption> options) {
  auto rv = QUrl::fromUserInput(*userInput, *workingDirectory, options);
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:215
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK4QUrl7isValidEv(void *this_) {
  return (bool)((QUrl*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qurl.h:216
// [8] QString errorString()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK4QUrl11errorStringEv(void *this_) {
  auto rv = ((QUrl*)this_)->errorString();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:218
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK4QUrl7isEmptyEv(void *this_) {
  return (bool)((QUrl*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:219
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl5clearEv(void *this_) {
  ((QUrl*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:221
// [-2] void setScheme(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl9setSchemeERK7QString(void *this_, QString* scheme) {
  ((QUrl*)this_)->setScheme(*scheme);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:222
// [8] QString scheme()
extern "C" Q_DECL_EXPORT
void* C_ZNK4QUrl6schemeEv(void *this_) {
  auto rv = ((QUrl*)this_)->scheme();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:224
// [-2] void setAuthority(const QString &, QUrl::ParsingMode)
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl12setAuthorityERK7QStringNS_11ParsingModeE(void *this_, QString* authority, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setAuthority(*authority, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:227
// [-2] void setUserInfo(const QString &, QUrl::ParsingMode)
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl11setUserInfoERK7QStringNS_11ParsingModeE(void *this_, QString* userInfo, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setUserInfo(*userInfo, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:230
// [-2] void setUserName(const QString &, QUrl::ParsingMode)
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl11setUserNameERK7QStringNS_11ParsingModeE(void *this_, QString* userName, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setUserName(*userName, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:233
// [-2] void setPassword(const QString &, QUrl::ParsingMode)
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl11setPasswordERK7QStringNS_11ParsingModeE(void *this_, QString* password, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setPassword(*password, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:236
// [-2] void setHost(const QString &, QUrl::ParsingMode)
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl7setHostERK7QStringNS_11ParsingModeE(void *this_, QString* host, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setHost(*host, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:242
// [-2] void setPort(int)
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl7setPortEi(void *this_, int port) {
  ((QUrl*)this_)->setPort(port);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qurl.h:243
// [4] int port(int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
int C_ZNK4QUrl4portEi(void *this_, int defaultPort) {
  return (int)((QUrl*)this_)->port(defaultPort);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:245
// [-2] void setPath(const QString &, QUrl::ParsingMode)
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl7setPathERK7QStringNS_11ParsingModeE(void *this_, QString* path, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setPath(*path, mode);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qurl.h:249
// [1] bool hasQuery()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK4QUrl8hasQueryEv(void *this_) {
  return (bool)((QUrl*)this_)->hasQuery();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:250
// [-2] void setQuery(const QString &, QUrl::ParsingMode)
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl8setQueryERK7QStringNS_11ParsingModeE(void *this_, QString* query, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setQuery(*query, mode);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qurl.h:251
// [-2] void setQuery(const QUrlQuery &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl8setQueryERK9QUrlQuery(void *this_, QUrlQuery* query) {
  ((QUrl*)this_)->setQuery(*query);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qurl.h:254
// [1] bool hasFragment()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK4QUrl11hasFragmentEv(void *this_) {
  return (bool)((QUrl*)this_)->hasFragment();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:256
// [-2] void setFragment(const QString &, QUrl::ParsingMode)
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl11setFragmentERK7QStringNS_11ParsingModeE(void *this_, QString* fragment, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setFragment(*fragment, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:258
// [8] QUrl resolved(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZNK4QUrl8resolvedERKS_(void *this_, QUrl* relative) {
  auto rv = ((QUrl*)this_)->resolved(*relative);
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:260
// [1] bool isRelative()
extern "C" Q_DECL_EXPORT
bool C_ZNK4QUrl10isRelativeEv(void *this_) {
  return (bool)((QUrl*)this_)->isRelative();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:261
// [1] bool isParentOf(const QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZNK4QUrl10isParentOfERKS_(void *this_, QUrl* url) {
  return (bool)((QUrl*)this_)->isParentOf(*url);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qurl.h:263
// [1] bool isLocalFile()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK4QUrl11isLocalFileEv(void *this_) {
  return (bool)((QUrl*)this_)->isLocalFile();
}
#endif // QT_VERSION >= 0x040800

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:264
// [8] QUrl fromLocalFile(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QUrl13fromLocalFileERK7QString(QString* localfile) {
  auto rv = QUrl::fromLocalFile(*localfile);
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:265
// [8] QString toLocalFile()
extern "C" Q_DECL_EXPORT
void* C_ZNK4QUrl11toLocalFileEv(void *this_) {
  auto rv = ((QUrl*)this_)->toLocalFile();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:267
// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl6detachEv(void *this_) {
  ((QUrl*)this_)->detach();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:268
// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_ZNK4QUrl10isDetachedEv(void *this_) {
  return (bool)((QUrl*)this_)->isDetached();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:270
// [1] bool operator<(const QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZNK4QUrlltERKS_(void *this_, QUrl* url) {
  return (bool)((QUrl*)this_)->operator<(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:271
// [1] bool operator==(const QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZNK4QUrleqERKS_(void *this_, QUrl* url) {
  return (bool)((QUrl*)this_)->operator==(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:272
// [1] bool operator!=(const QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZNK4QUrlneERKS_(void *this_, QUrl* url) {
  return (bool)((QUrl*)this_)->operator!=(*url);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:276
// [8] QString fromPercentEncoding(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QUrl19fromPercentEncodingERK10QByteArray(QByteArray* arg0) {
  auto rv = QUrl::fromPercentEncoding(*arg0);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:277
// [8] QByteArray toPercentEncoding(const QString &, const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QUrl17toPercentEncodingERK7QStringRK10QByteArrayS5_(QString* arg0, QByteArray* exclude, QByteArray* include) {
  auto rv = QUrl::toPercentEncoding(*arg0, *exclude, *include);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qurl.h:357
// [8] QString fromAce(const QByteArray &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZN4QUrl7fromAceERK10QByteArray(QByteArray* arg0) {
  auto rv = QUrl::fromAce(*arg0);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qurl.h:358
// [8] QByteArray toAce(const QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZN4QUrl5toAceERK7QString(QString* arg0) {
  auto rv = QUrl::toAce(*arg0);
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qurl.h:359
// [8] QStringList idnWhitelist()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZN4QUrl12idnWhitelistEv() {
  auto rv = QUrl::idnWhitelist();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:361
// [-2] QList<QUrl> fromStringList(const QStringList &, QUrl::ParsingMode)
extern "C" Q_DECL_EXPORT
QList<QUrl>* C_ZN4QUrl14fromStringListERK11QStringListNS_11ParsingModeE(QStringList* uris, QUrl::ParsingMode mode) {
  auto rv = QUrl::fromStringList(*uris, mode);
return new QList<QUrl>(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qurl.h:363
// [-2] void setIdnWhitelist(const QStringList &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN4QUrl15setIdnWhitelistERK11QStringList(QStringList* arg0) {
  QUrl::setIdnWhitelist(*arg0);
}
#endif // QT_VERSION >= 0x040200

//  main block end
