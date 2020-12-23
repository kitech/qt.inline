//  header block begin

// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideowindowcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoWindowControl is pure virtual: true true
// QVideoWindowControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvideowindowcontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideowindowcontrol.h:55
// [8] QString tr(const char *, const char *, int) 
// (11)qm504728117 (35)_ZN19QVideoWindowControl2trEPKcS1_i
//static
/*void qm504728117(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QVideoWindowControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QVideoWindowControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QVideoWindowControlD2Ev(void *this_)*/ {
  delete (QVideoWindowControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvideowindowcontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
