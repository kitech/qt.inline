//  header block begin
// /usr/include/qt/QtCore/qurl.h
#include <qurl.h>
#include <QtCore>

// QUrl is pure virtual: false
// QUrl has virtual projected: false
//  header block end

//  main block begin

class MyQUrl : public QUrl {
public:
  virtual ~MyQUrl() {}
// void QUrl()
MyQUrl() : QUrl() {}
// void QUrl(const class QString &, enum QUrl::ParsingMode)
MyQUrl(const QString & url, QUrl::ParsingMode mode) : QUrl(url, mode) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:176
// [-2] void QUrl()
extern "C"
void* C_ZN4QUrlC2Ev() {
  return  new QUrl();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:182
// [-2] void QUrl(const class QString &, enum QUrl::ParsingMode)
extern "C"
void* C_ZN4QUrlC2ERK7QStringNS_11ParsingModeE(const QString & url, QUrl::ParsingMode mode) {
  return  new QUrl(url, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:191
// [-2] void ~QUrl()
extern "C"
void C_ZN4QUrlD2Ev(void *this_) {
  delete (QUrl*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:193
// [-2] void swap(class QUrl &)
extern "C"
void C_ZN4QUrl4swapERS_(void *this_, QUrl & other) {
  ((QUrl*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:195
// [-2] void setUrl(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl6setUrlERK7QStringNS_11ParsingModeE(void *this_, const QString & url, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setUrl(url, mode);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:202
// [8] QUrl fromEncoded(const class QByteArray &, enum QUrl::ParsingMode)
extern "C"
void* C_ZN4QUrl11fromEncodedERK10QByteArrayNS_11ParsingModeE(const QByteArray & url, QUrl::ParsingMode mode) {
  auto rv = QUrl::fromEncoded(url, mode);
return new QUrl(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:210
// [8] QUrl fromUserInput(const class QString &)
extern "C"
void* C_ZN4QUrl13fromUserInputERK7QString(const QString & userInput) {
  auto rv = QUrl::fromUserInput(userInput);
return new QUrl(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:215
// [1] bool isValid()
extern "C"
bool C_ZNK4QUrl7isValidEv(void *this_) {
  return (bool)((QUrl*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:216
// [8] QString errorString()
extern "C"
void* C_ZNK4QUrl11errorStringEv(void *this_) {
  auto rv = ((QUrl*)this_)->errorString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:218
// [1] bool isEmpty()
extern "C"
bool C_ZNK4QUrl7isEmptyEv(void *this_) {
  return (bool)((QUrl*)this_)->isEmpty();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:219
// [-2] void clear()
extern "C"
void C_ZN4QUrl5clearEv(void *this_) {
  ((QUrl*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:221
// [-2] void setScheme(const class QString &)
extern "C"
void C_ZN4QUrl9setSchemeERK7QString(void *this_, const QString & scheme) {
  ((QUrl*)this_)->setScheme(scheme);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:222
// [8] QString scheme()
extern "C"
void* C_ZNK4QUrl6schemeEv(void *this_) {
  auto rv = ((QUrl*)this_)->scheme();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:224
// [-2] void setAuthority(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl12setAuthorityERK7QStringNS_11ParsingModeE(void *this_, const QString & authority, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setAuthority(authority, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:227
// [-2] void setUserInfo(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl11setUserInfoERK7QStringNS_11ParsingModeE(void *this_, const QString & userInfo, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setUserInfo(userInfo, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:230
// [-2] void setUserName(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl11setUserNameERK7QStringNS_11ParsingModeE(void *this_, const QString & userName, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setUserName(userName, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:233
// [-2] void setPassword(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl11setPasswordERK7QStringNS_11ParsingModeE(void *this_, const QString & password, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setPassword(password, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:236
// [-2] void setHost(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl7setHostERK7QStringNS_11ParsingModeE(void *this_, const QString & host, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setHost(host, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:242
// [-2] void setPort(int)
extern "C"
void C_ZN4QUrl7setPortEi(void *this_, int port) {
  ((QUrl*)this_)->setPort(port);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:243
// [4] int port(int)
extern "C"
int C_ZNK4QUrl4portEi(void *this_, int defaultPort) {
  return (int)((QUrl*)this_)->port(defaultPort);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:245
// [-2] void setPath(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl7setPathERK7QStringNS_11ParsingModeE(void *this_, const QString & path, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setPath(path, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:249
// [1] bool hasQuery()
extern "C"
bool C_ZNK4QUrl8hasQueryEv(void *this_) {
  return (bool)((QUrl*)this_)->hasQuery();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:250
// [-2] void setQuery(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl8setQueryERK7QStringNS_11ParsingModeE(void *this_, const QString & query, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setQuery(query, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:251
// [-2] void setQuery(const class QUrlQuery &)
extern "C"
void C_ZN4QUrl8setQueryERK9QUrlQuery(void *this_, const QUrlQuery & query) {
  ((QUrl*)this_)->setQuery(query);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:254
// [1] bool hasFragment()
extern "C"
bool C_ZNK4QUrl11hasFragmentEv(void *this_) {
  return (bool)((QUrl*)this_)->hasFragment();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:256
// [-2] void setFragment(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl11setFragmentERK7QStringNS_11ParsingModeE(void *this_, const QString & fragment, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setFragment(fragment, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:258
// [8] QUrl resolved(const class QUrl &)
extern "C"
void* C_ZNK4QUrl8resolvedERKS_(void *this_, const QUrl & relative) {
  auto rv = ((QUrl*)this_)->resolved(relative);
return new QUrl(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:260
// [1] bool isRelative()
extern "C"
bool C_ZNK4QUrl10isRelativeEv(void *this_) {
  return (bool)((QUrl*)this_)->isRelative();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:261
// [1] bool isParentOf(const class QUrl &)
extern "C"
bool C_ZNK4QUrl10isParentOfERKS_(void *this_, const QUrl & url) {
  return (bool)((QUrl*)this_)->isParentOf(url);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:263
// [1] bool isLocalFile()
extern "C"
bool C_ZNK4QUrl11isLocalFileEv(void *this_) {
  return (bool)((QUrl*)this_)->isLocalFile();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:264
// [8] QUrl fromLocalFile(const class QString &)
extern "C"
void* C_ZN4QUrl13fromLocalFileERK7QString(const QString & localfile) {
  auto rv = QUrl::fromLocalFile(localfile);
return new QUrl(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:265
// [8] QString toLocalFile()
extern "C"
void* C_ZNK4QUrl11toLocalFileEv(void *this_) {
  auto rv = ((QUrl*)this_)->toLocalFile();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:267
// [-2] void detach()
extern "C"
void C_ZN4QUrl6detachEv(void *this_) {
  ((QUrl*)this_)->detach();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:268
// [1] bool isDetached()
extern "C"
bool C_ZNK4QUrl10isDetachedEv(void *this_) {
  return (bool)((QUrl*)this_)->isDetached();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:276
// [8] QString fromPercentEncoding(const class QByteArray &)
extern "C"
void* C_ZN4QUrl19fromPercentEncodingERK10QByteArray(const QByteArray & arg0) {
  auto rv = QUrl::fromPercentEncoding(arg0);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:277
// [8] QByteArray toPercentEncoding(const class QString &, const class QByteArray &, const class QByteArray &)
extern "C"
void* C_ZN4QUrl17toPercentEncodingERK7QStringRK10QByteArrayS5_(const QString & arg0, const QByteArray & exclude, const QByteArray & include) {
  auto rv = QUrl::toPercentEncoding(arg0, exclude, include);
return new QByteArray(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:357
// [8] QString fromAce(const class QByteArray &)
extern "C"
void* C_ZN4QUrl7fromAceERK10QByteArray(const QByteArray & arg0) {
  auto rv = QUrl::fromAce(arg0);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:358
// [8] QByteArray toAce(const class QString &)
extern "C"
void* C_ZN4QUrl5toAceERK7QString(const QString & arg0) {
  auto rv = QUrl::toAce(arg0);
return new QByteArray(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:363
// [-2] void setIdnWhitelist(const class QStringList &)
extern "C"
void C_ZN4QUrl15setIdnWhitelistERK11QStringList(const QStringList & arg0) {
  QUrl::setIdnWhitelist(arg0);
}
//  main block end
