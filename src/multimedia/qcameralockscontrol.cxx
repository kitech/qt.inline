//  header block begin
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameralockscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraLocksControl is pure virtual: true
// QCameraLocksControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQCameraLocksControl_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraLocksControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraLocksControl_t qt_meta_stringdata_MyQCameraLocksControl = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQCameraLocksControl"
  },
  "MyQCameraLocksControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraLocksControl[] = {
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
class Q_DECL_EXPORT MyQCameraLocksControl : public QCameraLocksControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCameraLocksControl::staticMetaObject,
  qt_meta_stringdata_MyQCameraLocksControl.data,
  qt_meta_data_MyQCameraLocksControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCameraLocksControl.stringdata0))
      return static_cast<void*>(this);
  return QCameraLocksControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCameraLocksControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCameraLocksControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QCamera::LockTypes supportedLocks()
  virtual QCamera::LockTypes supportedLocks() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedLocks", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCamera::LockTypes)(int)(irv);
      // Elaborated Record QFlags<QCamera::LockType>
    } else {
    return (QCamera::LockTypes){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QCamera::LockStatus lockStatus(QCamera::LockType)
  virtual QCamera::LockStatus lockStatus(QCamera::LockType lock) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"lockStatus", &handled, 1, (uint64_t)lock, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCamera::LockStatus)(int)(irv);
      // Elaborated Enum QCamera::LockStatus
    } else {
    return (QCamera::LockStatus){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void searchAndLock(QCamera::LockTypes)
  virtual void searchAndLock(QFlags<QCamera::LockType> locks)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"searchAndLock", &handled, 1, (uint64_t)locks, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraLocksControl::searchAndLock(locks);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void unlock(QCamera::LockTypes)
  virtual void unlock(QFlags<QCamera::LockType> locks)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"unlock", &handled, 1, (uint64_t)locks, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraLocksControl::unlock(locks);
  }
  }

};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:59
// [4] QCamera::LockTypes supportedLocks()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:61
// [4] QCamera::LockStatus lockStatus(QCamera::LockType)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:63
// [-2] void searchAndLock(QCamera::LockTypes)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:64
// [-2] void unlock(QCamera::LockTypes)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraLocksControl10metaObjectEv(void *this_) {
  return (void*)((QCameraLocksControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraLocksControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraLocksControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QCameraLocksControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraLocksControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraLocksControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraLocksControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraLocksControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraLocksControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:57
// [-2] void ~QCameraLocksControl()
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraLocksControlD2Ev(void *this_) {
  delete (QCameraLocksControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:59
// [4] QCamera::LockTypes supportedLocks()
extern "C" Q_DECL_EXPORT
QCamera::LockTypes C_ZNK19QCameraLocksControl14supportedLocksEv(void *this_) {
  return (QCamera::LockTypes)((QCameraLocksControl*)this_)->supportedLocks();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:61
// [4] QCamera::LockStatus lockStatus(QCamera::LockType)
extern "C" Q_DECL_EXPORT
QCamera::LockStatus C_ZNK19QCameraLocksControl10lockStatusEN7QCamera8LockTypeE(void *this_, QCamera::LockType lock) {
  return (QCamera::LockStatus)((QCameraLocksControl*)this_)->lockStatus(lock);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:63
// [-2] void searchAndLock(QCamera::LockTypes)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraLocksControl13searchAndLockE6QFlagsIN7QCamera8LockTypeEE(void *this_, QFlags<QCamera::LockType> locks) {
  ((QCameraLocksControl*)this_)->searchAndLock(locks);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:64
// [-2] void unlock(QCamera::LockTypes)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraLocksControl6unlockE6QFlagsIN7QCamera8LockTypeEE(void *this_, QFlags<QCamera::LockType> locks) {
  ((QCameraLocksControl*)this_)->unlock(locks);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:67
// [-2] void lockStatusChanged(QCamera::LockType, QCamera::LockStatus, QCamera::LockChangeReason)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraLocksControl17lockStatusChangedEN7QCamera8LockTypeENS0_10LockStatusENS0_16LockChangeReasonE(void *this_, QCamera::LockType type_, QCamera::LockStatus status, QCamera::LockChangeReason reason) {
  ((QCameraLocksControl*)this_)->lockStatusChanged(type_, status, reason);
}

//  main block end
