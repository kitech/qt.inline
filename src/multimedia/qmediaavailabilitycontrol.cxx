//  header block begin

// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaavailabilitycontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaAvailabilityControl is pure virtual: true true
// QMediaAvailabilityControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaavailabilitycontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaavailabilitycontrol.h:54
// [8] QString tr(const char *, const char *, int) 
// (12)qm1875060129 (41)_ZN25QMediaAvailabilityControl2trEPKcS1_i
//static
/*void qm1875060129(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMediaAvailabilityControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMediaAvailabilityControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN25QMediaAvailabilityControlD2Ev(void *this_)*/ {
  delete (QMediaAvailabilityControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaavailabilitycontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
