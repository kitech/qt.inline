//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qpauseanimation.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpauseanimation.h>
#include <QtCore>
#include "callback_inherit.h"

// QPauseAnimation is pure virtual: false
// QPauseAnimation has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQPauseAnimation_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPauseAnimation_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPauseAnimation_t qt_meta_stringdata_MyQPauseAnimation = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQPauseAnimation"
  },
  "MyQPauseAnimation"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPauseAnimation[] = {
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
class Q_DECL_EXPORT MyQPauseAnimation : public QPauseAnimation {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QPauseAnimation::staticMetaObject,
  qt_meta_stringdata_MyQPauseAnimation.data,
  qt_meta_data_MyQPauseAnimation,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQPauseAnimation.stringdata0))
      return static_cast<void*>(this);
  return QPauseAnimation::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QPauseAnimation::qt_metacall(_c, _id, _a);
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
  virtual ~MyQPauseAnimation() {}
// void QPauseAnimation(QObject *)
MyQPauseAnimation(QObject * parent) : QPauseAnimation(parent) {}
// void QPauseAnimation(int, QObject *)
MyQPauseAnimation(int msecs, QObject * parent) : QPauseAnimation(msecs, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QPauseAnimation::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateCurrentTime(int)
  virtual void updateCurrentTime(int arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateCurrentTime", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QPauseAnimation::updateCurrentTime(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QPauseAnimation_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQPauseAnimation* qo = (MyQPauseAnimation*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:65
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QPauseAnimation5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QPauseAnimation*)this_)->QPauseAnimation::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:66
// [-2] void updateCurrentTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QPauseAnimation17updateCurrentTimeEi(void *this_, int arg0) {
  ((QPauseAnimation*)this_)->QPauseAnimation::updateCurrentTime(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QPauseAnimation10metaObjectEv(void *this_) {
  return (void*)((QPauseAnimation*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QPauseAnimation11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QPauseAnimation*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QPauseAnimation11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QPauseAnimation*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QPauseAnimation2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPauseAnimation::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QPauseAnimation6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPauseAnimation::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:57
// [-2] void QPauseAnimation(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QPauseAnimationC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQPauseAnimation*)(0);
  return  new MyQPauseAnimation(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:58
// [-2] void QPauseAnimation(int, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QPauseAnimationC2EiP7QObject(int msecs, QObject * parent) {
  auto _nilp = (MyQPauseAnimation*)(0);
  return  new MyQPauseAnimation(msecs, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:59
// [-2] void ~QPauseAnimation()
extern "C" Q_DECL_EXPORT
void C_ZN15QPauseAnimationD2Ev(void *this_) {
  delete (QPauseAnimation*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:61
// [4] int duration()
extern "C" Q_DECL_EXPORT
int C_ZNK15QPauseAnimation8durationEv(void *this_) {
  return (int)((QPauseAnimation*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpauseanimation.h:62
// [-2] void setDuration(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QPauseAnimation11setDurationEi(void *this_, int msecs) {
  ((QPauseAnimation*)this_)->setDuration(msecs);
}

//  main block end
