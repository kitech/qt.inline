//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionGroupBox is pure virtual: false false
// QStyleOptionGroupBox has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptiongroupbox(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:667
// [-2] void QStyleOptionGroupBox() 
// (12)qm1776856900 (29)_ZN20QStyleOptionGroupBoxC2Ev
/*void* qm1776856900()*/{
  ;
  this_ =  new QStyleOptionGroupBox();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:668
// [-2] void QStyleOptionGroupBox(const QStyleOptionGroupBox &) 
// (11)qm910241457 (32)_ZN20QStyleOptionGroupBoxC2ERKS_
/*void* qm910241457(const QStyleOptionGroupBox & other)*/{
  const QStyleOptionGroupBox & other = *(const QStyleOptionGroupBox *)this_;
  this_ =  new QStyleOptionGroupBox(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:669
// [120] QStyleOptionGroupBox & operator=(const QStyleOptionGroupBox &) 
// (12)qm2915818235 (32)_ZN20QStyleOptionGroupBoxaSERKS_
//static
/*void qm2915818235(const QStyleOptionGroupBox & arg0)*/ {
  const QStyleOptionGroupBox & arg0 = *(const QStyleOptionGroupBox *)this_;
  (void) ((QStyleOptionGroupBox*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionGroupBox & (QStyleOptionGroupBox::*)(QStyleOptionGroupBox const&) ) &QStyleOptionGroupBox::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QStyleOptionGroupBoxD2Ev(void *this_)*/ {
  delete (QStyleOptionGroupBox*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptiongroupbox
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
