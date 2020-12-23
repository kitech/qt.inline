//  header block begin

// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerazoomcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraZoomControl is pure virtual: true true
// QCameraZoomControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcamerazoomcontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:53
// [8] QString tr(const char *, const char *, int) 
// (12)qm1961727586 (34)_ZN18QCameraZoomControl2trEPKcS1_i
//static
/*void qm1961727586(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraZoomControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraZoomControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QCameraZoomControlD2Ev(void *this_)*/ {
  delete (QCameraZoomControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcamerazoomcontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
