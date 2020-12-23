//  header block begin

// /usr/include/qt/QtCore/qflags.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qflags.h>
#include <QtCore>
#include "callback_inherit.h"

// QFlag is pure virtual: false false
// QFlag has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qflag(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:55
// [-2] void QFlag(int) 
// (12)qm3296659139 (13)_ZN5QFlagC2Ei
/*void* qm3296659139(int value)*/{
  int value = *(int*)this_;
  this_ =  new QFlag(value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:66
// [-2] void QFlag(uint) 
// (12)qm1568036729 (13)_ZN5QFlagC2Ej
/*void* qm1568036729(unsigned int value)*/{
  unsigned int value = *(unsigned int*)this_;
  this_ =  new QFlag(value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:67
// [-2] void QFlag(short) 
// (11)qm958267321 (13)_ZN5QFlagC2Es
/*void* qm958267321(short value)*/{
  short value = *(short*)this_;
  this_ =  new QFlag(value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:68
// [-2] void QFlag(ushort) 
// (12)qm2809752090 (13)_ZN5QFlagC2Et
/*void* qm2809752090(unsigned short value)*/{
  unsigned short value = *(unsigned short*)this_;
  this_ =  new QFlag(value);
}


/*void C_ZN5QFlagD2Ev(void *this_)*/ {
  delete (QFlag*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qflag
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
