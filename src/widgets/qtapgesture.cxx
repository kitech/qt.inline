//  header block begin

// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTapGesture is pure virtual: false false
// QTapGesture has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtapgesture(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:236
// [8] QString tr(const char *, const char *, int) 
// (12)qm2829806531 (27)_ZN11QTapGesture2trEPKcS1_i
//static
/*void qm2829806531(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTapGesture::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTapGesture::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:242
// [-2] void QTapGesture(QObject *) 
// (12)qm1349901495 (28)_ZN11QTapGestureC2EP7QObject
/*void* qm1349901495(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QTapGesture(parent);
}


/*void C_ZN11QTapGestureD2Ev(void *this_)*/ {
  delete (QTapGesture*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtapgesture
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
