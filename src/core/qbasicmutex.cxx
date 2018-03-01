//  header block begin
// /usr/include/qt/QtCore/qmutex.h
#ifndef protected
#define protected public
#endif
#include <qmutex.h>
#include <QtCore>
#include "callback_inherit.h"

// QBasicMutex is pure virtual: false
// QBasicMutex has virtual projected: false
//  header block end

//  main block begin

class MyQBasicMutex : public QBasicMutex {
public:
  virtual ~MyQBasicMutex() {}
// void QBasicMutex()
MyQBasicMutex() : QBasicMutex() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:71
// [-2] void QBasicMutex()
extern "C" Q_DECL_EXPORT
void* C_ZN11QBasicMutexC2Ev() {
  return  new QBasicMutex();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:77
// [-2] void lock()
extern "C" Q_DECL_EXPORT
void C_ZN11QBasicMutex4lockEv(void *this_) {
  ((QBasicMutex*)this_)->lock();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:83
// [-2] void unlock()
extern "C" Q_DECL_EXPORT
void C_ZN11QBasicMutex6unlockEv(void *this_) {
  ((QBasicMutex*)this_)->unlock();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:89
// [1] bool tryLock()
extern "C" Q_DECL_EXPORT
bool C_ZN11QBasicMutex7tryLockEv(void *this_) {
  return (bool)((QBasicMutex*)this_)->tryLock();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:94
// [1] bool try_lock()
extern "C" Q_DECL_EXPORT
bool C_ZN11QBasicMutex8try_lockEv(void *this_) {
  return (bool)((QBasicMutex*)this_)->try_lock();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:96
// [1] bool isRecursive()
extern "C" Q_DECL_EXPORT
bool C_ZN11QBasicMutex11isRecursiveEv(void *this_) {
  return (bool)((QBasicMutex*)this_)->isRecursive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:97
// [1] bool isRecursive()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QBasicMutex11isRecursiveEv(void *this_) {
  return (bool)((QBasicMutex*)this_)->isRecursive();
}


extern "C" Q_DECL_EXPORT
void C_ZN11QBasicMutexD2Ev(void *this_) {
  delete (QBasicMutex*)(this_);
}
//  main block end
