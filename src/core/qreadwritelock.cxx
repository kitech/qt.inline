// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
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

// ~QWriteLocker()
void dedtor_ZN12QWriteLockerD0Ev(QWriteLocker* that)
{
  QWriteLocker* rthis = (QWriteLocker*)that;
  delete rthis;
}

  // proto:  QReadWriteLock * QWriteLocker::readWriteLock();
QReadWriteLock * _ZNK12QWriteLocker13readWriteLockEv(void *that)
{
  QWriteLocker *cthat = (QWriteLocker *)that;
  return cthat->readWriteLock();
}

  // proto:  void QWriteLocker::QWriteLocker(QReadWriteLock * readWriteLock);
void _ZN12QWriteLockerC1EP14QReadWriteLock(void *that, QReadWriteLock * readWriteLock)
{
  QWriteLocker *cthat = (QWriteLocker *)that;
  auto _o = new(that) QWriteLocker(readWriteLock);
}

  // proto:  void QWriteLocker::unlock();
void _ZN12QWriteLocker6unlockEv(void *that)
{
  QWriteLocker *cthat = (QWriteLocker *)that;
   cthat->unlock();
}

  // proto:  void QWriteLocker::~QWriteLocker();
void _ZN12QWriteLockerD0Ev(void *that)
{
  QWriteLocker *cthat = (QWriteLocker *)that;
   cthat->~QWriteLocker();
}

  // proto:  void QWriteLocker::relock();
void _ZN12QWriteLocker6relockEv(void *that)
{
  QWriteLocker *cthat = (QWriteLocker *)that;
   cthat->relock();
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

// ~QReadLocker()
void dedtor_ZN11QReadLockerD0Ev(QReadLocker* that)
{
  QReadLocker* rthis = (QReadLocker*)that;
  delete rthis;
}

// QReadLocker(class QReadWriteLock *)
QReadLocker* dector_ZN11QReadLockerC1EP14QReadWriteLock(QReadWriteLock * readWriteLock)
{
  // static_assert(sizeof(QReadLocker) == 32, "tyszerr");
  QReadLocker* rthis = new QReadLocker(readWriteLock);
  return rthis;
}

  // proto:  QReadWriteLock * QReadLocker::readWriteLock();
QReadWriteLock * _ZNK11QReadLocker13readWriteLockEv(void *that)
{
  QReadLocker *cthat = (QReadLocker *)that;
  return cthat->readWriteLock();
}

  // proto:  void QReadLocker::~QReadLocker();
void _ZN11QReadLockerD0Ev(void *that)
{
  QReadLocker *cthat = (QReadLocker *)that;
   cthat->~QReadLocker();
}

  // proto:  void QReadLocker::QReadLocker(QReadWriteLock * readWriteLock);
void _ZN11QReadLockerC1EP14QReadWriteLock(void *that, QReadWriteLock * readWriteLock)
{
  QReadLocker *cthat = (QReadLocker *)that;
  auto _o = new(that) QReadLocker(readWriteLock);
}

  // proto:  void QReadLocker::relock();
void _ZN11QReadLocker6relockEv(void *that)
{
  QReadLocker *cthat = (QReadLocker *)that;
   cthat->relock();
}

  // proto:  void QReadLocker::unlock();
void _ZN11QReadLocker6unlockEv(void *that)
{
  QReadLocker *cthat = (QReadLocker *)that;
   cthat->unlock();
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

