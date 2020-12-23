//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QScrollEvent is pure virtual: false false
// QScrollEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qscrollevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1081
// [-2] void QScrollEvent(const QPointF &, const QPointF &, QScrollEvent::ScrollState) 
// (12)qm3236102957 (50)_ZN12QScrollEventC2ERK7QPointFS2_NS_11ScrollStateE
/*void* qm3236102957(const QPointF & contentPos, const QPointF & overshoot, QScrollEvent::ScrollState scrollState)*/{
  const QPointF & contentPos = *(const QPointF *)this_; const QPointF & overshoot = *(const QPointF *)this_; QScrollEvent::ScrollState scrollState = *(QScrollEvent::ScrollState*)this_;
  this_ =  new QScrollEvent(contentPos, overshoot, scrollState);
}


/*void C_ZN12QScrollEventD2Ev(void *this_)*/ {
  delete (QScrollEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qscrollevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
