//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QTabletEvent is pure virtual: false false
// QTabletEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtabletevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:290
// [-2] void QTabletEvent(QEvent::Type, const QPointF &, const QPointF &, int, int, qreal, int, int, qreal, qreal, int, Qt::KeyboardModifiers, qint64, Qt::MouseButton, Qt::MouseButtons) 
// (12)qm3683562185 (114)_ZN12QTabletEventC2EN6QEvent4TypeERK7QPointFS4_iidiiddi6QFlagsIN2Qt16KeyboardModifierEExNS6_11MouseButtonES5_IS9_E
/*void* qm3683562185(QEvent::Type t, const QPointF & pos, const QPointF & globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, QFlags<Qt::KeyboardModifier> keyState, long long uniqueID, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons)*/{
  QEvent::Type t = *(QEvent::Type*)this_; const QPointF & pos = *(const QPointF *)this_; const QPointF & globalPos = *(const QPointF *)this_; int device = *(int*)this_; int pointerType = *(int*)this_; double pressure = *(double*)this_; int xTilt = *(int*)this_; int yTilt = *(int*)this_; double tangentialPressure = *(double*)this_; double rotation = *(double*)this_; int z = *(int*)this_; QFlags<Qt::KeyboardModifier> keyState = *(QFlags<Qt::KeyboardModifier>*)this_; long long uniqueID = *(long long*)this_; Qt::MouseButton button = *(Qt::MouseButton*)this_; QFlags<Qt::MouseButton> buttons = *(QFlags<Qt::MouseButton>*)this_;
  this_ =  new QTabletEvent(t, pos, globalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID, button, buttons);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:297
// [8] QPoint pos() const
// (12)qm3309057278 (24)_ZNK12QTabletEvent3posEv
//static
/*void qm3309057278()*/ {
  ;
  (void) ((QTabletEvent*)this_)->pos();
   auto xptr = (QPoint (QTabletEvent::*)() const ) &QTabletEvent::pos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:298
// [8] QPoint globalPos() const
// (12)qm1009676417 (30)_ZNK12QTabletEvent9globalPosEv
//static
/*void qm1009676417()*/ {
  ;
  (void) ((QTabletEvent*)this_)->globalPos();
   auto xptr = (QPoint (QTabletEvent::*)() const ) &QTabletEvent::globalPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:303
// [16] const QPointF & posF() const
// (10)qm36584780 (25)_ZNK12QTabletEvent4posFEv
//static
/*void qm36584780()*/ {
  ;
  (void) ((QTabletEvent*)this_)->posF();
   auto xptr = (const QPointF & (QTabletEvent::*)() const ) &QTabletEvent::posF;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:304
// [16] const QPointF & globalPosF() const
// (11)qm828281898 (32)_ZNK12QTabletEvent10globalPosFEv
//static
/*void qm828281898()*/ {
  ;
  (void) ((QTabletEvent*)this_)->globalPosF();
   auto xptr = (const QPointF & (QTabletEvent::*)() const ) &QTabletEvent::globalPosF;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:306
// [4] int x() const
// (10)qm40556910 (22)_ZNK12QTabletEvent1xEv
//static
/*void qm40556910()*/ {
  ;
  (void) ((QTabletEvent*)this_)->x();
   auto xptr = (int (QTabletEvent::*)() const ) &QTabletEvent::x;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:307
// [4] int y() const
// (10)qm61387609 (22)_ZNK12QTabletEvent1yEv
//static
/*void qm61387609()*/ {
  ;
  (void) ((QTabletEvent*)this_)->y();
   auto xptr = (int (QTabletEvent::*)() const ) &QTabletEvent::y;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:308
// [4] int globalX() const
// (12)qm4236764281 (28)_ZNK12QTabletEvent7globalXEv
//static
/*void qm4236764281()*/ {
  ;
  (void) ((QTabletEvent*)this_)->globalX();
   auto xptr = (int (QTabletEvent::*)() const ) &QTabletEvent::globalX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:309
// [4] int globalY() const
// (12)qm4249194062 (28)_ZNK12QTabletEvent7globalYEv
//static
/*void qm4249194062()*/ {
  ;
  (void) ((QTabletEvent*)this_)->globalY();
   auto xptr = (int (QTabletEvent::*)() const ) &QTabletEvent::globalY;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:318
// [4] QTabletEvent::TabletDevice deviceType() const
// (12)qm4015094125 (32)_ZNK12QTabletEvent10deviceTypeEv
//static
/*void qm4015094125()*/ {
  ;
  (void) ((QTabletEvent*)this_)->deviceType();
   auto xptr = (QTabletEvent::TabletDevice (QTabletEvent::*)() const ) &QTabletEvent::deviceType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:319
// [4] QTabletEvent::PointerType pointerType() const
// (12)qm4258482893 (33)_ZNK12QTabletEvent11pointerTypeEv
//static
/*void qm4258482893()*/ {
  ;
  (void) ((QTabletEvent*)this_)->pointerType();
   auto xptr = (QTabletEvent::PointerType (QTabletEvent::*)() const ) &QTabletEvent::pointerType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:320
// [8] qint64 uniqueId() const
// (12)qm4233833560 (29)_ZNK12QTabletEvent8uniqueIdEv
//static
/*void qm4233833560()*/ {
  ;
  (void) ((QTabletEvent*)this_)->uniqueId();
   auto xptr = (long long (QTabletEvent::*)() const ) &QTabletEvent::uniqueId;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:321
// [8] qreal pressure() const
// (10)qm15151895 (29)_ZNK12QTabletEvent8pressureEv
//static
/*void qm15151895()*/ {
  ;
  (void) ((QTabletEvent*)this_)->pressure();
   auto xptr = (double (QTabletEvent::*)() const ) &QTabletEvent::pressure;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:322
// [4] int z() const
// (10)qm32378112 (22)_ZNK12QTabletEvent1zEv
//static
/*void qm32378112()*/ {
  ;
  (void) ((QTabletEvent*)this_)->z();
   auto xptr = (int (QTabletEvent::*)() const ) &QTabletEvent::z;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:323
// [8] qreal tangentialPressure() const
// (12)qm2821733910 (40)_ZNK12QTabletEvent18tangentialPressureEv
//static
/*void qm2821733910()*/ {
  ;
  (void) ((QTabletEvent*)this_)->tangentialPressure();
   auto xptr = (double (QTabletEvent::*)() const ) &QTabletEvent::tangentialPressure;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:324
// [8] qreal rotation() const
// (11)qm268357830 (29)_ZNK12QTabletEvent8rotationEv
//static
/*void qm268357830()*/ {
  ;
  (void) ((QTabletEvent*)this_)->rotation();
   auto xptr = (double (QTabletEvent::*)() const ) &QTabletEvent::rotation;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:325
// [4] int xTilt() const
// (12)qm2984872827 (26)_ZNK12QTabletEvent5xTiltEv
//static
/*void qm2984872827()*/ {
  ;
  (void) ((QTabletEvent*)this_)->xTilt();
   auto xptr = (int (QTabletEvent::*)() const ) &QTabletEvent::xTilt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:326
// [4] int yTilt() const
// (11)qm396263631 (26)_ZNK12QTabletEvent5yTiltEv
//static
/*void qm396263631()*/ {
  ;
  (void) ((QTabletEvent*)this_)->yTilt();
   auto xptr = (int (QTabletEvent::*)() const ) &QTabletEvent::yTilt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QTabletEventD2Ev(void *this_)*/ {
  delete (QTabletEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtabletevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
