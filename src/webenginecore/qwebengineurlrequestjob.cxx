//  header block begin
// since 0x050600
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineurlrequestjob.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineUrlRequestJob is pure virtual: false
// QWebEngineUrlRequestJob has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQWebEngineUrlRequestJob_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineUrlRequestJob_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineUrlRequestJob_t qt_meta_stringdata_MyQWebEngineUrlRequestJob = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQWebEngineUrlRequestJob"
  },
  "MyQWebEngineUrlRequestJob"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineUrlRequestJob[] = {
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
class Q_DECL_EXPORT MyQWebEngineUrlRequestJob : public QWebEngineUrlRequestJob {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QWebEngineUrlRequestJob::staticMetaObject,
  qt_meta_stringdata_MyQWebEngineUrlRequestJob.data,
  qt_meta_data_MyQWebEngineUrlRequestJob,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQWebEngineUrlRequestJob.stringdata0))
      return static_cast<void*>(this);
  return QWebEngineUrlRequestJob::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QWebEngineUrlRequestJob::qt_metacall(_c, _id, _a);
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
  virtual ~MyQWebEngineUrlRequestJob() {}
};

extern "C" Q_DECL_EXPORT
void C_QWebEngineUrlRequestJob_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQWebEngineUrlRequestJob* qo = (MyQWebEngineUrlRequestJob*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QWebEngineUrlRequestJob10metaObjectEv(void *this_) {
  return (void*)((QWebEngineUrlRequestJob*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:59
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QWebEngineUrlRequestJob11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWebEngineUrlRequestJob*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:59
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN23QWebEngineUrlRequestJob11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWebEngineUrlRequestJob*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:59
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QWebEngineUrlRequestJob2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineUrlRequestJob::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:59
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QWebEngineUrlRequestJob6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineUrlRequestJob::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:61
// [-2] void ~QWebEngineUrlRequestJob()
extern "C" Q_DECL_EXPORT
void C_ZN23QWebEngineUrlRequestJobD2Ev(void *this_) {
  delete (QWebEngineUrlRequestJob*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:73
// [8] QUrl requestUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QWebEngineUrlRequestJob10requestUrlEv(void *this_) {
  auto rv = ((QWebEngineUrlRequestJob*)this_)->requestUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:74
// [8] QByteArray requestMethod()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QWebEngineUrlRequestJob13requestMethodEv(void *this_) {
  auto rv = ((QWebEngineUrlRequestJob*)this_)->requestMethod();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:76
// [-2] void reply(const QByteArray &, QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN23QWebEngineUrlRequestJob5replyERK10QByteArrayP9QIODevice(void *this_, QByteArray* contentType, QIODevice * device) {
  ((QWebEngineUrlRequestJob*)this_)->reply(*contentType, device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:77
// [-2] void fail(QWebEngineUrlRequestJob::Error)
extern "C" Q_DECL_EXPORT
void C_ZN23QWebEngineUrlRequestJob4failENS_5ErrorE(void *this_, QWebEngineUrlRequestJob::Error error) {
  ((QWebEngineUrlRequestJob*)this_)->fail(error);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:78
// [-2] void redirect(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN23QWebEngineUrlRequestJob8redirectERK4QUrl(void *this_, QUrl* url) {
  ((QWebEngineUrlRequestJob*)this_)->redirect(*url);
}

//  main block end
