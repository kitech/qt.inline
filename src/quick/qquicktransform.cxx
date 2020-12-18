//  header block begin

// /usr/include/qt/QtQuick/qquickitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickitem.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickTransform is pure virtual: true true
// QQuickTransform has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQuickTransform_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQuickTransform_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQuickTransform_t qt_meta_stringdata_MyQQuickTransform = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQQuickTransform"
  },
  "MyQQuickTransform"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQuickTransform[] = {
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
class Q_DECL_EXPORT MyQQuickTransform : public QQuickTransform {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQuickTransform::staticMetaObject,
  qt_meta_stringdata_MyQQuickTransform.data,
  qt_meta_data_MyQQuickTransform,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQuickTransform.stringdata0))
      return static_cast<void*>(this);
  return QQuickTransform::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQuickTransform::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQuickTransform() {}
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void applyTo(QMatrix4x4 *)
  virtual void applyTo(QMatrix4x4 * matrix) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"applyTo", &handled, 1, (uint64_t)matrix, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QQuickTransform::applyTo(matrix);
  }
  }

// void QQuickTransform(QObject *)
MyQQuickTransform(QObject * parent) : QQuickTransform(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QQuickTransform_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQuickTransform* qo = (MyQQuickTransform*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qquicktransform(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:60
// [8] QString tr(const char *, const char *, int) 
// (12)qm4245966308 (31)_ZN15QQuickTransform2trEPKcS1_i
//static
/*void qm4245966308(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQuickTransform::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQuickTransform::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QQuickTransformD2Ev(void *this_)*/ {
  delete (QQuickTransform*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qquicktransform
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
