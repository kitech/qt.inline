//  header block begin

// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGesture is pure virtual: false false
// QGesture has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgesture(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:63
// [8] QString tr(const char *, const char *, int) 
// (12)qm3257856672 (23)_ZN8QGesture2trEPKcS1_i
//static
/*void qm3257856672(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGesture::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGesture::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:73
// [-2] void QGesture(QObject *) 
// (12)qm2225367500 (24)_ZN8QGestureC2EP7QObject
/*void* qm2225367500(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QGesture(parent);
}


/*void C_ZN8QGestureD2Ev(void *this_)*/ {
  delete (QGesture*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgesture
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
