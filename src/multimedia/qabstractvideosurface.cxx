//  header block begin

// /usr/include/qt/QtMultimedia/qabstractvideosurface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractvideosurface.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractVideoSurface is pure virtual: true true
// QAbstractVideoSurface has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractvideosurface(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideosurface.h:55
// [8] QString tr(const char *, const char *, int) 
// (11)qm820475499 (37)_ZN21QAbstractVideoSurface2trEPKcS1_i
//static
/*void qm820475499(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAbstractVideoSurface::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAbstractVideoSurface::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QAbstractVideoSurfaceD2Ev(void *this_)*/ {
  delete (QAbstractVideoSurface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractvideosurface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
