// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qmutex.h
// dst-file: /src/core/qmutex.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qmutex.h>

extern "C" {

int QMutexLocker_Class_Size()
{
  return sizeof(QMutexLocker);
}

int QBasicMutex_Class_Size()
{
  return sizeof(QBasicMutex);
}

int QMutex_Class_Size()
{
  return sizeof(QMutex);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qmutex_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 121, column 21>
//   // proto:  void QMutexLocker::QMutexLocker(QBasicMutex * m);
if (false) {
  auto f = [](QBasicMutex * arg1) {
    new QMutexLocker(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 157, column 20>
//   // proto:  QMutex * QMutexLocker::mutex();
if (false) {
  auto f = []() {
    ((QMutexLocker*)0)->mutex();
  };
}
// _ZNK12QMutexLocker5mutexEv mutex()
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 142, column 17>
//   // proto:  void QMutexLocker::relock();
if (false) {
  auto f = []() {
    ((QMutexLocker*)0)->relock();
  };
}
// _ZN12QMutexLocker6relockEv relock()
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 134, column 17>
//   // proto:  void QMutexLocker::unlock();
if (false) {
  auto f = []() {
    ((QMutexLocker*)0)->unlock();
  };
}
// _ZN12QMutexLocker6unlockEv unlock()
//   // proto:  void QMutexLocker::~QMutexLocker();
if (false) {
  delete ((QMutexLocker*)0);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 57, column 17>
//   // proto:  void QBasicMutex::lock();
if (false) {
  auto f = []() {
    ((QBasicMutex*)0)->lock();
  };
}
// _ZN11QBasicMutex4lockEv lock()
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 68, column 10>
//   // proto:  bool QBasicMutex::tryLock();
if (false) {
  auto f = []() {
    ((QBasicMutex*)0)->tryLock();
  };
}
// _ZN11QBasicMutex7tryLockEv tryLock()
// <SourceLocation file '/usr/include/qt/QtCore/qmutex.h', line 62, column 17>
//   // proto:  void QBasicMutex::unlock();
if (false) {
  auto f = []() {
    ((QBasicMutex*)0)->unlock();
  };
}
// _ZN11QBasicMutex6unlockEv unlock()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

