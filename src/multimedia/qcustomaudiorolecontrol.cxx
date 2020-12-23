//  header block begin

// /usr/include/qt/QtMultimedia/qcustomaudiorolecontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcustomaudiorolecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCustomAudioRoleControl is pure virtual: true true
// QCustomAudioRoleControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcustomaudiorolecontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcustomaudiorolecontrol.h:54
// [8] QString tr(const char *, const char *, int) 
// (12)qm2855711253 (39)_ZN23QCustomAudioRoleControl2trEPKcS1_i
//static
/*void qm2855711253(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCustomAudioRoleControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCustomAudioRoleControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN23QCustomAudioRoleControlD2Ev(void *this_)*/ {
  delete (QCustomAudioRoleControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcustomaudiorolecontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
