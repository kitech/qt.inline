// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qopenglframebufferobject.h
// dst-file: /src/gui/qopenglframebufferobject.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qopenglframebufferobject.h>


#include <qimage.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qopenglframebufferobject_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 83, column 9>
//   // proto:  int QOpenGLFramebufferObject::height();
if (true) {
  auto f = [](QOpenGLFramebufferObject flythis) {
    ((QOpenGLFramebufferObject*)0)->height();
    flythis.height();
  };
  if (f == nullptr){}
}
// _ZNK24QOpenGLFramebufferObject6heightEv height()
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 82, column 9>
//   // proto:  int QOpenGLFramebufferObject::width();
if (true) {
  auto f = [](QOpenGLFramebufferObject flythis) {
    ((QOpenGLFramebufferObject*)0)->width();
    flythis.width();
  };
  if (f == nullptr){}
}
// _ZNK24QOpenGLFramebufferObject5widthEv width()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QOpenGLFramebufferObjectFormat_Class_Size()
{
  return sizeof(QOpenGLFramebufferObjectFormat);
}

extern "C"
int QOpenGLFramebufferObject_Class_Size()
{
  return sizeof(QOpenGLFramebufferObject);
}

// <= use block end

// ext block begin =>
//   // proto:  void QOpenGLFramebufferObjectFormat::~QOpenGLFramebufferObjectFormat();
extern "C"
void C_ZN30QOpenGLFramebufferObjectFormatD2Ev(void *qthis) {
  delete (QOpenGLFramebufferObjectFormat*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 135, column 10>
//   // proto:  void QOpenGLFramebufferObjectFormat::setTextureTarget(GLenum target);
// _ZN30QOpenGLFramebufferObjectFormat16setTextureTargetEj setTextureTarget(GLenum)
extern "C"
void
C_ZN30QOpenGLFramebufferObjectFormat16setTextureTargetEj(void *qthis,
GLenum arg1) {
  ((QOpenGLFramebufferObjectFormat*)qthis)->setTextureTarget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 138, column 10>
//   // proto:  void QOpenGLFramebufferObjectFormat::setInternalTextureFormat(GLenum internalTextureFormat);
// _ZN30QOpenGLFramebufferObjectFormat24setInternalTextureFormatEj setInternalTextureFormat(GLenum)
extern "C"
void
C_ZN30QOpenGLFramebufferObjectFormat24setInternalTextureFormatEj(void *qthis,
GLenum arg1) {
  ((QOpenGLFramebufferObjectFormat*)qthis)->setInternalTextureFormat(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 122, column 5>
//   // proto:  void QOpenGLFramebufferObjectFormat::QOpenGLFramebufferObjectFormat(const QOpenGLFramebufferObjectFormat & other);
extern "C"
QOpenGLFramebufferObjectFormat*
C_ZN30QOpenGLFramebufferObjectFormatC2ERKS_(const QOpenGLFramebufferObjectFormat* arg1) {
  auto ret = new QOpenGLFramebufferObjectFormat(*((const QOpenGLFramebufferObjectFormat*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 130, column 10>
//   // proto:  bool QOpenGLFramebufferObjectFormat::mipmap();
// _ZNK30QOpenGLFramebufferObjectFormat6mipmapEv mipmap()
extern "C"
bool
C_ZNK30QOpenGLFramebufferObjectFormat6mipmapEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObjectFormat*)qthis)->mipmap();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 132, column 10>
//   // proto:  void QOpenGLFramebufferObjectFormat::setAttachment(QOpenGLFramebufferObject::Attachment attachment);
// _ZN30QOpenGLFramebufferObjectFormat13setAttachmentEN24QOpenGLFramebufferObject10AttachmentE setAttachment(class QOpenGLFramebufferObject::Attachment)
extern "C"
void
C_ZN30QOpenGLFramebufferObjectFormat13setAttachmentEN24QOpenGLFramebufferObject10AttachmentE(void *qthis,
QOpenGLFramebufferObject::Attachment* arg1) {
  ((QOpenGLFramebufferObjectFormat*)qthis)->setAttachment(*((QOpenGLFramebufferObject::Attachment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 136, column 12>
//   // proto:  GLenum QOpenGLFramebufferObjectFormat::textureTarget();
// _ZNK30QOpenGLFramebufferObjectFormat13textureTargetEv textureTarget()
extern "C"
unsigned int
C_ZNK30QOpenGLFramebufferObjectFormat13textureTargetEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObjectFormat*)qthis)->textureTarget();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 126, column 10>
//   // proto:  void QOpenGLFramebufferObjectFormat::setSamples(int samples);
// _ZN30QOpenGLFramebufferObjectFormat10setSamplesEi setSamples(int)
extern "C"
void
C_ZN30QOpenGLFramebufferObjectFormat10setSamplesEi(void *qthis,
int arg1) {
  ((QOpenGLFramebufferObjectFormat*)qthis)->setSamples(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 121, column 5>
//   // proto:  void QOpenGLFramebufferObjectFormat::QOpenGLFramebufferObjectFormat();
extern "C"
QOpenGLFramebufferObjectFormat*
C_ZN30QOpenGLFramebufferObjectFormatC2Ev() {
  auto ret = new QOpenGLFramebufferObjectFormat();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 129, column 10>
//   // proto:  void QOpenGLFramebufferObjectFormat::setMipmap(bool enabled);
// _ZN30QOpenGLFramebufferObjectFormat9setMipmapEb setMipmap(_Bool)
extern "C"
void
C_ZN30QOpenGLFramebufferObjectFormat9setMipmapEb(void *qthis,
bool arg1) {
  ((QOpenGLFramebufferObjectFormat*)qthis)->setMipmap(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 133, column 42>
//   // proto:  QOpenGLFramebufferObject::Attachment QOpenGLFramebufferObjectFormat::attachment();
// _ZNK30QOpenGLFramebufferObjectFormat10attachmentEv attachment()
extern "C"
QOpenGLFramebufferObject::Attachment
C_ZNK30QOpenGLFramebufferObjectFormat10attachmentEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObjectFormat*)qthis)->attachment();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 139, column 12>
//   // proto:  GLenum QOpenGLFramebufferObjectFormat::internalTextureFormat();
// _ZNK30QOpenGLFramebufferObjectFormat21internalTextureFormatEv internalTextureFormat()
extern "C"
unsigned int
C_ZNK30QOpenGLFramebufferObjectFormat21internalTextureFormatEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObjectFormat*)qthis)->internalTextureFormat();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 127, column 9>
//   // proto:  int QOpenGLFramebufferObjectFormat::samples();
// _ZNK30QOpenGLFramebufferObjectFormat7samplesEv samples()
extern "C"
int
C_ZNK30QOpenGLFramebufferObjectFormat7samplesEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObjectFormat*)qthis)->samples();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 77, column 10>
//   // proto:  bool QOpenGLFramebufferObject::isValid();
// _ZNK24QOpenGLFramebufferObject7isValidEv isValid()
extern "C"
bool
C_ZNK24QOpenGLFramebufferObject7isValidEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObject*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 67, column 5>
//   // proto:  void QOpenGLFramebufferObject::QOpenGLFramebufferObject(int width, int height, QOpenGLFramebufferObject::Attachment attachment, GLenum target, GLenum internal_format);
extern "C"
QOpenGLFramebufferObject*
C_ZN24QOpenGLFramebufferObjectC2EiiNS_10AttachmentEjj(int arg1,
int arg2,
QOpenGLFramebufferObject::Attachment arg3,
GLenum arg4,
GLenum arg5) {
  auto ret = new QOpenGLFramebufferObject(arg1,
arg2,
arg3,
arg4,
arg5);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 65, column 5>
//   // proto:  void QOpenGLFramebufferObject::QOpenGLFramebufferObject(const QSize & size, QOpenGLFramebufferObject::Attachment attachment, GLenum target, GLenum internal_format);
extern "C"
QOpenGLFramebufferObject*
C_ZN24QOpenGLFramebufferObjectC2ERK5QSizeNS_10AttachmentEjj(const QSize* arg1,
QOpenGLFramebufferObject::Attachment arg2,
GLenum arg3,
GLenum arg4) {
  auto ret = new QOpenGLFramebufferObject(*((const QSize*)arg1),
arg2,
arg3,
arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 86, column 12>
//   // proto:  GLuint QOpenGLFramebufferObject::takeTexture();
// _ZN24QOpenGLFramebufferObject11takeTextureEv takeTexture()
extern "C"
unsigned int
C_ZN24QOpenGLFramebufferObject11takeTextureEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObject*)qthis)->takeTexture();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 70, column 5>
//   // proto:  void QOpenGLFramebufferObject::QOpenGLFramebufferObject(const QSize & size, const QOpenGLFramebufferObjectFormat & format);
extern "C"
QOpenGLFramebufferObject*
C_ZN24QOpenGLFramebufferObjectC2ERK5QSizeRK30QOpenGLFramebufferObjectFormat(const QSize* arg1,
const QOpenGLFramebufferObjectFormat* arg2) {
  auto ret = new QOpenGLFramebufferObject(*((const QSize*)arg1),
*((const QOpenGLFramebufferObjectFormat*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 96, column 17>
//   // proto: static bool QOpenGLFramebufferObject::bindDefault();
// _ZN24QOpenGLFramebufferObject11bindDefaultEv bindDefault()
extern "C"
bool
C_ZN24QOpenGLFramebufferObject11bindDefaultEv() {
  auto ret =
  QOpenGLFramebufferObject::bindDefault();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 100, column 17>
//   // proto: static bool QOpenGLFramebufferObject::hasOpenGLFramebufferBlit();
// _ZN24QOpenGLFramebufferObject24hasOpenGLFramebufferBlitEv hasOpenGLFramebufferBlit()
extern "C"
bool
C_ZN24QOpenGLFramebufferObject24hasOpenGLFramebufferBlitEv() {
  auto ret =
  QOpenGLFramebufferObject::hasOpenGLFramebufferBlit();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 92, column 10>
//   // proto:  void QOpenGLFramebufferObject::setAttachment(QOpenGLFramebufferObject::Attachment attachment);
// _ZN24QOpenGLFramebufferObject13setAttachmentENS_10AttachmentE setAttachment(enum QOpenGLFramebufferObject::Attachment)
extern "C"
void
C_ZN24QOpenGLFramebufferObject13setAttachmentENS_10AttachmentE(void *qthis,
QOpenGLFramebufferObject::Attachment arg1) {
  ((QOpenGLFramebufferObject*)qthis)->setAttachment(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 85, column 12>
//   // proto:  GLuint QOpenGLFramebufferObject::texture();
// _ZNK24QOpenGLFramebufferObject7textureEv texture()
extern "C"
unsigned int
C_ZNK24QOpenGLFramebufferObject7textureEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObject*)qthis)->texture();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 62, column 14>
//   // proto:  void QOpenGLFramebufferObject::QOpenGLFramebufferObject(const QSize & size, GLenum target);
extern "C"
QOpenGLFramebufferObject*
C_ZN24QOpenGLFramebufferObjectC2ERK5QSizej(const QSize* arg1,
GLenum arg2) {
  auto ret = new QOpenGLFramebufferObject(*((const QSize*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 80, column 10>
//   // proto:  bool QOpenGLFramebufferObject::release();
// _ZN24QOpenGLFramebufferObject7releaseEv release()
extern "C"
bool
C_ZN24QOpenGLFramebufferObject7releaseEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObject*)qthis)->release();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 98, column 17>
//   // proto: static bool QOpenGLFramebufferObject::hasOpenGLFramebufferObjects();
// _ZN24QOpenGLFramebufferObject27hasOpenGLFramebufferObjectsEv hasOpenGLFramebufferObjects()
extern "C"
bool
C_ZN24QOpenGLFramebufferObject27hasOpenGLFramebufferObjectsEv() {
  auto ret =
  QOpenGLFramebufferObject::hasOpenGLFramebufferObjects();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 89, column 12>
//   // proto:  QImage QOpenGLFramebufferObject::toImage(bool flipped);
// _ZNK24QOpenGLFramebufferObject7toImageEb toImage(_Bool)
extern "C"
QImage*
C_ZNK24QOpenGLFramebufferObject7toImageEb(void *qthis,
bool arg1) {
  auto ret =
  ((QOpenGLFramebufferObject*)qthis)->toImage(arg1);
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 94, column 12>
//   // proto:  GLuint QOpenGLFramebufferObject::handle();
// _ZNK24QOpenGLFramebufferObject6handleEv handle()
extern "C"
unsigned int
C_ZNK24QOpenGLFramebufferObject6handleEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObject*)qthis)->handle();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 83, column 9>
//   // proto:  int QOpenGLFramebufferObject::height();
// _ZNK24QOpenGLFramebufferObject6heightEv height()
extern "C"
int
C_ZNK24QOpenGLFramebufferObject6heightEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObject*)qthis)->height();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 105, column 17>
//   // proto: static void QOpenGLFramebufferObject::blitFramebuffer(QOpenGLFramebufferObject * target, QOpenGLFramebufferObject * source, GLbitfield buffers, GLenum filter);
// _ZN24QOpenGLFramebufferObject15blitFramebufferEPS_S0_jj blitFramebuffer(class QOpenGLFramebufferObject *, class QOpenGLFramebufferObject *, GLbitfield, GLenum)
extern "C"
void
C_ZN24QOpenGLFramebufferObject15blitFramebufferEPS_S0_jj(QOpenGLFramebufferObject * arg1,
QOpenGLFramebufferObject * arg2,
GLbitfield arg3,
GLenum arg4) {
  QOpenGLFramebufferObject::blitFramebuffer(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 71, column 5>
//   // proto:  void QOpenGLFramebufferObject::QOpenGLFramebufferObject(int width, int height, const QOpenGLFramebufferObjectFormat & format);
extern "C"
QOpenGLFramebufferObject*
C_ZN24QOpenGLFramebufferObjectC2EiiRK30QOpenGLFramebufferObjectFormat(int arg1,
int arg2,
const QOpenGLFramebufferObjectFormat* arg3) {
  auto ret = new QOpenGLFramebufferObject(arg1,
arg2,
*((const QOpenGLFramebufferObjectFormat*)arg3));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 101, column 17>
//   // proto: static void QOpenGLFramebufferObject::blitFramebuffer(QOpenGLFramebufferObject * target, const QRect & targetRect, QOpenGLFramebufferObject * source, const QRect & sourceRect, GLbitfield buffers, GLenum filter);
// _ZN24QOpenGLFramebufferObject15blitFramebufferEPS_RK5QRectS0_S3_jj blitFramebuffer(class QOpenGLFramebufferObject *, const class QRect &, class QOpenGLFramebufferObject *, const class QRect &, GLbitfield, GLenum)
extern "C"
void
C_ZN24QOpenGLFramebufferObject15blitFramebufferEPS_RK5QRectS0_S3_jj(QOpenGLFramebufferObject * arg1,
const QRect* arg2,
QOpenGLFramebufferObject * arg3,
const QRect* arg4,
GLbitfield arg5,
GLenum arg6) {
  QOpenGLFramebufferObject::blitFramebuffer(arg1,
*((const QRect*)arg2),
arg3,
*((const QRect*)arg4),
arg5,
arg6);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 88, column 12>
//   // proto:  QImage QOpenGLFramebufferObject::toImage();
// _ZNK24QOpenGLFramebufferObject7toImageEv toImage()
extern "C"
QImage*
C_ZNK24QOpenGLFramebufferObject7toImageEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObject*)qthis)->toImage();
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 87, column 11>
//   // proto:  QSize QOpenGLFramebufferObject::size();
// _ZNK24QOpenGLFramebufferObject4sizeEv size()
extern "C"
QSize*
C_ZNK24QOpenGLFramebufferObject4sizeEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObject*)qthis)->size();
  return new QSize(ret); // 5
}
//   // proto:  void QOpenGLFramebufferObject::~QOpenGLFramebufferObject();
extern "C"
void C_ZN24QOpenGLFramebufferObjectD2Ev(void *qthis) {
  delete (QOpenGLFramebufferObject*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 75, column 36>
//   // proto:  QOpenGLFramebufferObjectFormat QOpenGLFramebufferObject::format();
// _ZNK24QOpenGLFramebufferObject6formatEv format()
extern "C"
QOpenGLFramebufferObjectFormat*
C_ZNK24QOpenGLFramebufferObject6formatEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObject*)qthis)->format();
  return new QOpenGLFramebufferObjectFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 79, column 10>
//   // proto:  bool QOpenGLFramebufferObject::bind();
// _ZN24QOpenGLFramebufferObject4bindEv bind()
extern "C"
bool
C_ZN24QOpenGLFramebufferObject4bindEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObject*)qthis)->bind();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 78, column 10>
//   // proto:  bool QOpenGLFramebufferObject::isBound();
// _ZNK24QOpenGLFramebufferObject7isBoundEv isBound()
extern "C"
bool
C_ZNK24QOpenGLFramebufferObject7isBoundEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObject*)qthis)->isBound();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 82, column 9>
//   // proto:  int QOpenGLFramebufferObject::width();
// _ZNK24QOpenGLFramebufferObject5widthEv width()
extern "C"
int
C_ZNK24QOpenGLFramebufferObject5widthEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObject*)qthis)->width();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 63, column 5>
//   // proto:  void QOpenGLFramebufferObject::QOpenGLFramebufferObject(int width, int height, GLenum target);
extern "C"
QOpenGLFramebufferObject*
C_ZN24QOpenGLFramebufferObjectC2Eiij(int arg1,
int arg2,
GLenum arg3) {
  auto ret = new QOpenGLFramebufferObject(arg1,
arg2,
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglframebufferobject.h', line 90, column 16>
//   // proto:  QOpenGLFramebufferObject::Attachment QOpenGLFramebufferObject::attachment();
// _ZNK24QOpenGLFramebufferObject10attachmentEv attachment()
extern "C"
QOpenGLFramebufferObject::Attachment
C_ZNK24QOpenGLFramebufferObject10attachmentEv(void *qthis) {
  auto ret =
  ((QOpenGLFramebufferObject*)qthis)->attachment();
  return ret; // 0 TypeKind.ENUM
}
// <= ext block end

// body block begin =>
// <= body block end

