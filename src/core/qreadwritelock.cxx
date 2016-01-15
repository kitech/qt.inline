// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qreadwritelock.h
// dst-file: /src/core/qreadwritelock.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qreadwritelock.h>

extern "C" {

int QWriteLocker_Class_Size()
{
  return sizeof(QWriteLocker);
}

int QReadWriteLock_Class_Size()
{
  return sizeof(QReadWriteLock);
}

int QReadLocker_Class_Size()
{
  return sizeof(QReadLocker);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qreadwritelock_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 148, column 28>
//   // proto:  QReadWriteLock * QWriteLocker::readWriteLock();
if (false) {
  auto f = []() {
    ((QWriteLocker*)0)->readWriteLock();
  };
}
// _ZNK12QWriteLocker13readWriteLockEv readWriteLock()
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 123, column 12>
//   // proto:  void QWriteLocker::QWriteLocker(QReadWriteLock * readWriteLock);
if (false) {
  auto f = [](QReadWriteLock * arg1) {
    new QWriteLocker(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 128, column 17>
//   // proto:  void QWriteLocker::unlock();
if (false) {
  auto f = []() {
    ((QWriteLocker*)0)->unlock();
  };
}
// _ZN12QWriteLocker6unlockEv unlock()
//   // proto:  void QWriteLocker::~QWriteLocker();
if (false) {
  delete ((QWriteLocker*)0);
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 138, column 17>
//   // proto:  void QWriteLocker::relock();
if (false) {
  auto f = []() {
    ((QWriteLocker*)0)->relock();
  };
}
// _ZN12QWriteLocker6relockEv relock()
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 104, column 28>
//   // proto:  QReadWriteLock * QReadLocker::readWriteLock();
if (false) {
  auto f = []() {
    ((QReadLocker*)0)->readWriteLock();
  };
}
// _ZNK11QReadLocker13readWriteLockEv readWriteLock()
//   // proto:  void QReadLocker::~QReadLocker();
if (false) {
  delete ((QReadLocker*)0);
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 79, column 12>
//   // proto:  void QReadLocker::QReadLocker(QReadWriteLock * readWriteLock);
if (false) {
  auto f = [](QReadWriteLock * arg1) {
    new QReadLocker(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 94, column 17>
//   // proto:  void QReadLocker::relock();
if (false) {
  auto f = []() {
    ((QReadLocker*)0)->relock();
  };
}
// _ZN11QReadLocker6relockEv relock()
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 84, column 17>
//   // proto:  void QReadLocker::unlock();
if (false) {
  auto f = []() {
    ((QReadLocker*)0)->unlock();
  };
}
// _ZN11QReadLocker6unlockEv unlock()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

