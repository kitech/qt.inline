//  header block begin

// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraflashcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraFlashControl is pure virtual: true true
// QCameraFlashControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcameraflashcontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraflashcontrol.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm2718205538 (35)_ZN19QCameraFlashControl2trEPKcS1_i
//static
/*void qm2718205538(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraFlashControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraFlashControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QCameraFlashControlD2Ev(void *this_)*/ {
  delete (QCameraFlashControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcameraflashcontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
