//  header block begin

// since 0x040600
// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTapGesture is pure virtual: false
// QTapGesture has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTapGesture_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTapGesture_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTapGesture_t qt_meta_stringdata_MyQTapGesture = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTapGesture"
  },
  "MyQTapGesture"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTapGesture[] = {
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
class Q_DECL_EXPORT MyQTapGesture : public QTapGesture {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTapGesture::staticMetaObject,
  qt_meta_stringdata_MyQTapGesture.data,
  qt_meta_data_MyQTapGesture,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTapGesture.stringdata0))
      return static_cast<void*>(this);
  return QTapGesture::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTapGesture::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTapGesture() {}
// void QTapGesture(QObject *)
MyQTapGesture(QObject * parent) : QTapGesture(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QTapGesture_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTapGesture* qo = (MyQTapGesture*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:236
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTapGesture10metaObjectEv(void *this_) {
  return (void*)((QTapGesture*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:236
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTapGesture11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTapGesture*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:236
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QTapGesture11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTapGesture*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:236
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTapGesture2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTapGesture::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:236
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTapGesture6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTapGesture::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:242
// [-2] void QTapGesture(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTapGestureC2EP7QObject(QObject * parent) {
  return  new MyQTapGesture(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:243
// [-2] void ~QTapGesture()
extern "C" Q_DECL_EXPORT
void C_ZN11QTapGestureD2Ev(void *this_) {
  delete (QTapGesture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:245
// [16] QPointF position()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTapGesture8positionEv(void *this_) {
  auto rv = ((QTapGesture*)this_)->position();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:246
// [-2] void setPosition(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTapGesture11setPositionERK7QPointF(void *this_, QPointF* pos) {
  ((QTapGesture*)this_)->setPosition(*pos);
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
