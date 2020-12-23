//  header block begin

// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaaudioprobecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaAudioProbeControl is pure virtual: false false
// QMediaAudioProbeControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaaudioprobecontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:50
// [8] QString tr(const char *, const char *, int) 
// (12)qm3289135035 (39)_ZN23QMediaAudioProbeControl2trEPKcS1_i
//static
/*void qm3289135035(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMediaAudioProbeControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMediaAudioProbeControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN23QMediaAudioProbeControlD2Ev(void *this_)*/ {
  delete (QMediaAudioProbeControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaaudioprobecontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
