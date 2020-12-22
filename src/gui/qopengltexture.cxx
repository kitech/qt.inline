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


struct qt_meta_stringdata_MyQOpenGLTexture_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLTexture_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLTexture_t qt_meta_stringdata_MyQOpenGLTexture = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQOpenGLTexture"
  },
  "MyQOpenGLTexture"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLTexture[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQOpenGLTexture : public QOpenGLTexture {
public:
  virtual ~MyQOpenGLTexture() {}
// void QOpenGLTexture(QOpenGLTexture::Target)
MyQOpenGLTexture(QOpenGLTexture::Target target) : QOpenGLTexture(target) {}
// void QOpenGLTexture(const QImage &, QOpenGLTexture::MipMapGeneration)
MyQOpenGLTexture(const QImage & image, QOpenGLTexture::MipMapGeneration genMipMaps) : QOpenGLTexture(image, genMipMaps) {}
};

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
  this_ =  new MyQOpenGLTexture(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:408
// [-2] void QOpenGLTexture(const QImage &, QOpenGLTexture::MipMapGeneration) 
// (12)qm1133062745 (53)_ZN14QOpenGLTextureC2ERK6QImageNS_16MipMapGenerationE
/*void* qm1133062745(const QImage & image, QOpenGLTexture::MipMapGeneration genMipMaps)*/{
  const QImage & image = *(const QImage *)this_; QOpenGLTexture::MipMapGeneration genMipMaps = *(QOpenGLTexture::MipMapGeneration*)this_;
  this_ =  new QOpenGLTexture(image, genMipMaps);
  this_ =  new MyQOpenGLTexture(image, genMipMaps);
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
