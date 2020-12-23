//  header block begin

// /usr/include/qt/QtQuick/qsgtexture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgtexture.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGDynamicTexture is pure virtual: true true
// QSGDynamicTexture has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgdynamictexture(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:147
// [8] QString tr(const char *, const char *, int) 
// (12)qm3874336010 (33)_ZN17QSGDynamicTexture2trEPKcS1_i
//static
/*void qm3874336010(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSGDynamicTexture::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSGDynamicTexture::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QSGDynamicTextureD2Ev(void *this_)*/ {
  delete (QSGDynamicTexture*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgdynamictexture
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
