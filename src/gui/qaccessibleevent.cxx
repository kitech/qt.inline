//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleEvent is pure virtual: false false
// QAccessibleEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibleevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:669
// [-2] void QAccessibleEvent(QObject *, QAccessible::Event) 
// (12)qm4060788250 (54)_ZN16QAccessibleEventC2EP7QObjectN11QAccessible5EventE
/*void* qm4060788250(QObject * obj, QAccessible::Event typ)*/{
  QObject * obj = *(QObject **)this_; QAccessible::Event typ = *(QAccessible::Event*)this_;
  this_ =  new QAccessibleEvent(obj, typ);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:685
// [-2] void QAccessibleEvent(QAccessibleInterface *, QAccessible::Event) 
// (11)qm389954600 (68)_ZN16QAccessibleEventC2EP20QAccessibleInterfaceN11QAccessible5EventE
/*void* qm389954600(QAccessibleInterface * iface, QAccessible::Event typ)*/{
  QAccessibleInterface * iface = *(QAccessibleInterface **)this_; QAccessible::Event typ = *(QAccessible::Event*)this_;
  this_ =  new QAccessibleEvent(iface, typ);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:702
// [4] QAccessible::Event type() const
// (11)qm539944376 (29)_ZNK16QAccessibleEvent4typeEv
//static
/*void qm539944376()*/ {
  ;
  (void) ((QAccessibleEvent*)this_)->type();
   auto xptr = (QAccessible::Event (QAccessibleEvent::*)() const ) &QAccessibleEvent::type;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:703
// [8] QObject * object() const
// (12)qm3349391201 (31)_ZNK16QAccessibleEvent6objectEv
//static
/*void qm3349391201()*/ {
  ;
  (void) ((QAccessibleEvent*)this_)->object();
   auto xptr = (QObject * (QAccessibleEvent::*)() const ) &QAccessibleEvent::object;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:706
// [-2] void setChild(int) 
// (11)qm755147813 (32)_ZN16QAccessibleEvent8setChildEi
//static
/*void qm755147813(int chld)*/ {
  int chld = *(int*)this_;
  (void) ((QAccessibleEvent*)this_)->setChild(chld);
   auto xptr = (void (QAccessibleEvent::*)(int) ) &QAccessibleEvent::setChild;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:707
// [4] int child() const
// (12)qm3585846945 (30)_ZNK16QAccessibleEvent5childEv
//static
/*void qm3585846945()*/ {
  ;
  (void) ((QAccessibleEvent*)this_)->child();
   auto xptr = (int (QAccessibleEvent::*)() const ) &QAccessibleEvent::child;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QAccessibleEventD2Ev(void *this_)*/ {
  delete (QAccessibleEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibleevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
