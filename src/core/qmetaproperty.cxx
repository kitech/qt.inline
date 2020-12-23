//  header block begin

// /usr/include/qt/QtCore/qmetaobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmetaobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QMetaProperty is pure virtual: false false
// QMetaProperty has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmetaproperty(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:249
// [-2] void QMetaProperty() 
// (12)qm3526748431 (22)_ZN13QMetaPropertyC2Ev
/*void* qm3526748431()*/{
  ;
  this_ =  new QMetaProperty();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:291
// [1] bool isValid() const
// (12)qm3755540615 (29)_ZNK13QMetaProperty7isValidEv
//static
/*void qm3755540615()*/ {
  ;
  (void) ((QMetaProperty*)this_)->isValid();
   auto xptr = (bool (QMetaProperty::*)() const ) &QMetaProperty::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:292
// [8] const QMetaObject * enclosingMetaObject() const
// (11)qm519359116 (42)_ZNK13QMetaProperty19enclosingMetaObjectEv
//static
/*void qm519359116()*/ {
  ;
  (void) ((QMetaProperty*)this_)->enclosingMetaObject();
   auto xptr = (const QMetaObject * (QMetaProperty::*)() const ) &QMetaProperty::enclosingMetaObject;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QMetaPropertyD2Ev(void *this_)*/ {
  delete (QMetaProperty*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmetaproperty
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
