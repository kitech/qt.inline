//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QActionEvent is pure virtual: false false
// QActionEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qactionevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:769
// [-2] void QActionEvent(int, QAction *, QAction *) 
// (12)qm1750880341 (33)_ZN12QActionEventC2EiP7QActionS1_
/*void* qm1750880341(int type_, QAction * action, QAction * before)*/{
  int type_ = *(int*)this_; QAction * action = *(QAction **)this_; QAction * before = *(QAction **)this_;
  this_ =  new QActionEvent(type_, action, before);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:772
// [8] QAction * action() const
// (11)qm388717719 (27)_ZNK12QActionEvent6actionEv
//static
/*void qm388717719()*/ {
  ;
  (void) ((QActionEvent*)this_)->action();
   auto xptr = (QAction * (QActionEvent::*)() const ) &QActionEvent::action;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:773
// [8] QAction * before() const
// (12)qm2500614365 (27)_ZNK12QActionEvent6beforeEv
//static
/*void qm2500614365()*/ {
  ;
  (void) ((QActionEvent*)this_)->before();
   auto xptr = (QAction * (QActionEvent::*)() const ) &QActionEvent::before;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QActionEventD2Ev(void *this_)*/ {
  delete (QActionEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qactionevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
