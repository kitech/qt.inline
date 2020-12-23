//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionToolBar is pure virtual: false false
// QStyleOptionToolBar has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptiontoolbar(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:330
// [-2] void QStyleOptionToolBar() 
// (12)qm2322711723 (28)_ZN19QStyleOptionToolBarC2Ev
/*void* qm2322711723()*/{
  ;
  this_ =  new QStyleOptionToolBar();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:331
// [-2] void QStyleOptionToolBar(const QStyleOptionToolBar &) 
// (12)qm2602901571 (31)_ZN19QStyleOptionToolBarC2ERKS_
/*void* qm2602901571(const QStyleOptionToolBar & other)*/{
  const QStyleOptionToolBar & other = *(const QStyleOptionToolBar *)this_;
  this_ =  new QStyleOptionToolBar(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:332
// [88] QStyleOptionToolBar & operator=(const QStyleOptionToolBar &) 
// (10)qm11523081 (31)_ZN19QStyleOptionToolBaraSERKS_
//static
/*void qm11523081(const QStyleOptionToolBar & arg0)*/ {
  const QStyleOptionToolBar & arg0 = *(const QStyleOptionToolBar *)this_;
  (void) ((QStyleOptionToolBar*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionToolBar & (QStyleOptionToolBar::*)(QStyleOptionToolBar const&) ) &QStyleOptionToolBar::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QStyleOptionToolBarD2Ev(void *this_)*/ {
  delete (QStyleOptionToolBar*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptiontoolbar
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
