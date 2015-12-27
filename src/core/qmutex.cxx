// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qmutex.h
// dst-file: /src/core/qmutex.cxx
//

// header block begin =>
#include <qmutex.h>

extern "C" {

int QMutexLocker_Class_Size()
{
  return sizeof(QMutexLocker);
}

// QMutexLocker(class QBasicMutex *)
QMutexLocker* dector_ZN12QMutexLockerC1EP11QBasicMutex(QBasicMutex * m)
{
  // static_assert(sizeof(QMutexLocker) == 32, "tyszerr");
  QMutexLocker* rthis = new QMutexLocker(m);
  return rthis;
}

// ~QMutexLocker()
void dedtor_ZN12QMutexLockerD0Ev(QMutexLocker* that)
{
  QMutexLocker* rthis = (QMutexLocker*)that;
  delete rthis;
}

  // proto:  void QMutexLocker::QMutexLocker(QBasicMutex * m);
void demth_ZN12QMutexLockerC1EP11QBasicMutex(void *that, QBasicMutex * m)
{
  QMutexLocker *cthat = (QMutexLocker *)that;
  auto _o = new(that) QMutexLocker(m);
}

  // proto:  QMutex * QMutexLocker::mutex();
QMutex * demth_ZNK12QMutexLocker5mutexEv(void *that)
{
  QMutexLocker *cthat = (QMutexLocker *)that;
  return cthat->mutex();
}

  // proto:  void QMutexLocker::relock();
void demth_ZN12QMutexLocker6relockEv(void *that)
{
  QMutexLocker *cthat = (QMutexLocker *)that;
   cthat->relock();
}

  // proto:  void QMutexLocker::unlock();
void demth_ZN12QMutexLocker6unlockEv(void *that)
{
  QMutexLocker *cthat = (QMutexLocker *)that;
   cthat->unlock();
}

  // proto:  void QMutexLocker::~QMutexLocker();
void demth_ZN12QMutexLockerD0Ev(void *that)
{
  QMutexLocker *cthat = (QMutexLocker *)that;
   cthat->~QMutexLocker();
}

int QBasicMutex_Class_Size()
{
  return sizeof(QBasicMutex);
}

  // proto:  void QBasicMutex::lock();
void demth_ZN11QBasicMutex4lockEv(void *that)
{
  QBasicMutex *cthat = (QBasicMutex *)that;
   cthat->lock();
}

  // proto:  void QBasicMutex::unlock();
void demth_ZN11QBasicMutex6unlockEv(void *that)
{
  QBasicMutex *cthat = (QBasicMutex *)that;
   cthat->unlock();
}

int QMutex_Class_Size()
{
  return sizeof(QMutex);
}

// QMutex(enum QMutex::RecursionMode)
QMutex* dector_ZN6QMutexC1ENS_13RecursionModeE(QMutex::RecursionMode mode)
{
  // static_assert(sizeof(QMutex) == 32, "tyszerr");
  QMutex* rthis = new QMutex(mode);
  return rthis;
}

// ~QMutex()
void dedtor_ZN6QMutexD0Ev(QMutex* that)
{
  QMutex* rthis = (QMutex*)that;
  delete rthis;
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

