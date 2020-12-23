//  header block begin

// /usr/include/qt/QtMultimedia/qcameralockscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameralockscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraLocksControl is pure virtual: true true
// QCameraLocksControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcameralockscontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameralockscontrol.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm1446995745 (35)_ZN19QCameraLocksControl2trEPKcS1_i
//static
/*void qm1446995745(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraLocksControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraLocksControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QCameraLocksControlD2Ev(void *this_)*/ {
  delete (QCameraLocksControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcameralockscontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
