//  header block begin

// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideodeviceselectorcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoDeviceSelectorControl is pure virtual: true true
// QVideoDeviceSelectorControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvideodeviceselectorcontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:52
// [8] QString tr(const char *, const char *, int) 
// (12)qm3034644551 (43)_ZN27QVideoDeviceSelectorControl2trEPKcS1_i
//static
/*void qm3034644551(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QVideoDeviceSelectorControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QVideoDeviceSelectorControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN27QVideoDeviceSelectorControlD2Ev(void *this_)*/ {
  delete (QVideoDeviceSelectorControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvideodeviceselectorcontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
