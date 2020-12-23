//  header block begin

// /usr/include/qt/QtCore/qchar.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qchar.h>
#include <QtCore>
#include "callback_inherit.h"

// QLatin1Char is pure virtual: false false
// QLatin1Char has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlatin1char(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:53
// [-2] void QLatin1Char(char) 
// (11)qm442480508 (20)_ZN11QLatin1CharC2Ec
/*void* qm442480508(char c)*/{
  char c = *(char*)this_;
  this_ =  new QLatin1Char(c);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:54
// [1] char toLatin1() const
// (12)qm2591801816 (28)_ZNK11QLatin1Char8toLatin1Ev
//static
/*void qm2591801816()*/ {
  ;
  (void) ((QLatin1Char*)this_)->toLatin1();
   auto xptr = (char (QLatin1Char::*)() const ) &QLatin1Char::toLatin1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:55
// [2] ushort unicode() const
// (11)qm738437882 (27)_ZNK11QLatin1Char7unicodeEv
//static
/*void qm738437882()*/ {
  ;
  (void) ((QLatin1Char*)this_)->unicode();
   auto xptr = (unsigned short (QLatin1Char::*)() const ) &QLatin1Char::unicode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QLatin1CharD2Ev(void *this_)*/ {
  delete (QLatin1Char*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlatin1char
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
