//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextCursorEvent is pure virtual: false false
// QAccessibleTextCursorEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibletextcursorevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:748
// [-2] void QAccessibleTextCursorEvent(QObject *, int) 
// (12)qm3911566872 (44)_ZN26QAccessibleTextCursorEventC2EP7QObjecti
/*void* qm3911566872(QObject * obj, int cursorPos)*/{
  QObject * obj = *(QObject **)this_; int cursorPos = *(int*)this_;
  this_ =  new QAccessibleTextCursorEvent(obj, cursorPos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:754
// [-2] void QAccessibleTextCursorEvent(QAccessibleInterface *, int) 
// (12)qm1570575241 (58)_ZN26QAccessibleTextCursorEventC2EP20QAccessibleInterfacei
/*void* qm1570575241(QAccessibleInterface * iface, int cursorPos)*/{
  QAccessibleInterface * iface = *(QAccessibleInterface **)this_; int cursorPos = *(int*)this_;
  this_ =  new QAccessibleTextCursorEvent(iface, cursorPos);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:763
// [-2] void setCursorPosition(int) 
// (12)qm1320083515 (52)_ZN26QAccessibleTextCursorEvent17setCursorPositionEi
//static
/*void qm1320083515(int position)*/ {
  int position = *(int*)this_;
  (void) ((QAccessibleTextCursorEvent*)this_)->setCursorPosition(position);
   auto xptr = (void (QAccessibleTextCursorEvent::*)(int) ) &QAccessibleTextCursorEvent::setCursorPosition;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:764
// [4] int cursorPosition() const
// (12)qm3059588598 (50)_ZNK26QAccessibleTextCursorEvent14cursorPositionEv
//static
/*void qm3059588598()*/ {
  ;
  (void) ((QAccessibleTextCursorEvent*)this_)->cursorPosition();
   auto xptr = (int (QAccessibleTextCursorEvent::*)() const ) &QAccessibleTextCursorEvent::cursorPosition;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QAccessibleTextCursorEventD2Ev(void *this_)*/ {
  delete (QAccessibleTextCursorEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibletextcursorevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
