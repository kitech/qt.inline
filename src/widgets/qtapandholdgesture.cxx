//  header block begin

// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTapAndHoldGesture is pure virtual: false false
// QTapAndHoldGesture has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtapandholdgesture(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:254
// [8] QString tr(const char *, const char *, int) 
// (12)qm1719538027 (34)_ZN18QTapAndHoldGesture2trEPKcS1_i
//static
/*void qm1719538027(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTapAndHoldGesture::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTapAndHoldGesture::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:260
// [-2] void QTapAndHoldGesture(QObject *) 
// (12)qm2293637655 (35)_ZN18QTapAndHoldGestureC2EP7QObject
/*void* qm2293637655(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QTapAndHoldGesture(parent);
}


/*void C_ZN18QTapAndHoldGestureD2Ev(void *this_)*/ {
  delete (QTapAndHoldGesture*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtapandholdgesture
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
