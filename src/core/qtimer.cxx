// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtCore/qtimer.h
// dst-file: /src/core/qtimer.cxx
//

// header block begin =>
#include <qtimer.h>

extern "C" {

int QTimer_Class_Size()
{
  return sizeof(QTimer);
}

// ~QTimer()
void dedtor_ZN6QTimerD0Ev(QTimer* that)
{
  QTimer* rthis = (QTimer*)that;
  delete rthis;
}

// QTimer(class QObject *)
QTimer* dector_ZN6QTimerC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QTimer) == 32, "tyszerr");
  QTimer* rthis = new QTimer(parent);
  return rthis;
}

  // proto:  void QTimer::setSingleShot(bool singleShot);
void demth_ZN6QTimer13setSingleShotEb(void *that, bool singleShot)
{
  QTimer *cthat = (QTimer *)that;
   cthat->setSingleShot(singleShot);
}

  // proto:  bool QTimer::isSingleShot();
bool demth_ZNK6QTimer12isSingleShotEv(void *that)
{
  QTimer *cthat = (QTimer *)that;
  return cthat->isSingleShot();
}

  // proto:  bool QTimer::isActive();
bool demth_ZNK6QTimer8isActiveEv(void *that)
{
  QTimer *cthat = (QTimer *)that;
  return cthat->isActive();
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

