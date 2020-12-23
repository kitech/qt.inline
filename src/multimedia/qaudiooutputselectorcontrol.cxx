//  header block begin

// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiooutputselectorcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioOutputSelectorControl is pure virtual: true true
// QAudioOutputSelectorControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudiooutputselectorcontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiooutputselectorcontrol.h:53
// [8] QString tr(const char *, const char *, int) 
// (12)qm4287167499 (43)_ZN27QAudioOutputSelectorControl2trEPKcS1_i
//static
/*void qm4287167499(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAudioOutputSelectorControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAudioOutputSelectorControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN27QAudioOutputSelectorControlD2Ev(void *this_)*/ {
  delete (QAudioOutputSelectorControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudiooutputselectorcontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
