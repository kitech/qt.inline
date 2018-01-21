//  header block begin
// /usr/include/qt/QtCore/qreadwritelock.h
#include <qreadwritelock.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qreadwritelock.h:131
// void QWriteLocker(class QReadWriteLock *)
extern "C"
void* C_ZN12QWriteLockerC1EP14QReadWriteLock(QReadWriteLock * readWriteLock) {
  return new QWriteLocker(readWriteLock);
}
// inline
// /usr/include/qt/QtCore/qreadwritelock.h:133
// void ~QWriteLocker()
extern "C"
void C_ZN12QWriteLockerD1Ev(void *this_) {
  delete (QWriteLocker*)(this_);
}
// inline
// /usr/include/qt/QtCore/qreadwritelock.h:136
// void unlock()
extern "C"
void C_ZN12QWriteLocker6unlockEv(void *this_) {
  ((QWriteLocker*)this_)->unlock();
}
// inline
// /usr/include/qt/QtCore/qreadwritelock.h:146
// void relock()
extern "C"
void C_ZN12QWriteLocker6relockEv(void *this_) {
  ((QWriteLocker*)this_)->relock();
}
// inline
// /usr/include/qt/QtCore/qreadwritelock.h:156
// QReadWriteLock * readWriteLock()
extern "C"
void C_ZNK12QWriteLocker13readWriteLockEv(void *this_) {
  /*return*/ ((QWriteLocker*)this_)->readWriteLock();
}
//  main block end
