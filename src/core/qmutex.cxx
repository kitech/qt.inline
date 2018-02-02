//  header block begin
// /usr/include/qt/QtCore/qmutex.h
#include <qmutex.h>
#include <QtCore>
#include "callback_inherit.h"

// QMutex is pure virtual: false
// QMutex has virtual projected: false
//  header block end

//  main block begin

class MyQMutex : public QMutex {
public:
  virtual ~MyQMutex() {}
// void QMutex(enum QMutex::RecursionMode)
MyQMutex(QMutex::RecursionMode mode) : QMutex(mode) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:130
// [-2] void QMutex(enum QMutex::RecursionMode)
extern "C"
void* C_ZN6QMutexC2ENS_13RecursionModeE(QMutex::RecursionMode mode) {
  return  new QMutex(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:131
// [-2] void ~QMutex()
extern "C"
void C_ZN6QMutexD2Ev(void *this_) {
  delete (QMutex*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:134
// [-2] void lock()
extern "C"
void C_ZN6QMutex4lockEv(void *this_) {
  ((QMutex*)this_)->lock();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:135
// [1] bool tryLock(int)
extern "C"
bool C_ZN6QMutex7tryLockEi(void *this_, int timeout) {
  return (bool)((QMutex*)this_)->tryLock(timeout);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:137
// [-2] void unlock()
extern "C"
void C_ZN6QMutex6unlockEv(void *this_) {
  ((QMutex*)this_)->unlock();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:140
// [1] bool try_lock()
extern "C"
bool C_ZN6QMutex8try_lockEv(void *this_) {
  return (bool)((QMutex*)this_)->try_lock();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:161
// [1] bool isRecursive()
extern "C"
bool C_ZNK6QMutex11isRecursiveEv(void *this_) {
  return (bool)((QMutex*)this_)->isRecursive();
}
//  main block end
