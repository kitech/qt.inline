//  header block begin

// /usr/include/qt/QtMultimedia/qcameraexposure.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraexposure.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraExposure is pure virtual: false false
// QCameraExposure has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcameraexposure(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:54
// [8] QString tr(const char *, const char *, int) 
// (11)qm178084419 (31)_ZN15QCameraExposure2trEPKcS1_i
//static
/*void qm178084419(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraExposure::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraExposure::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qcameraexposure
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
