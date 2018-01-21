//  header block begin
// /usr/include/qt/QtCore/qmutex.h
#include <qmutex.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qmutex.h:63
// void lock()
extern "C"
void C_ZN11QBasicMutex4lockEv(void *this_) {
  ((QBasicMutex*)this_)->lock();
}
// inline
// /usr/include/qt/QtCore/qmutex.h:68
// void unlock()
extern "C"
void C_ZN11QBasicMutex6unlockEv(void *this_) {
  ((QBasicMutex*)this_)->unlock();
}
// inline
// /usr/include/qt/QtCore/qmutex.h:74
// bool tryLock()
extern "C"
void C_ZN11QBasicMutex7tryLockEv(void *this_) {
  /*return*/ ((QBasicMutex*)this_)->tryLock();
}
// /usr/include/qt/QtCore/qmutex.h:78
// bool isRecursive()
extern "C"
void C_ZN11QBasicMutex11isRecursiveEv(void *this_) {
  /*return*/ ((QBasicMutex*)this_)->isRecursive();
}
// /usr/include/qt/QtCore/qmutex.h:79
// bool isRecursive()
extern "C"
void C_ZNK11QBasicMutex11isRecursiveEv(void *this_) {
  /*return*/ ((QBasicMutex*)this_)->isRecursive();
}
//  main block end
