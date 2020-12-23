//  header block begin

// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaplayercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaPlayerControl is pure virtual: true true
// QMediaPlayerControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaplayercontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm1545282650 (35)_ZN19QMediaPlayerControl2trEPKcS1_i
//static
/*void qm1545282650(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMediaPlayerControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMediaPlayerControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QMediaPlayerControlD2Ev(void *this_)*/ {
  delete (QMediaPlayerControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaplayercontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
