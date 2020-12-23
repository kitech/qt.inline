//  header block begin

// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraimageprocessingcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraImageProcessingControl is pure virtual: true true
// QCameraImageProcessingControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcameraimageprocessingcontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:56
// [8] QString tr(const char *, const char *, int) 
// (11)qm102313504 (45)_ZN29QCameraImageProcessingControl2trEPKcS1_i
//static
/*void qm102313504(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraImageProcessingControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraImageProcessingControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN29QCameraImageProcessingControlD2Ev(void *this_)*/ {
  delete (QCameraImageProcessingControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcameraimageprocessingcontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
