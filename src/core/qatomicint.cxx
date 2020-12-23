//  header block begin

// /usr/include/qt/QtCore/qatomic.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qatomic.h>
#include <QtCore>
#include "callback_inherit.h"

// QAtomicInt is pure virtual: false false
// QAtomicInt has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qatomicint(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qatomic.h:168
// [-2] void QAtomicInt(int) 
// (12)qm2182123644 (19)_ZN10QAtomicIntC2Ei
/*void* qm2182123644(int value)*/{
  int value = *(int*)this_;
  this_ =  new QAtomicInt(value);
}


/*void C_ZN10QAtomicIntD2Ev(void *this_)*/ {
  delete (QAtomicInt*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qatomicint
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
