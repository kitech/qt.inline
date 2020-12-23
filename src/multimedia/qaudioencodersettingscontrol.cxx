//  header block begin

// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudioencodersettingscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioEncoderSettingsControl is pure virtual: true true
// QAudioEncoderSettingsControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudioencodersettingscontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:61
// [8] QString tr(const char *, const char *, int) 
// (12)qm2255957210 (44)_ZN28QAudioEncoderSettingsControl2trEPKcS1_i
//static
/*void qm2255957210(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAudioEncoderSettingsControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAudioEncoderSettingsControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN28QAudioEncoderSettingsControlD2Ev(void *this_)*/ {
  delete (QAudioEncoderSettingsControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudioencodersettingscontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
