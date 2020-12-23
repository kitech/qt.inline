//  header block begin

// /usr/include/qt/QtQuick/qquickimageprovider.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickimageprovider.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickImageResponse is pure virtual: true true
// QQuickImageResponse has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qquickimageresponse(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:76
// [8] QString tr(const char *, const char *, int) 
// (12)qm1928561311 (35)_ZN19QQuickImageResponse2trEPKcS1_i
//static
/*void qm1928561311(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQuickImageResponse::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQuickImageResponse::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QQuickImageResponseD2Ev(void *this_)*/ {
  delete (QQuickImageResponse*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qquickimageresponse
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
