//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionProgressBar is pure virtual: false false
// QStyleOptionProgressBar has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionprogressbar(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:358
// [-2] void QStyleOptionProgressBar() 
// (11)qm997170462 (32)_ZN23QStyleOptionProgressBarC2Ev
/*void* qm997170462()*/{
  ;
  this_ =  new QStyleOptionProgressBar();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:359
// [-2] void QStyleOptionProgressBar(const QStyleOptionProgressBar &) 
// (12)qm3385247607 (35)_ZN23QStyleOptionProgressBarC2ERKS_
/*void* qm3385247607(const QStyleOptionProgressBar & other)*/{
  const QStyleOptionProgressBar & other = *(const QStyleOptionProgressBar *)this_;
  this_ =  new QStyleOptionProgressBar(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:360
// [104] QStyleOptionProgressBar & operator=(const QStyleOptionProgressBar &) 
// (12)qm1380725565 (35)_ZN23QStyleOptionProgressBaraSERKS_
//static
/*void qm1380725565(const QStyleOptionProgressBar & arg0)*/ {
  const QStyleOptionProgressBar & arg0 = *(const QStyleOptionProgressBar *)this_;
  (void) ((QStyleOptionProgressBar*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionProgressBar & (QStyleOptionProgressBar::*)(QStyleOptionProgressBar const&) ) &QStyleOptionProgressBar::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN23QStyleOptionProgressBarD2Ev(void *this_)*/ {
  delete (QStyleOptionProgressBar*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionprogressbar
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
