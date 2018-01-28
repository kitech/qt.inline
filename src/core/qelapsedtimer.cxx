//  header block begin
// /usr/include/qt/QtCore/qelapsedtimer.h
#include <qelapsedtimer.h>
#include <QtCore>

// QElapsedTimer is pure virtual: false
//  header block end

//  main block begin

class MyQElapsedTimer : public QElapsedTimer {
public:
MyQElapsedTimer() : QElapsedTimer() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:59
// [-2] void QElapsedTimer()
extern "C"
void* C_ZN13QElapsedTimerC1Ev() {
  (MyQElapsedTimer*)(0);
  return  new MyQElapsedTimer();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:65
// [4] QElapsedTimer::ClockType clockType()
extern "C"
QElapsedTimer::ClockType C_ZN13QElapsedTimer9clockTypeEv() {
  return (QElapsedTimer::ClockType)QElapsedTimer::clockType();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:66
// [1] bool isMonotonic()
extern "C"
bool C_ZN13QElapsedTimer11isMonotonicEv() {
  return (bool)QElapsedTimer::isMonotonic();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:68
// [-2] void start()
extern "C"
void C_ZN13QElapsedTimer5startEv(void *this_) {
  ((QElapsedTimer*)this_)->start();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:69
// [8] qint64 restart()
extern "C"
qint64 C_ZN13QElapsedTimer7restartEv(void *this_) {
  return (qint64)((QElapsedTimer*)this_)->restart();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:70
// [-2] void invalidate()
extern "C"
void C_ZN13QElapsedTimer10invalidateEv(void *this_) {
  ((QElapsedTimer*)this_)->invalidate();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:71
// [1] bool isValid()
extern "C"
bool C_ZNK13QElapsedTimer7isValidEv(void *this_) {
  return (bool)((QElapsedTimer*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:73
// [8] qint64 nsecsElapsed()
extern "C"
qint64 C_ZNK13QElapsedTimer12nsecsElapsedEv(void *this_) {
  return (qint64)((QElapsedTimer*)this_)->nsecsElapsed();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:74
// [8] qint64 elapsed()
extern "C"
qint64 C_ZNK13QElapsedTimer7elapsedEv(void *this_) {
  return (qint64)((QElapsedTimer*)this_)->elapsed();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:75
// [1] bool hasExpired(qint64)
extern "C"
bool C_ZNK13QElapsedTimer10hasExpiredEx(void *this_, qint64 timeout) {
  return (bool)((QElapsedTimer*)this_)->hasExpired(timeout);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:77
// [8] qint64 msecsSinceReference()
extern "C"
qint64 C_ZNK13QElapsedTimer19msecsSinceReferenceEv(void *this_) {
  return (qint64)((QElapsedTimer*)this_)->msecsSinceReference();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:78
// [8] qint64 msecsTo(const class QElapsedTimer &)
extern "C"
qint64 C_ZNK13QElapsedTimer7msecsToERKS_(void *this_, const QElapsedTimer & other) {
  return (qint64)((QElapsedTimer*)this_)->msecsTo(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:79
// [8] qint64 secsTo(const class QElapsedTimer &)
extern "C"
qint64 C_ZNK13QElapsedTimer6secsToERKS_(void *this_, const QElapsedTimer & other) {
  return (qint64)((QElapsedTimer*)this_)->secsTo(other);
}
//  main block end
