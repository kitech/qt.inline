//  header block begin

// since 0x050800
// /usr/include/qt/QtGui/qopengltextureblitter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopengltextureblitter.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLTextureBlitter is pure virtual: false
// QOpenGLTextureBlitter has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOpenGLTextureBlitter_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLTextureBlitter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLTextureBlitter_t qt_meta_stringdata_MyQOpenGLTextureBlitter = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQOpenGLTextureBlitter"
  },
  "MyQOpenGLTextureBlitter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLTextureBlitter[] = {
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
class Q_DECL_EXPORT MyQOpenGLTextureBlitter : public QOpenGLTextureBlitter {
public:
  virtual ~MyQOpenGLTextureBlitter() {}
// void QOpenGLTextureBlitter()
MyQOpenGLTextureBlitter() : QOpenGLTextureBlitter() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:58
// [-2] void QOpenGLTextureBlitter()
extern "C" Q_DECL_EXPORT
void* C_ZN21QOpenGLTextureBlitterC2Ev() {
  return  new QOpenGLTextureBlitter();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:59
// [-2] void ~QOpenGLTextureBlitter()
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLTextureBlitterD2Ev(void *this_) {
  delete (QOpenGLTextureBlitter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:66
// [1] bool create()
extern "C" Q_DECL_EXPORT
bool C_ZN21QOpenGLTextureBlitter6createEv(void *this_) {
  return (bool)((QOpenGLTextureBlitter*)this_)->create();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:67
// [1] bool isCreated()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QOpenGLTextureBlitter9isCreatedEv(void *this_) {
  return (bool)((QOpenGLTextureBlitter*)this_)->isCreated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:68
// [-2] void destroy()
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLTextureBlitter7destroyEv(void *this_) {
  ((QOpenGLTextureBlitter*)this_)->destroy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:70
// [1] bool supportsExternalOESTarget()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QOpenGLTextureBlitter25supportsExternalOESTargetEv(void *this_) {
  return (bool)((QOpenGLTextureBlitter*)this_)->supportsExternalOESTarget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:72
// [-2] void bind(GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLTextureBlitter4bindEj(void *this_, GLenum target) {
  ((QOpenGLTextureBlitter*)this_)->bind(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:73
// [-2] void release()
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLTextureBlitter7releaseEv(void *this_) {
  ((QOpenGLTextureBlitter*)this_)->release();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:75
// [-2] void setRedBlueSwizzle(bool)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLTextureBlitter17setRedBlueSwizzleEb(void *this_, bool swizzle) {
  ((QOpenGLTextureBlitter*)this_)->setRedBlueSwizzle(swizzle);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:76
// [-2] void setOpacity(float)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLTextureBlitter10setOpacityEf(void *this_, float opacity) {
  ((QOpenGLTextureBlitter*)this_)->setOpacity(opacity);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:78
// [-2] void blit(GLuint, const QMatrix4x4 &, QOpenGLTextureBlitter::Origin)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLTextureBlitter4blitEjRK10QMatrix4x4NS_6OriginE(void *this_, GLuint texture, QMatrix4x4* targetTransform, QOpenGLTextureBlitter::Origin sourceOrigin) {
  ((QOpenGLTextureBlitter*)this_)->blit(texture, *targetTransform, sourceOrigin);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:79
// [-2] void blit(GLuint, const QMatrix4x4 &, const QMatrix3x3 &)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLTextureBlitter4blitEjRK10QMatrix4x4RK14QGenericMatrixILi3ELi3EfE(void *this_, GLuint texture, QMatrix4x4* targetTransform, const QMatrix3x3 & sourceTransform) {
  ((QOpenGLTextureBlitter*)this_)->blit(texture, *targetTransform, sourceTransform);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:81
// [68] QMatrix4x4 targetTransform(const QRectF &, const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QOpenGLTextureBlitter15targetTransformERK6QRectFRK5QRect(QRectF* target, QRect* viewport) {
  auto rv = QOpenGLTextureBlitter::targetTransform(*target, *viewport);
return new QMatrix4x4(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:82
// [36] QMatrix3x3 sourceTransform(const QRectF &, const QSize &, QOpenGLTextureBlitter::Origin)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLTextureBlitter15sourceTransformERK6QRectFRK5QSizeNS_6OriginE(QRectF* subTexture, QSize* textureSize, QOpenGLTextureBlitter::Origin origin) {
  auto rv = QOpenGLTextureBlitter::sourceTransform(*subTexture, *textureSize, origin);
/*return rv;*/
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
