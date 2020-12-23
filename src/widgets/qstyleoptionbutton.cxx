//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionButton is pure virtual: false false
// QStyleOptionButton has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionbutton(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:253
// [-2] void QStyleOptionButton() 
// (11)qm499288502 (27)_ZN18QStyleOptionButtonC2Ev
/*void* qm499288502()*/{
  ;
  this_ =  new QStyleOptionButton();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:254
// [-2] void QStyleOptionButton(const QStyleOptionButton &) 
// (12)qm2556740489 (30)_ZN18QStyleOptionButtonC2ERKS_
/*void* qm2556740489(const QStyleOptionButton & other)*/{
  const QStyleOptionButton & other = *(const QStyleOptionButton *)this_;
  this_ =  new QStyleOptionButton(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:255
// [96] QStyleOptionButton & operator=(const QStyleOptionButton &) 
// (10)qm65943491 (30)_ZN18QStyleOptionButtonaSERKS_
//static
/*void qm65943491(const QStyleOptionButton & arg0)*/ {
  const QStyleOptionButton & arg0 = *(const QStyleOptionButton *)this_;
  (void) ((QStyleOptionButton*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionButton & (QStyleOptionButton::*)(QStyleOptionButton const&) ) &QStyleOptionButton::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QStyleOptionButtonD2Ev(void *this_)*/ {
  delete (QStyleOptionButton*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionbutton
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
