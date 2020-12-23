//  header block begin

// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediastreamscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaStreamsControl is pure virtual: true true
// QMediaStreamsControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediastreamscontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm1259491142 (36)_ZN20QMediaStreamsControl2trEPKcS1_i
//static
/*void qm1259491142(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMediaStreamsControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMediaStreamsControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QMediaStreamsControlD2Ev(void *this_)*/ {
  delete (QMediaStreamsControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediastreamscontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
