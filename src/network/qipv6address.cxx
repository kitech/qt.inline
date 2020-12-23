//  header block begin

// /usr/include/qt/QtNetwork/qhostaddress.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhostaddress.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QIPv6Address is pure virtual: false false
// QIPv6Address has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qipv6address(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:60
// [1] quint8 & operator[](int) 
// (12)qm3948126922 (21)_ZN12QIPv6AddressixEi
//static
/*void qm3948126922(int index)*/ {
  int index = *(int*)this_;
  (void) ((QIPv6Address*)this_)->operator[](index);
  // auto xptr = (unsigned char & (QIPv6Address::*)(int) ) &QIPv6Address::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:61
// [1] quint8 operator[](int) const
// (12)qm2699029892 (22)_ZNK12QIPv6AddressixEi
//static
/*void qm2699029892(int index)*/ {
  int index = *(int*)this_;
  (void) ((QIPv6Address*)this_)->operator[](index);
  // auto xptr = (unsigned char (QIPv6Address::*)(int) const ) &QIPv6Address::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QIPv6AddressD2Ev(void *this_)*/ {
  delete (QIPv6Address*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qipv6address
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
