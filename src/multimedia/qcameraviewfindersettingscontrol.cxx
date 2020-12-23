//  header block begin

// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraviewfindersettingscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraViewfinderSettingsControl is pure virtual: true true
// QCameraViewfinderSettingsControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcameraviewfindersettingscontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm3999597872 (48)_ZN32QCameraViewfinderSettingsControl2trEPKcS1_i
//static
/*void qm3999597872(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraViewfinderSettingsControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraViewfinderSettingsControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN32QCameraViewfinderSettingsControlD2Ev(void *this_)*/ {
  delete (QCameraViewfinderSettingsControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcameraviewfindersettingscontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
