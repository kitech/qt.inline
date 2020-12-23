//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QMoveEvent is pure virtual: false false
// QMoveEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmoveevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:463
// [-2] void QMoveEvent(const QPoint &, const QPoint &) 
// (12)qm2231906405 (30)_ZN10QMoveEventC2ERK6QPointS2_
/*void* qm2231906405(const QPoint & pos, const QPoint & oldPos)*/{
  const QPoint & pos = *(const QPoint *)this_; const QPoint & oldPos = *(const QPoint *)this_;
  this_ =  new QMoveEvent(pos, oldPos);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:466
// [8] const QPoint & pos() const
// (12)qm3400673504 (22)_ZNK10QMoveEvent3posEv
//static
/*void qm3400673504()*/ {
  ;
  (void) ((QMoveEvent*)this_)->pos();
   auto xptr = (const QPoint & (QMoveEvent::*)() const ) &QMoveEvent::pos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:467
// [8] const QPoint & oldPos() const
// (11)qm157844131 (25)_ZNK10QMoveEvent6oldPosEv
//static
/*void qm157844131()*/ {
  ;
  (void) ((QMoveEvent*)this_)->oldPos();
   auto xptr = (const QPoint & (QMoveEvent::*)() const ) &QMoveEvent::oldPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QMoveEventD2Ev(void *this_)*/ {
  delete (QMoveEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmoveevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
