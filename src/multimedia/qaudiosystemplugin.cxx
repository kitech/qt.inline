//  header block begin

// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiosystemplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioSystemPlugin is pure virtual: true true
// QAudioSystemPlugin has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudiosystemplugin(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:71
// [8] QString tr(const char *, const char *, int) 
// (12)qm3152530864 (34)_ZN18QAudioSystemPlugin2trEPKcS1_i
//static
/*void qm3152530864(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAudioSystemPlugin::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAudioSystemPlugin::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QAudioSystemPluginD2Ev(void *this_)*/ {
  delete (QAudioSystemPlugin*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudiosystemplugin
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
