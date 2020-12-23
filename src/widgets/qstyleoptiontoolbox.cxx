//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionToolBox is pure virtual: false false
// QStyleOptionToolBox has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptiontoolbox(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:492
// [-2] void QStyleOptionToolBox() 
// (12)qm4207656314 (28)_ZN19QStyleOptionToolBoxC2Ev
/*void* qm4207656314()*/{
  ;
  this_ =  new QStyleOptionToolBox();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:493
// [-2] void QStyleOptionToolBox(const QStyleOptionToolBox &) 
// (12)qm3257394969 (31)_ZN19QStyleOptionToolBoxC2ERKS_
/*void* qm3257394969(const QStyleOptionToolBox & other)*/{
  const QStyleOptionToolBox & other = *(const QStyleOptionToolBox *)this_;
  this_ =  new QStyleOptionToolBox(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:494
// [88] QStyleOptionToolBox & operator=(const QStyleOptionToolBox &) 
// (12)qm1504514899 (31)_ZN19QStyleOptionToolBoxaSERKS_
//static
/*void qm1504514899(const QStyleOptionToolBox & arg0)*/ {
  const QStyleOptionToolBox & arg0 = *(const QStyleOptionToolBox *)this_;
  (void) ((QStyleOptionToolBox*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionToolBox & (QStyleOptionToolBox::*)(QStyleOptionToolBox const&) ) &QStyleOptionToolBox::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QStyleOptionToolBoxD2Ev(void *this_)*/ {
  delete (QStyleOptionToolBox*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptiontoolbox
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
