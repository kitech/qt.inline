//  header block begin

// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QPanGesture is pure virtual: false false
// QPanGesture has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpangesture(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:106
// [8] QString tr(const char *, const char *, int) 
// (12)qm1030570724 (27)_ZN11QPanGesture2trEPKcS1_i
//static
/*void qm1030570724(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QPanGesture::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QPanGesture::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:117
// [-2] void QPanGesture(QObject *) 
// (12)qm4125798389 (28)_ZN11QPanGestureC2EP7QObject
/*void* qm4125798389(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QPanGesture(parent);
}


/*void C_ZN11QPanGestureD2Ev(void *this_)*/ {
  delete (QPanGesture*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpangesture
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
