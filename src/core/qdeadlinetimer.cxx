//  header block begin
// /usr/include/qt/QtCore/qdeadlinetimer.h
#include <qdeadlinetimer.h>
#include <QtCore>

// QDeadlineTimer is pure virtual: false
// QDeadlineTimer has virtual projected: false
//  header block end

//  main block begin

class MyQDeadlineTimer : public QDeadlineTimer {
public:
  virtual ~MyQDeadlineTimer() {}
// void QDeadlineTimer(Qt::TimerType)
MyQDeadlineTimer(Qt::TimerType type_) : QDeadlineTimer(type_) {}
// void QDeadlineTimer(enum QDeadlineTimer::ForeverConstant, Qt::TimerType)
MyQDeadlineTimer(QDeadlineTimer::ForeverConstant arg0, Qt::TimerType type_) : QDeadlineTimer(arg0, type_) {}
// void QDeadlineTimer(qint64, Qt::TimerType)
MyQDeadlineTimer(qint64 msecs, Qt::TimerType type) : QDeadlineTimer(msecs, type) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:65
// [-2] void QDeadlineTimer(Qt::TimerType)
extern "C"
void* C_ZN14QDeadlineTimerC2EN2Qt9TimerTypeE(Qt::TimerType type_) {
  return  new QDeadlineTimer(type_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:67
// [-2] void QDeadlineTimer(enum QDeadlineTimer::ForeverConstant, Qt::TimerType)
extern "C"
void* C_ZN14QDeadlineTimerC2ENS_15ForeverConstantEN2Qt9TimerTypeE(QDeadlineTimer::ForeverConstant arg0, Qt::TimerType type_) {
  return  new QDeadlineTimer(arg0, type_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:69
// [-2] void QDeadlineTimer(qint64, Qt::TimerType)
extern "C"
void* C_ZN14QDeadlineTimerC2ExN2Qt9TimerTypeE(qint64 msecs, Qt::TimerType type) {
  return  new QDeadlineTimer(msecs, type);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:71
// [-2] void swap(class QDeadlineTimer &)
extern "C"
void C_ZN14QDeadlineTimer4swapERS_(void *this_, QDeadlineTimer* other) {
  ((QDeadlineTimer*)this_)->swap(*other);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:74
// [1] bool isForever()
extern "C"
bool C_ZNK14QDeadlineTimer9isForeverEv(void *this_) {
  return (bool)((QDeadlineTimer*)this_)->isForever();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:76
// [1] bool hasExpired()
extern "C"
bool C_ZNK14QDeadlineTimer10hasExpiredEv(void *this_) {
  return (bool)((QDeadlineTimer*)this_)->hasExpired();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:78
// [4] Qt::TimerType timerType()
extern "C"
Qt::TimerType C_ZNK14QDeadlineTimer9timerTypeEv(void *this_) {
  return (Qt::TimerType)((QDeadlineTimer*)this_)->timerType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:80
// [-2] void setTimerType(Qt::TimerType)
extern "C"
void C_ZN14QDeadlineTimer12setTimerTypeEN2Qt9TimerTypeE(void *this_, Qt::TimerType type) {
  ((QDeadlineTimer*)this_)->setTimerType(type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:82
// [8] qint64 remainingTime()
extern "C"
qint64 C_ZNK14QDeadlineTimer13remainingTimeEv(void *this_) {
  return (qint64)((QDeadlineTimer*)this_)->remainingTime();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:83
// [8] qint64 remainingTimeNSecs()
extern "C"
qint64 C_ZNK14QDeadlineTimer18remainingTimeNSecsEv(void *this_) {
  return (qint64)((QDeadlineTimer*)this_)->remainingTimeNSecs();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:84
// [-2] void setRemainingTime(qint64, Qt::TimerType)
extern "C"
void C_ZN14QDeadlineTimer16setRemainingTimeExN2Qt9TimerTypeE(void *this_, qint64 msecs, Qt::TimerType type) {
  ((QDeadlineTimer*)this_)->setRemainingTime(msecs, type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:85
// [-2] void setPreciseRemainingTime(qint64, qint64, Qt::TimerType)
extern "C"
void C_ZN14QDeadlineTimer23setPreciseRemainingTimeExxN2Qt9TimerTypeE(void *this_, qint64 secs, qint64 nsecs, Qt::TimerType type) {
  ((QDeadlineTimer*)this_)->setPreciseRemainingTime(secs, nsecs, type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:88
// [8] qint64 deadline()
extern "C"
qint64 C_ZNK14QDeadlineTimer8deadlineEv(void *this_) {
  return (qint64)((QDeadlineTimer*)this_)->deadline();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:89
// [8] qint64 deadlineNSecs()
extern "C"
qint64 C_ZNK14QDeadlineTimer13deadlineNSecsEv(void *this_) {
  return (qint64)((QDeadlineTimer*)this_)->deadlineNSecs();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:90
// [-2] void setDeadline(qint64, Qt::TimerType)
extern "C"
void C_ZN14QDeadlineTimer11setDeadlineExN2Qt9TimerTypeE(void *this_, qint64 msecs, Qt::TimerType timerType) {
  ((QDeadlineTimer*)this_)->setDeadline(msecs, timerType);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:91
// [-2] void setPreciseDeadline(qint64, qint64, Qt::TimerType)
extern "C"
void C_ZN14QDeadlineTimer18setPreciseDeadlineExxN2Qt9TimerTypeE(void *this_, qint64 secs, qint64 nsecs, Qt::TimerType type) {
  ((QDeadlineTimer*)this_)->setPreciseDeadline(secs, nsecs, type);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:94
// [16] QDeadlineTimer addNSecs(class QDeadlineTimer, qint64)
extern "C"
void* C_ZN14QDeadlineTimer8addNSecsES_x(QDeadlineTimer* dt, qint64 nsecs) {
  auto rv = QDeadlineTimer::addNSecs(*dt, nsecs);
return new QDeadlineTimer(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:95
// [16] QDeadlineTimer current(Qt::TimerType)
extern "C"
void* C_ZN14QDeadlineTimer7currentEN2Qt9TimerTypeE(Qt::TimerType timerType) {
  auto rv = QDeadlineTimer::current(timerType);
return new QDeadlineTimer(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:162
// [8] std::chrono::nanoseconds remainingTimeAsDuration()
extern "C"
std::chrono::nanoseconds C_ZNK14QDeadlineTimer23remainingTimeAsDurationEv(void *this_) {
  return (std::chrono::nanoseconds)((QDeadlineTimer*)this_)->remainingTimeAsDuration();
}

extern "C"
void C_ZN14QDeadlineTimerD2Ev(void *this_) {
  delete (QDeadlineTimer*)(this_);
}
//  main block end
