//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QResizeEvent is pure virtual: false false
// QResizeEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qresizeevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:505
// [-2] void QResizeEvent(const QSize &, const QSize &) 
// (11)qm194315494 (31)_ZN12QResizeEventC2ERK5QSizeS2_
/*void* qm194315494(const QSize & size, const QSize & oldSize)*/{
  const QSize & size = *(const QSize *)this_; const QSize & oldSize = *(const QSize *)this_;
  this_ =  new QResizeEvent(size, oldSize);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:508
// [8] const QSize & size() const
// (11)qm334655610 (25)_ZNK12QResizeEvent4sizeEv
//static
/*void qm334655610()*/ {
  ;
  (void) ((QResizeEvent*)this_)->size();
   auto xptr = (const QSize & (QResizeEvent::*)() const ) &QResizeEvent::size;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:509
// [8] const QSize & oldSize() const
// (12)qm3805921887 (28)_ZNK12QResizeEvent7oldSizeEv
//static
/*void qm3805921887()*/ {
  ;
  (void) ((QResizeEvent*)this_)->oldSize();
   auto xptr = (const QSize & (QResizeEvent::*)() const ) &QResizeEvent::oldSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QResizeEventD2Ev(void *this_)*/ {
  delete (QResizeEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qresizeevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
