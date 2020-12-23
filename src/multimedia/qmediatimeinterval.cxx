//  header block begin

// /usr/include/qt/QtMultimedia/qmediatimerange.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediatimerange.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaTimeInterval is pure virtual: false false
// QMediaTimeInterval has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediatimeinterval(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:55
// [-2] void QMediaTimeInterval() 
// (12)qm1081797096 (27)_ZN18QMediaTimeIntervalC2Ev
/*void* qm1081797096()*/{
  ;
  this_ =  new QMediaTimeInterval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:56
// [-2] void QMediaTimeInterval(qint64, qint64) 
// (12)qm3167628206 (28)_ZN18QMediaTimeIntervalC2Exx
/*void* qm3167628206(long long start, long long end_)*/{
  long long start = *(long long*)this_; long long end_ = *(long long*)this_;
  this_ =  new QMediaTimeInterval(start, end_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:58
// [-2] void QMediaTimeInterval(const QMediaTimeInterval &) 
// (12)qm1577160823 (30)_ZN18QMediaTimeIntervalC2ERKS_
/*void* qm1577160823(const QMediaTimeInterval & arg0)*/{
  const QMediaTimeInterval & arg0 = *(const QMediaTimeInterval *)this_;
  this_ =  new QMediaTimeInterval(arg0);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:59
// [16] QMediaTimeInterval & operator=(const QMediaTimeInterval &) 
// (12)qm3314246717 (30)_ZN18QMediaTimeIntervalaSERKS_
//static
/*void qm3314246717(const QMediaTimeInterval & arg0)*/ {
  const QMediaTimeInterval & arg0 = *(const QMediaTimeInterval *)this_;
  (void) ((QMediaTimeInterval*)this_)->operator=(arg0);
  // auto xptr = (QMediaTimeInterval & (QMediaTimeInterval::*)(QMediaTimeInterval const&) ) &QMediaTimeInterval::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:60
// [-2] void QMediaTimeInterval(QMediaTimeInterval &&) 
// (12)qm1330703696 (29)_ZN18QMediaTimeIntervalC2EOS_
/*void* qm1330703696(QMediaTimeInterval && arg0)*/{
  QMediaTimeInterval && arg0 =  static_cast<QMediaTimeInterval &&>(*(QMediaTimeInterval *)this_);
  this_ =  new QMediaTimeInterval(arg0);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:61
// [16] QMediaTimeInterval & operator=(QMediaTimeInterval &&) 
// (12)qm2707822480 (29)_ZN18QMediaTimeIntervalaSEOS_
//static
/*void qm2707822480(QMediaTimeInterval && arg0)*/ {
  QMediaTimeInterval && arg0 =  static_cast<QMediaTimeInterval &&>(*(QMediaTimeInterval *)this_);
  (void) ((QMediaTimeInterval*)this_)->operator=(arg0);
  // auto xptr = (QMediaTimeInterval & (QMediaTimeInterval::*)(QMediaTimeInterval&&) ) &QMediaTimeInterval::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QMediaTimeIntervalD2Ev(void *this_)*/ {
  delete (QMediaTimeInterval*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediatimeinterval
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
