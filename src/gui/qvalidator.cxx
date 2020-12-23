//  header block begin

// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvalidator.h>
#include <QtGui>
#include "callback_inherit.h"

// QValidator is pure virtual: true true
// QValidator has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvalidator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:62
// [8] QString tr(const char *, const char *, int) 
// (12)qm2482563430 (26)_ZN10QValidator2trEPKcS1_i
//static
/*void qm2482563430(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QValidator::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QValidator::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QValidatorD2Ev(void *this_)*/ {
  delete (QValidator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvalidator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
