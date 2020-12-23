//  header block begin

// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameracapturedestinationcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraCaptureDestinationControl is pure virtual: true true
// QCameraCaptureDestinationControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcameracapturedestinationcontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturedestinationcontrol.h:53
// [8] QString tr(const char *, const char *, int) 
// (12)qm3744952223 (48)_ZN32QCameraCaptureDestinationControl2trEPKcS1_i
//static
/*void qm3744952223(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraCaptureDestinationControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraCaptureDestinationControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN32QCameraCaptureDestinationControlD2Ev(void *this_)*/ {
  delete (QCameraCaptureDestinationControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcameracapturedestinationcontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
