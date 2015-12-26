// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtGui/qopengltexture.h
// dst-file: /src/gui/qopengltexture.cxx
//

// header block begin =>
#include <qopengltexture.h>

extern "C" {

int QOpenGLTexture_Class_Size()
{
  return sizeof(QOpenGLTexture);
}

// QOpenGLTexture(const class QImage &, enum QOpenGLTexture::MipMapGeneration)
QOpenGLTexture* dector_ZN14QOpenGLTextureC1ERK6QImageNS_16MipMapGenerationE(const QImage & image, QOpenGLTexture::MipMapGeneration genMipMaps)
{
  // static_assert(sizeof(QOpenGLTexture) == 32, "tyszerr");
  QOpenGLTexture* rthis = new QOpenGLTexture(image, genMipMaps);
  return rthis;
}

// ~QOpenGLTexture()
void dedtor_ZN14QOpenGLTextureD0Ev(QOpenGLTexture* that)
{
  QOpenGLTexture* rthis = (QOpenGLTexture*)that;
  delete rthis;
}

// QOpenGLTexture(enum QOpenGLTexture::Target)
QOpenGLTexture* dector_ZN14QOpenGLTextureC1ENS_6TargetE(QOpenGLTexture::Target target)
{
  // static_assert(sizeof(QOpenGLTexture) == 32, "tyszerr");
  QOpenGLTexture* rthis = new QOpenGLTexture(target);
  return rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

