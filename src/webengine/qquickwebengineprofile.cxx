//  header block begin
// since 0x050600
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickwebengineprofile.h>
#include <QtWebEngine>
#include "callback_inherit.h"

// QQuickWebEngineProfile is pure virtual: false
// QQuickWebEngineProfile has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQQuickWebEngineProfile_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQuickWebEngineProfile_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQuickWebEngineProfile_t qt_meta_stringdata_MyQQuickWebEngineProfile = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQQuickWebEngineProfile"
  },
  "MyQQuickWebEngineProfile"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQuickWebEngineProfile[] = {
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
class Q_DECL_EXPORT MyQQuickWebEngineProfile : public QQuickWebEngineProfile {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQuickWebEngineProfile::staticMetaObject,
  qt_meta_stringdata_MyQQuickWebEngineProfile.data,
  qt_meta_data_MyQQuickWebEngineProfile,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQuickWebEngineProfile.stringdata0))
      return static_cast<void*>(this);
  return QQuickWebEngineProfile::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQuickWebEngineProfile::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQuickWebEngineProfile() {}
// void QQuickWebEngineProfile(QObject *)
MyQQuickWebEngineProfile(QObject * parent) : QQuickWebEngineProfile(parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QQuickWebEngineProfile_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQuickWebEngineProfile* qo = (MyQQuickWebEngineProfile*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:66
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QQuickWebEngineProfile10metaObjectEv(void *this_) {
  return (void*)((QQuickWebEngineProfile*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:66
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QQuickWebEngineProfile11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQuickWebEngineProfile*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:66
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN22QQuickWebEngineProfile11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQuickWebEngineProfile*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:66
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QQuickWebEngineProfile2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickWebEngineProfile::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:66
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QQuickWebEngineProfile6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickWebEngineProfile::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:81
// [-2] void QQuickWebEngineProfile(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QQuickWebEngineProfileC2EP7QObject(QObject * parent) {
  return  new MyQQuickWebEngineProfile(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:82
// [-2] void ~QQuickWebEngineProfile()
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfileD2Ev(void *this_) {
  delete (QQuickWebEngineProfile*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:98
// [8] QString storageName()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QQuickWebEngineProfile11storageNameEv(void *this_) {
  auto rv = ((QQuickWebEngineProfile*)this_)->storageName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:99
// [-2] void setStorageName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile14setStorageNameERK7QString(void *this_, QString* name) {
  ((QQuickWebEngineProfile*)this_)->setStorageName(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:101
// [1] bool isOffTheRecord()
extern "C" Q_DECL_EXPORT
bool C_ZNK22QQuickWebEngineProfile14isOffTheRecordEv(void *this_) {
  return (bool)((QQuickWebEngineProfile*)this_)->isOffTheRecord();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:102
// [-2] void setOffTheRecord(bool)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile15setOffTheRecordEb(void *this_, bool offTheRecord) {
  ((QQuickWebEngineProfile*)this_)->setOffTheRecord(offTheRecord);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:104
// [8] QString persistentStoragePath()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QQuickWebEngineProfile21persistentStoragePathEv(void *this_) {
  auto rv = ((QQuickWebEngineProfile*)this_)->persistentStoragePath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:105
// [-2] void setPersistentStoragePath(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile24setPersistentStoragePathERK7QString(void *this_, QString* path) {
  ((QQuickWebEngineProfile*)this_)->setPersistentStoragePath(*path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:107
// [8] QString cachePath()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QQuickWebEngineProfile9cachePathEv(void *this_) {
  auto rv = ((QQuickWebEngineProfile*)this_)->cachePath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:108
// [-2] void setCachePath(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile12setCachePathERK7QString(void *this_, QString* path) {
  ((QQuickWebEngineProfile*)this_)->setCachePath(*path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:110
// [8] QString httpUserAgent()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QQuickWebEngineProfile13httpUserAgentEv(void *this_) {
  auto rv = ((QQuickWebEngineProfile*)this_)->httpUserAgent();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:111
// [-2] void setHttpUserAgent(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile16setHttpUserAgentERK7QString(void *this_, QString* userAgent) {
  ((QQuickWebEngineProfile*)this_)->setHttpUserAgent(*userAgent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:113
// [4] QQuickWebEngineProfile::HttpCacheType httpCacheType()
extern "C" Q_DECL_EXPORT
QQuickWebEngineProfile::HttpCacheType C_ZNK22QQuickWebEngineProfile13httpCacheTypeEv(void *this_) {
  return (QQuickWebEngineProfile::HttpCacheType)((QQuickWebEngineProfile*)this_)->httpCacheType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:114
// [-2] void setHttpCacheType(QQuickWebEngineProfile::HttpCacheType)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile16setHttpCacheTypeENS_13HttpCacheTypeE(void *this_, QQuickWebEngineProfile::HttpCacheType arg0) {
  ((QQuickWebEngineProfile*)this_)->setHttpCacheType(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:116
// [4] QQuickWebEngineProfile::PersistentCookiesPolicy persistentCookiesPolicy()
extern "C" Q_DECL_EXPORT
QQuickWebEngineProfile::PersistentCookiesPolicy C_ZNK22QQuickWebEngineProfile23persistentCookiesPolicyEv(void *this_) {
  return (QQuickWebEngineProfile::PersistentCookiesPolicy)((QQuickWebEngineProfile*)this_)->persistentCookiesPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:117
// [-2] void setPersistentCookiesPolicy(QQuickWebEngineProfile::PersistentCookiesPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile26setPersistentCookiesPolicyENS_23PersistentCookiesPolicyE(void *this_, QQuickWebEngineProfile::PersistentCookiesPolicy arg0) {
  ((QQuickWebEngineProfile*)this_)->setPersistentCookiesPolicy(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:119
// [4] int httpCacheMaximumSize()
extern "C" Q_DECL_EXPORT
int C_ZNK22QQuickWebEngineProfile20httpCacheMaximumSizeEv(void *this_) {
  return (int)((QQuickWebEngineProfile*)this_)->httpCacheMaximumSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:120
// [-2] void setHttpCacheMaximumSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile23setHttpCacheMaximumSizeEi(void *this_, int maxSize) {
  ((QQuickWebEngineProfile*)this_)->setHttpCacheMaximumSize(maxSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:122
// [8] QString httpAcceptLanguage()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QQuickWebEngineProfile18httpAcceptLanguageEv(void *this_) {
  auto rv = ((QQuickWebEngineProfile*)this_)->httpAcceptLanguage();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:123
// [-2] void setHttpAcceptLanguage(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile21setHttpAcceptLanguageERK7QString(void *this_, QString* httpAcceptLanguage) {
  ((QQuickWebEngineProfile*)this_)->setHttpAcceptLanguage(*httpAcceptLanguage);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:125
// [8] QWebEngineCookieStore * cookieStore()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QQuickWebEngineProfile11cookieStoreEv(void *this_) {
  return (void*)((QQuickWebEngineProfile*)this_)->cookieStore();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:127
// [-2] void setRequestInterceptor(QWebEngineUrlRequestInterceptor *)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile21setRequestInterceptorEP31QWebEngineUrlRequestInterceptor(void *this_, QWebEngineUrlRequestInterceptor * interceptor) {
  ((QQuickWebEngineProfile*)this_)->setRequestInterceptor(interceptor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:129
// [8] const QWebEngineUrlSchemeHandler * urlSchemeHandler(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK22QQuickWebEngineProfile16urlSchemeHandlerERK10QByteArray(void *this_, QByteArray* arg0) {
  return (void*)((QQuickWebEngineProfile*)this_)->urlSchemeHandler(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:130
// [-2] void installUrlSchemeHandler(const QByteArray &, QWebEngineUrlSchemeHandler *)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile23installUrlSchemeHandlerERK10QByteArrayP26QWebEngineUrlSchemeHandler(void *this_, QByteArray* scheme, QWebEngineUrlSchemeHandler * arg1) {
  ((QQuickWebEngineProfile*)this_)->installUrlSchemeHandler(*scheme, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:131
// [-2] void removeUrlScheme(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile15removeUrlSchemeERK10QByteArray(void *this_, QByteArray* scheme) {
  ((QQuickWebEngineProfile*)this_)->removeUrlScheme(*scheme);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:132
// [-2] void removeUrlSchemeHandler(QWebEngineUrlSchemeHandler *)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile22removeUrlSchemeHandlerEP26QWebEngineUrlSchemeHandler(void *this_, QWebEngineUrlSchemeHandler * arg0) {
  ((QQuickWebEngineProfile*)this_)->removeUrlSchemeHandler(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:133
// [-2] void removeAllUrlSchemeHandlers()
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile26removeAllUrlSchemeHandlersEv(void *this_) {
  ((QQuickWebEngineProfile*)this_)->removeAllUrlSchemeHandlers();
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:135
// [-2] void clearHttpCache()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile14clearHttpCacheEv(void *this_) {
  ((QQuickWebEngineProfile*)this_)->clearHttpCache();
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:137
// [-2] void setSpellCheckLanguages(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile22setSpellCheckLanguagesERK11QStringList(void *this_, QStringList* languages) {
  ((QQuickWebEngineProfile*)this_)->setSpellCheckLanguages(*languages);
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:138
// [8] QStringList spellCheckLanguages()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK22QQuickWebEngineProfile19spellCheckLanguagesEv(void *this_) {
  auto rv = ((QQuickWebEngineProfile*)this_)->spellCheckLanguages();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:139
// [-2] void setSpellCheckEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile20setSpellCheckEnabledEb(void *this_, bool enabled) {
  ((QQuickWebEngineProfile*)this_)->setSpellCheckEnabled(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:140
// [1] bool isSpellCheckEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK22QQuickWebEngineProfile19isSpellCheckEnabledEv(void *this_) {
  return (bool)((QQuickWebEngineProfile*)this_)->isSpellCheckEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:142
// [-2] QQmlListProperty<QQuickWebEngineScript> userScripts()
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile11userScriptsEv(void *this_) {
  auto rv = ((QQuickWebEngineProfile*)this_)->userScripts();
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:144
// [8] QQuickWebEngineProfile * defaultProfile()
extern "C" Q_DECL_EXPORT
void* C_ZN22QQuickWebEngineProfile14defaultProfileEv() {
  return (void*)QQuickWebEngineProfile::defaultProfile();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:147
// [-2] void storageNameChanged()
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile18storageNameChangedEv(void *this_) {
  ((QQuickWebEngineProfile*)this_)->storageNameChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:148
// [-2] void offTheRecordChanged()
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile19offTheRecordChangedEv(void *this_) {
  ((QQuickWebEngineProfile*)this_)->offTheRecordChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:149
// [-2] void persistentStoragePathChanged()
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile28persistentStoragePathChangedEv(void *this_) {
  ((QQuickWebEngineProfile*)this_)->persistentStoragePathChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:150
// [-2] void cachePathChanged()
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile16cachePathChangedEv(void *this_) {
  ((QQuickWebEngineProfile*)this_)->cachePathChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:151
// [-2] void httpUserAgentChanged()
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile20httpUserAgentChangedEv(void *this_) {
  ((QQuickWebEngineProfile*)this_)->httpUserAgentChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:152
// [-2] void httpCacheTypeChanged()
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile20httpCacheTypeChangedEv(void *this_) {
  ((QQuickWebEngineProfile*)this_)->httpCacheTypeChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:153
// [-2] void persistentCookiesPolicyChanged()
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile30persistentCookiesPolicyChangedEv(void *this_) {
  ((QQuickWebEngineProfile*)this_)->persistentCookiesPolicyChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:154
// [-2] void httpCacheMaximumSizeChanged()
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile27httpCacheMaximumSizeChangedEv(void *this_) {
  ((QQuickWebEngineProfile*)this_)->httpCacheMaximumSizeChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:155
// [-2] void httpAcceptLanguageChanged()
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile25httpAcceptLanguageChangedEv(void *this_) {
  ((QQuickWebEngineProfile*)this_)->httpAcceptLanguageChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:156
// [-2] void spellCheckLanguagesChanged()
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile26spellCheckLanguagesChangedEv(void *this_) {
  ((QQuickWebEngineProfile*)this_)->spellCheckLanguagesChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:157
// [-2] void spellCheckEnabledChanged()
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile24spellCheckEnabledChangedEv(void *this_) {
  ((QQuickWebEngineProfile*)this_)->spellCheckEnabledChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:159
// [-2] void downloadRequested(QQuickWebEngineDownloadItem *)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile17downloadRequestedEP27QQuickWebEngineDownloadItem(void *this_, QQuickWebEngineDownloadItem * download) {
  ((QQuickWebEngineProfile*)this_)->downloadRequested(download);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebengineprofile.h:160
// [-2] void downloadFinished(QQuickWebEngineDownloadItem *)
extern "C" Q_DECL_EXPORT
void C_ZN22QQuickWebEngineProfile16downloadFinishedEP27QQuickWebEngineDownloadItem(void *this_, QQuickWebEngineDownloadItem * download) {
  ((QQuickWebEngineProfile*)this_)->downloadFinished(download);
}

//  main block end
