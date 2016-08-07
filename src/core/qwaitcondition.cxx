// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qwaitcondition.h
// dst-file: /src/core/qwaitcondition.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qwaitcondition.h>


// <= header block end

// main block begin =>
void __keep_qwaitcondition_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QWaitCondition_Class_Size()
{
  return sizeof(QWaitCondition);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qwaitcondition.h', line 63, column 10>
//   // proto:  bool QWaitCondition::wait(QReadWriteLock * lockedReadWriteLock, unsigned long time);
// _ZN14QWaitCondition4waitEP14QReadWriteLockm wait(class QReadWriteLock *, unsigned long)
extern "C"
bool
C_ZN14QWaitCondition4waitEP14QReadWriteLockm(void *qthis,
QReadWriteLock * arg1,
unsigned long arg2) {
  auto ret =
  ((QWaitCondition*)qthis)->wait(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qwaitcondition.h', line 62, column 10>
//   // proto:  bool QWaitCondition::wait(QMutex * lockedMutex, unsigned long time);
// _ZN14QWaitCondition4waitEP6QMutexm wait(class QMutex *, unsigned long)
extern "C"
bool
C_ZN14QWaitCondition4waitEP6QMutexm(void *qthis,
QMutex * arg1,
unsigned long arg2) {
  auto ret =
  ((QWaitCondition*)qthis)->wait(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qwaitcondition.h', line 66, column 10>
//   // proto:  void QWaitCondition::wakeAll();
// _ZN14QWaitCondition7wakeAllEv wakeAll()
extern "C"
void
C_ZN14QWaitCondition7wakeAllEv(void *qthis) {
  ((QWaitCondition*)qthis)->wakeAll();
}
// <SourceLocation file '/usr/include/qt/QtCore/qwaitcondition.h', line 65, column 10>
//   // proto:  void QWaitCondition::wakeOne();
// _ZN14QWaitCondition7wakeOneEv wakeOne()
extern "C"
void
C_ZN14QWaitCondition7wakeOneEv(void *qthis) {
  ((QWaitCondition*)qthis)->wakeOne();
}
//   // proto:  void QWaitCondition::~QWaitCondition();
extern "C"
void C_ZN14QWaitConditionD2Ev(void *qthis) {
  delete (QWaitCondition*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qwaitcondition.h', line 59, column 5>
//   // proto:  void QWaitCondition::QWaitCondition();
extern "C"
QWaitCondition*
C_ZN14QWaitConditionC2Ev() {
  auto ret = new QWaitCondition();
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

