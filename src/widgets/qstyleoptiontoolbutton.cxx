//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionToolButton is pure virtual: false false
// QStyleOptionToolButton has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptiontoolbutton(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:604
// [-2] void QStyleOptionToolButton() 
// (12)qm1506023081 (31)_ZN22QStyleOptionToolButtonC2Ev
/*void* qm1506023081()*/{
  ;
  this_ =  new QStyleOptionToolButton();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:605
// [-2] void QStyleOptionToolButton(const QStyleOptionToolButton &) 
// (12)qm2426672224 (34)_ZN22QStyleOptionToolButtonC2ERKS_
/*void* qm2426672224(const QStyleOptionToolButton & other)*/{
  const QStyleOptionToolButton & other = *(const QStyleOptionToolButton *)this_;
  this_ =  new QStyleOptionToolButton(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:606
// [136] QStyleOptionToolButton & operator=(const QStyleOptionToolButton &) 
// (11)qm187621418 (34)_ZN22QStyleOptionToolButtonaSERKS_
//static
/*void qm187621418(const QStyleOptionToolButton & arg0)*/ {
  const QStyleOptionToolButton & arg0 = *(const QStyleOptionToolButton *)this_;
  (void) ((QStyleOptionToolButton*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionToolButton & (QStyleOptionToolButton::*)(QStyleOptionToolButton const&) ) &QStyleOptionToolButton::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QStyleOptionToolButtonD2Ev(void *this_)*/ {
  delete (QStyleOptionToolButton*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptiontoolbutton
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
