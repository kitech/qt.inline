// /usr/include/qt/QtCore/qbasictimer.h
#include <qbasictimer.h>
#include <QtCore>

// inline
// /usr/include/qt/QtCore/qbasictimer.h:55
// void QBasicTimer()
extern "C"
void* C_ZN11QBasicTimerC1Ev() {
  return new QBasicTimer();
}
// inline
// /usr/include/qt/QtCore/qbasictimer.h:56
// void ~QBasicTimer()
extern "C"
void C_ZN11QBasicTimerD1Ev(void *this_) {
  delete (QBasicTimer*)(this_);
}
// inline
// /usr/include/qt/QtCore/qbasictimer.h:58
// bool isActive()
extern "C"
void C_ZNK11QBasicTimer8isActiveEv(void *this_) {
  /*return*/ ((QBasicTimer*)this_)->isActive();
}
// inline
// /usr/include/qt/QtCore/qbasictimer.h:59
// int timerId()
extern "C"
void C_ZNK11QBasicTimer7timerIdEv(void *this_) {
  /*return*/ ((QBasicTimer*)this_)->timerId();
}
// /usr/include/qt/QtCore/qbasictimer.h:61
// void start(int, class QObject *)
extern "C"
void C_ZN11QBasicTimer5startEiP7QObject(void *this_, int msec, QObject * obj) {
  ((QBasicTimer*)this_)->start(msec, obj);
}
// /usr/include/qt/QtCore/qbasictimer.h:62
// void start(int, Qt::TimerType, class QObject *)
extern "C"
void C_ZN11QBasicTimer5startEiN2Qt9TimerTypeEP7QObject(void *this_, int msec, Qt::TimerType timerType, QObject * obj) {
  ((QBasicTimer*)this_)->start(msec, timerType, obj);
}
// /usr/include/qt/QtCore/qbasictimer.h:63
// void stop()
extern "C"
void C_ZN11QBasicTimer4stopEv(void *this_) {
  ((QBasicTimer*)this_)->stop();
}