// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
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

  // proto:  int QTimer::timerId();
int demth_ZNK6QTimer7timerIdEv(void *that)
{
  QTimer *cthat = (QTimer *)that;
  return cthat->timerId();
}

  // proto:  void QTimer::setSingleShot(bool singleShot);
void demth_ZN6QTimer13setSingleShotEb(void *that, bool singleShot)
{
  QTimer *cthat = (QTimer *)that;
   cthat->setSingleShot(singleShot);
}

  // proto:  int QTimer::interval();
int demth_ZNK6QTimer8intervalEv(void *that)
{
  QTimer *cthat = (QTimer *)that;
  return cthat->interval();
}

  // proto:  void QTimer::setTimerType(Qt::TimerType atype);
void demth_ZN6QTimer12setTimerTypeEN2Qt9TimerTypeE(void *that, Qt::TimerType atype)
{
  QTimer *cthat = (QTimer *)that;
   cthat->setTimerType(atype);
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
// QTimer_SlotProxy here
class QTimer_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTimer_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qtimer.moc"

extern "C" {
  QTimer_SlotProxy* QTimer_SlotProxy_new()
  {
    return new QTimer_SlotProxy();
  }
};

// <= body block end

