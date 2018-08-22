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

class Q_DECL_EXPORT MyQCameraLocksControl : public QCameraLocksControl {
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
