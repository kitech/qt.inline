//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QEnterEvent is pure virtual: false false
// QEnterEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qenterevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:85
// [-2] void QEnterEvent(const QPointF &, const QPointF &, const QPointF &) 
// (12)qm3958615560 (35)_ZN11QEnterEventC2ERK7QPointFS2_S2_
/*void* qm3958615560(const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos)*/{
  const QPointF & localPos = *(const QPointF *)this_; const QPointF & windowPos = *(const QPointF *)this_; const QPointF & screenPos = *(const QPointF *)this_;
  this_ =  new QEnterEvent(localPos, windowPos, screenPos);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:89
// [8] QPoint pos() const
// (12)qm1500250415 (23)_ZNK11QEnterEvent3posEv
//static
/*void qm1500250415()*/ {
  ;
  (void) ((QEnterEvent*)this_)->pos();
   auto xptr = (QPoint (QEnterEvent::*)() const ) &QEnterEvent::pos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:90
// [8] QPoint globalPos() const
// (12)qm3012150987 (29)_ZNK11QEnterEvent9globalPosEv
//static
/*void qm3012150987()*/ {
  ;
  (void) ((QEnterEvent*)this_)->globalPos();
   auto xptr = (QPoint (QEnterEvent::*)() const ) &QEnterEvent::globalPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:91
// [4] int x() const
// (12)qm2184120850 (21)_ZNK11QEnterEvent1xEv
//static
/*void qm2184120850()*/ {
  ;
  (void) ((QEnterEvent*)this_)->x();
   auto xptr = (int (QEnterEvent::*)() const ) &QEnterEvent::x;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:92
// [4] int y() const
// (12)qm2213371941 (21)_ZNK11QEnterEvent1yEv
//static
/*void qm2213371941()*/ {
  ;
  (void) ((QEnterEvent*)this_)->y();
   auto xptr = (int (QEnterEvent::*)() const ) &QEnterEvent::y;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:93
// [4] int globalX() const
// (10)qm63807429 (27)_ZNK11QEnterEvent7globalXEv
//static
/*void qm63807429()*/ {
  ;
  (void) ((QEnterEvent*)this_)->globalX();
   auto xptr = (int (QEnterEvent::*)() const ) &QEnterEvent::globalX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:94
// [4] int globalY() const
// (10)qm34600434 (27)_ZNK11QEnterEvent7globalYEv
//static
/*void qm34600434()*/ {
  ;
  (void) ((QEnterEvent*)this_)->globalY();
   auto xptr = (int (QEnterEvent::*)() const ) &QEnterEvent::globalY;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:96
// [16] const QPointF & localPos() const
// (12)qm3582297681 (28)_ZNK11QEnterEvent8localPosEv
//static
/*void qm3582297681()*/ {
  ;
  (void) ((QEnterEvent*)this_)->localPos();
   auto xptr = (const QPointF & (QEnterEvent::*)() const ) &QEnterEvent::localPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:97
// [16] const QPointF & windowPos() const
// (11)qm325868933 (29)_ZNK11QEnterEvent9windowPosEv
//static
/*void qm325868933()*/ {
  ;
  (void) ((QEnterEvent*)this_)->windowPos();
   auto xptr = (const QPointF & (QEnterEvent::*)() const ) &QEnterEvent::windowPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:98
// [16] const QPointF & screenPos() const
// (12)qm2992636712 (29)_ZNK11QEnterEvent9screenPosEv
//static
/*void qm2992636712()*/ {
  ;
  (void) ((QEnterEvent*)this_)->screenPos();
   auto xptr = (const QPointF & (QEnterEvent::*)() const ) &QEnterEvent::screenPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QEnterEventD2Ev(void *this_)*/ {
  delete (QEnterEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qenterevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
