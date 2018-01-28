//  header block begin
// /usr/include/qt/QtCore/qsemaphore.h
#include <qsemaphore.h>
#include <QtCore>

// QSemaphore is pure virtual: false
//  header block end

//  main block begin

class MyQSemaphore : public QSemaphore {
public:
MyQSemaphore(int n) : QSemaphore(n) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:55
// [-2] void QSemaphore(int)
extern "C"
void* C_ZN10QSemaphoreC1Ei(int n) {
  (MyQSemaphore*)(0);
  return  new MyQSemaphore(n);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:56
// [-2] void ~QSemaphore()
extern "C"
void C_ZN10QSemaphoreD1Ev(void *this_) {
  delete (QSemaphore*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:58
// [-2] void acquire(int)
extern "C"
void C_ZN10QSemaphore7acquireEi(void *this_, int n) {
  ((QSemaphore*)this_)->acquire(n);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:59
// [1] bool tryAcquire(int)
extern "C"
bool C_ZN10QSemaphore10tryAcquireEi(void *this_, int n) {
  return (bool)((QSemaphore*)this_)->tryAcquire(n);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:60
// [1] bool tryAcquire(int, int)
extern "C"
bool C_ZN10QSemaphore10tryAcquireEii(void *this_, int n, int timeout) {
  return (bool)((QSemaphore*)this_)->tryAcquire(n, timeout);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:62
// [-2] void release(int)
extern "C"
void C_ZN10QSemaphore7releaseEi(void *this_, int n) {
  ((QSemaphore*)this_)->release(n);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:64
// [4] int available()
extern "C"
int C_ZNK10QSemaphore9availableEv(void *this_) {
  return (int)((QSemaphore*)this_)->available();
}
//  main block end
