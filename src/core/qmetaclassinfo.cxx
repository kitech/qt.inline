//  header block begin

// /usr/include/qt/QtCore/qmetaobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmetaobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QMetaClassInfo is pure virtual: false false
// QMetaClassInfo has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmetaclassinfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:308
// [-2] void QMetaClassInfo() 
// (12)qm2695292227 (23)_ZN14QMetaClassInfoC2Ev
/*void* qm2695292227()*/{
  ;
  this_ =  new QMetaClassInfo();
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:311
// [8] const QMetaObject * enclosingMetaObject() const
// (11)qm575665439 (43)_ZNK14QMetaClassInfo19enclosingMetaObjectEv
//static
/*void qm575665439()*/ {
  ;
  (void) ((QMetaClassInfo*)this_)->enclosingMetaObject();
   auto xptr = (const QMetaObject * (QMetaClassInfo::*)() const ) &QMetaClassInfo::enclosingMetaObject;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QMetaClassInfoD2Ev(void *this_)*/ {
  delete (QMetaClassInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmetaclassinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
