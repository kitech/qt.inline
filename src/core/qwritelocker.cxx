//  header block begin
// /usr/include/qt/QtCore/qreadwritelock.h
#include <qreadwritelock.h>
#include <QtCore>

// QWriteLocker is pure virtual: false
//  header block end

//  main block begin

class MyQWriteLocker : public QWriteLocker {
public:
MyQWriteLocker(QReadWriteLock * readWriteLock) : QWriteLocker(readWriteLock) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:131
// [-2] void QWriteLocker(class QReadWriteLock *)
extern "C"
void* C_ZN12QWriteLockerC1EP14QReadWriteLock(QReadWriteLock * readWriteLock) {
  (MyQWriteLocker*)(0);
  return  new MyQWriteLocker(readWriteLock);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:133
// [-2] void ~QWriteLocker()
extern "C"
void C_ZN12QWriteLockerD1Ev(void *this_) {
  delete (QWriteLocker*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:136
// [-2] void unlock()
extern "C"
void C_ZN12QWriteLocker6unlockEv(void *this_) {
  ((QWriteLocker*)this_)->unlock();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:146
// [-2] void relock()
extern "C"
void C_ZN12QWriteLocker6relockEv(void *this_) {
  ((QWriteLocker*)this_)->relock();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:156
// [8] QReadWriteLock * readWriteLock()
extern "C"
void* C_ZNK12QWriteLocker13readWriteLockEv(void *this_) {
  return (void*)((QWriteLocker*)this_)->readWriteLock();
}
//  main block end
