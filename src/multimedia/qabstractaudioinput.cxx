//  header block begin

// /usr/include/qt/QtMultimedia/qaudiosystem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiosystem.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractAudioInput is pure virtual: true true
// QAbstractAudioInput has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractaudioinput(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:106
// [8] QString tr(const char *, const char *, int) 
// (12)qm2451828403 (35)_ZN19QAbstractAudioInput2trEPKcS1_i
//static
/*void qm2451828403(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAbstractAudioInput::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAbstractAudioInput::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QAbstractAudioInputD2Ev(void *this_)*/ {
  delete (QAbstractAudioInput*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractaudioinput
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
