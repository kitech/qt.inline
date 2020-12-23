//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionFrame is pure virtual: false false
// QStyleOptionFrame has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionframe(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:144
// [-2] void QStyleOptionFrame() 
// (12)qm1913315629 (26)_ZN17QStyleOptionFrameC2Ev
/*void* qm1913315629()*/{
  ;
  this_ =  new QStyleOptionFrame();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:145
// [-2] void QStyleOptionFrame(const QStyleOptionFrame &) 
// (12)qm1371095002 (29)_ZN17QStyleOptionFrameC2ERKS_
/*void* qm1371095002(const QStyleOptionFrame & other)*/{
  const QStyleOptionFrame & other = *(const QStyleOptionFrame *)this_;
  this_ =  new QStyleOptionFrame(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:146
// [80] QStyleOptionFrame & operator=(const QStyleOptionFrame &) 
// (12)qm3392392080 (29)_ZN17QStyleOptionFrameaSERKS_
//static
/*void qm3392392080(const QStyleOptionFrame & arg0)*/ {
  const QStyleOptionFrame & arg0 = *(const QStyleOptionFrame *)this_;
  (void) ((QStyleOptionFrame*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionFrame & (QStyleOptionFrame::*)(QStyleOptionFrame const&) ) &QStyleOptionFrame::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QStyleOptionFrameD2Ev(void *this_)*/ {
  delete (QStyleOptionFrame*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionframe
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
