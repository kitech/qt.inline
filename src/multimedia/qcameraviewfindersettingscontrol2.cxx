//  header block begin

// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraviewfindersettingscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraViewfinderSettingsControl2 is pure virtual: true true
// QCameraViewfinderSettingsControl2 has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcameraviewfindersettingscontrol2(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:85
// [8] QString tr(const char *, const char *, int) 
// (12)qm1532544277 (49)_ZN33QCameraViewfinderSettingsControl22trEPKcS1_i
//static
/*void qm1532544277(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraViewfinderSettingsControl2::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraViewfinderSettingsControl2::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN33QCameraViewfinderSettingsControl2D2Ev(void *this_)*/ {
  delete (QCameraViewfinderSettingsControl2*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcameraviewfindersettingscontrol2
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
