//  header block begin

// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraimagecapturecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraImageCaptureControl is pure virtual: true true
// QCameraImageCaptureControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcameraimagecapturecontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm3420701005 (42)_ZN26QCameraImageCaptureControl2trEPKcS1_i
//static
/*void qm3420701005(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraImageCaptureControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraImageCaptureControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QCameraImageCaptureControlD2Ev(void *this_)*/ {
  delete (QCameraImageCaptureControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcameraimagecapturecontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
