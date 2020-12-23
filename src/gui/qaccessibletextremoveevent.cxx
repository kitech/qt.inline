//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextRemoveEvent is pure virtual: false false
// QAccessibleTextRemoveEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibletextremoveevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:835
// [-2] void QAccessibleTextRemoveEvent(QObject *, int, const QString &) 
// (12)qm3295745994 (54)_ZN26QAccessibleTextRemoveEventC2EP7QObjectiRK7QString
/*void* qm3295745994(QObject * obj, int position, const QString & text)*/{
  QObject * obj = *(QObject **)this_; int position = *(int*)this_; const QString & text = *(const QString *)this_;
  this_ =  new QAccessibleTextRemoveEvent(obj, position, text);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:841
// [-2] void QAccessibleTextRemoveEvent(QAccessibleInterface *, int, const QString &) 
// (12)qm1482743019 (68)_ZN26QAccessibleTextRemoveEventC2EP20QAccessibleInterfaceiRK7QString
/*void* qm1482743019(QAccessibleInterface * iface, int position, const QString & text)*/{
  QAccessibleInterface * iface = *(QAccessibleInterface **)this_; int position = *(int*)this_; const QString & text = *(const QString *)this_;
  this_ =  new QAccessibleTextRemoveEvent(iface, position, text);
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:850
// [8] QString textRemoved() const
// (12)qm1134740569 (47)_ZNK26QAccessibleTextRemoveEvent11textRemovedEv
//static
/*void qm1134740569()*/ {
  ;
  (void) ((QAccessibleTextRemoveEvent*)this_)->textRemoved();
   auto xptr = (QString (QAccessibleTextRemoveEvent::*)() const ) &QAccessibleTextRemoveEvent::textRemoved;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:853
// [4] int changePosition() const
// (12)qm2628794943 (50)_ZNK26QAccessibleTextRemoveEvent14changePositionEv
//static
/*void qm2628794943()*/ {
  ;
  (void) ((QAccessibleTextRemoveEvent*)this_)->changePosition();
   auto xptr = (int (QAccessibleTextRemoveEvent::*)() const ) &QAccessibleTextRemoveEvent::changePosition;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QAccessibleTextRemoveEventD2Ev(void *this_)*/ {
  delete (QAccessibleTextRemoveEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibletextremoveevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
