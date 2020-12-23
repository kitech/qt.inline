//  header block begin

// /usr/include/qt/QtWidgets/qstyle.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyle.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyle is pure virtual: true true
// QStyle has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyle(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:66
// [8] QString tr(const char *, const char *, int) 
// (11)qm156927329 (21)_ZN6QStyle2trEPKcS1_i
//static
/*void qm156927329(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QStyle::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QStyle::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN6QStyleD2Ev(void *this_)*/ {
  delete (QStyle*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyle
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
