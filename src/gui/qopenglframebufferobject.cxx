//  header block begin

// since 0x050000
// /usr/include/qt/QtGui/qopenglframebufferobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglframebufferobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLFramebufferObject is pure virtual: false
// QOpenGLFramebufferObject has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOpenGLFramebufferObject_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLFramebufferObject_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLFramebufferObject_t qt_meta_stringdata_MyQOpenGLFramebufferObject = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQOpenGLFramebufferObject"
  },
  "MyQOpenGLFramebufferObject"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLFramebufferObject[] = {
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
class Q_DECL_EXPORT MyQOpenGLFramebufferObject : public QOpenGLFramebufferObject {
public:
  virtual ~MyQOpenGLFramebufferObject() {}
// void QOpenGLFramebufferObject(const QSize &, GLenum)
MyQOpenGLFramebufferObject(const QSize & size, GLenum target) : QOpenGLFramebufferObject(size, target) {}
// void QOpenGLFramebufferObject(int, int, GLenum)
MyQOpenGLFramebufferObject(int width, int height, GLenum target) : QOpenGLFramebufferObject(width, height, target) {}
// void QOpenGLFramebufferObject(const QSize &, QOpenGLFramebufferObject::Attachment, GLenum, GLenum)
MyQOpenGLFramebufferObject(const QSize & size, QOpenGLFramebufferObject::Attachment attachment, GLenum target, GLenum internalFormat) : QOpenGLFramebufferObject(size, attachment, target, internalFormat) {}
// void QOpenGLFramebufferObject(int, int, QOpenGLFramebufferObject::Attachment, GLenum, GLenum)
MyQOpenGLFramebufferObject(int width, int height, QOpenGLFramebufferObject::Attachment attachment, GLenum target, GLenum internalFormat) : QOpenGLFramebufferObject(width, height, attachment, target, internalFormat) {}
// void QOpenGLFramebufferObject(const QSize &, const QOpenGLFramebufferObjectFormat &)
MyQOpenGLFramebufferObject(const QSize & size, const QOpenGLFramebufferObjectFormat & format) : QOpenGLFramebufferObject(size, format) {}
// void QOpenGLFramebufferObject(int, int, const QOpenGLFramebufferObjectFormat &)
MyQOpenGLFramebufferObject(int width, int height, const QOpenGLFramebufferObjectFormat & format) : QOpenGLFramebufferObject(width, height, format) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:78
// [-2] void QOpenGLFramebufferObject(const QSize &, GLenum)
extern "C" Q_DECL_EXPORT
void* C_ZN24QOpenGLFramebufferObjectC2ERK5QSizej(QSize* size, GLenum target) {
  return  new QOpenGLFramebufferObject(*size, target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:79
// [-2] void QOpenGLFramebufferObject(int, int, GLenum)
extern "C" Q_DECL_EXPORT
void* C_ZN24QOpenGLFramebufferObjectC2Eiij(int width, int height, GLenum target) {
  return  new QOpenGLFramebufferObject(width, height, target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:81
// [-2] void QOpenGLFramebufferObject(const QSize &, QOpenGLFramebufferObject::Attachment, GLenum, GLenum)
extern "C" Q_DECL_EXPORT
void* C_ZN24QOpenGLFramebufferObjectC2ERK5QSizeNS_10AttachmentEjj(QSize* size, QOpenGLFramebufferObject::Attachment attachment, GLenum target, GLenum internalFormat) {
  return  new QOpenGLFramebufferObject(*size, attachment, target, internalFormat);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:83
// [-2] void QOpenGLFramebufferObject(int, int, QOpenGLFramebufferObject::Attachment, GLenum, GLenum)
extern "C" Q_DECL_EXPORT
void* C_ZN24QOpenGLFramebufferObjectC2EiiNS_10AttachmentEjj(int width, int height, QOpenGLFramebufferObject::Attachment attachment, GLenum target, GLenum internalFormat) {
  return  new QOpenGLFramebufferObject(width, height, attachment, target, internalFormat);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:86
// [-2] void QOpenGLFramebufferObject(const QSize &, const QOpenGLFramebufferObjectFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN24QOpenGLFramebufferObjectC2ERK5QSizeRK30QOpenGLFramebufferObjectFormat(QSize* size, QOpenGLFramebufferObjectFormat* format) {
  return  new QOpenGLFramebufferObject(*size, *format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:87
// [-2] void QOpenGLFramebufferObject(int, int, const QOpenGLFramebufferObjectFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN24QOpenGLFramebufferObjectC2EiiRK30QOpenGLFramebufferObjectFormat(int width, int height, QOpenGLFramebufferObjectFormat* format) {
  return  new QOpenGLFramebufferObject(width, height, *format);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:89
// [-2] void ~QOpenGLFramebufferObject()
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLFramebufferObjectD2Ev(void *this_) {
  delete (QOpenGLFramebufferObject*)(this_);
}
// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qopenglframebufferobject.h:91
// [-2] void addColorAttachment(const QSize &, GLenum)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLFramebufferObject18addColorAttachmentERK5QSizej(void *this_, QSize* size, GLenum internalFormat) {
  ((QOpenGLFramebufferObject*)this_)->addColorAttachment(*size, internalFormat);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qopenglframebufferobject.h:92
// [-2] void addColorAttachment(int, int, GLenum)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLFramebufferObject18addColorAttachmentEiij(void *this_, int width, int height, GLenum internalFormat) {
  ((QOpenGLFramebufferObject*)this_)->addColorAttachment(width, height, internalFormat);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:94
// [8] QOpenGLFramebufferObjectFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QOpenGLFramebufferObject6formatEv(void *this_) {
  auto rv = ((QOpenGLFramebufferObject*)this_)->format();
return new QOpenGLFramebufferObjectFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:96
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK24QOpenGLFramebufferObject7isValidEv(void *this_) {
  return (bool)((QOpenGLFramebufferObject*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:97
// [1] bool isBound()
extern "C" Q_DECL_EXPORT
bool C_ZNK24QOpenGLFramebufferObject7isBoundEv(void *this_) {
  return (bool)((QOpenGLFramebufferObject*)this_)->isBound();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:98
// [1] bool bind()
extern "C" Q_DECL_EXPORT
bool C_ZN24QOpenGLFramebufferObject4bindEv(void *this_) {
  return (bool)((QOpenGLFramebufferObject*)this_)->bind();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:99
// [1] bool release()
extern "C" Q_DECL_EXPORT
bool C_ZN24QOpenGLFramebufferObject7releaseEv(void *this_) {
  return (bool)((QOpenGLFramebufferObject*)this_)->release();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:101
// [4] int width()
extern "C" Q_DECL_EXPORT
int C_ZNK24QOpenGLFramebufferObject5widthEv(void *this_) {
  return (int)((QOpenGLFramebufferObject*)this_)->width();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:102
// [4] int height()
extern "C" Q_DECL_EXPORT
int C_ZNK24QOpenGLFramebufferObject6heightEv(void *this_) {
  return (int)((QOpenGLFramebufferObject*)this_)->height();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:104
// [4] GLuint texture()
extern "C" Q_DECL_EXPORT
GLuint C_ZNK24QOpenGLFramebufferObject7textureEv(void *this_) {
  return (GLuint)((QOpenGLFramebufferObject*)this_)->texture();
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qopenglframebufferobject.h:105
// [8] QVector<GLuint> textures()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZNK24QOpenGLFramebufferObject8texturesEv(void *this_) {
  auto rv = ((QOpenGLFramebufferObject*)this_)->textures();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglframebufferobject.h:107
// [4] GLuint takeTexture()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
GLuint C_ZN24QOpenGLFramebufferObject11takeTextureEv(void *this_) {
  return (GLuint)((QOpenGLFramebufferObject*)this_)->takeTexture();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qopenglframebufferobject.h:108
// [4] GLuint takeTexture(int)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
GLuint C_ZN24QOpenGLFramebufferObject11takeTextureEi(void *this_, int colorAttachmentIndex) {
  return (GLuint)((QOpenGLFramebufferObject*)this_)->takeTexture(colorAttachmentIndex);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:110
// [8] QSize size()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QOpenGLFramebufferObject4sizeEv(void *this_) {
  auto rv = ((QOpenGLFramebufferObject*)this_)->size();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qopenglframebufferobject.h:111
// [-2] QVector<QSize> sizes()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZNK24QOpenGLFramebufferObject5sizesEv(void *this_) {
  auto rv = ((QOpenGLFramebufferObject*)this_)->sizes();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:113
// [32] QImage toImage()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QOpenGLFramebufferObject7toImageEv(void *this_) {
  auto rv = ((QOpenGLFramebufferObject*)this_)->toImage();
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:114
// [32] QImage toImage(bool)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QOpenGLFramebufferObject7toImageEb(void *this_, bool flipped) {
  auto rv = ((QOpenGLFramebufferObject*)this_)->toImage(flipped);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qopenglframebufferobject.h:115
// [32] QImage toImage(bool, int)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZNK24QOpenGLFramebufferObject7toImageEbi(void *this_, bool flipped, int colorAttachmentIndex) {
  auto rv = ((QOpenGLFramebufferObject*)this_)->toImage(flipped, colorAttachmentIndex);
return new QImage(rv);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:117
// [4] QOpenGLFramebufferObject::Attachment attachment()
extern "C" Q_DECL_EXPORT
QOpenGLFramebufferObject::Attachment C_ZNK24QOpenGLFramebufferObject10attachmentEv(void *this_) {
  return (QOpenGLFramebufferObject::Attachment)((QOpenGLFramebufferObject*)this_)->attachment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:118
// [-2] void setAttachment(QOpenGLFramebufferObject::Attachment)
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLFramebufferObject13setAttachmentENS_10AttachmentE(void *this_, QOpenGLFramebufferObject::Attachment attachment) {
  ((QOpenGLFramebufferObject*)this_)->setAttachment(attachment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:120
// [4] GLuint handle()
extern "C" Q_DECL_EXPORT
GLuint C_ZNK24QOpenGLFramebufferObject6handleEv(void *this_) {
  return (GLuint)((QOpenGLFramebufferObject*)this_)->handle();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:122
// [1] bool bindDefault()
extern "C" Q_DECL_EXPORT
bool C_ZN24QOpenGLFramebufferObject11bindDefaultEv() {
  return (bool)QOpenGLFramebufferObject::bindDefault();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:124
// [1] bool hasOpenGLFramebufferObjects()
extern "C" Q_DECL_EXPORT
bool C_ZN24QOpenGLFramebufferObject27hasOpenGLFramebufferObjectsEv() {
  return (bool)QOpenGLFramebufferObject::hasOpenGLFramebufferObjects();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:126
// [1] bool hasOpenGLFramebufferBlit()
extern "C" Q_DECL_EXPORT
bool C_ZN24QOpenGLFramebufferObject24hasOpenGLFramebufferBlitEv() {
  return (bool)QOpenGLFramebufferObject::hasOpenGLFramebufferBlit();
}

// Public static Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtGui/qopenglframebufferobject.h:134
// [-2] void blitFramebuffer(QOpenGLFramebufferObject *, const QRect &, QOpenGLFramebufferObject *, const QRect &, GLbitfield, GLenum, int, int, QOpenGLFramebufferObject::FramebufferRestorePolicy)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLFramebufferObject15blitFramebufferEPS_RK5QRectS0_S3_jjiiNS_24FramebufferRestorePolicyE(QOpenGLFramebufferObject * target, QRect* targetRect, QOpenGLFramebufferObject * source, QRect* sourceRect, GLbitfield buffers, GLenum filter, int readColorAttachmentIndex, int drawColorAttachmentIndex, QOpenGLFramebufferObject::FramebufferRestorePolicy restorePolicy) {
  QOpenGLFramebufferObject::blitFramebuffer(target, *targetRect, source, *sourceRect, buffers, filter, readColorAttachmentIndex, drawColorAttachmentIndex, restorePolicy);
}
#endif // QT_VERSION >= 0x050700

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:141
// [-2] void blitFramebuffer(QOpenGLFramebufferObject *, const QRect &, QOpenGLFramebufferObject *, const QRect &, GLbitfield, GLenum, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLFramebufferObject15blitFramebufferEPS_RK5QRectS0_S3_jjii(QOpenGLFramebufferObject * target, QRect* targetRect, QOpenGLFramebufferObject * source, QRect* sourceRect, GLbitfield buffers, GLenum filter, int readColorAttachmentIndex, int drawColorAttachmentIndex) {
  QOpenGLFramebufferObject::blitFramebuffer(target, *targetRect, source, *sourceRect, buffers, filter, readColorAttachmentIndex, drawColorAttachmentIndex);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:147
// [-2] void blitFramebuffer(QOpenGLFramebufferObject *, const QRect &, QOpenGLFramebufferObject *, const QRect &, GLbitfield, GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLFramebufferObject15blitFramebufferEPS_RK5QRectS0_S3_jj(QOpenGLFramebufferObject * target, QRect* targetRect, QOpenGLFramebufferObject * source, QRect* sourceRect, GLbitfield buffers, GLenum filter) {
  QOpenGLFramebufferObject::blitFramebuffer(target, *targetRect, source, *sourceRect, buffers, filter);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:151
// [-2] void blitFramebuffer(QOpenGLFramebufferObject *, QOpenGLFramebufferObject *, GLbitfield, GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLFramebufferObject15blitFramebufferEPS_S0_jj(QOpenGLFramebufferObject * target, QOpenGLFramebufferObject * source, GLbitfield buffers, GLenum filter) {
  QOpenGLFramebufferObject::blitFramebuffer(target, source, buffers, filter);
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
