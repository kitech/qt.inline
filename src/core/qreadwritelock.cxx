//  header block begin
// /usr/include/qt/QtCore/qreadwritelock.h
#include <qreadwritelock.h>
#include <QtCore>

// QReadWriteLock is pure virtual: false
//  header block end

//  main block begin

class MyQReadWriteLock : public QReadWriteLock {
public:
MyQReadWriteLock(QReadWriteLock::RecursionMode recursionMode) : QReadWriteLock(recursionMode) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:57
// [-2] void QReadWriteLock(enum QReadWriteLock::RecursionMode)
extern "C"
void* C_ZN14QReadWriteLockC1ENS_13RecursionModeE(QReadWriteLock::RecursionMode recursionMode) {
  (MyQReadWriteLock*)(0);
  return  new MyQReadWriteLock(recursionMode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:58
// [-2] void ~QReadWriteLock()
extern "C"
void C_ZN14QReadWriteLockD1Ev(void *this_) {
  delete (QReadWriteLock*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:60
// [-2] void lockForRead()
extern "C"
void C_ZN14QReadWriteLock11lockForReadEv(void *this_) {
  ((QReadWriteLock*)this_)->lockForRead();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:61
// [1] bool tryLockForRead()
extern "C"
bool C_ZN14QReadWriteLock14tryLockForReadEv(void *this_) {
  return (bool)((QReadWriteLock*)this_)->tryLockForRead();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:62
// [1] bool tryLockForRead(int)
extern "C"
bool C_ZN14QReadWriteLock14tryLockForReadEi(void *this_, int timeout) {
  return (bool)((QReadWriteLock*)this_)->tryLockForRead(timeout);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:64
// [-2] void lockForWrite()
extern "C"
void C_ZN14QReadWriteLock12lockForWriteEv(void *this_) {
  ((QReadWriteLock*)this_)->lockForWrite();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:65
// [1] bool tryLockForWrite()
extern "C"
bool C_ZN14QReadWriteLock15tryLockForWriteEv(void *this_) {
  return (bool)((QReadWriteLock*)this_)->tryLockForWrite();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:66
// [1] bool tryLockForWrite(int)
extern "C"
bool C_ZN14QReadWriteLock15tryLockForWriteEi(void *this_, int timeout) {
  return (bool)((QReadWriteLock*)this_)->tryLockForWrite(timeout);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:68
// [-2] void unlock()
extern "C"
void C_ZN14QReadWriteLock6unlockEv(void *this_) {
  ((QReadWriteLock*)this_)->unlock();
}
//  main block end
