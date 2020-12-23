//  header block begin

// /usr/include/qt/QtMultimedia/qmediacontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediacontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaControl is pure virtual: false false
// QMediaControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediacontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontrol.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm1804098999 (29)_ZN13QMediaControl2trEPKcS1_i
//static
/*void qm1804098999(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMediaControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMediaControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QMediaControlD2Ev(void *this_)*/ {
  delete (QMediaControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediacontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
