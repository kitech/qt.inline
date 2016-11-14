// /usr/include/qt/QtCore/qtimer.h
#include <qtimer.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qtimer.h:55
// const QMetaObject * metaObject()
extern "C"
void C_ZNK6QTimer10metaObjectEv(void *this_) {
  /*return*/ ((QTimer*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qtimer.h:62
// void QTimer(class QObject *)
extern "C"
void* C_ZN6QTimerC1EP7QObject(QObject * parent) {
  return new QTimer(parent);
}
// virtual
// /usr/include/qt/QtCore/qtimer.h:63
// void ~QTimer()
extern "C"
void C_ZN6QTimerD1Ev(void *this_) {
  delete (QTimer*)(this_);
}
// inline
// /usr/include/qt/QtCore/qtimer.h:65
// bool isActive()
extern "C"
void C_ZNK6QTimer8isActiveEv(void *this_) {
  /*return*/ ((QTimer*)this_)->isActive();
}
// inline
// /usr/include/qt/QtCore/qtimer.h:66
// int timerId()
extern "C"
void C_ZNK6QTimer7timerIdEv(void *this_) {
  /*return*/ ((QTimer*)this_)->timerId();
}
// /usr/include/qt/QtCore/qtimer.h:68
// void setInterval(int)
extern "C"
void C_ZN6QTimer11setIntervalEi(void *this_, int msec) {
  ((QTimer*)this_)->setInterval(msec);
}
// inline
// /usr/include/qt/QtCore/qtimer.h:69
// int interval()
extern "C"
void C_ZNK6QTimer8intervalEv(void *this_) {
  /*return*/ ((QTimer*)this_)->interval();
}
// /usr/include/qt/QtCore/qtimer.h:71
// int remainingTime()
extern "C"
void C_ZNK6QTimer13remainingTimeEv(void *this_) {
  /*return*/ ((QTimer*)this_)->remainingTime();
}
// inline
// /usr/include/qt/QtCore/qtimer.h:73
// void setTimerType(Qt::TimerType)
extern "C"
void C_ZN6QTimer12setTimerTypeEN2Qt9TimerTypeE(void *this_, Qt::TimerType atype) {
  ((QTimer*)this_)->setTimerType(atype);
}
// inline
// /usr/include/qt/QtCore/qtimer.h:74
// Qt::TimerType timerType()
extern "C"
void C_ZNK6QTimer9timerTypeEv(void *this_) {
  /*return*/ ((QTimer*)this_)->timerType();
}
// inline
// /usr/include/qt/QtCore/qtimer.h:76
// void setSingleShot(_Bool)
extern "C"
void C_ZN6QTimer13setSingleShotEb(void *this_, bool singleShot) {
  ((QTimer*)this_)->setSingleShot(singleShot);
}
// inline
// /usr/include/qt/QtCore/qtimer.h:77
// bool isSingleShot()
extern "C"
void C_ZNK6QTimer12isSingleShotEv(void *this_) {
  /*return*/ ((QTimer*)this_)->isSingleShot();
}
// static
// /usr/include/qt/QtCore/qtimer.h:79
// void singleShot(int, const class QObject *, const char *)
extern "C"
void C_ZN6QTimer10singleShotEiPK7QObjectPKc(int msec, const QObject * receiver, const char * member) {
  QTimer::singleShot(msec, receiver, member);
}
// static
// /usr/include/qt/QtCore/qtimer.h:80
// void singleShot(int, Qt::TimerType, const class QObject *, const char *)
extern "C"
void C_ZN6QTimer10singleShotEiN2Qt9TimerTypeEPK7QObjectPKc(int msec, Qt::TimerType timerType, const QObject * receiver, const char * member) {
  QTimer::singleShot(msec, timerType, receiver, member);
}
// /usr/include/qt/QtCore/qtimer.h:148
// void start(int)
extern "C"
void C_ZN6QTimer5startEi(void *this_, int msec) {
  ((QTimer*)this_)->start(msec);
}
// /usr/include/qt/QtCore/qtimer.h:150
// void start()
extern "C"
void C_ZN6QTimer5startEv(void *this_) {
  ((QTimer*)this_)->start();
}
// /usr/include/qt/QtCore/qtimer.h:151
// void stop()
extern "C"
void C_ZN6QTimer4stopEv(void *this_) {
  ((QTimer*)this_)->stop();
}