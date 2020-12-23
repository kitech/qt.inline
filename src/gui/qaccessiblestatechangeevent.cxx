//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleStateChangeEvent is pure virtual: false false
// QAccessibleStateChangeEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessiblestatechangeevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:724
// [-2] void QAccessibleStateChangeEvent(QObject *, QAccessible::State) 
// (12)qm3058062153 (65)_ZN27QAccessibleStateChangeEventC2EP7QObjectN11QAccessible5StateE
/*void* qm3058062153(QObject * obj, QAccessible::State state)*/{
  QObject * obj = *(QObject **)this_; QAccessible::State state = *(QAccessible::State*)this_;
  this_ =  new QAccessibleStateChangeEvent(obj, state);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:729
// [-2] void QAccessibleStateChangeEvent(QAccessibleInterface *, QAccessible::State) 
// (12)qm3096715267 (79)_ZN27QAccessibleStateChangeEventC2EP20QAccessibleInterfaceN11QAccessible5StateE
/*void* qm3096715267(QAccessibleInterface * iface, QAccessible::State state)*/{
  QAccessibleInterface * iface = *(QAccessibleInterface **)this_; QAccessible::State state = *(QAccessible::State*)this_;
  this_ =  new QAccessibleStateChangeEvent(iface, state);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:736
// [8] QAccessible::State changedStates() const
// (12)qm1491817760 (50)_ZNK27QAccessibleStateChangeEvent13changedStatesEv
//static
/*void qm1491817760()*/ {
  ;
  (void) ((QAccessibleStateChangeEvent*)this_)->changedStates();
   auto xptr = (QAccessible::State (QAccessibleStateChangeEvent::*)() const ) &QAccessibleStateChangeEvent::changedStates;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN27QAccessibleStateChangeEventD2Ev(void *this_)*/ {
  delete (QAccessibleStateChangeEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessiblestatechangeevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
