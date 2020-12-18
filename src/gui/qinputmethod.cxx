//  header block begin

// /usr/include/qt/QtGui/qinputmethod.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qinputmethod.h>
#include <QtGui>
#include "callback_inherit.h"

// QInputMethod is pure virtual: false false
// QInputMethod has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qinputmethod(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm3346515147 (28)_ZN12QInputMethod2trEPKcS1_i
//static
/*void qm3346515147(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QInputMethod::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QInputMethod::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qinputmethod
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
