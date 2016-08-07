// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qreadwritelock.h
// dst-file: /src/core/qreadwritelock.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qreadwritelock.h>


// <= header block end

// main block begin =>
void __keep_qreadwritelock_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 156, column 28>
//   // proto:  QReadWriteLock * QWriteLocker::readWriteLock();
if (true) {
  auto f = [](QWriteLocker flythis) {
    ((QWriteLocker*)0)->readWriteLock();
    flythis.readWriteLock();
  };
  if (f == nullptr){}
}
// _ZNK12QWriteLocker13readWriteLockEv readWriteLock()
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 131, column 12>
//   // proto:  void QWriteLocker::QWriteLocker(QReadWriteLock * readWriteLock);
if (true) {
  auto f = [](QReadWriteLock * arg1) {
    new QWriteLocker(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 136, column 17>
//   // proto:  void QWriteLocker::unlock();
if (true) {
  auto f = [](QWriteLocker flythis) {
    ((QWriteLocker*)0)->unlock();
    flythis.unlock();
  };
  if (f == nullptr){}
}
// _ZN12QWriteLocker6unlockEv unlock()
//   // proto:  void QWriteLocker::~QWriteLocker();
if (true) {
  delete ((QWriteLocker*)0);
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 146, column 17>
//   // proto:  void QWriteLocker::relock();
if (true) {
  auto f = [](QWriteLocker flythis) {
    ((QWriteLocker*)0)->relock();
    flythis.relock();
  };
  if (f == nullptr){}
}
// _ZN12QWriteLocker6relockEv relock()
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 112, column 28>
//   // proto:  QReadWriteLock * QReadLocker::readWriteLock();
if (true) {
  auto f = [](QReadLocker flythis) {
    ((QReadLocker*)0)->readWriteLock();
    flythis.readWriteLock();
  };
  if (f == nullptr){}
}
// _ZNK11QReadLocker13readWriteLockEv readWriteLock()
//   // proto:  void QReadLocker::~QReadLocker();
if (true) {
  delete ((QReadLocker*)0);
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 87, column 12>
//   // proto:  void QReadLocker::QReadLocker(QReadWriteLock * readWriteLock);
if (true) {
  auto f = [](QReadWriteLock * arg1) {
    new QReadLocker(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 102, column 17>
//   // proto:  void QReadLocker::relock();
if (true) {
  auto f = [](QReadLocker flythis) {
    ((QReadLocker*)0)->relock();
    flythis.relock();
  };
  if (f == nullptr){}
}
// _ZN11QReadLocker6relockEv relock()
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 92, column 17>
//   // proto:  void QReadLocker::unlock();
if (true) {
  auto f = [](QReadLocker flythis) {
    ((QReadLocker*)0)->unlock();
    flythis.unlock();
  };
  if (f == nullptr){}
}
// _ZN11QReadLocker6unlockEv unlock()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QWriteLocker_Class_Size()
{
  return sizeof(QWriteLocker);
}

extern "C"
int QReadWriteLock_Class_Size()
{
  return sizeof(QReadWriteLock);
}

extern "C"
int QReadLocker_Class_Size()
{
  return sizeof(QReadLocker);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 156, column 28>
//   // proto:  QReadWriteLock * QWriteLocker::readWriteLock();
// _ZNK12QWriteLocker13readWriteLockEv readWriteLock()
extern "C"
void*
C_ZNK12QWriteLocker13readWriteLockEv(void *qthis) {
  auto ret =
  ((QWriteLocker*)qthis)->readWriteLock();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 131, column 12>
//   // proto:  void QWriteLocker::QWriteLocker(QReadWriteLock * readWriteLock);
extern "C"
QWriteLocker*
C_ZN12QWriteLockerC2EP14QReadWriteLock(QReadWriteLock * arg1) {
  auto ret = new QWriteLocker(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 136, column 17>
//   // proto:  void QWriteLocker::unlock();
// _ZN12QWriteLocker6unlockEv unlock()
extern "C"
void
C_ZN12QWriteLocker6unlockEv(void *qthis) {
  ((QWriteLocker*)qthis)->unlock();
}
//   // proto:  void QWriteLocker::~QWriteLocker();
extern "C"
void C_ZN12QWriteLockerD2Ev(void *qthis) {
  delete (QWriteLocker*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 146, column 17>
//   // proto:  void QWriteLocker::relock();
// _ZN12QWriteLocker6relockEv relock()
extern "C"
void
C_ZN12QWriteLocker6relockEv(void *qthis) {
  ((QWriteLocker*)qthis)->relock();
}
//   // proto:  void QReadWriteLock::~QReadWriteLock();
extern "C"
void C_ZN14QReadWriteLockD2Ev(void *qthis) {
  delete (QReadWriteLock*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 57, column 14>
//   // proto:  void QReadWriteLock::QReadWriteLock(QReadWriteLock::RecursionMode recursionMode);
extern "C"
QReadWriteLock*
C_ZN14QReadWriteLockC2ENS_13RecursionModeE(QReadWriteLock::RecursionMode arg1) {
  auto ret = new QReadWriteLock(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 61, column 10>
//   // proto:  bool QReadWriteLock::tryLockForRead();
// _ZN14QReadWriteLock14tryLockForReadEv tryLockForRead()
extern "C"
bool
C_ZN14QReadWriteLock14tryLockForReadEv(void *qthis) {
  auto ret =
  ((QReadWriteLock*)qthis)->tryLockForRead();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 64, column 10>
//   // proto:  void QReadWriteLock::lockForWrite();
// _ZN14QReadWriteLock12lockForWriteEv lockForWrite()
extern "C"
void
C_ZN14QReadWriteLock12lockForWriteEv(void *qthis) {
  ((QReadWriteLock*)qthis)->lockForWrite();
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 65, column 10>
//   // proto:  bool QReadWriteLock::tryLockForWrite();
// _ZN14QReadWriteLock15tryLockForWriteEv tryLockForWrite()
extern "C"
bool
C_ZN14QReadWriteLock15tryLockForWriteEv(void *qthis) {
  auto ret =
  ((QReadWriteLock*)qthis)->tryLockForWrite();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 68, column 10>
//   // proto:  void QReadWriteLock::unlock();
// _ZN14QReadWriteLock6unlockEv unlock()
extern "C"
void
C_ZN14QReadWriteLock6unlockEv(void *qthis) {
  ((QReadWriteLock*)qthis)->unlock();
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 62, column 10>
//   // proto:  bool QReadWriteLock::tryLockForRead(int timeout);
// _ZN14QReadWriteLock14tryLockForReadEi tryLockForRead(int)
extern "C"
bool
C_ZN14QReadWriteLock14tryLockForReadEi(void *qthis,
int arg1) {
  auto ret =
  ((QReadWriteLock*)qthis)->tryLockForRead(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 60, column 10>
//   // proto:  void QReadWriteLock::lockForRead();
// _ZN14QReadWriteLock11lockForReadEv lockForRead()
extern "C"
void
C_ZN14QReadWriteLock11lockForReadEv(void *qthis) {
  ((QReadWriteLock*)qthis)->lockForRead();
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 66, column 10>
//   // proto:  bool QReadWriteLock::tryLockForWrite(int timeout);
// _ZN14QReadWriteLock15tryLockForWriteEi tryLockForWrite(int)
extern "C"
bool
C_ZN14QReadWriteLock15tryLockForWriteEi(void *qthis,
int arg1) {
  auto ret =
  ((QReadWriteLock*)qthis)->tryLockForWrite(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 112, column 28>
//   // proto:  QReadWriteLock * QReadLocker::readWriteLock();
// _ZNK11QReadLocker13readWriteLockEv readWriteLock()
extern "C"
void*
C_ZNK11QReadLocker13readWriteLockEv(void *qthis) {
  auto ret =
  ((QReadLocker*)qthis)->readWriteLock();
  return (void*)ret;
}
//   // proto:  void QReadLocker::~QReadLocker();
extern "C"
void C_ZN11QReadLockerD2Ev(void *qthis) {
  delete (QReadLocker*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 87, column 12>
//   // proto:  void QReadLocker::QReadLocker(QReadWriteLock * readWriteLock);
extern "C"
QReadLocker*
C_ZN11QReadLockerC2EP14QReadWriteLock(QReadWriteLock * arg1) {
  auto ret = new QReadLocker(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 102, column 17>
//   // proto:  void QReadLocker::relock();
// _ZN11QReadLocker6relockEv relock()
extern "C"
void
C_ZN11QReadLocker6relockEv(void *qthis) {
  ((QReadLocker*)qthis)->relock();
}
// <SourceLocation file '/usr/include/qt/QtCore/qreadwritelock.h', line 92, column 17>
//   // proto:  void QReadLocker::unlock();
// _ZN11QReadLocker6unlockEv unlock()
extern "C"
void
C_ZN11QReadLocker6unlockEv(void *qthis) {
  ((QReadLocker*)qthis)->unlock();
}
// <= ext block end

// body block begin =>
// <= body block end

