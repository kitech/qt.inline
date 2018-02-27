//  header block begin
// /usr/include/qt/QtCore/qsemaphore.h
#ifndef protected
#define protected public
#endif
#include <qsemaphore.h>
#include <QtCore>
#include "callback_inherit.h"

// QSemaphoreReleaser is pure virtual: false
// QSemaphoreReleaser has virtual projected: false
//  header block end

//  main block begin

class MyQSemaphoreReleaser : public QSemaphoreReleaser {
public:
  virtual ~MyQSemaphoreReleaser() {}
// void QSemaphoreReleaser()
MyQSemaphoreReleaser() : QSemaphoreReleaser() {}
// void QSemaphoreReleaser(class QSemaphore &, int)
MyQSemaphoreReleaser(QSemaphore & sem, int n) : QSemaphoreReleaser(sem, n) {}
// void QSemaphoreReleaser(class QSemaphore *, int)
MyQSemaphoreReleaser(QSemaphore * sem, int n) : QSemaphoreReleaser(sem, n) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:75
// [-2] void QSemaphoreReleaser()
extern "C"
void* C_ZN18QSemaphoreReleaserC2Ev() {
  return  new QSemaphoreReleaser();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:76
// [-2] void QSemaphoreReleaser(class QSemaphore &, int)
extern "C"
void* C_ZN18QSemaphoreReleaserC2ER10QSemaphorei(QSemaphore* sem, int n) {
  return  new QSemaphoreReleaser(*sem, n);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:78
// [-2] void QSemaphoreReleaser(class QSemaphore *, int)
extern "C"
void* C_ZN18QSemaphoreReleaserC2EP10QSemaphorei(QSemaphore * sem, int n) {
  return  new QSemaphoreReleaser(sem, n);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:86
// [-2] void ~QSemaphoreReleaser()
extern "C"
void C_ZN18QSemaphoreReleaserD2Ev(void *this_) {
  delete (QSemaphoreReleaser*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:92
// [-2] void swap(class QSemaphoreReleaser &)
extern "C"
void C_ZN18QSemaphoreReleaser4swapERS_(void *this_, QSemaphoreReleaser* other) {
  ((QSemaphoreReleaser*)this_)->swap(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:98
// [8] QSemaphore * semaphore()
extern "C"
void* C_ZNK18QSemaphoreReleaser9semaphoreEv(void *this_) {
  return (void*)((QSemaphoreReleaser*)this_)->semaphore();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:101
// [8] QSemaphore * cancel()
extern "C"
void* C_ZN18QSemaphoreReleaser6cancelEv(void *this_) {
  return (void*)((QSemaphoreReleaser*)this_)->cancel();
}

//  main block end
