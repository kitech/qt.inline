//  header block begin

// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideorenderercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoRendererControl is pure virtual: true true
// QVideoRendererControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvideorenderercontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:50
// [8] QString tr(const char *, const char *, int) 
// (12)qm2524711339 (37)_ZN21QVideoRendererControl2trEPKcS1_i
//static
/*void qm2524711339(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QVideoRendererControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QVideoRendererControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QVideoRendererControlD2Ev(void *this_)*/ {
  delete (QVideoRendererControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvideorenderercontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
