//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QWheelEvent is pure virtual: false false
// QWheelEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwheelevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:207
// [-2] void QWheelEvent(QPointF, QPointF, QPoint, QPoint, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase, bool, Qt::MouseEventSource) 
// (11)qm541666615 (137)_ZN11QWheelEventC2E7QPointFS0_6QPointS1_6QFlagsIN2Qt11MouseButtonEES2_INS3_16KeyboardModifierEENS3_11ScrollPhaseEbNS3_16MouseEventSourceE
/*void* qm541666615(QPointF pos, QPointF globalPos, QPoint pixelDelta, QPoint angleDelta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source)*/{
  QPointF pos = *(QPointF*)this_; QPointF globalPos = *(QPointF*)this_; QPoint pixelDelta = *(QPoint*)this_; QPoint angleDelta = *(QPoint*)this_; QFlags<Qt::MouseButton> buttons = *(QFlags<Qt::MouseButton>*)this_; QFlags<Qt::KeyboardModifier> modifiers = *(QFlags<Qt::KeyboardModifier>*)this_; Qt::ScrollPhase phase = *(Qt::ScrollPhase*)this_; bool inverted = *(bool*)this_; Qt::MouseEventSource source = *(Qt::MouseEventSource*)this_;
  this_ =  new QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:213
// [8] QPoint pixelDelta() const
// (12)qm1776295009 (31)_ZNK11QWheelEvent10pixelDeltaEv
//static
/*void qm1776295009()*/ {
  ;
  (void) ((QWheelEvent*)this_)->pixelDelta();
   auto xptr = (QPoint (QWheelEvent::*)() const ) &QWheelEvent::pixelDelta;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:214
// [8] QPoint angleDelta() const
// (12)qm2989481828 (31)_ZNK11QWheelEvent10angleDeltaEv
//static
/*void qm2989481828()*/ {
  ;
  (void) ((QWheelEvent*)this_)->angleDelta();
   auto xptr = (QPoint (QWheelEvent::*)() const ) &QWheelEvent::angleDelta;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:243
// [16] QPointF position() const
// (12)qm1239393956 (28)_ZNK11QWheelEvent8positionEv
//static
/*void qm1239393956()*/ {
  ;
  (void) ((QWheelEvent*)this_)->position();
   auto xptr = (QPointF (QWheelEvent::*)() const ) &QWheelEvent::position;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:244
// [16] QPointF globalPosition() const
// (12)qm3973060595 (35)_ZNK11QWheelEvent14globalPositionEv
//static
/*void qm3973060595()*/ {
  ;
  (void) ((QWheelEvent*)this_)->globalPosition();
   auto xptr = (QPointF (QWheelEvent::*)() const ) &QWheelEvent::globalPosition;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:246
// [4] Qt::MouseButtons buttons() const
// (11)qm190444197 (27)_ZNK11QWheelEvent7buttonsEv
//static
/*void qm190444197()*/ {
  ;
  (void) ((QWheelEvent*)this_)->buttons();
   auto xptr = (QFlags<Qt::MouseButton> (QWheelEvent::*)() const ) &QWheelEvent::buttons;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:248
// [4] Qt::ScrollPhase phase() const
// (12)qm1944399320 (25)_ZNK11QWheelEvent5phaseEv
//static
/*void qm1944399320()*/ {
  ;
  (void) ((QWheelEvent*)this_)->phase();
   auto xptr = (Qt::ScrollPhase (QWheelEvent::*)() const ) &QWheelEvent::phase;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:249
// [1] bool inverted() const
// (11)qm643606857 (28)_ZNK11QWheelEvent8invertedEv
//static
/*void qm643606857()*/ {
  ;
  (void) ((QWheelEvent*)this_)->inverted();
   auto xptr = (bool (QWheelEvent::*)() const ) &QWheelEvent::inverted;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:251
// [4] Qt::MouseEventSource source() const
// (12)qm3721434326 (26)_ZNK11QWheelEvent6sourceEv
//static
/*void qm3721434326()*/ {
  ;
  (void) ((QWheelEvent*)this_)->source();
   auto xptr = (Qt::MouseEventSource (QWheelEvent::*)() const ) &QWheelEvent::source;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QWheelEventD2Ev(void *this_)*/ {
  delete (QWheelEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwheelevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
