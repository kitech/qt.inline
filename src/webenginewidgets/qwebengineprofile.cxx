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


struct qt_meta_stringdata_MyQWebEngineProfile_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineProfile_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineProfile_t qt_meta_stringdata_MyQWebEngineProfile = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQWebEngineProfile"
  },
  "MyQWebEngineProfile"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineProfile[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQWebEngineProfile : public QWebEngineProfile {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QWebEngineProfile::staticMetaObject,
  qt_meta_stringdata_MyQWebEngineProfile.data,
  qt_meta_data_MyQWebEngineProfile,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQWebEngineProfile.stringdata0))
      return static_cast<void*>(this);
  return QWebEngineProfile::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QWebEngineProfile::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQWebEngineProfile() {}
// void QWebEngineProfile(QObject *)
MyQWebEngineProfile(QObject * parent) : QWebEngineProfile(parent) {}
// void QWebEngineProfile(const QString &, QObject *)
MyQWebEngineProfile(const QString & name, QObject * parent) : QWebEngineProfile(name, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QWebEngineProfile_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQWebEngineProfile* qo = (MyQWebEngineProfile*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

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
  return  new MyQWebEngineProfile(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:67
// [-2] void QWebEngineProfile(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QWebEngineProfileC2ERK7QStringP7QObject(QString* name, QObject * parent) {
  return  new MyQWebEngineProfile(*name, parent);
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
void C_ZN17QWebEngineProfile17clearVisitedLinksERK5QListI4QUrlE(void *this_, QList<QUrl>* urls) {
  ((QWebEngineProfile*)this_)->clearVisitedLinks(*urls);
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

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
