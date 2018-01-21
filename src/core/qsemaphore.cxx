//  header block begin
// /usr/include/qt/QtCore/qsemaphore.h
#include <qsemaphore.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qsemaphore.h:55
// void QSemaphore(int)
extern "C"
void* C_ZN10QSemaphoreC1Ei(int n) {
  return new QSemaphore(n);
}
// /usr/include/qt/QtCore/qsemaphore.h:56
// void ~QSemaphore()
extern "C"
void C_ZN10QSemaphoreD1Ev(void *this_) {
  delete (QSemaphore*)(this_);
}
// /usr/include/qt/QtCore/qsemaphore.h:58
// void acquire(int)
extern "C"
void C_ZN10QSemaphore7acquireEi(void *this_, int n) {
  ((QSemaphore*)this_)->acquire(n);
}
// /usr/include/qt/QtCore/qsemaphore.h:59
// bool tryAcquire(int)
extern "C"
void C_ZN10QSemaphore10tryAcquireEi(void *this_, int n) {
  /*return*/ ((QSemaphore*)this_)->tryAcquire(n);
}
// /usr/include/qt/QtCore/qsemaphore.h:60
// bool tryAcquire(int, int)
extern "C"
void C_ZN10QSemaphore10tryAcquireEii(void *this_, int n, int timeout) {
  /*return*/ ((QSemaphore*)this_)->tryAcquire(n, timeout);
}
// /usr/include/qt/QtCore/qsemaphore.h:62
// void release(int)
extern "C"
void C_ZN10QSemaphore7releaseEi(void *this_, int n) {
  ((QSemaphore*)this_)->release(n);
}
// /usr/include/qt/QtCore/qsemaphore.h:64
// int available()
extern "C"
void C_ZNK10QSemaphore9availableEv(void *this_) {
  /*return*/ ((QSemaphore*)this_)->available();
}
//  main block end
