//  header block begin

// /usr/include/qt/QtCore/qbitarray.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbitarray.h>
#include <QtCore>
#include "callback_inherit.h"

// QBitRef is pure virtual: false false
// QBitRef has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qbitref(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:152
// [-2] void QBitRef(const QBitRef &) 
// (12)qm3735318999 (18)_ZN7QBitRefC2ERKS_
/*void* qm3735318999(const QBitRef & arg0)*/{
  const QBitRef & arg0 = *(const QBitRef *)this_;
  this_ =  new QBitRef(arg0);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:154
// [1] bool operator!() const
// (12)qm1317312606 (16)_ZNK7QBitRefntEv
//static
/*void qm1317312606()*/ {
  ;
  (void) ((QBitRef*)this_)->operator!();
  // auto xptr = (bool (QBitRef::*)() const ) &QBitRef::operator!;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:155
// [16] QBitRef & operator=(const QBitRef &) 
// (12)qm1160676765 (18)_ZN7QBitRefaSERKS_
//static
/*void qm1160676765(const QBitRef & val)*/ {
  const QBitRef & val = *(const QBitRef *)this_;
  (void) ((QBitRef*)this_)->operator=(val);
  // auto xptr = (QBitRef & (QBitRef::*)(QBitRef const&) ) &QBitRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:156
// [16] QBitRef & operator=(bool) 
// (11)qm491934995 (15)_ZN7QBitRefaSEb
//static
/*void qm491934995(bool val)*/ {
  bool val = *(bool*)this_;
  (void) ((QBitRef*)this_)->operator=(val);
  // auto xptr = (QBitRef & (QBitRef::*)(bool) ) &QBitRef::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QBitRefD2Ev(void *this_)*/ {
  delete (QBitRef*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qbitref
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
