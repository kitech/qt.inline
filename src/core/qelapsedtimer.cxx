// /usr/include/qt/QtCore/qelapsedtimer.h
#include <qelapsedtimer.h>
#include <QtCore>

// inline
// /usr/include/qt/QtCore/qelapsedtimer.h:59
// void QElapsedTimer()
extern "C"
void* C_ZN13QElapsedTimerC1Ev() {
  return new QElapsedTimer();
}
// static
// /usr/include/qt/QtCore/qelapsedtimer.h:65
// QElapsedTimer::ClockType clockType()
extern "C"
void C_ZN13QElapsedTimer9clockTypeEv() {
  /*return*/ QElapsedTimer::clockType();
}
// static
// /usr/include/qt/QtCore/qelapsedtimer.h:66
// bool isMonotonic()
extern "C"
void C_ZN13QElapsedTimer11isMonotonicEv() {
  /*return*/ QElapsedTimer::isMonotonic();
}
// /usr/include/qt/QtCore/qelapsedtimer.h:68
// void start()
extern "C"
void C_ZN13QElapsedTimer5startEv(void *this_) {
  ((QElapsedTimer*)this_)->start();
}
// /usr/include/qt/QtCore/qelapsedtimer.h:69
// qint64 restart()
extern "C"
void C_ZN13QElapsedTimer7restartEv(void *this_) {
  /*return*/ ((QElapsedTimer*)this_)->restart();
}
// /usr/include/qt/QtCore/qelapsedtimer.h:70
// void invalidate()
extern "C"
void C_ZN13QElapsedTimer10invalidateEv(void *this_) {
  ((QElapsedTimer*)this_)->invalidate();
}
// /usr/include/qt/QtCore/qelapsedtimer.h:71
// bool isValid()
extern "C"
void C_ZNK13QElapsedTimer7isValidEv(void *this_) {
  /*return*/ ((QElapsedTimer*)this_)->isValid();
}
// /usr/include/qt/QtCore/qelapsedtimer.h:73
// qint64 nsecsElapsed()
extern "C"
void C_ZNK13QElapsedTimer12nsecsElapsedEv(void *this_) {
  /*return*/ ((QElapsedTimer*)this_)->nsecsElapsed();
}
// /usr/include/qt/QtCore/qelapsedtimer.h:74
// qint64 elapsed()
extern "C"
void C_ZNK13QElapsedTimer7elapsedEv(void *this_) {
  /*return*/ ((QElapsedTimer*)this_)->elapsed();
}
// /usr/include/qt/QtCore/qelapsedtimer.h:75
// bool hasExpired(qint64)
extern "C"
void C_ZNK13QElapsedTimer10hasExpiredEx(void *this_, qint64 timeout) {
  /*return*/ ((QElapsedTimer*)this_)->hasExpired(timeout);
}
// /usr/include/qt/QtCore/qelapsedtimer.h:77
// qint64 msecsSinceReference()
extern "C"
void C_ZNK13QElapsedTimer19msecsSinceReferenceEv(void *this_) {
  /*return*/ ((QElapsedTimer*)this_)->msecsSinceReference();
}
// /usr/include/qt/QtCore/qelapsedtimer.h:78
// qint64 msecsTo(const class QElapsedTimer &)
extern "C"
void C_ZNK13QElapsedTimer7msecsToERKS_(void *this_, const QElapsedTimer & other) {
  /*return*/ ((QElapsedTimer*)this_)->msecsTo(other);
}
// /usr/include/qt/QtCore/qelapsedtimer.h:79
// qint64 secsTo(const class QElapsedTimer &)
extern "C"
void C_ZNK13QElapsedTimer6secsToERKS_(void *this_, const QElapsedTimer & other) {
  /*return*/ ((QElapsedTimer*)this_)->secsTo(other);
}