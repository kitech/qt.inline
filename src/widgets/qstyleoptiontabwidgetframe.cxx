//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTabWidgetFrame is pure virtual: false false
// QStyleOptionTabWidgetFrame has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptiontabwidgetframe(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:173
// [-2] void QStyleOptionTabWidgetFrame() 
// (12)qm3248001666 (35)_ZN26QStyleOptionTabWidgetFrameC2Ev
/*void* qm3248001666()*/{
  ;
  this_ =  new QStyleOptionTabWidgetFrame();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:174
// [-2] void QStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame &) 
// (12)qm2576285033 (38)_ZN26QStyleOptionTabWidgetFrameC2ERKS_
/*void* qm2576285033(const QStyleOptionTabWidgetFrame & other)*/{
  const QStyleOptionTabWidgetFrame & other = *(const QStyleOptionTabWidgetFrame *)this_;
  this_ =  new QStyleOptionTabWidgetFrame(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:176
// [136] QStyleOptionTabWidgetFrame & operator=(const QStyleOptionTabWidgetFrame &) 
// (10)qm33818915 (38)_ZN26QStyleOptionTabWidgetFrameaSERKS_
//static
/*void qm33818915(const QStyleOptionTabWidgetFrame & arg0)*/ {
  const QStyleOptionTabWidgetFrame & arg0 = *(const QStyleOptionTabWidgetFrame *)this_;
  (void) ((QStyleOptionTabWidgetFrame*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionTabWidgetFrame & (QStyleOptionTabWidgetFrame::*)(QStyleOptionTabWidgetFrame const&) ) &QStyleOptionTabWidgetFrame::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QStyleOptionTabWidgetFrameD2Ev(void *this_)*/ {
  delete (QStyleOptionTabWidgetFrame*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptiontabwidgetframe
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
