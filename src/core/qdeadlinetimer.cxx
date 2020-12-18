//  header block begin

// /usr/include/qt/QtCore/qdeadlinetimer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdeadlinetimer.h>
#include <QtCore>
#include "callback_inherit.h"

// QDeadlineTimer is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdeadlinetimer(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:66
// [-2] void QDeadlineTimer(Qt::TimerType) 
// (12)qm1499621509 (37)_ZN14QDeadlineTimerC2EN2Qt9TimerTypeE
/*void* qm1499621509(Qt::TimerType type_)*/{
  Qt::TimerType type_ = *(Qt::TimerType*)this_;
  this_ =  new QDeadlineTimer(type_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:68
// [-2] void QDeadlineTimer(QDeadlineTimer::ForeverConstant, Qt::TimerType) 
// (12)qm1011522817 (58)_ZN14QDeadlineTimerC2ENS_15ForeverConstantEN2Qt9TimerTypeE
/*void* qm1011522817(QDeadlineTimer::ForeverConstant arg0, Qt::TimerType type_)*/{
  QDeadlineTimer::ForeverConstant arg0 = *(QDeadlineTimer::ForeverConstant*)this_; Qt::TimerType type_ = *(Qt::TimerType*)this_;
  this_ =  new QDeadlineTimer(arg0, type_);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:72
// [-2] void swap(QDeadlineTimer &) 
// (12)qm2150214713 (28)_ZN14QDeadlineTimer4swapERS_
//static
/*void qm2150214713(QDeadlineTimer & other)*/ {
  QDeadlineTimer & other = *(QDeadlineTimer *)this_;
  (void) ((QDeadlineTimer*)this_)->swap(other);
   auto xptr = (void (QDeadlineTimer::*)(QDeadlineTimer&) ) &QDeadlineTimer::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:75
// [1] bool isForever() const
// (12)qm1312559342 (32)_ZNK14QDeadlineTimer9isForeverEv
//static
/*void qm1312559342()*/ {
  ;
  (void) ((QDeadlineTimer*)this_)->isForever();
   auto xptr = (bool (QDeadlineTimer::*)() const ) &QDeadlineTimer::isForever;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:79
// [4] Qt::TimerType timerType() const
// (12)qm3111049524 (32)_ZNK14QDeadlineTimer9timerTypeEv
//static
/*void qm3111049524()*/ {
  ;
  (void) ((QDeadlineTimer*)this_)->timerType();
   auto xptr = (Qt::TimerType (QDeadlineTimer::*)() const ) &QDeadlineTimer::timerType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:118
// [16] QDeadlineTimer & operator+=(qint64) 
// (12)qm3960490912 (23)_ZN14QDeadlineTimerpLEx
//static
/*void qm3960490912(long long msecs)*/ {
  long long msecs = *(long long*)this_;
  (void) ((QDeadlineTimer*)this_)->operator+=(msecs);
  // auto xptr = (QDeadlineTimer & (QDeadlineTimer::*)(long long) ) &QDeadlineTimer::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:120
// [16] QDeadlineTimer & operator-=(qint64) 
// (12)qm1218971145 (23)_ZN14QDeadlineTimermIEx
//static
/*void qm1218971145(long long msecs)*/ {
  long long msecs = *(long long*)this_;
  (void) ((QDeadlineTimer*)this_)->operator-=(msecs);
  // auto xptr = (QDeadlineTimer & (QDeadlineTimer::*)(long long) ) &QDeadlineTimer::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:162
// [8] std::chrono::nanoseconds remainingTimeAsDuration() const
// (12)qm3901589018 (47)_ZNK14QDeadlineTimer23remainingTimeAsDurationEv
//static
/*void qm3901589018()*/ {
  ;
  (void) ((QDeadlineTimer*)this_)->remainingTimeAsDuration();
   auto xptr = (std::chrono::duration<long, std::ratio<1, 1000000000>> (QDeadlineTimer::*)() const ) &QDeadlineTimer::remainingTimeAsDuration;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:192
// [16] QPair<qint64, unsigned int> _q_data() const
// (12)qm4088929574 (30)_ZNK14QDeadlineTimer7_q_dataEv
//static
/*void qm4088929574()*/ {
  ;
  (void) ((QDeadlineTimer*)this_)->_q_data();
   auto xptr = (QPair<long long, unsigned int> (QDeadlineTimer::*)() const ) &QDeadlineTimer::_q_data;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QDeadlineTimerD2Ev(void *this_)*/ {
  delete (QDeadlineTimer*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdeadlinetimer
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
