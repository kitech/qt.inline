//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionSlider is pure virtual: false false
// QStyleOptionSlider has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionslider(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:556
// [-2] void QStyleOptionSlider() 
// (12)qm1361475227 (27)_ZN18QStyleOptionSliderC2Ev
/*void* qm1361475227()*/{
  ;
  this_ =  new QStyleOptionSlider();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:557
// [-2] void QStyleOptionSlider(const QStyleOptionSlider &) 
// (12)qm2628963685 (30)_ZN18QStyleOptionSliderC2ERKS_
/*void* qm2628963685(const QStyleOptionSlider & other)*/{
  const QStyleOptionSlider & other = *(const QStyleOptionSlider *)this_;
  this_ =  new QStyleOptionSlider(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:558
// [128] QStyleOptionSlider & operator=(const QStyleOptionSlider &) 
// (11)qm121125167 (30)_ZN18QStyleOptionSlideraSERKS_
//static
/*void qm121125167(const QStyleOptionSlider & arg0)*/ {
  const QStyleOptionSlider & arg0 = *(const QStyleOptionSlider *)this_;
  (void) ((QStyleOptionSlider*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionSlider & (QStyleOptionSlider::*)(QStyleOptionSlider const&) ) &QStyleOptionSlider::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QStyleOptionSliderD2Ev(void *this_)*/ {
  delete (QStyleOptionSlider*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionslider
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
