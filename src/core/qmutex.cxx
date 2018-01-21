//  header block begin
// /usr/include/qt/QtCore/qmutex.h
#include <qmutex.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qmutex.h:112
// void QMutex(enum QMutex::RecursionMode)
extern "C"
void* C_ZN6QMutexC1ENS_13RecursionModeE(QMutex::RecursionMode mode) {
  return new QMutex(mode);
}
// /usr/include/qt/QtCore/qmutex.h:113
// void ~QMutex()
extern "C"
void C_ZN6QMutexD1Ev(void *this_) {
  delete (QMutex*)(this_);
}
// /usr/include/qt/QtCore/qmutex.h:115
// void lock()
extern "C"
void C_ZN6QMutex4lockEv(void *this_) {
  ((QMutex*)this_)->lock();
}
// /usr/include/qt/QtCore/qmutex.h:116
// bool tryLock(int)
extern "C"
void C_ZN6QMutex7tryLockEi(void *this_, int timeout) {
  /*return*/ ((QMutex*)this_)->tryLock(timeout);
}
// /usr/include/qt/QtCore/qmutex.h:117
// void unlock()
extern "C"
void C_ZN6QMutex6unlockEv(void *this_) {
  ((QMutex*)this_)->unlock();
}
// inline
// /usr/include/qt/QtCore/qmutex.h:119
// bool isRecursive()
extern "C"
void C_ZNK6QMutex11isRecursiveEv(void *this_) {
  /*return*/ ((QMutex*)this_)->isRecursive();
}
//  main block end
