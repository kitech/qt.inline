//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionRubberBand is pure virtual: false false
// QStyleOptionRubberBand has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionrubberband(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:512
// [-2] void QStyleOptionRubberBand() 
// (12)qm3721388284 (31)_ZN22QStyleOptionRubberBandC2Ev
/*void* qm3721388284()*/{
  ;
  this_ =  new QStyleOptionRubberBand();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:513
// [-2] void QStyleOptionRubberBand(const QStyleOptionRubberBand &) 
// (11)qm803694348 (34)_ZN22QStyleOptionRubberBandC2ERKS_
/*void* qm803694348(const QStyleOptionRubberBand & other)*/{
  const QStyleOptionRubberBand & other = *(const QStyleOptionRubberBand *)this_;
  this_ =  new QStyleOptionRubberBand(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:514
// [72] QStyleOptionRubberBand & operator=(const QStyleOptionRubberBand &) 
// (12)qm3027080006 (34)_ZN22QStyleOptionRubberBandaSERKS_
//static
/*void qm3027080006(const QStyleOptionRubberBand & arg0)*/ {
  const QStyleOptionRubberBand & arg0 = *(const QStyleOptionRubberBand *)this_;
  (void) ((QStyleOptionRubberBand*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionRubberBand & (QStyleOptionRubberBand::*)(QStyleOptionRubberBand const&) ) &QStyleOptionRubberBand::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QStyleOptionRubberBandD2Ev(void *this_)*/ {
  delete (QStyleOptionRubberBand*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionrubberband
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
