//  header block begin

// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QPinchGesture is pure virtual: false false
// QPinchGesture has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpinchgesture(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:136
// [8] QString tr(const char *, const char *, int) 
// (12)qm2169008415 (29)_ZN13QPinchGesture2trEPKcS1_i
//static
/*void qm2169008415(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QPinchGesture::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QPinchGesture::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:165
// [-2] void QPinchGesture(QObject *) 
// (12)qm3745096018 (30)_ZN13QPinchGestureC2EP7QObject
/*void* qm3745096018(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QPinchGesture(parent);
}


/*void C_ZN13QPinchGestureD2Ev(void *this_)*/ {
  delete (QPinchGesture*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpinchgesture
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
