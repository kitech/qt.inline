//  header block begin

// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiorolecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioRoleControl is pure virtual: true true
// QAudioRoleControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudiorolecontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorolecontrol.h:53
// [8] QString tr(const char *, const char *, int) 
// (11)qm144731223 (33)_ZN17QAudioRoleControl2trEPKcS1_i
//static
/*void qm144731223(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAudioRoleControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAudioRoleControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QAudioRoleControlD2Ev(void *this_)*/ {
  delete (QAudioRoleControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudiorolecontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
