// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qreadwritelock.h
// dst-file: /src/core/qreadwritelock.cxx
//

// header block begin =>
#include <qreadwritelock.h>

extern "C" {

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

