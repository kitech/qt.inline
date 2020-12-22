//  header block begin

// /usr/include/qt/QtQml/qqmlapplicationengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlapplicationengine.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlApplicationEngine is pure virtual: false false
// QQmlApplicationEngine has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlApplicationEngine_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlApplicationEngine_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlApplicationEngine_t qt_meta_stringdata_MyQQmlApplicationEngine = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQQmlApplicationEngine"
  },
  "MyQQmlApplicationEngine"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlApplicationEngine[] = {
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
class Q_DECL_EXPORT MyQQmlApplicationEngine : public QQmlApplicationEngine {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQmlApplicationEngine::staticMetaObject,
  qt_meta_stringdata_MyQQmlApplicationEngine.data,
  qt_meta_data_MyQQmlApplicationEngine,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQmlApplicationEngine.stringdata0))
      return static_cast<void*>(this);
  return QQmlApplicationEngine::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQmlApplicationEngine::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQmlApplicationEngine() {}
// void QQmlApplicationEngine(QObject *)
MyQQmlApplicationEngine(QObject * parent) : QQmlApplicationEngine(parent) {}
// void QQmlApplicationEngine(const QUrl &, QObject *)
MyQQmlApplicationEngine(const QUrl & url, QObject * parent) : QQmlApplicationEngine(url, parent) {}
// void QQmlApplicationEngine(const QString &, QObject *)
MyQQmlApplicationEngine(const QString & filePath, QObject * parent) : QQmlApplicationEngine(filePath, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QQmlApplicationEngine_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQmlApplicationEngine* qo = (MyQQmlApplicationEngine*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlapplicationengine(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:54
// [8] QString tr(const char *, const char *, int) 
// (11)qm409627374 (37)_ZN21QQmlApplicationEngine2trEPKcS1_i
//static
/*void qm409627374(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQmlApplicationEngine::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQmlApplicationEngine::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:56
// [-2] void QQmlApplicationEngine(QObject *) 
// (11)qm354042307 (38)_ZN21QQmlApplicationEngineC2EP7QObject
/*void* qm354042307(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QQmlApplicationEngine(parent);
  this_ =  new MyQQmlApplicationEngine(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:57
// [-2] void QQmlApplicationEngine(const QUrl &, QObject *) 
// (12)qm3368203142 (45)_ZN21QQmlApplicationEngineC2ERK4QUrlP7QObject
/*void* qm3368203142(const QUrl & url, QObject * parent)*/{
  const QUrl & url = *(const QUrl *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QQmlApplicationEngine(url, parent);
  this_ =  new MyQQmlApplicationEngine(url, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:58
// [-2] void QQmlApplicationEngine(const QString &, QObject *) 
// (11)qm810072450 (48)_ZN21QQmlApplicationEngineC2ERK7QStringP7QObject
/*void* qm810072450(const QString & filePath, QObject * parent)*/{
  const QString & filePath = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QQmlApplicationEngine(filePath, parent);
  this_ =  new MyQQmlApplicationEngine(filePath, parent);
}


/*void C_ZN21QQmlApplicationEngineD2Ev(void *this_)*/ {
  delete (QQmlApplicationEngine*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlapplicationengine
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
