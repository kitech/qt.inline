//  header block begin

// /usr/include/qt/QtGui/qscreen.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qscreen.h>
#include <QtGui>
#include "callback_inherit.h"

// QScreen is pure virtual: false false
// QScreen has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qscreen(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qscreen.h:68
// [8] QString tr(const char *, const char *, int) 
// (12)qm1638579003 (22)_ZN7QScreen2trEPKcS1_i
//static
/*void qm1638579003(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QScreen::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QScreen::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QScreenD2Ev(void *this_)*/ {
  delete (QScreen*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qscreen
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
