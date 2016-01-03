// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qbasictimer.h
// dst-file: /src/core/qbasictimer.cxx
//

// header block begin =>
#include <qbasictimer.h>

extern "C" {

int QBasicTimer_Class_Size()
{
  return sizeof(QBasicTimer);
}

// ~QBasicTimer()
void dedtor_ZN11QBasicTimerD0Ev(QBasicTimer* that)
{
  QBasicTimer* rthis = (QBasicTimer*)that;
  delete rthis;
}

// QBasicTimer()
QBasicTimer* dector_ZN11QBasicTimerC1Ev()
{
  // static_assert(sizeof(QBasicTimer) == 32, "tyszerr");
  QBasicTimer* rthis = new QBasicTimer();
  return rthis;
}

  // proto:  void QBasicTimer::~QBasicTimer();
void demth_ZN11QBasicTimerD0Ev(void *that)
{
  QBasicTimer *cthat = (QBasicTimer *)that;
   cthat->~QBasicTimer();
}

  // proto:  int QBasicTimer::timerId();
int demth_ZNK11QBasicTimer7timerIdEv(void *that)
{
  QBasicTimer *cthat = (QBasicTimer *)that;
  return cthat->timerId();
}

  // proto:  bool QBasicTimer::isActive();
bool demth_ZNK11QBasicTimer8isActiveEv(void *that)
{
  QBasicTimer *cthat = (QBasicTimer *)that;
  return cthat->isActive();
}

  // proto:  void QBasicTimer::QBasicTimer();
void demth_ZN11QBasicTimerC1Ev(void *that)
{
  QBasicTimer *cthat = (QBasicTimer *)that;
  auto _o = new(that) QBasicTimer();
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

