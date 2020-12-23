//  header block begin

// /usr/include/qt/QtGui/qopengltexture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopengltexture.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLTexture is pure virtual: false false
// QOpenGLTexture has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopengltexture(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:407
// [-2] void QOpenGLTexture(QOpenGLTexture::Target) 
// (11)qm366765343 (33)_ZN14QOpenGLTextureC2ENS_6TargetE
/*void* qm366765343(QOpenGLTexture::Target target)*/{
  QOpenGLTexture::Target target = *(QOpenGLTexture::Target*)this_;
  this_ =  new QOpenGLTexture(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:408
// [-2] void QOpenGLTexture(const QImage &, QOpenGLTexture::MipMapGeneration) 
// (12)qm1133062745 (53)_ZN14QOpenGLTextureC2ERK6QImageNS_16MipMapGenerationE
/*void* qm1133062745(const QImage & image, QOpenGLTexture::MipMapGeneration genMipMaps)*/{
  const QImage & image = *(const QImage *)this_; QOpenGLTexture::MipMapGeneration genMipMaps = *(QOpenGLTexture::MipMapGeneration*)this_;
  this_ =  new QOpenGLTexture(image, genMipMaps);
}


/*void C_ZN14QOpenGLTextureD2Ev(void *this_)*/ {
  delete (QOpenGLTexture*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopengltexture
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
