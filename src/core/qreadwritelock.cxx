//  header block begin
// /usr/include/qt/QtCore/qreadwritelock.h
#include <qreadwritelock.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qreadwritelock.h:57
// void QReadWriteLock(enum QReadWriteLock::RecursionMode)
extern "C"
void* C_ZN14QReadWriteLockC1ENS_13RecursionModeE(QReadWriteLock::RecursionMode recursionMode) {
  return new QReadWriteLock(recursionMode);
}
// /usr/include/qt/QtCore/qreadwritelock.h:58
// void ~QReadWriteLock()
extern "C"
void C_ZN14QReadWriteLockD1Ev(void *this_) {
  delete (QReadWriteLock*)(this_);
}
// /usr/include/qt/QtCore/qreadwritelock.h:60
// void lockForRead()
extern "C"
void C_ZN14QReadWriteLock11lockForReadEv(void *this_) {
  ((QReadWriteLock*)this_)->lockForRead();
}
// /usr/include/qt/QtCore/qreadwritelock.h:61
// bool tryLockForRead()
extern "C"
void C_ZN14QReadWriteLock14tryLockForReadEv(void *this_) {
  /*return*/ ((QReadWriteLock*)this_)->tryLockForRead();
}
// /usr/include/qt/QtCore/qreadwritelock.h:62
// bool tryLockForRead(int)
extern "C"
void C_ZN14QReadWriteLock14tryLockForReadEi(void *this_, int timeout) {
  /*return*/ ((QReadWriteLock*)this_)->tryLockForRead(timeout);
}
// /usr/include/qt/QtCore/qreadwritelock.h:64
// void lockForWrite()
extern "C"
void C_ZN14QReadWriteLock12lockForWriteEv(void *this_) {
  ((QReadWriteLock*)this_)->lockForWrite();
}
// /usr/include/qt/QtCore/qreadwritelock.h:65
// bool tryLockForWrite()
extern "C"
void C_ZN14QReadWriteLock15tryLockForWriteEv(void *this_) {
  /*return*/ ((QReadWriteLock*)this_)->tryLockForWrite();
}
// /usr/include/qt/QtCore/qreadwritelock.h:66
// bool tryLockForWrite(int)
extern "C"
void C_ZN14QReadWriteLock15tryLockForWriteEi(void *this_, int timeout) {
  /*return*/ ((QReadWriteLock*)this_)->tryLockForWrite(timeout);
}
// /usr/include/qt/QtCore/qreadwritelock.h:68
// void unlock()
extern "C"
void C_ZN14QReadWriteLock6unlockEv(void *this_) {
  ((QReadWriteLock*)this_)->unlock();
}
//  main block end
