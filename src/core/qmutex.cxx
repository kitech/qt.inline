// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qmutex.h
// dst-file: /src/core/qmutex.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmutex.h>


// <= header block end

// main block begin =>
void __keep_qmutex_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 121, column 21>
//   // proto:  void QMutexLocker::QMutexLocker(QBasicMutex * m);
if (true) {
  auto f = [](QBasicMutex * arg1) {
    new QMutexLocker(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 157, column 20>
//   // proto:  QMutex * QMutexLocker::mutex();
if (true) {
  auto f = [](QMutexLocker flythis) {
    ((QMutexLocker*)0)->mutex();
    flythis.mutex();
  };
  if (f == nullptr){}
}
// _ZNK12QMutexLocker5mutexEv mutex()
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 142, column 17>
//   // proto:  void QMutexLocker::relock();
if (true) {
  auto f = [](QMutexLocker flythis) {
    ((QMutexLocker*)0)->relock();
    flythis.relock();
  };
  if (f == nullptr){}
}
// _ZN12QMutexLocker6relockEv relock()
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 134, column 17>
//   // proto:  void QMutexLocker::unlock();
if (true) {
  auto f = [](QMutexLocker flythis) {
    ((QMutexLocker*)0)->unlock();
    flythis.unlock();
  };
  if (f == nullptr){}
}
// _ZN12QMutexLocker6unlockEv unlock()
//   // proto:  void QMutexLocker::~QMutexLocker();
if (true) {
  delete ((QMutexLocker*)0);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 57, column 17>
//   // proto:  void QBasicMutex::lock();
if (true) {
  auto f = [](QBasicMutex flythis) {
    ((QBasicMutex*)0)->lock();
    flythis.lock();
  };
  if (f == nullptr){}
}
// _ZN11QBasicMutex4lockEv lock()
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 68, column 10>
//   // proto:  bool QBasicMutex::tryLock();
if (true) {
  auto f = [](QBasicMutex flythis) {
    ((QBasicMutex*)0)->tryLock();
    flythis.tryLock();
  };
  if (f == nullptr){}
}
// _ZN11QBasicMutex7tryLockEv tryLock()
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 62, column 17>
//   // proto:  void QBasicMutex::unlock();
if (true) {
  auto f = [](QBasicMutex flythis) {
    ((QBasicMutex*)0)->unlock();
    flythis.unlock();
  };
  if (f == nullptr){}
}
// _ZN11QBasicMutex6unlockEv unlock()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMutexLocker_Class_Size()
{
  return sizeof(QMutexLocker);
}

extern "C"
int QBasicMutex_Class_Size()
{
  return sizeof(QBasicMutex);
}

extern "C"
int QMutex_Class_Size()
{
  return sizeof(QMutex);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 121, column 21>
//   // proto:  void QMutexLocker::QMutexLocker(QBasicMutex * m);
extern "C"
QMutexLocker*
C_ZN12QMutexLockerC2EP11QBasicMutex(QBasicMutex * arg1) {
  auto ret = new QMutexLocker(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 157, column 20>
//   // proto:  QMutex * QMutexLocker::mutex();
// _ZNK12QMutexLocker5mutexEv mutex()
extern "C"
void*
C_ZNK12QMutexLocker5mutexEv(void *qthis) {
  auto ret =
  ((QMutexLocker*)qthis)->mutex();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 142, column 17>
//   // proto:  void QMutexLocker::relock();
// _ZN12QMutexLocker6relockEv relock()
extern "C"
void
C_ZN12QMutexLocker6relockEv(void *qthis) {
  ((QMutexLocker*)qthis)->relock();
}
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 134, column 17>
//   // proto:  void QMutexLocker::unlock();
// _ZN12QMutexLocker6unlockEv unlock()
extern "C"
void
C_ZN12QMutexLocker6unlockEv(void *qthis) {
  ((QMutexLocker*)qthis)->unlock();
}
//   // proto:  void QMutexLocker::~QMutexLocker();
extern "C"
void C_ZN12QMutexLockerD2Ev(void *qthis) {
  delete (QMutexLocker*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 57, column 17>
//   // proto:  void QBasicMutex::lock();
// _ZN11QBasicMutex4lockEv lock()
extern "C"
void
C_ZN11QBasicMutex4lockEv(void *qthis) {
  ((QBasicMutex*)qthis)->lock();
}
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 68, column 10>
//   // proto:  bool QBasicMutex::tryLock();
// _ZN11QBasicMutex7tryLockEv tryLock()
extern "C"
bool
C_ZN11QBasicMutex7tryLockEv(void *qthis) {
  auto ret =
  ((QBasicMutex*)qthis)->tryLock();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 72, column 10>
//   // proto:  bool QBasicMutex::isRecursive();
// _ZN11QBasicMutex11isRecursiveEv isRecursive()
extern "C"
bool
C_ZN11QBasicMutex11isRecursiveEv(void *qthis) {
  auto ret =
  ((QBasicMutex*)qthis)->isRecursive();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 62, column 17>
//   // proto:  void QBasicMutex::unlock();
// _ZN11QBasicMutex6unlockEv unlock()
extern "C"
void
C_ZN11QBasicMutex6unlockEv(void *qthis) {
  ((QBasicMutex*)qthis)->unlock();
}
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 104, column 14>
//   // proto:  void QMutex::QMutex(QMutex::RecursionMode mode);
extern "C"
QMutex*
C_ZN6QMutexC2ENS_13RecursionModeE(QMutex::RecursionMode arg1) {
  auto ret = new QMutex(arg1);
  return ret;
}
//   // proto:  void QMutex::~QMutex();
extern "C"
void C_ZN6QMutexD2Ev(void *qthis) {
  delete (QMutex*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 108, column 10>
//   // proto:  bool QMutex::tryLock(int timeout);
// _ZN6QMutex7tryLockEi tryLock(int)
extern "C"
bool
C_ZN6QMutex7tryLockEi(void *qthis,
int arg1) {
  auto ret =
  ((QMutex*)qthis)->tryLock(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 107, column 10>
//   // proto:  void QMutex::lock();
// _ZN6QMutex4lockEv lock()
extern "C"
void
C_ZN6QMutex4lockEv(void *qthis) {
  ((QMutex*)qthis)->lock();
}
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 109, column 10>
//   // proto:  void QMutex::unlock();
// _ZN6QMutex6unlockEv unlock()
extern "C"
void
C_ZN6QMutex6unlockEv(void *qthis) {
  ((QMutex*)qthis)->unlock();
}
// <= ext block end

// body block begin =>
// <= body block end

