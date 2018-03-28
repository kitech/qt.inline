//  header block begin
// /usr/include/qt/QtCore/qbasictimer.h
#ifndef protected
#define protected public
#endif
#include <qbasictimer.h>
#include <QtCore>
#include "callback_inherit.h"

// QBasicTimer is pure virtual: false
// QBasicTimer has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQBasicTimer : public QBasicTimer {
public:
  virtual ~MyQBasicTimer() {}
// void QBasicTimer()
MyQBasicTimer() : QBasicTimer() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:55
// [-2] void QBasicTimer()
extern "C" Q_DECL_EXPORT
void* C_ZN11QBasicTimerC2Ev() {
  return  new QBasicTimer();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:56
// [-2] void ~QBasicTimer()
extern "C" Q_DECL_EXPORT
void C_ZN11QBasicTimerD2Ev(void *this_) {
  delete (QBasicTimer*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:58
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QBasicTimer8isActiveEv(void *this_) {
  return (bool)((QBasicTimer*)this_)->isActive();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:59
// [4] int timerId()
extern "C" Q_DECL_EXPORT
int C_ZNK11QBasicTimer7timerIdEv(void *this_) {
  return (int)((QBasicTimer*)this_)->timerId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:61
// [-2] void start(int, QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN11QBasicTimer5startEiP7QObject(void *this_, int msec, QObject * obj) {
  ((QBasicTimer*)this_)->start(msec, obj);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:62
// [-2] void start(int, Qt::TimerType, QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN11QBasicTimer5startEiN2Qt9TimerTypeEP7QObject(void *this_, int msec, Qt::TimerType timerType, QObject * obj) {
  ((QBasicTimer*)this_)->start(msec, timerType, obj);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:63
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN11QBasicTimer4stopEv(void *this_) {
  ((QBasicTimer*)this_)->stop();
}

//  main block end
