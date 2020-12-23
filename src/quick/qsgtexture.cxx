//  header block begin

// /usr/include/qt/QtQuick/qsgtexture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgtexture.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGTexture is pure virtual: true true
// QSGTexture has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgtexture(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm3535964472 (26)_ZN10QSGTexture2trEPKcS1_i
//static
/*void qm3535964472(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSGTexture::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSGTexture::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:118
// [32] QRectF convertToNormalizedSourceRect(const QRectF &) const
// (12)qm2405250140 (57)_ZNK10QSGTexture29convertToNormalizedSourceRectERK6QRectF
//static
/*void qm2405250140(const QRectF & rect)*/ {
  const QRectF & rect = *(const QRectF *)this_;
  (void) ((QSGTexture*)this_)->convertToNormalizedSourceRect(rect);
   auto xptr = (QRectF (QSGTexture::*)(QRectF const&) const ) &QSGTexture::convertToNormalizedSourceRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QSGTextureD2Ev(void *this_)*/ {
  delete (QSGTexture*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgtexture
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
