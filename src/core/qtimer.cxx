//  header block begin
// /usr/include/qt/QtCore/qtimer.h
#include <qtimer.h>
#include <QtCore>
#include "callback_inherit.h"

// QTimer is pure virtual: false
// QTimer has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN6QTimer10timerEventEP11QTimerEvent_fnptr = 0;
// extern "C" void set_callback_ZN6QTimer10timerEventEP11QTimerEvent(void*cbfn)
// { callback_ZN6QTimer10timerEventEP11QTimerEvent_fnptr = cbfn; }

class MyQTimer : public QTimer {
public:
  virtual ~MyQTimer() {}
// void QTimer(class QObject *)
MyQTimer(QObject * parent) : QTimer(parent) {}
// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QTimerEvent *))(callback_ZN6QTimer10timerEventEP11QTimerEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , arg0);
    // }
    QTimer::timerEvent(arg0);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:59
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK6QTimer10metaObjectEv(void *this_) {
  return (void*)((QTimer*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:66
// [-2] void QTimer(class QObject *)
extern "C"
void* C_ZN6QTimerC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQTimer*)(0);
  return  new MyQTimer(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:67
// [-2] void ~QTimer()
extern "C"
void C_ZN6QTimerD2Ev(void *this_) {
  delete (QTimer*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:69
// [1] bool isActive()
extern "C"
bool C_ZNK6QTimer8isActiveEv(void *this_) {
  return (bool)((QTimer*)this_)->isActive();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:70
// [4] int timerId()
extern "C"
int C_ZNK6QTimer7timerIdEv(void *this_) {
  return (int)((QTimer*)this_)->timerId();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:72
// [-2] void setInterval(int)
extern "C"
void C_ZN6QTimer11setIntervalEi(void *this_, int msec) {
  ((QTimer*)this_)->setInterval(msec);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:73
// [4] int interval()
extern "C"
int C_ZNK6QTimer8intervalEv(void *this_) {
  return (int)((QTimer*)this_)->interval();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:75
// [4] int remainingTime()
extern "C"
int C_ZNK6QTimer13remainingTimeEv(void *this_) {
  return (int)((QTimer*)this_)->remainingTime();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:77
// [-2] void setTimerType(Qt::TimerType)
extern "C"
void C_ZN6QTimer12setTimerTypeEN2Qt9TimerTypeE(void *this_, Qt::TimerType atype) {
  ((QTimer*)this_)->setTimerType(atype);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:78
// [4] Qt::TimerType timerType()
extern "C"
Qt::TimerType C_ZNK6QTimer9timerTypeEv(void *this_) {
  return (Qt::TimerType)((QTimer*)this_)->timerType();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:80
// [-2] void setSingleShot(_Bool)
extern "C"
void C_ZN6QTimer13setSingleShotEb(void *this_, bool singleShot) {
  ((QTimer*)this_)->setSingleShot(singleShot);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:81
// [1] bool isSingleShot()
extern "C"
bool C_ZNK6QTimer12isSingleShotEv(void *this_) {
  return (bool)((QTimer*)this_)->isSingleShot();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:83
// [-2] void singleShot(int, const class QObject *, const char *)
extern "C"
void C_ZN6QTimer10singleShotEiPK7QObjectPKc(int msec, const QObject * receiver, const char * member) {
  QTimer::singleShot(msec, receiver, member);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:84
// [-2] void singleShot(int, Qt::TimerType, const class QObject *, const char *)
extern "C"
void C_ZN6QTimer10singleShotEiN2Qt9TimerTypeEPK7QObjectPKc(int msec, Qt::TimerType timerType, const QObject * receiver, const char * member) {
  QTimer::singleShot(msec, timerType, receiver, member);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:158
// [-2] void start(int)
extern "C"
void C_ZN6QTimer5startEi(void *this_, int msec) {
  ((QTimer*)this_)->start(msec);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:160
// [-2] void start()
extern "C"
void C_ZN6QTimer5startEv(void *this_) {
  ((QTimer*)this_)->start();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:161
// [-2] void stop()
extern "C"
void C_ZN6QTimer4stopEv(void *this_) {
  ((QTimer*)this_)->stop();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:173
// [8] std::chrono::milliseconds intervalAsDuration()
extern "C"
std::chrono::milliseconds C_ZNK6QTimer18intervalAsDurationEv(void *this_) {
  return (std::chrono::milliseconds)((QTimer*)this_)->intervalAsDuration();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:178
// [8] std::chrono::milliseconds remainingTimeAsDuration()
extern "C"
std::chrono::milliseconds C_ZNK6QTimer23remainingTimeAsDurationEv(void *this_) {
  return (std::chrono::milliseconds)((QTimer*)this_)->remainingTimeAsDuration();
}
//  main block end
