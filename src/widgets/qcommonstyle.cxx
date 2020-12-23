//  header block begin

// /usr/include/qt/QtWidgets/qcommonstyle.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcommonstyle.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QCommonStyle is pure virtual: false false
// QCommonStyle has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcommonstyle(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:52
// [8] QString tr(const char *, const char *, int) 
// (12)qm1390195814 (28)_ZN12QCommonStyle2trEPKcS1_i
//static
/*void qm1390195814(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCommonStyle::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCommonStyle::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommonstyle.h:55
// [-2] void QCommonStyle() 
// (12)qm2719626766 (21)_ZN12QCommonStyleC2Ev
/*void* qm2719626766()*/{
  ;
  this_ =  new QCommonStyle();
}


/*void C_ZN12QCommonStyleD2Ev(void *this_)*/ {
  delete (QCommonStyle*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcommonstyle
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
