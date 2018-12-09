//  header block begin

// since 0x050600
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineurlrequestinterceptor.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineUrlRequestInterceptor is pure virtual: true
// QWebEngineUrlRequestInterceptor has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineUrlRequestInterceptor_t {
  QByteArrayData data[1];
  char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineUrlRequestInterceptor_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineUrlRequestInterceptor_t qt_meta_stringdata_MyQWebEngineUrlRequestInterceptor = {
   {
  QT_MOC_LITERAL(0, 0, 33), // "MyQWebEngineUrlRequestInterceptor"
  },
  "MyQWebEngineUrlRequestInterceptor"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineUrlRequestInterceptor[] = {
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
class Q_DECL_EXPORT MyQWebEngineUrlRequestInterceptor : public QWebEngineUrlRequestInterceptor {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QWebEngineUrlRequestInterceptor::staticMetaObject,
  qt_meta_stringdata_MyQWebEngineUrlRequestInterceptor.data,
  qt_meta_data_MyQWebEngineUrlRequestInterceptor,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQWebEngineUrlRequestInterceptor.stringdata0))
      return static_cast<void*>(this);
  return QWebEngineUrlRequestInterceptor::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QWebEngineUrlRequestInterceptor::qt_metacall(_c, _id, _a);
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
  virtual ~MyQWebEngineUrlRequestInterceptor() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void interceptRequest(QWebEngineUrlRequestInfo &)
  virtual void interceptRequest(QWebEngineUrlRequestInfo & info)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"interceptRequest", &handled, 1, (uint64_t)&info, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QWebEngineUrlRequestInterceptor::interceptRequest(info);
  }
  }

// void QWebEngineUrlRequestInterceptor(QObject *)
MyQWebEngineUrlRequestInterceptor(QObject * p) : QWebEngineUrlRequestInterceptor(p) {}
};

extern "C" Q_DECL_EXPORT
void* C_QWebEngineUrlRequestInterceptor_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQWebEngineUrlRequestInterceptor* qo = (MyQWebEngineUrlRequestInterceptor*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:63
// [-2] void interceptRequest(QWebEngineUrlRequestInfo &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK31QWebEngineUrlRequestInterceptor10metaObjectEv(void *this_) {
  return (void*)((QWebEngineUrlRequestInterceptor*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN31QWebEngineUrlRequestInterceptor11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWebEngineUrlRequestInterceptor*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN31QWebEngineUrlRequestInterceptor11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWebEngineUrlRequestInterceptor*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN31QWebEngineUrlRequestInterceptor2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineUrlRequestInterceptor::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN31QWebEngineUrlRequestInterceptor6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineUrlRequestInterceptor::trUtf8(s, c, n);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:58
// [-2] void QWebEngineUrlRequestInterceptor(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN31QWebEngineUrlRequestInterceptorC2EP7QObject(QObject * p) {
  return  new MyQWebEngineUrlRequestInterceptor(p);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:63
// [-2] void interceptRequest(QWebEngineUrlRequestInfo &)
extern "C" Q_DECL_EXPORT
void C_ZN31QWebEngineUrlRequestInterceptor16interceptRequestER24QWebEngineUrlRequestInfo(void *this_, QWebEngineUrlRequestInfo* info) {
  ((QWebEngineUrlRequestInterceptor*)this_)->interceptRequest(*info);
}


extern "C" Q_DECL_EXPORT
void C_ZN31QWebEngineUrlRequestInterceptorD2Ev(void *this_) {
  delete (QWebEngineUrlRequestInterceptor*)(this_);
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
