// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qreadwritelock.h
// dst-file: /src/core/qreadwritelock.cxx
//

// header block begin =>
#include <qreadwritelock.h>

extern "C" {

int QWriteLocker_Class_Size()
{
  return sizeof(QWriteLocker);
}

// QWriteLocker(class QReadWriteLock *)
QWriteLocker* dector_ZN12QWriteLockerC1EP14QReadWriteLock(QReadWriteLock * readWriteLock)
{
  // static_assert(sizeof(QWriteLocker) == 32, "tyszerr");
  QWriteLocker* rthis = new QWriteLocker(readWriteLock);
  return rthis;
}

  // proto:  void QWriteLocker::QWriteLocker(QReadWriteLock * readWriteLock);
void _ZN12QWriteLockerC1EP14QReadWriteLock(void *that, QReadWriteLock * readWriteLock)
{
  QWriteLocker *cthat = (QWriteLocker *)that;
  auto _o = new(that) QWriteLocker(readWriteLock);
}

int QReadWriteLock_Class_Size()
{
  return sizeof(QReadWriteLock);
}

// ~QReadWriteLock()
void dedtor_ZN14QReadWriteLockD0Ev(QReadWriteLock* that)
{
  QReadWriteLock* rthis = (QReadWriteLock*)that;
  delete rthis;
}

// QReadWriteLock(enum QReadWriteLock::RecursionMode)
QReadWriteLock* dector_ZN14QReadWriteLockC1ENS_13RecursionModeE(QReadWriteLock::RecursionMode recursionMode)
{
  // static_assert(sizeof(QReadWriteLock) == 32, "tyszerr");
  QReadWriteLock* rthis = new QReadWriteLock(recursionMode);
  return rthis;
}

int QReadLocker_Class_Size()
{
  return sizeof(QReadLocker);
}

// QReadLocker(class QReadWriteLock *)
QReadLocker* dector_ZN11QReadLockerC1EP14QReadWriteLock(QReadWriteLock * readWriteLock)
{
  // static_assert(sizeof(QReadLocker) == 32, "tyszerr");
  QReadLocker* rthis = new QReadLocker(readWriteLock);
  return rthis;
}

  // proto:  void QReadLocker::QReadLocker(QReadWriteLock * readWriteLock);
void _ZN11QReadLockerC1EP14QReadWriteLock(void *that, QReadWriteLock * readWriteLock)
{
  QReadLocker *cthat = (QReadLocker *)that;
  auto _o = new(that) QReadLocker(readWriteLock);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

