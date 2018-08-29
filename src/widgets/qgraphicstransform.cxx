//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicstransform.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicstransform.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsTransform is pure virtual: true
// QGraphicsTransform has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGraphicsTransform_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsTransform_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsTransform_t qt_meta_stringdata_MyQGraphicsTransform = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQGraphicsTransform"
  },
  "MyQGraphicsTransform"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsTransform[] = {
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
class Q_DECL_EXPORT MyQGraphicsTransform : public QGraphicsTransform {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsTransform::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsTransform.data,
  qt_meta_data_MyQGraphicsTransform,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsTransform.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsTransform::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsTransform::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGraphicsTransform() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void applyTo(QMatrix4x4 *)
  virtual void applyTo(QMatrix4x4 * matrix) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"applyTo", &handled, 1, (uint64_t)matrix, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QGraphicsTransform::applyTo(matrix);
  }
  }

// void QGraphicsTransform(QObject *)
MyQGraphicsTransform(QObject * parent) : QGraphicsTransform(parent) {}
};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:63
// [-2] void applyTo(QMatrix4x4 *)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QGraphicsTransform10metaObjectEv(void *this_) {
  return (void*)((QGraphicsTransform*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QGraphicsTransform11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsTransform*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QGraphicsTransform11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsTransform*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QGraphicsTransform2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsTransform::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QGraphicsTransform6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsTransform::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:60
// [-2] void QGraphicsTransform(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QGraphicsTransformC2EP7QObject(QObject * parent) {
  return  new MyQGraphicsTransform(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:61
// [-2] void ~QGraphicsTransform()
extern "C" Q_DECL_EXPORT
void C_ZN18QGraphicsTransformD2Ev(void *this_) {
  delete (QGraphicsTransform*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:63
// [-2] void applyTo(QMatrix4x4 *)
extern "C" Q_DECL_EXPORT
void C_ZNK18QGraphicsTransform7applyToEP10QMatrix4x4(void *this_, QMatrix4x4 * matrix) {
  ((QGraphicsTransform*)this_)->applyTo(matrix);
}

//  main block end
