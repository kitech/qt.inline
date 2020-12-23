//  header block begin

// /usr/include/qt/QtGui/qstylehints.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstylehints.h>
#include <QtGui>
#include "callback_inherit.h"

// QStyleHints is pure virtual: false false
// QStyleHints has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstylehints(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:54
// [8] QString tr(const char *, const char *, int) 
// (11)qm221762431 (27)_ZN11QStyleHints2trEPKcS1_i
//static
/*void qm221762431(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QStyleHints::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QStyleHints::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QStyleHintsD2Ev(void *this_)*/ {
  delete (QStyleHints*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstylehints
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
