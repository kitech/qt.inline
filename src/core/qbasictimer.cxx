//  header block begin

// /usr/include/qt/QtCore/qbasictimer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbasictimer.h>
#include <QtCore>
#include "callback_inherit.h"

// QBasicTimer is pure virtual: false false
// QBasicTimer has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQBasicTimer_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQBasicTimer_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQBasicTimer_t qt_meta_stringdata_MyQBasicTimer = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQBasicTimer"
  },
  "MyQBasicTimer"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQBasicTimer[] = {
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
class Q_DECL_EXPORT MyQBasicTimer : public QBasicTimer {
public:
  virtual ~MyQBasicTimer() {}
// void QBasicTimer(const QBasicTimer &)
MyQBasicTimer(const QBasicTimer & arg0) : QBasicTimer(arg0) {}
// void QBasicTimer()
MyQBasicTimer() : QBasicTimer() {}
// void QBasicTimer(QBasicTimer &&)
MyQBasicTimer(QBasicTimer && other) : QBasicTimer(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qbasictimer(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:66
// [-2] void QBasicTimer() 
// (12)qm2325001196 (20)_ZN11QBasicTimerC2Ev
/*void* qm2325001196()*/{
  ;
  this_ =  new QBasicTimer();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:67
// [-2] void ~QBasicTimer() 
// (11)qm390302549 (20)_ZN11QBasicTimerD2Ev
/*void qm390302549 (void *this_)*/ {
  delete (QBasicTimer*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:69
// [-2] void QBasicTimer(QBasicTimer &&) 
// (12)qm2692897360 (22)_ZN11QBasicTimerC2EOS_
/*void* qm2692897360(QBasicTimer && other)*/{
  QBasicTimer && other =  static_cast<QBasicTimer &&>(*(QBasicTimer *)this_);
  this_ =  new QBasicTimer(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:73
// [4] QBasicTimer & operator=(QBasicTimer &&) 
// (12)qm1320460432 (22)_ZN11QBasicTimeraSEOS_
//static
/*void qm1320460432(QBasicTimer && other)*/ {
  QBasicTimer && other =  static_cast<QBasicTimer &&>(*(QBasicTimer *)this_);
  (void) ((QBasicTimer*)this_)->operator=(other);
  // auto xptr = (QBasicTimer & (QBasicTimer::*)(QBasicTimer&&) ) &QBasicTimer::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:79
// [-2] void swap(QBasicTimer &) 
// (11)qm521094785 (25)_ZN11QBasicTimer4swapERS_
//static
/*void qm521094785(QBasicTimer & other)*/ {
  QBasicTimer & other = *(QBasicTimer *)this_;
  (void) ((QBasicTimer*)this_)->swap(other);
   auto xptr = (void (QBasicTimer::*)(QBasicTimer&) ) &QBasicTimer::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:81
// [1] bool isActive() const
// (12)qm2480583690 (28)_ZNK11QBasicTimer8isActiveEv
//static
/*void qm2480583690()*/ {
  ;
  (void) ((QBasicTimer*)this_)->isActive();
   auto xptr = (bool (QBasicTimer::*)() const ) &QBasicTimer::isActive;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:82
// [4] int timerId() const
// (12)qm1495198804 (27)_ZNK11QBasicTimer7timerIdEv
//static
/*void qm1495198804()*/ {
  ;
  (void) ((QBasicTimer*)this_)->timerId();
   auto xptr = (int (QBasicTimer::*)() const ) &QBasicTimer::timerId;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qbasictimer
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
