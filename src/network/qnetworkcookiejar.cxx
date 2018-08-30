//  header block begin
// since 0x040400
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkcookiejar.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkCookieJar is pure virtual: false
// QNetworkCookieJar has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQNetworkCookieJar_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkCookieJar_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkCookieJar_t qt_meta_stringdata_MyQNetworkCookieJar = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQNetworkCookieJar"
  },
  "MyQNetworkCookieJar"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkCookieJar[] = {
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
class Q_DECL_EXPORT MyQNetworkCookieJar : public QNetworkCookieJar {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QNetworkCookieJar::staticMetaObject,
  qt_meta_stringdata_MyQNetworkCookieJar.data,
  qt_meta_data_MyQNetworkCookieJar,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQNetworkCookieJar.stringdata0))
      return static_cast<void*>(this);
  return QNetworkCookieJar::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QNetworkCookieJar::qt_metacall(_c, _id, _a);
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
  virtual ~MyQNetworkCookieJar() {}
// void QNetworkCookieJar(QObject *)
MyQNetworkCookieJar(QObject * parent) : QNetworkCookieJar(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool validateCookie(const QNetworkCookie &, const QUrl &)
  virtual bool validateCookie(const QNetworkCookie & cookie, const QUrl & url) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"validateCookie", &handled, 2, (uint64_t)&cookie, (uint64_t)&url, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QNetworkCookieJar::validateCookie(cookie, url);
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QNetworkCookieJar_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQNetworkCookieJar* qo = (MyQNetworkCookieJar*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Protected virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:70
// [1] bool validateCookie(const QNetworkCookie &, const QUrl &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK17QNetworkCookieJar14validateCookieERK14QNetworkCookieRK4QUrl(void *this_, QNetworkCookie* cookie, QUrl* url) {
  return (bool)((QNetworkCookieJar*)this_)->QNetworkCookieJar::validateCookie(*cookie, *url);
}
#endif // QT_VERSION >= 0x050000

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QNetworkCookieJar10metaObjectEv(void *this_) {
  return (void*)((QNetworkCookieJar*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QNetworkCookieJar11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QNetworkCookieJar*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QNetworkCookieJar11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QNetworkCookieJar*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QNetworkCookieJar2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNetworkCookieJar::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QNetworkCookieJar6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNetworkCookieJar::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:57
// [-2] void QNetworkCookieJar(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QNetworkCookieJarC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQNetworkCookieJar*)(0);
  return  new MyQNetworkCookieJar(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:58
// [-2] void ~QNetworkCookieJar()
extern "C" Q_DECL_EXPORT
void C_ZN17QNetworkCookieJarD2Ev(void *this_) {
  delete (QNetworkCookieJar*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:60
// [-2] QList<QNetworkCookie> cookiesForUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
QList<QNetworkCookie>* C_ZNK17QNetworkCookieJar13cookiesForUrlERK4QUrl(void *this_, QUrl* url) {
  auto rv = ((QNetworkCookieJar*)this_)->cookiesForUrl(*url);
return new QList<QNetworkCookie>(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:61
// [1] bool setCookiesFromUrl(const QList<QNetworkCookie> &, const QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZN17QNetworkCookieJar17setCookiesFromUrlERK5QListI14QNetworkCookieERK4QUrl(void *this_, QList<QNetworkCookie>* cookieList, QUrl* url) {
  return (bool)((QNetworkCookieJar*)this_)->setCookiesFromUrl(*cookieList, *url);
}

// Public virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:63
// [1] bool insertCookie(const QNetworkCookie &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN17QNetworkCookieJar12insertCookieERK14QNetworkCookie(void *this_, QNetworkCookie* cookie) {
  return (bool)((QNetworkCookieJar*)this_)->insertCookie(*cookie);
}
#endif // QT_VERSION >= 0x050000

// Public virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:64
// [1] bool updateCookie(const QNetworkCookie &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN17QNetworkCookieJar12updateCookieERK14QNetworkCookie(void *this_, QNetworkCookie* cookie) {
  return (bool)((QNetworkCookieJar*)this_)->updateCookie(*cookie);
}
#endif // QT_VERSION >= 0x050000

// Public virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:65
// [1] bool deleteCookie(const QNetworkCookie &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN17QNetworkCookieJar12deleteCookieERK14QNetworkCookie(void *this_, QNetworkCookie* cookie) {
  return (bool)((QNetworkCookieJar*)this_)->deleteCookie(*cookie);
}
#endif // QT_VERSION >= 0x050000

//  main block end
