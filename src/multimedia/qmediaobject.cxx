//  header block begin

// /usr/include/qt/QtMultimedia/qmediaobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaobject.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaObject is pure virtual: false false
// QMediaObject has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaobject(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm4082057572 (28)_ZN12QMediaObject2trEPKcS1_i
//static
/*void qm4082057572(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMediaObject::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMediaObject::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QMediaObjectD2Ev(void *this_)*/ {
  delete (QMediaObject*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaobject
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
