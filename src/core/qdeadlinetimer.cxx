//  header block begin

// since 0x050800
// /usr/include/qt/QtCore/qdeadlinetimer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdeadlinetimer.h>
#include <QtCore>
#include "callback_inherit.h"

// QDeadlineTimer is pure virtual: false
// QDeadlineTimer has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDeadlineTimer_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDeadlineTimer_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDeadlineTimer_t qt_meta_stringdata_MyQDeadlineTimer = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQDeadlineTimer"
  },
  "MyQDeadlineTimer"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDeadlineTimer[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQDeadlineTimer : public QDeadlineTimer {
public:
  virtual ~MyQDeadlineTimer() {}
// void QDeadlineTimer(Qt::TimerType)
MyQDeadlineTimer(Qt::TimerType type_) : QDeadlineTimer(type_) {}
// void QDeadlineTimer(QDeadlineTimer::ForeverConstant, Qt::TimerType)
MyQDeadlineTimer(QDeadlineTimer::ForeverConstant arg0, Qt::TimerType type_) : QDeadlineTimer(arg0, type_) {}
// void QDeadlineTimer(qint64, Qt::TimerType)
MyQDeadlineTimer(qint64 msecs, Qt::TimerType type_) : QDeadlineTimer(msecs, type_) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:65
// [-2] void QDeadlineTimer(Qt::TimerType)
extern "C" Q_DECL_EXPORT
void* C_ZN14QDeadlineTimerC2EN2Qt9TimerTypeE(Qt::TimerType type_) {
  return  new QDeadlineTimer(type_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:67
// [-2] void QDeadlineTimer(QDeadlineTimer::ForeverConstant, Qt::TimerType)
extern "C" Q_DECL_EXPORT
void* C_ZN14QDeadlineTimerC2ENS_15ForeverConstantEN2Qt9TimerTypeE(QDeadlineTimer::ForeverConstant arg0, Qt::TimerType type_) {
  return  new QDeadlineTimer(arg0, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:69
// [-2] void QDeadlineTimer(qint64, Qt::TimerType)
extern "C" Q_DECL_EXPORT
void* C_ZN14QDeadlineTimerC2ExN2Qt9TimerTypeE(qint64 msecs, Qt::TimerType type_) {
  return  new QDeadlineTimer(msecs, type_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:71
// [-2] void swap(QDeadlineTimer &)
extern "C" Q_DECL_EXPORT
void C_ZN14QDeadlineTimer4swapERS_(void *this_, QDeadlineTimer* other) {
  ((QDeadlineTimer*)this_)->swap(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:74
// [1] bool isForever()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QDeadlineTimer9isForeverEv(void *this_) {
  return (bool)((QDeadlineTimer*)this_)->isForever();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:76
// [1] bool hasExpired()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QDeadlineTimer10hasExpiredEv(void *this_) {
  return (bool)((QDeadlineTimer*)this_)->hasExpired();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:78
// [4] Qt::TimerType timerType()
extern "C" Q_DECL_EXPORT
Qt::TimerType C_ZNK14QDeadlineTimer9timerTypeEv(void *this_) {
  return (Qt::TimerType)((QDeadlineTimer*)this_)->timerType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:80
// [-2] void setTimerType(Qt::TimerType)
extern "C" Q_DECL_EXPORT
void C_ZN14QDeadlineTimer12setTimerTypeEN2Qt9TimerTypeE(void *this_, Qt::TimerType type_) {
  ((QDeadlineTimer*)this_)->setTimerType(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:82
// [8] qint64 remainingTime()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK14QDeadlineTimer13remainingTimeEv(void *this_) {
  return (qint64)((QDeadlineTimer*)this_)->remainingTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:83
// [8] qint64 remainingTimeNSecs()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK14QDeadlineTimer18remainingTimeNSecsEv(void *this_) {
  return (qint64)((QDeadlineTimer*)this_)->remainingTimeNSecs();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:84
// [-2] void setRemainingTime(qint64, Qt::TimerType)
extern "C" Q_DECL_EXPORT
void C_ZN14QDeadlineTimer16setRemainingTimeExN2Qt9TimerTypeE(void *this_, qint64 msecs, Qt::TimerType type_) {
  ((QDeadlineTimer*)this_)->setRemainingTime(msecs, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:85
// [-2] void setPreciseRemainingTime(qint64, qint64, Qt::TimerType)
extern "C" Q_DECL_EXPORT
void C_ZN14QDeadlineTimer23setPreciseRemainingTimeExxN2Qt9TimerTypeE(void *this_, qint64 secs, qint64 nsecs, Qt::TimerType type_) {
  ((QDeadlineTimer*)this_)->setPreciseRemainingTime(secs, nsecs, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:88
// [8] qint64 deadline()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK14QDeadlineTimer8deadlineEv(void *this_) {
  return (qint64)((QDeadlineTimer*)this_)->deadline();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:89
// [8] qint64 deadlineNSecs()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK14QDeadlineTimer13deadlineNSecsEv(void *this_) {
  return (qint64)((QDeadlineTimer*)this_)->deadlineNSecs();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:90
// [-2] void setDeadline(qint64, Qt::TimerType)
extern "C" Q_DECL_EXPORT
void C_ZN14QDeadlineTimer11setDeadlineExN2Qt9TimerTypeE(void *this_, qint64 msecs, Qt::TimerType timerType) {
  ((QDeadlineTimer*)this_)->setDeadline(msecs, timerType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:91
// [-2] void setPreciseDeadline(qint64, qint64, Qt::TimerType)
extern "C" Q_DECL_EXPORT
void C_ZN14QDeadlineTimer18setPreciseDeadlineExxN2Qt9TimerTypeE(void *this_, qint64 secs, qint64 nsecs, Qt::TimerType type_) {
  ((QDeadlineTimer*)this_)->setPreciseDeadline(secs, nsecs, type_);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:94
// [16] QDeadlineTimer addNSecs(QDeadlineTimer, qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN14QDeadlineTimer8addNSecsES_x(QDeadlineTimer* dt, qint64 nsecs) {
  auto rv = QDeadlineTimer::addNSecs(*dt, nsecs);
return new QDeadlineTimer(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:95
// [16] QDeadlineTimer current(Qt::TimerType)
extern "C" Q_DECL_EXPORT
void* C_ZN14QDeadlineTimer7currentEN2Qt9TimerTypeE(Qt::TimerType timerType) {
  auto rv = QDeadlineTimer::current(timerType);
return new QDeadlineTimer(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:118
// [16] QDeadlineTimer & operator+=(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN14QDeadlineTimerpLEx(void *this_, qint64 msecs) {
  auto& rv = ((QDeadlineTimer*)this_)->operator+=(msecs);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:120
// [16] QDeadlineTimer & operator-=(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN14QDeadlineTimermIEx(void *this_, qint64 msecs) {
  auto& rv = ((QDeadlineTimer*)this_)->operator-=(msecs);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:162
// [8] std::chrono::nanoseconds remainingTimeAsDuration()
extern "C" Q_DECL_EXPORT
std::chrono::nanoseconds C_ZNK14QDeadlineTimer23remainingTimeAsDurationEv(void *this_) {
  return (std::chrono::nanoseconds)((QDeadlineTimer*)this_)->remainingTimeAsDuration();
}


extern "C" Q_DECL_EXPORT
void C_ZN14QDeadlineTimerD2Ev(void *this_) {
  delete (QDeadlineTimer*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
