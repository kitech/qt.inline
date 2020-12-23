//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QScrollPrepareEvent is pure virtual: false false
// QScrollPrepareEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qscrollprepareevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1049
// [-2] void QScrollPrepareEvent(const QPointF &) 
// (12)qm3080891566 (37)_ZN19QScrollPrepareEventC2ERK7QPointF
/*void* qm3080891566(const QPointF & startPos)*/{
  const QPointF & startPos = *(const QPointF *)this_;
  this_ =  new QScrollPrepareEvent(startPos);
}


/*void C_ZN19QScrollPrepareEventD2Ev(void *this_)*/ {
  delete (QScrollPrepareEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qscrollprepareevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
