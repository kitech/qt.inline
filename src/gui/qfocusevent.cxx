//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QFocusEvent is pure virtual: false false
// QFocusEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfocusevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:431
// [-2] void QFocusEvent(QEvent::Type, Qt::FocusReason) 
// (12)qm1572757467 (51)_ZN11QFocusEventC2EN6QEvent4TypeEN2Qt11FocusReasonE
/*void* qm1572757467(QEvent::Type type_, Qt::FocusReason reason)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_; Qt::FocusReason reason = *(Qt::FocusReason*)this_;
  this_ =  new QFocusEvent(type_, reason);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:434
// [1] bool gotFocus() const
// (12)qm3769686842 (28)_ZNK11QFocusEvent8gotFocusEv
//static
/*void qm3769686842()*/ {
  ;
  (void) ((QFocusEvent*)this_)->gotFocus();
   auto xptr = (bool (QFocusEvent::*)() const ) &QFocusEvent::gotFocus;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:435
// [1] bool lostFocus() const
// (12)qm2233785815 (29)_ZNK11QFocusEvent9lostFocusEv
//static
/*void qm2233785815()*/ {
  ;
  (void) ((QFocusEvent*)this_)->lostFocus();
   auto xptr = (bool (QFocusEvent::*)() const ) &QFocusEvent::lostFocus;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QFocusEventD2Ev(void *this_)*/ {
  delete (QFocusEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfocusevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
