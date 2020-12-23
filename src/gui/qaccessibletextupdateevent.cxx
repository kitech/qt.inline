//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextUpdateEvent is pure virtual: false false
// QAccessibleTextUpdateEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibletextupdateevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:865
// [-2] void QAccessibleTextUpdateEvent(QObject *, int, const QString &, const QString &) 
// (12)qm1543461352 (57)_ZN26QAccessibleTextUpdateEventC2EP7QObjectiRK7QStringS4_
/*void* qm1543461352(QObject * obj, int position, const QString & oldText, const QString & text)*/{
  QObject * obj = *(QObject **)this_; int position = *(int*)this_; const QString & oldText = *(const QString *)this_; const QString & text = *(const QString *)this_;
  this_ =  new QAccessibleTextUpdateEvent(obj, position, oldText, text);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:871
// [-2] void QAccessibleTextUpdateEvent(QAccessibleInterface *, int, const QString &, const QString &) 
// (12)qm2679859716 (71)_ZN26QAccessibleTextUpdateEventC2EP20QAccessibleInterfaceiRK7QStringS4_
/*void* qm2679859716(QAccessibleInterface * iface, int position, const QString & oldText, const QString & text)*/{
  QAccessibleInterface * iface = *(QAccessibleInterface **)this_; int position = *(int*)this_; const QString & oldText = *(const QString *)this_; const QString & text = *(const QString *)this_;
  this_ =  new QAccessibleTextUpdateEvent(iface, position, oldText, text);
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:880
// [8] QString textRemoved() const
// (11)qm223077281 (47)_ZNK26QAccessibleTextUpdateEvent11textRemovedEv
//static
/*void qm223077281()*/ {
  ;
  (void) ((QAccessibleTextUpdateEvent*)this_)->textRemoved();
   auto xptr = (QString (QAccessibleTextUpdateEvent::*)() const ) &QAccessibleTextUpdateEvent::textRemoved;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:883
// [8] QString textInserted() const
// (12)qm4174824275 (48)_ZNK26QAccessibleTextUpdateEvent12textInsertedEv
//static
/*void qm4174824275()*/ {
  ;
  (void) ((QAccessibleTextUpdateEvent*)this_)->textInserted();
   auto xptr = (QString (QAccessibleTextUpdateEvent::*)() const ) &QAccessibleTextUpdateEvent::textInserted;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:886
// [4] int changePosition() const
// (11)qm611643552 (50)_ZNK26QAccessibleTextUpdateEvent14changePositionEv
//static
/*void qm611643552()*/ {
  ;
  (void) ((QAccessibleTextUpdateEvent*)this_)->changePosition();
   auto xptr = (int (QAccessibleTextUpdateEvent::*)() const ) &QAccessibleTextUpdateEvent::changePosition;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QAccessibleTextUpdateEventD2Ev(void *this_)*/ {
  delete (QAccessibleTextUpdateEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibletextupdateevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
