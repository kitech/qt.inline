//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTitleBar is pure virtual: false false
// QStyleOptionTitleBar has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptiontitlebar(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:646
// [-2] void QStyleOptionTitleBar() 
// (10)qm74783596 (29)_ZN20QStyleOptionTitleBarC2Ev
/*void* qm74783596()*/{
  ;
  this_ =  new QStyleOptionTitleBar();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:647
// [-2] void QStyleOptionTitleBar(const QStyleOptionTitleBar &) 
// (11)qm235453889 (32)_ZN20QStyleOptionTitleBarC2ERKS_
/*void* qm235453889(const QStyleOptionTitleBar & other)*/{
  const QStyleOptionTitleBar & other = *(const QStyleOptionTitleBar *)this_;
  this_ =  new QStyleOptionTitleBar(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:648
// [96] QStyleOptionTitleBar & operator=(const QStyleOptionTitleBar &) 
// (12)qm2508343691 (32)_ZN20QStyleOptionTitleBaraSERKS_
//static
/*void qm2508343691(const QStyleOptionTitleBar & arg0)*/ {
  const QStyleOptionTitleBar & arg0 = *(const QStyleOptionTitleBar *)this_;
  (void) ((QStyleOptionTitleBar*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionTitleBar & (QStyleOptionTitleBar::*)(QStyleOptionTitleBar const&) ) &QStyleOptionTitleBar::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QStyleOptionTitleBarD2Ev(void *this_)*/ {
  delete (QStyleOptionTitleBar*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptiontitlebar
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
