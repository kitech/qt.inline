//  header block begin

// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediavideoprobecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaVideoProbeControl is pure virtual: false false
// QMediaVideoProbeControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediavideoprobecontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediavideoprobecontrol.h:52
// [8] QString tr(const char *, const char *, int) 
// (12)qm4049328878 (39)_ZN23QMediaVideoProbeControl2trEPKcS1_i
//static
/*void qm4049328878(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMediaVideoProbeControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMediaVideoProbeControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN23QMediaVideoProbeControlD2Ev(void *this_)*/ {
  delete (QMediaVideoProbeControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediavideoprobecontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
