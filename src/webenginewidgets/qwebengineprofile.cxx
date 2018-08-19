//  header block begin
// since 0x050500
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineprofile.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineProfile is pure virtual: false
// QWebEngineProfile has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWebEngineProfile : public QWebEngineProfile {
public:
  virtual ~MyQWebEngineProfile() {}
// void QWebEngineProfile(QObject *)
MyQWebEngineProfile(QObject * parent) : QWebEngineProfile(parent) {}
// void QWebEngineProfile(const QString &, QObject *)
MyQWebEngineProfile(const QString & name, QObject * parent) : QWebEngineProfile(name, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:64
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QWebEngineProfile10metaObjectEv(void *this_) {
  return (void*)((QWebEngineProfile*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:64
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QWebEngineProfile11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWebEngineProfile*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:64
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QWebEngineProfile11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWebEngineProfile*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:64
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QWebEngineProfile2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineProfile::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:64
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QWebEngineProfile6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineProfile::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:66
// [-2] void QWebEngineProfile(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QWebEngineProfileC2EP7QObject(QObject * parent) {
  return  new QWebEngineProfile(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:67
// [-2] void QWebEngineProfile(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QWebEngineProfileC2ERK7QStringP7QObject(QString* name, QObject * parent) {
  return  new QWebEngineProfile(*name, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:68
// [-2] void ~QWebEngineProfile()
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfileD2Ev(void *this_) {
  delete (QWebEngineProfile*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:84
// [8] QString storageName()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QWebEngineProfile11storageNameEv(void *this_) {
  auto rv = ((QWebEngineProfile*)this_)->storageName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:85
// [1] bool isOffTheRecord()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QWebEngineProfile14isOffTheRecordEv(void *this_) {
  return (bool)((QWebEngineProfile*)this_)->isOffTheRecord();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:87
// [8] QString persistentStoragePath()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QWebEngineProfile21persistentStoragePathEv(void *this_) {
  auto rv = ((QWebEngineProfile*)this_)->persistentStoragePath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:88
// [-2] void setPersistentStoragePath(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile24setPersistentStoragePathERK7QString(void *this_, QString* path) {
  ((QWebEngineProfile*)this_)->setPersistentStoragePath(*path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:90
// [8] QString cachePath()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QWebEngineProfile9cachePathEv(void *this_) {
  auto rv = ((QWebEngineProfile*)this_)->cachePath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:91
// [-2] void setCachePath(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile12setCachePathERK7QString(void *this_, QString* path) {
  ((QWebEngineProfile*)this_)->setCachePath(*path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:93
// [8] QString httpUserAgent()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QWebEngineProfile13httpUserAgentEv(void *this_) {
  auto rv = ((QWebEngineProfile*)this_)->httpUserAgent();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:94
// [-2] void setHttpUserAgent(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile16setHttpUserAgentERK7QString(void *this_, QString* userAgent) {
  ((QWebEngineProfile*)this_)->setHttpUserAgent(*userAgent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:96
// [4] QWebEngineProfile::HttpCacheType httpCacheType()
extern "C" Q_DECL_EXPORT
QWebEngineProfile::HttpCacheType C_ZNK17QWebEngineProfile13httpCacheTypeEv(void *this_) {
  return (QWebEngineProfile::HttpCacheType)((QWebEngineProfile*)this_)->httpCacheType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:97
// [-2] void setHttpCacheType(QWebEngineProfile::HttpCacheType)
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile16setHttpCacheTypeENS_13HttpCacheTypeE(void *this_, QWebEngineProfile::HttpCacheType arg0) {
  ((QWebEngineProfile*)this_)->setHttpCacheType(arg0);
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:99
// [-2] void setHttpAcceptLanguage(const QString &)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile21setHttpAcceptLanguageERK7QString(void *this_, QString* httpAcceptLanguage) {
  ((QWebEngineProfile*)this_)->setHttpAcceptLanguage(*httpAcceptLanguage);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:100
// [8] QString httpAcceptLanguage()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZNK17QWebEngineProfile18httpAcceptLanguageEv(void *this_) {
  auto rv = ((QWebEngineProfile*)this_)->httpAcceptLanguage();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:102
// [4] QWebEngineProfile::PersistentCookiesPolicy persistentCookiesPolicy()
extern "C" Q_DECL_EXPORT
QWebEngineProfile::PersistentCookiesPolicy C_ZNK17QWebEngineProfile23persistentCookiesPolicyEv(void *this_) {
  return (QWebEngineProfile::PersistentCookiesPolicy)((QWebEngineProfile*)this_)->persistentCookiesPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:103
// [-2] void setPersistentCookiesPolicy(QWebEngineProfile::PersistentCookiesPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile26setPersistentCookiesPolicyENS_23PersistentCookiesPolicyE(void *this_, QWebEngineProfile::PersistentCookiesPolicy arg0) {
  ((QWebEngineProfile*)this_)->setPersistentCookiesPolicy(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:105
// [4] int httpCacheMaximumSize()
extern "C" Q_DECL_EXPORT
int C_ZNK17QWebEngineProfile20httpCacheMaximumSizeEv(void *this_) {
  return (int)((QWebEngineProfile*)this_)->httpCacheMaximumSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:106
// [-2] void setHttpCacheMaximumSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile23setHttpCacheMaximumSizeEi(void *this_, int maxSize) {
  ((QWebEngineProfile*)this_)->setHttpCacheMaximumSize(maxSize);
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:108
// [8] QWebEngineCookieStore * cookieStore()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZN17QWebEngineProfile11cookieStoreEv(void *this_) {
  return (void*)((QWebEngineProfile*)this_)->cookieStore();
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:109
// [-2] void setRequestInterceptor(QWebEngineUrlRequestInterceptor *)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile21setRequestInterceptorEP31QWebEngineUrlRequestInterceptor(void *this_, QWebEngineUrlRequestInterceptor * interceptor) {
  ((QWebEngineProfile*)this_)->setRequestInterceptor(interceptor);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:111
// [-2] void clearAllVisitedLinks()
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile20clearAllVisitedLinksEv(void *this_) {
  ((QWebEngineProfile*)this_)->clearAllVisitedLinks();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:112
// [-2] void clearVisitedLinks(const QList<QUrl> &)
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile17clearVisitedLinksERK5QListI4QUrlE(void *this_, const QList<QUrl> & urls) {
  ((QWebEngineProfile*)this_)->clearVisitedLinks(urls);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:113
// [1] bool visitedLinksContainsUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QWebEngineProfile23visitedLinksContainsUrlERK4QUrl(void *this_, QUrl* url) {
  return (bool)((QWebEngineProfile*)this_)->visitedLinksContainsUrl(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:115
// [8] QWebEngineSettings * settings()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QWebEngineProfile8settingsEv(void *this_) {
  return (void*)((QWebEngineProfile*)this_)->settings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:116
// [8] QWebEngineScriptCollection * scripts()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QWebEngineProfile7scriptsEv(void *this_) {
  return (void*)((QWebEngineProfile*)this_)->scripts();
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:118
// [8] const QWebEngineUrlSchemeHandler * urlSchemeHandler(const QByteArray &)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZNK17QWebEngineProfile16urlSchemeHandlerERK10QByteArray(void *this_, QByteArray* arg0) {
  return (void*)((QWebEngineProfile*)this_)->urlSchemeHandler(*arg0);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:119
// [-2] void installUrlSchemeHandler(const QByteArray &, QWebEngineUrlSchemeHandler *)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile23installUrlSchemeHandlerERK10QByteArrayP26QWebEngineUrlSchemeHandler(void *this_, QByteArray* scheme, QWebEngineUrlSchemeHandler * arg1) {
  ((QWebEngineProfile*)this_)->installUrlSchemeHandler(*scheme, arg1);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:120
// [-2] void removeUrlScheme(const QByteArray &)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile15removeUrlSchemeERK10QByteArray(void *this_, QByteArray* scheme) {
  ((QWebEngineProfile*)this_)->removeUrlScheme(*scheme);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:121
// [-2] void removeUrlSchemeHandler(QWebEngineUrlSchemeHandler *)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile22removeUrlSchemeHandlerEP26QWebEngineUrlSchemeHandler(void *this_, QWebEngineUrlSchemeHandler * arg0) {
  ((QWebEngineProfile*)this_)->removeUrlSchemeHandler(arg0);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:122
// [-2] void removeAllUrlSchemeHandlers()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile26removeAllUrlSchemeHandlersEv(void *this_) {
  ((QWebEngineProfile*)this_)->removeAllUrlSchemeHandlers();
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:124
// [-2] void clearHttpCache()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile14clearHttpCacheEv(void *this_) {
  ((QWebEngineProfile*)this_)->clearHttpCache();
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:126
// [-2] void setSpellCheckLanguages(const QStringList &)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile22setSpellCheckLanguagesERK11QStringList(void *this_, QStringList* languages) {
  ((QWebEngineProfile*)this_)->setSpellCheckLanguages(*languages);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:127
// [8] QStringList spellCheckLanguages()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK17QWebEngineProfile19spellCheckLanguagesEv(void *this_) {
  auto rv = ((QWebEngineProfile*)this_)->spellCheckLanguages();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:128
// [-2] void setSpellCheckEnabled(bool)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile20setSpellCheckEnabledEb(void *this_, bool enabled) {
  ((QWebEngineProfile*)this_)->setSpellCheckEnabled(enabled);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:129
// [1] bool isSpellCheckEnabled()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
bool C_ZNK17QWebEngineProfile19isSpellCheckEnabledEv(void *this_) {
  return (bool)((QWebEngineProfile*)this_)->isSpellCheckEnabled();
}
#endif // QT_VERSION >= 0x050800

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:131
// [8] QWebEngineProfile * defaultProfile()
extern "C" Q_DECL_EXPORT
void* C_ZN17QWebEngineProfile14defaultProfileEv() {
  return (void*)QWebEngineProfile::defaultProfile();
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:134
// [-2] void downloadRequested(QWebEngineDownloadItem *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN17QWebEngineProfile17downloadRequestedEP22QWebEngineDownloadItem(void *this_, QWebEngineDownloadItem * download) {
  ((QWebEngineProfile*)this_)->downloadRequested(download);
}
#endif // QT_VERSION >= 0x050500

//  main block end
