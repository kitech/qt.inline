//  header block begin

// /usr/include/qt/QtCore/qelapsedtimer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qelapsedtimer.h>
#include <QtCore>
#include "callback_inherit.h"

// QElapsedTimer is pure virtual: false false
// QElapsedTimer has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qelapsedtimer(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:59
// [-2] void QElapsedTimer() 
// (12)qm3928532270 (22)_ZN13QElapsedTimerC2Ev
/*void* qm3928532270()*/{
  ;
  this_ =  new QElapsedTimer();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:81
// [1] bool operator==(const QElapsedTimer &) const
// (12)qm1092523062 (26)_ZNK13QElapsedTimereqERKS_
//static
/*void qm1092523062(const QElapsedTimer & other)*/ {
  const QElapsedTimer & other = *(const QElapsedTimer *)this_;
  (void) ((QElapsedTimer*)this_)->operator==(other);
  // auto xptr = (bool (QElapsedTimer::*)(QElapsedTimer const&) const ) &QElapsedTimer::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:83
// [1] bool operator!=(const QElapsedTimer &) const
// (12)qm3680403521 (26)_ZNK13QElapsedTimerneERKS_
//static
/*void qm3680403521(const QElapsedTimer & other)*/ {
  const QElapsedTimer & other = *(const QElapsedTimer *)this_;
  (void) ((QElapsedTimer*)this_)->operator!=(other);
  // auto xptr = (bool (QElapsedTimer::*)(QElapsedTimer const&) const ) &QElapsedTimer::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QElapsedTimerD2Ev(void *this_)*/ {
  delete (QElapsedTimer*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qelapsedtimer
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
