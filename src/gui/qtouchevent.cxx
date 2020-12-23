//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QTouchEvent is pure virtual: false false
// QTouchEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtouchevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1001
// [-2] void QTouchEvent(QEvent::Type, QTouchDevice *, Qt::KeyboardModifiers, Qt::TouchPointStates, const QList<QTouchEvent::TouchPoint> &) 
// (12)qm3797961829 (133)_ZN11QTouchEventC2EN6QEvent4TypeEP12QTouchDevice6QFlagsIN2Qt16KeyboardModifierEES4_INS5_15TouchPointStateEERK5QListINS_10TouchPointEE
/*void* qm3797961829(QEvent::Type eventType, QTouchDevice * device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<Qt::TouchPointState> touchPointStates, const QList<QTouchEvent::TouchPoint> & touchPoints)*/{
  QEvent::Type eventType = *(QEvent::Type*)this_; QTouchDevice * device = *(QTouchDevice **)this_; QFlags<Qt::KeyboardModifier> modifiers = *(QFlags<Qt::KeyboardModifier>*)this_; QFlags<Qt::TouchPointState> touchPointStates = *(QFlags<Qt::TouchPointState>*)this_; const QList<QTouchEvent::TouchPoint> & touchPoints = *(const QList<QTouchEvent::TouchPoint> *)this_;
  this_ =  new QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1008
// [8] QWindow * window() const
// (12)qm1699475197 (26)_ZNK11QTouchEvent6windowEv
//static
/*void qm1699475197()*/ {
  ;
  (void) ((QTouchEvent*)this_)->window();
   auto xptr = (QWindow * (QTouchEvent::*)() const ) &QTouchEvent::window;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1009
// [8] QObject * target() const
// (12)qm2254717300 (26)_ZNK11QTouchEvent6targetEv
//static
/*void qm2254717300()*/ {
  ;
  (void) ((QTouchEvent*)this_)->target();
   auto xptr = (QObject * (QTouchEvent::*)() const ) &QTouchEvent::target;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1013
// [4] Qt::TouchPointStates touchPointStates() const
// (12)qm3415826941 (37)_ZNK11QTouchEvent16touchPointStatesEv
//static
/*void qm3415826941()*/ {
  ;
  (void) ((QTouchEvent*)this_)->touchPointStates();
   auto xptr = (QFlags<Qt::TouchPointState> (QTouchEvent::*)() const ) &QTouchEvent::touchPointStates;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1014
// [8] const QList<QTouchEvent::TouchPoint> & touchPoints() const
// (12)qm2290922745 (32)_ZNK11QTouchEvent11touchPointsEv
//static
/*void qm2290922745()*/ {
  ;
  (void) ((QTouchEvent*)this_)->touchPoints();
   auto xptr = (const QList<QTouchEvent::TouchPoint> & (QTouchEvent::*)() const ) &QTouchEvent::touchPoints;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1015
// [8] QTouchDevice * device() const
// (11)qm314457760 (26)_ZNK11QTouchEvent6deviceEv
//static
/*void qm314457760()*/ {
  ;
  (void) ((QTouchEvent*)this_)->device();
   auto xptr = (QTouchDevice * (QTouchEvent::*)() const ) &QTouchEvent::device;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1018
// [-2] void setWindow(QWindow *) 
// (10)qm78640303 (36)_ZN11QTouchEvent9setWindowEP7QWindow
//static
/*void qm78640303(QWindow * awindow)*/ {
  QWindow * awindow = *(QWindow **)this_;
  (void) ((QTouchEvent*)this_)->setWindow(awindow);
   auto xptr = (void (QTouchEvent::*)(QWindow*) ) &QTouchEvent::setWindow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1019
// [-2] void setTarget(QObject *) 
// (12)qm1140822276 (36)_ZN11QTouchEvent9setTargetEP7QObject
//static
/*void qm1140822276(QObject * atarget)*/ {
  QObject * atarget = *(QObject **)this_;
  (void) ((QTouchEvent*)this_)->setTarget(atarget);
   auto xptr = (void (QTouchEvent::*)(QObject*) ) &QTouchEvent::setTarget;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1020
// [-2] void setTouchPointStates(Qt::TouchPointStates) 
// (11)qm905780129 (69)_ZN11QTouchEvent19setTouchPointStatesE6QFlagsIN2Qt15TouchPointStateEE
//static
/*void qm905780129(QFlags<Qt::TouchPointState> aTouchPointStates)*/ {
  QFlags<Qt::TouchPointState> aTouchPointStates = *(QFlags<Qt::TouchPointState>*)this_;
  (void) ((QTouchEvent*)this_)->setTouchPointStates(aTouchPointStates);
   auto xptr = (void (QTouchEvent::*)(QFlags<Qt::TouchPointState>) ) &QTouchEvent::setTouchPointStates;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1021
// [-2] void setTouchPoints(const QList<QTouchEvent::TouchPoint> &) 
// (11)qm794137791 (59)_ZN11QTouchEvent14setTouchPointsERK5QListINS_10TouchPointEE
//static
/*void qm794137791(const QList<QTouchEvent::TouchPoint> & atouchPoints)*/ {
  const QList<QTouchEvent::TouchPoint> & atouchPoints = *(const QList<QTouchEvent::TouchPoint> *)this_;
  (void) ((QTouchEvent*)this_)->setTouchPoints(atouchPoints);
   auto xptr = (void (QTouchEvent::*)(QList<QTouchEvent::TouchPoint> const&) ) &QTouchEvent::setTouchPoints;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1022
// [-2] void setDevice(QTouchDevice *) 
// (12)qm2921507580 (42)_ZN11QTouchEvent9setDeviceEP12QTouchDevice
//static
/*void qm2921507580(QTouchDevice * adevice)*/ {
  QTouchDevice * adevice = *(QTouchDevice **)this_;
  (void) ((QTouchEvent*)this_)->setDevice(adevice);
   auto xptr = (void (QTouchEvent::*)(QTouchDevice*) ) &QTouchEvent::setDevice;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QTouchEventD2Ev(void *this_)*/ {
  delete (QTouchEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtouchevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
