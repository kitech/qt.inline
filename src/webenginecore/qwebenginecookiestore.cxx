//  header block begin

// since 0x050600
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginecookiestore.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineCookieStore is pure virtual: false
// QWebEngineCookieStore has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineCookieStore_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineCookieStore_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineCookieStore_t qt_meta_stringdata_MyQWebEngineCookieStore = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQWebEngineCookieStore"
  },
  "MyQWebEngineCookieStore"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineCookieStore[] = {
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
class Q_DECL_EXPORT MyQWebEngineCookieStore : public QWebEngineCookieStore {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QWebEngineCookieStore::staticMetaObject,
  qt_meta_stringdata_MyQWebEngineCookieStore.data,
  qt_meta_data_MyQWebEngineCookieStore,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQWebEngineCookieStore.stringdata0))
      return static_cast<void*>(this);
  return QWebEngineCookieStore::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QWebEngineCookieStore::qt_metacall(_c, _id, _a);
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
  virtual ~MyQWebEngineCookieStore() {}
};

extern "C" Q_DECL_EXPORT
void* C_QWebEngineCookieStore_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQWebEngineCookieStore* qo = (MyQWebEngineCookieStore*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QWebEngineCookieStore10metaObjectEv(void *this_) {
  return (void*)((QWebEngineCookieStore*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:61
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QWebEngineCookieStore11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWebEngineCookieStore*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:61
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QWebEngineCookieStore11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWebEngineCookieStore*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:61
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QWebEngineCookieStore2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineCookieStore::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:61
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QWebEngineCookieStore6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineCookieStore::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:71
// [-2] void ~QWebEngineCookieStore()
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStoreD2Ev(void *this_) {
  delete (QWebEngineCookieStore*)(this_);
}
// Public Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:73
// [-2] void setCookieFilter(const std::function<bool (const FilterRequest &)> &)
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore15setCookieFilterERKSt8functionIFbRKNS_13FilterRequestEEE(void *this_, const std::function<bool (const QWebEngineCookieStore::FilterRequest &)> & filterCallback) {
  ((QWebEngineCookieStore*)this_)->setCookieFilter(filterCallback);
}
#endif // QT_VERSION >= 0x050b00

// Public Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:74
// [-2] void setCookieFilter(std::function<bool (const FilterRequest &)> &&)
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore15setCookieFilterEOSt8functionIFbRKNS_13FilterRequestEEE(void *this_, std::function<bool (const QWebEngineCookieStore::FilterRequest &)> && filterCallback) {
  ((QWebEngineCookieStore*)this_)->setCookieFilter(filterCallback);
}
#endif // QT_VERSION >= 0x050b00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:75
// [-2] void setCookie(const QNetworkCookie &, const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore9setCookieERK14QNetworkCookieRK4QUrl(void *this_, QNetworkCookie* cookie, QUrl* origin) {
  ((QWebEngineCookieStore*)this_)->setCookie(*cookie, *origin);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:76
// [-2] void deleteCookie(const QNetworkCookie &, const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore12deleteCookieERK14QNetworkCookieRK4QUrl(void *this_, QNetworkCookie* cookie, QUrl* origin) {
  ((QWebEngineCookieStore*)this_)->deleteCookie(*cookie, *origin);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:77
// [-2] void deleteSessionCookies()
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore20deleteSessionCookiesEv(void *this_) {
  ((QWebEngineCookieStore*)this_)->deleteSessionCookies();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:78
// [-2] void deleteAllCookies()
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore16deleteAllCookiesEv(void *this_) {
  ((QWebEngineCookieStore*)this_)->deleteAllCookies();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:79
// [-2] void loadAllCookies()
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore14loadAllCookiesEv(void *this_) {
  ((QWebEngineCookieStore*)this_)->loadAllCookies();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:82
// [-2] void cookieAdded(const QNetworkCookie &)
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore11cookieAddedERK14QNetworkCookie(void *this_, QNetworkCookie* cookie) {
  ((QWebEngineCookieStore*)this_)->cookieAdded(*cookie);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:83
// [-2] void cookieRemoved(const QNetworkCookie &)
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore13cookieRemovedERK14QNetworkCookie(void *this_, QNetworkCookie* cookie) {
  ((QWebEngineCookieStore*)this_)->cookieRemoved(*cookie);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
