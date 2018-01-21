//  header block begin
// /usr/include/qt/QtCore/qreadwritelock.h
#include <qreadwritelock.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qreadwritelock.h:87
// void QReadLocker(class QReadWriteLock *)
extern "C"
void* C_ZN11QReadLockerC1EP14QReadWriteLock(QReadWriteLock * readWriteLock) {
  return new QReadLocker(readWriteLock);
}
// inline
// /usr/include/qt/QtCore/qreadwritelock.h:89
// void ~QReadLocker()
extern "C"
void C_ZN11QReadLockerD1Ev(void *this_) {
  delete (QReadLocker*)(this_);
}
// inline
// /usr/include/qt/QtCore/qreadwritelock.h:92
// void unlock()
extern "C"
void C_ZN11QReadLocker6unlockEv(void *this_) {
  ((QReadLocker*)this_)->unlock();
}
// inline
// /usr/include/qt/QtCore/qreadwritelock.h:102
// void relock()
extern "C"
void C_ZN11QReadLocker6relockEv(void *this_) {
  ((QReadLocker*)this_)->relock();
}
// inline
// /usr/include/qt/QtCore/qreadwritelock.h:112
// QReadWriteLock * readWriteLock()
extern "C"
void C_ZNK11QReadLocker13readWriteLockEv(void *this_) {
  /*return*/ ((QReadLocker*)this_)->readWriteLock();
}
//  main block end
