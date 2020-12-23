//  header block begin

// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediarecordercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaRecorderControl is pure virtual: true true
// QMediaRecorderControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediarecordercontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm2647007302 (37)_ZN21QMediaRecorderControl2trEPKcS1_i
//static
/*void qm2647007302(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMediaRecorderControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMediaRecorderControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QMediaRecorderControlD2Ev(void *this_)*/ {
  delete (QMediaRecorderControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediarecordercontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
