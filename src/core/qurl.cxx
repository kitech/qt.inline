// /usr/include/qt/QtCore/qurl.h
#include <qurl.h>
#include <QtCore>

// /usr/include/qt/QtCore/qurl.h:172
// void QUrl()
extern "C"
void* C_ZN4QUrlC1Ev() {
  return new QUrl();
}
// /usr/include/qt/QtCore/qurl.h:178
// void QUrl(const class QString &, enum QUrl::ParsingMode)
extern "C"
void* C_ZN4QUrlC1ERK7QStringNS_11ParsingModeE(const QString & url, QUrl::ParsingMode mode) {
  return new QUrl(url, mode);
}
// /usr/include/qt/QtCore/qurl.h:187
// void ~QUrl()
extern "C"
void C_ZN4QUrlD1Ev(void *this_) {
  delete (QUrl*)(this_);
}
// inline
// /usr/include/qt/QtCore/qurl.h:189
// void swap(class QUrl &)
extern "C"
void C_ZN4QUrl4swapERS_(void *this_, QUrl & other) {
  ((QUrl*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qurl.h:191
// void setUrl(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl6setUrlERK7QStringNS_11ParsingModeE(void *this_, const QString & url, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setUrl(url, mode);
}
// static
// /usr/include/qt/QtCore/qurl.h:198
// QUrl fromEncoded(const class QByteArray &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl11fromEncodedERK10QByteArrayNS_11ParsingModeE(const QByteArray & url, QUrl::ParsingMode mode) {
  /*return*/ QUrl::fromEncoded(url, mode);
}
// static
// /usr/include/qt/QtCore/qurl.h:206
// QUrl fromUserInput(const class QString &)
extern "C"
void C_ZN4QUrl13fromUserInputERK7QString(const QString & userInput) {
  /*return*/ QUrl::fromUserInput(userInput);
}
// static
// /usr/include/qt/QtCore/qurl.h:208
// QUrl fromUserInput(const class QString &, const class QString &, UserInputResolutionOptions)
extern "C"
void C_ZN4QUrl13fromUserInputERK7QStringS2_6QFlagsINS_25UserInputResolutionOptionEE(const QString & userInput, const QString & workingDirectory, QFlags<QUrl::UserInputResolutionOption> options) {
  /*return*/ QUrl::fromUserInput(userInput, workingDirectory, options);
}
// /usr/include/qt/QtCore/qurl.h:211
// bool isValid()
extern "C"
void C_ZNK4QUrl7isValidEv(void *this_) {
  /*return*/ ((QUrl*)this_)->isValid();
}
// /usr/include/qt/QtCore/qurl.h:212
// QString errorString()
extern "C"
void C_ZNK4QUrl11errorStringEv(void *this_) {
  /*return*/ ((QUrl*)this_)->errorString();
}
// /usr/include/qt/QtCore/qurl.h:214
// bool isEmpty()
extern "C"
void C_ZNK4QUrl7isEmptyEv(void *this_) {
  /*return*/ ((QUrl*)this_)->isEmpty();
}
// /usr/include/qt/QtCore/qurl.h:215
// void clear()
extern "C"
void C_ZN4QUrl5clearEv(void *this_) {
  ((QUrl*)this_)->clear();
}
// /usr/include/qt/QtCore/qurl.h:217
// void setScheme(const class QString &)
extern "C"
void C_ZN4QUrl9setSchemeERK7QString(void *this_, const QString & scheme) {
  ((QUrl*)this_)->setScheme(scheme);
}
// /usr/include/qt/QtCore/qurl.h:218
// QString scheme()
extern "C"
void C_ZNK4QUrl6schemeEv(void *this_) {
  /*return*/ ((QUrl*)this_)->scheme();
}
// /usr/include/qt/QtCore/qurl.h:220
// void setAuthority(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl12setAuthorityERK7QStringNS_11ParsingModeE(void *this_, const QString & authority, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setAuthority(authority, mode);
}
// /usr/include/qt/QtCore/qurl.h:223
// void setUserInfo(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl11setUserInfoERK7QStringNS_11ParsingModeE(void *this_, const QString & userInfo, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setUserInfo(userInfo, mode);
}
// /usr/include/qt/QtCore/qurl.h:226
// void setUserName(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl11setUserNameERK7QStringNS_11ParsingModeE(void *this_, const QString & userName, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setUserName(userName, mode);
}
// /usr/include/qt/QtCore/qurl.h:229
// void setPassword(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl11setPasswordERK7QStringNS_11ParsingModeE(void *this_, const QString & password, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setPassword(password, mode);
}
// /usr/include/qt/QtCore/qurl.h:232
// void setHost(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl7setHostERK7QStringNS_11ParsingModeE(void *this_, const QString & host, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setHost(host, mode);
}
// /usr/include/qt/QtCore/qurl.h:236
// void setPort(int)
extern "C"
void C_ZN4QUrl7setPortEi(void *this_, int port) {
  ((QUrl*)this_)->setPort(port);
}
// /usr/include/qt/QtCore/qurl.h:237
// int port(int)
extern "C"
void C_ZNK4QUrl4portEi(void *this_, int defaultPort) {
  /*return*/ ((QUrl*)this_)->port(defaultPort);
}
// /usr/include/qt/QtCore/qurl.h:239
// void setPath(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl7setPathERK7QStringNS_11ParsingModeE(void *this_, const QString & path, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setPath(path, mode);
}
// /usr/include/qt/QtCore/qurl.h:243
// bool hasQuery()
extern "C"
void C_ZNK4QUrl8hasQueryEv(void *this_) {
  /*return*/ ((QUrl*)this_)->hasQuery();
}
// /usr/include/qt/QtCore/qurl.h:244
// void setQuery(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl8setQueryERK7QStringNS_11ParsingModeE(void *this_, const QString & query, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setQuery(query, mode);
}
// /usr/include/qt/QtCore/qurl.h:245
// void setQuery(const class QUrlQuery &)
extern "C"
void C_ZN4QUrl8setQueryERK9QUrlQuery(void *this_, const QUrlQuery & query) {
  ((QUrl*)this_)->setQuery(query);
}
// /usr/include/qt/QtCore/qurl.h:248
// bool hasFragment()
extern "C"
void C_ZNK4QUrl11hasFragmentEv(void *this_) {
  /*return*/ ((QUrl*)this_)->hasFragment();
}
// /usr/include/qt/QtCore/qurl.h:250
// void setFragment(const class QString &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl11setFragmentERK7QStringNS_11ParsingModeE(void *this_, const QString & fragment, QUrl::ParsingMode mode) {
  ((QUrl*)this_)->setFragment(fragment, mode);
}
// /usr/include/qt/QtCore/qurl.h:252
// QUrl resolved(const class QUrl &)
extern "C"
void C_ZNK4QUrl8resolvedERKS_(void *this_, const QUrl & relative) {
  /*return*/ ((QUrl*)this_)->resolved(relative);
}
// /usr/include/qt/QtCore/qurl.h:254
// bool isRelative()
extern "C"
void C_ZNK4QUrl10isRelativeEv(void *this_) {
  /*return*/ ((QUrl*)this_)->isRelative();
}
// /usr/include/qt/QtCore/qurl.h:255
// bool isParentOf(const class QUrl &)
extern "C"
void C_ZNK4QUrl10isParentOfERKS_(void *this_, const QUrl & url) {
  /*return*/ ((QUrl*)this_)->isParentOf(url);
}
// /usr/include/qt/QtCore/qurl.h:257
// bool isLocalFile()
extern "C"
void C_ZNK4QUrl11isLocalFileEv(void *this_) {
  /*return*/ ((QUrl*)this_)->isLocalFile();
}
// static
// /usr/include/qt/QtCore/qurl.h:258
// QUrl fromLocalFile(const class QString &)
extern "C"
void C_ZN4QUrl13fromLocalFileERK7QString(const QString & localfile) {
  /*return*/ QUrl::fromLocalFile(localfile);
}
// /usr/include/qt/QtCore/qurl.h:259
// QString toLocalFile()
extern "C"
void C_ZNK4QUrl11toLocalFileEv(void *this_) {
  /*return*/ ((QUrl*)this_)->toLocalFile();
}
// /usr/include/qt/QtCore/qurl.h:261
// void detach()
extern "C"
void C_ZN4QUrl6detachEv(void *this_) {
  ((QUrl*)this_)->detach();
}
// /usr/include/qt/QtCore/qurl.h:262
// bool isDetached()
extern "C"
void C_ZNK4QUrl10isDetachedEv(void *this_) {
  /*return*/ ((QUrl*)this_)->isDetached();
}
// static
// /usr/include/qt/QtCore/qurl.h:270
// QString fromPercentEncoding(const class QByteArray &)
extern "C"
void C_ZN4QUrl19fromPercentEncodingERK10QByteArray(const QByteArray & a0) {
  /*return*/ QUrl::fromPercentEncoding(a0);
}
// static
// /usr/include/qt/QtCore/qurl.h:271
// QByteArray toPercentEncoding(const class QString &, const class QByteArray &, const class QByteArray &)
extern "C"
void C_ZN4QUrl17toPercentEncodingERK7QStringRK10QByteArrayS5_(const QString & a0, const QByteArray & exclude, const QByteArray & include) {
  /*return*/ QUrl::toPercentEncoding(a0, exclude, include);
}
// static
// /usr/include/qt/QtCore/qurl.h:353
// QString fromAce(const class QByteArray &)
extern "C"
void C_ZN4QUrl7fromAceERK10QByteArray(const QByteArray & a0) {
  /*return*/ QUrl::fromAce(a0);
}
// static
// /usr/include/qt/QtCore/qurl.h:354
// QByteArray toAce(const class QString &)
extern "C"
void C_ZN4QUrl5toAceERK7QString(const QString & a0) {
  /*return*/ QUrl::toAce(a0);
}
// static
// /usr/include/qt/QtCore/qurl.h:355
// QStringList idnWhitelist()
extern "C"
void C_ZN4QUrl12idnWhitelistEv() {
  /*return*/ QUrl::idnWhitelist();
}
// static
// /usr/include/qt/QtCore/qurl.h:357
// QList<QUrl> fromStringList(const class QStringList &, enum QUrl::ParsingMode)
extern "C"
void C_ZN4QUrl14fromStringListERK11QStringListNS_11ParsingModeE(const QStringList & uris, QUrl::ParsingMode mode) {
  /*return*/ QUrl::fromStringList(uris, mode);
}
// static
// /usr/include/qt/QtCore/qurl.h:359
// void setIdnWhitelist(const class QStringList &)
extern "C"
void C_ZN4QUrl15setIdnWhitelistERK11QStringList(const QStringList & a0) {
  QUrl::setIdnWhitelist(a0);
}