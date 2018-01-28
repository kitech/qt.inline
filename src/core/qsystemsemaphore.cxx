//  header block begin
// /usr/include/qt/QtCore/qsystemsemaphore.h
#include <qsystemsemaphore.h>
#include <QtCore>

// QSystemSemaphore is pure virtual: false
//  header block end

//  main block begin

class MyQSystemSemaphore : public QSystemSemaphore {
public:
MyQSystemSemaphore(const QString & key, int initialValue, QSystemSemaphore::AccessMode mode) : QSystemSemaphore(key, initialValue, mode) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:74
// [-2] void QSystemSemaphore(const class QString &, int, enum QSystemSemaphore::AccessMode)
extern "C"
void* C_ZN16QSystemSemaphoreC1ERK7QStringiNS_10AccessModeE(const QString & key, int initialValue, QSystemSemaphore::AccessMode mode) {
  (MyQSystemSemaphore*)(0);
  return  new MyQSystemSemaphore(key, initialValue, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:75
// [-2] void ~QSystemSemaphore()
extern "C"
void C_ZN16QSystemSemaphoreD1Ev(void *this_) {
  delete (QSystemSemaphore*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:77
// [-2] void setKey(const class QString &, int, enum QSystemSemaphore::AccessMode)
extern "C"
void C_ZN16QSystemSemaphore6setKeyERK7QStringiNS_10AccessModeE(void *this_, const QString & key, int initialValue, QSystemSemaphore::AccessMode mode) {
  ((QSystemSemaphore*)this_)->setKey(key, initialValue, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:78
// [8] QString key()
extern "C"
void* C_ZNK16QSystemSemaphore3keyEv(void *this_) {
  auto rv = ((QSystemSemaphore*)this_)->key();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:80
// [1] bool acquire()
extern "C"
bool C_ZN16QSystemSemaphore7acquireEv(void *this_) {
  return (bool)((QSystemSemaphore*)this_)->acquire();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:81
// [1] bool release(int)
extern "C"
bool C_ZN16QSystemSemaphore7releaseEi(void *this_, int n) {
  return (bool)((QSystemSemaphore*)this_)->release(n);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:83
// [4] QSystemSemaphore::SystemSemaphoreError error()
extern "C"
QSystemSemaphore::SystemSemaphoreError C_ZNK16QSystemSemaphore5errorEv(void *this_) {
  return (QSystemSemaphore::SystemSemaphoreError)((QSystemSemaphore*)this_)->error();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:84
// [8] QString errorString()
extern "C"
void* C_ZNK16QSystemSemaphore11errorStringEv(void *this_) {
  auto rv = ((QSystemSemaphore*)this_)->errorString();
return new QString(rv);
}
//  main block end
