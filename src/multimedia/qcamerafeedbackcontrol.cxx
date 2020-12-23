//  header block begin

// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerafeedbackcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraFeedbackControl is pure virtual: true true
// QCameraFeedbackControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcamerafeedbackcontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm2085738178 (38)_ZN22QCameraFeedbackControl2trEPKcS1_i
//static
/*void qm2085738178(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraFeedbackControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraFeedbackControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QCameraFeedbackControlD2Ev(void *this_)*/ {
  delete (QCameraFeedbackControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcamerafeedbackcontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
