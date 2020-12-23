//  header block begin

// /usr/include/qt/QtQuick/qquickimageprovider.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickimageprovider.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickTextureFactory is pure virtual: true true
// QQuickTextureFactory has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qquicktexturefactory(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:59
// [8] QString tr(const char *, const char *, int) 
// (11)qm328164827 (36)_ZN20QQuickTextureFactory2trEPKcS1_i
//static
/*void qm328164827(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQuickTextureFactory::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQuickTextureFactory::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QQuickTextureFactoryD2Ev(void *this_)*/ {
  delete (QQuickTextureFactory*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qquicktexturefactory
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
