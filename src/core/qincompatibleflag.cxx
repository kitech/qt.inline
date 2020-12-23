//  header block begin

// /usr/include/qt/QtCore/qflags.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qflags.h>
#include <QtCore>
#include "callback_inherit.h"

// QIncompatibleFlag is pure virtual: false false
// QIncompatibleFlag has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qincompatibleflag(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:78
// [-2] void QIncompatibleFlag(int) 
// (12)qm1089776055 (26)_ZN17QIncompatibleFlagC2Ei
/*void* qm1089776055(int i)*/{
  int i = *(int*)this_;
  this_ =  new QIncompatibleFlag(i);
}


/*void C_ZN17QIncompatibleFlagD2Ev(void *this_)*/ {
  delete (QIncompatibleFlag*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qincompatibleflag
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
