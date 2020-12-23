//  header block begin

// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameracapturebufferformatcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraCaptureBufferFormatControl is pure virtual: true true
// QCameraCaptureBufferFormatControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcameracapturebufferformatcontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:53
// [8] QString tr(const char *, const char *, int) 
// (12)qm1157062301 (49)_ZN33QCameraCaptureBufferFormatControl2trEPKcS1_i
//static
/*void qm1157062301(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraCaptureBufferFormatControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraCaptureBufferFormatControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN33QCameraCaptureBufferFormatControlD2Ev(void *this_)*/ {
  delete (QCameraCaptureBufferFormatControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcameracapturebufferformatcontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
