//  header block begin

// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudioinputselectorcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioInputSelectorControl is pure virtual: true true
// QAudioInputSelectorControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudioinputselectorcontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioinputselectorcontrol.h:53
// [8] QString tr(const char *, const char *, int) 
// (11)qm442240780 (42)_ZN26QAudioInputSelectorControl2trEPKcS1_i
//static
/*void qm442240780(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAudioInputSelectorControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAudioInputSelectorControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QAudioInputSelectorControlD2Ev(void *this_)*/ {
  delete (QAudioInputSelectorControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudioinputselectorcontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
