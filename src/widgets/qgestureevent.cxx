//  header block begin

// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGestureEvent is pure virtual: false false
// QGestureEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgestureevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:277
// [-2] void QGestureEvent(const QList<QGesture *> &) 
// (12)qm1237357802 (41)_ZN13QGestureEventC2ERK5QListIP8QGestureE
/*void* qm1237357802(const QList<QGesture *> & gestures)*/{
  const QList<QGesture *> & gestures = *(const QList<QGesture *> *)this_;
  this_ =  new QGestureEvent(gestures);
}


/*void C_ZN13QGestureEventD2Ev(void *this_)*/ {
  delete (QGestureEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgestureevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
