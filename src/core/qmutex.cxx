// /usr/include/qt/QtCore/qmutex.h
#include <qmutex.h>
#include <QtCore>

// inline
// /usr/include/qt/QtCore/qmutex.h:130
// void QMutexLocker(class QBasicMutex *)
extern "C"
void* C_ZN12QMutexLockerC1EP11QBasicMutex(QBasicMutex * m) {
  return new QMutexLocker(m);
}
// inline
// /usr/include/qt/QtCore/qmutex.h:141
// void ~QMutexLocker()
extern "C"
void C_ZN12QMutexLockerD1Ev(void *this_) {
  delete (QMutexLocker*)(this_);
}
// inline
// /usr/include/qt/QtCore/qmutex.h:143
// void unlock()
extern "C"
void C_ZN12QMutexLocker6unlockEv(void *this_) {
  ((QMutexLocker*)this_)->unlock();
}
// inline
// /usr/include/qt/QtCore/qmutex.h:151
// void relock()
extern "C"
void C_ZN12QMutexLocker6relockEv(void *this_) {
  ((QMutexLocker*)this_)->relock();
}
// inline
// /usr/include/qt/QtCore/qmutex.h:166
// QMutex * mutex()
extern "C"
void C_ZNK12QMutexLocker5mutexEv(void *this_) {
  /*return*/ ((QMutexLocker*)this_)->mutex();
}