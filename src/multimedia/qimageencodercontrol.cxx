//  header block begin

// /usr/include/qt/QtMultimedia/qimageencodercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qimageencodercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QImageEncoderControl is pure virtual: true true
// QImageEncoderControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qimageencodercontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:59
// [8] QString tr(const char *, const char *, int) 
// (12)qm3405350061 (36)_ZN20QImageEncoderControl2trEPKcS1_i
//static
/*void qm3405350061(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QImageEncoderControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QImageEncoderControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QImageEncoderControlD2Ev(void *this_)*/ {
  delete (QImageEncoderControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qimageencodercontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
