//  header block begin

// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSwipeGesture is pure virtual: false false
// QSwipeGesture has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qswipegesture(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:209
// [8] QString tr(const char *, const char *, int) 
// (12)qm2219544171 (29)_ZN13QSwipeGesture2trEPKcS1_i
//static
/*void qm2219544171(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSwipeGesture::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSwipeGesture::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:221
// [-2] void QSwipeGesture(QObject *) 
// (12)qm2287212424 (30)_ZN13QSwipeGestureC2EP7QObject
/*void* qm2287212424(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QSwipeGesture(parent);
}


/*void C_ZN13QSwipeGestureD2Ev(void *this_)*/ {
  delete (QSwipeGesture*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qswipegesture
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
