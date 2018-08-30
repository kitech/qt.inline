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

// QGesture is pure virtual: false
// QGesture has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGesture_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGesture_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGesture_t qt_meta_stringdata_MyQGesture = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQGesture"
  },
  "MyQGesture"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGesture[] = {
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
class Q_DECL_EXPORT MyQGesture : public QGesture {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGesture::staticMetaObject,
  qt_meta_stringdata_MyQGesture.data,
  qt_meta_data_MyQGesture,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGesture.stringdata0))
      return static_cast<void*>(this);
  return QGesture::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGesture::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGesture() {}
// void QGesture(QObject *)
MyQGesture(QObject * parent) : QGesture(parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QGesture_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGesture* qo = (MyQGesture*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:63
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QGesture10metaObjectEv(void *this_) {
  return (void*)((QGesture*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:63
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QGesture11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGesture*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:63
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN8QGesture11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGesture*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:63
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QGesture2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGesture::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:63
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QGesture6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGesture::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:73
// [-2] void QGesture(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QGestureC2EP7QObject(QObject * parent) {
  return  new MyQGesture(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:74
// [-2] void ~QGesture()
extern "C" Q_DECL_EXPORT
void C_ZN8QGestureD2Ev(void *this_) {
  delete (QGesture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:76
// [4] Qt::GestureType gestureType()
extern "C" Q_DECL_EXPORT
Qt::GestureType C_ZNK8QGesture11gestureTypeEv(void *this_) {
  return (Qt::GestureType)((QGesture*)this_)->gestureType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:78
// [4] Qt::GestureState state()
extern "C" Q_DECL_EXPORT
Qt::GestureState C_ZNK8QGesture5stateEv(void *this_) {
  return (Qt::GestureState)((QGesture*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:80
// [16] QPointF hotSpot()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QGesture7hotSpotEv(void *this_) {
  auto rv = ((QGesture*)this_)->hotSpot();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:81
// [-2] void setHotSpot(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QGesture10setHotSpotERK7QPointF(void *this_, QPointF* value) {
  ((QGesture*)this_)->setHotSpot(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:82
// [1] bool hasHotSpot()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QGesture10hasHotSpotEv(void *this_) {
  return (bool)((QGesture*)this_)->hasHotSpot();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:83
// [-2] void unsetHotSpot()
extern "C" Q_DECL_EXPORT
void C_ZN8QGesture12unsetHotSpotEv(void *this_) {
  ((QGesture*)this_)->unsetHotSpot();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:90
// [-2] void setGestureCancelPolicy(QGesture::GestureCancelPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN8QGesture22setGestureCancelPolicyENS_19GestureCancelPolicyE(void *this_, QGesture::GestureCancelPolicy policy) {
  ((QGesture*)this_)->setGestureCancelPolicy(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:91
// [4] QGesture::GestureCancelPolicy gestureCancelPolicy()
extern "C" Q_DECL_EXPORT
QGesture::GestureCancelPolicy C_ZNK8QGesture19gestureCancelPolicyEv(void *this_) {
  return (QGesture::GestureCancelPolicy)((QGesture*)this_)->gestureCancelPolicy();
}

//  main block end
