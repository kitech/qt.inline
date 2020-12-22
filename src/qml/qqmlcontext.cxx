//  header block begin

// /usr/include/qt/QtQml/qqmlcontext.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlcontext.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlContext is pure virtual: false false
// QQmlContext has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlContext_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlContext_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlContext_t qt_meta_stringdata_MyQQmlContext = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQQmlContext"
  },
  "MyQQmlContext"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlContext[] = {
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
class Q_DECL_EXPORT MyQQmlContext : public QQmlContext {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQmlContext::staticMetaObject,
  qt_meta_stringdata_MyQQmlContext.data,
  qt_meta_data_MyQQmlContext,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQmlContext.stringdata0))
      return static_cast<void*>(this);
  return QQmlContext::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQmlContext::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQmlContext() {}
// void QQmlContext(QQmlEngine *, QObject *)
MyQQmlContext(QQmlEngine * parent, QObject * objParent) : QQmlContext(parent, objParent) {}
// void QQmlContext(QQmlContext *, QObject *)
MyQQmlContext(QQmlContext * parent, QObject * objParent) : QQmlContext(parent, objParent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QQmlContext_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQmlContext* qo = (MyQQmlContext*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlcontext(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:63
// [8] QString tr(const char *, const char *, int) 
// (11)qm411858209 (27)_ZN11QQmlContext2trEPKcS1_i
//static
/*void qm411858209(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQmlContext::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQmlContext::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:69
// [-2] void QQmlContext(QQmlEngine *, QObject *) 
// (12)qm4257046582 (41)_ZN11QQmlContextC2EP10QQmlEngineP7QObject
/*void* qm4257046582(QQmlEngine * parent, QObject * objParent)*/{
  QQmlEngine * parent = *(QQmlEngine **)this_; QObject * objParent = *(QObject **)this_;
  this_ =  new QQmlContext(parent, objParent);
  this_ =  new MyQQmlContext(parent, objParent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:70
// [-2] void QQmlContext(QQmlContext *, QObject *) 
// (11)qm267568946 (31)_ZN11QQmlContextC2EPS_P7QObject
/*void* qm267568946(QQmlContext * parent, QObject * objParent)*/{
  QQmlContext * parent = *(QQmlContext **)this_; QObject * objParent = *(QObject **)this_;
  this_ =  new QQmlContext(parent, objParent);
  this_ =  new MyQQmlContext(parent, objParent);
}


/*void C_ZN11QQmlContextD2Ev(void *this_)*/ {
  delete (QQmlContext*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlcontext
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
