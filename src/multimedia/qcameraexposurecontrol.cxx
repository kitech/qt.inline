//  header block begin

// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraexposurecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraExposureControl is pure virtual: true true
// QCameraExposureControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcameraexposurecontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:57
// [8] QString tr(const char *, const char *, int) 
// (12)qm3005617515 (38)_ZN22QCameraExposureControl2trEPKcS1_i
//static
/*void qm3005617515(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraExposureControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraExposureControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QCameraExposureControlD2Ev(void *this_)*/ {
  delete (QCameraExposureControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcameraexposurecontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
