//  header block begin

// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerainfocontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraInfoControl is pure virtual: true true
// QCameraInfoControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcamerainfocontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfocontrol.h:52
// [8] QString tr(const char *, const char *, int) 
// (12)qm4155513336 (34)_ZN18QCameraInfoControl2trEPKcS1_i
//static
/*void qm4155513336(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraInfoControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraInfoControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QCameraInfoControlD2Ev(void *this_)*/ {
  delete (QCameraInfoControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcamerainfocontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
