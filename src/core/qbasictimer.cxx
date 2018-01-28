//  header block begin
// /usr/include/qt/QtCore/qbasictimer.h
#include <qbasictimer.h>
#include <QtCore>

// QBasicTimer is pure virtual: false
//  header block end

//  main block begin

class MyQBasicTimer : public QBasicTimer {
public:
MyQBasicTimer() : QBasicTimer() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:55
// [-2] void QBasicTimer()
extern "C"
void* C_ZN11QBasicTimerC1Ev() {
  (MyQBasicTimer*)(0);
  return  new MyQBasicTimer();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:56
// [-2] void ~QBasicTimer()
extern "C"
void C_ZN11QBasicTimerD1Ev(void *this_) {
  delete (QBasicTimer*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:58
// [1] bool isActive()
extern "C"
bool C_ZNK11QBasicTimer8isActiveEv(void *this_) {
  return (bool)((QBasicTimer*)this_)->isActive();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:59
// [4] int timerId()
extern "C"
int C_ZNK11QBasicTimer7timerIdEv(void *this_) {
  return (int)((QBasicTimer*)this_)->timerId();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:61
// [-2] void start(int, class QObject *)
extern "C"
void C_ZN11QBasicTimer5startEiP7QObject(void *this_, int msec, QObject * obj) {
  ((QBasicTimer*)this_)->start(msec, obj);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:62
// [-2] void start(int, Qt::TimerType, class QObject *)
extern "C"
void C_ZN11QBasicTimer5startEiN2Qt9TimerTypeEP7QObject(void *this_, int msec, Qt::TimerType timerType, QObject * obj) {
  ((QBasicTimer*)this_)->start(msec, timerType, obj);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:63
// [-2] void stop()
extern "C"
void C_ZN11QBasicTimer4stopEv(void *this_) {
  ((QBasicTimer*)this_)->stop();
}
//  main block end
