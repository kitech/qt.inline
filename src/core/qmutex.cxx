// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qmutex.h
// dst-file: /src/core/qmutex.cxx
//

// header block begin =>
#include <qmutex.h>

extern "C" {

  // proto:  void QMutexLocker::QMutexLocker(QBasicMutex * m);
void _ZN12QMutexLockerC1EP11QBasicMutex(void *that, QBasicMutex * m)

{
  QMutexLocker *cthat = (QMutexLocker *)that;
  auto _o = new(that) QMutexLocker(m);
}

  // proto:  QMutex * QMutexLocker::mutex();
QMutex * _ZNK12QMutexLocker5mutexEv(void *that)

{
  QMutexLocker *cthat = (QMutexLocker *)that;
  return cthat->mutex();
}

  // proto:  void QMutexLocker::relock();
void _ZN12QMutexLocker6relockEv(void *that)

{
  QMutexLocker *cthat = (QMutexLocker *)that;
   cthat->relock();
}

  // proto:  void QMutexLocker::unlock();
void _ZN12QMutexLocker6unlockEv(void *that)

{
  QMutexLocker *cthat = (QMutexLocker *)that;
   cthat->unlock();
}

  // proto:  void QMutexLocker::~QMutexLocker();
void _ZN12QMutexLockerD0Ev(void *that)

{
  QMutexLocker *cthat = (QMutexLocker *)that;
   cthat->~QMutexLocker();
}

  // proto:  void QBasicMutex::lock();
void _ZN11QBasicMutex4lockEv(void *that)

{
  QBasicMutex *cthat = (QBasicMutex *)that;
   cthat->lock();
}

  // proto:  void QBasicMutex::unlock();
void _ZN11QBasicMutex6unlockEv(void *that)

{
  QBasicMutex *cthat = (QBasicMutex *)that;
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

