//  header block begin

// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerafocuscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraFocusControl is pure virtual: true true
// QCameraFocusControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcamerafocuscontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm1110316972 (35)_ZN19QCameraFocusControl2trEPKcS1_i
//static
/*void qm1110316972(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraFocusControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraFocusControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QCameraFocusControlD2Ev(void *this_)*/ {
  delete (QCameraFocusControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcamerafocuscontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
