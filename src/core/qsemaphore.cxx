// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qsemaphore.h
// dst-file: /src/core/qsemaphore.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsemaphore.h>


// <= header block end

// main block begin =>
void __keep_qsemaphore_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSemaphore_Class_Size()
{
  return sizeof(QSemaphore);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qsemaphore.h', line 58, column 10>
//   // proto:  void QSemaphore::acquire(int n);
// _ZN10QSemaphore7acquireEi acquire(int)
extern "C"
void
C_ZN10QSemaphore7acquireEi(void *qthis,
int arg1) {
  ((QSemaphore*)qthis)->acquire(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsemaphore.h', line 62, column 10>
//   // proto:  void QSemaphore::release(int n);
// _ZN10QSemaphore7releaseEi release(int)
extern "C"
void
C_ZN10QSemaphore7releaseEi(void *qthis,
int arg1) {
  ((QSemaphore*)qthis)->release(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsemaphore.h', line 64, column 9>
//   // proto:  int QSemaphore::available();
// _ZNK10QSemaphore9availableEv available()
extern "C"
int
C_ZNK10QSemaphore9availableEv(void *qthis) {
  auto ret =
  ((QSemaphore*)qthis)->available();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qsemaphore.h', line 60, column 10>
//   // proto:  bool QSemaphore::tryAcquire(int n, int timeout);
// _ZN10QSemaphore10tryAcquireEii tryAcquire(int, int)
extern "C"
bool
C_ZN10QSemaphore10tryAcquireEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QSemaphore*)qthis)->tryAcquire(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsemaphore.h', line 59, column 10>
//   // proto:  bool QSemaphore::tryAcquire(int n);
// _ZN10QSemaphore10tryAcquireEi tryAcquire(int)
extern "C"
bool
C_ZN10QSemaphore10tryAcquireEi(void *qthis,
int arg1) {
  auto ret =
  ((QSemaphore*)qthis)->tryAcquire(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsemaphore.h', line 55, column 14>
//   // proto:  void QSemaphore::QSemaphore(int n);
extern "C"
QSemaphore*
C_ZN10QSemaphoreC2Ei(int arg1) {
  auto ret = new QSemaphore(arg1);
  return ret;
}
//   // proto:  void QSemaphore::~QSemaphore();
extern "C"
void C_ZN10QSemaphoreD2Ev(void *qthis) {
  delete (QSemaphore*)qthis;
}
// <= ext block end

// body block begin =>
// <= body block end

