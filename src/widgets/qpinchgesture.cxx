//  header block begin

// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QPinchGesture is pure virtual: false false
// QPinchGesture has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPinchGesture_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPinchGesture_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPinchGesture_t qt_meta_stringdata_MyQPinchGesture = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQPinchGesture"
  },
  "MyQPinchGesture"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPinchGesture[] = {
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
class Q_DECL_EXPORT MyQPinchGesture : public QPinchGesture {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QPinchGesture::staticMetaObject,
  qt_meta_stringdata_MyQPinchGesture.data,
  qt_meta_data_MyQPinchGesture,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQPinchGesture.stringdata0))
      return static_cast<void*>(this);
  return QPinchGesture::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QPinchGesture::qt_metacall(_c, _id, _a);
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
  virtual ~MyQPinchGesture() {}
// void QPinchGesture(QObject *)
MyQPinchGesture(QObject * parent) : QPinchGesture(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QPinchGesture_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQPinchGesture* qo = (MyQPinchGesture*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpinchgesture(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:136
// [8] QString tr(const char *, const char *, int) 
// (12)qm2169008415 (29)_ZN13QPinchGesture2trEPKcS1_i
//static
/*void qm2169008415(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QPinchGesture::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QPinchGesture::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:165
// [-2] void QPinchGesture(QObject *) 
// (12)qm3745096018 (30)_ZN13QPinchGestureC2EP7QObject
/*void* qm3745096018(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QPinchGesture(parent);
  this_ =  new MyQPinchGesture(parent);
}


/*void C_ZN13QPinchGestureD2Ev(void *this_)*/ {
  delete (QPinchGesture*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpinchgesture
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
