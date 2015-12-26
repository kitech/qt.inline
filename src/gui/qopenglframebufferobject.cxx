// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtGui/qopenglframebufferobject.h
// dst-file: /src/gui/qopenglframebufferobject.cxx
//

// header block begin =>
#include <qopenglframebufferobject.h>

extern "C" {

int QOpenGLFramebufferObjectFormat_Class_Size()
{
  return sizeof(QOpenGLFramebufferObjectFormat);
}

// ~QOpenGLFramebufferObjectFormat()
void dedtor_ZN30QOpenGLFramebufferObjectFormatD0Ev(QOpenGLFramebufferObjectFormat* that)
{
  QOpenGLFramebufferObjectFormat* rthis = (QOpenGLFramebufferObjectFormat*)that;
  delete rthis;
}

// QOpenGLFramebufferObjectFormat(const class QOpenGLFramebufferObjectFormat &)
QOpenGLFramebufferObjectFormat* dector_ZN30QOpenGLFramebufferObjectFormatC1ERKS_(const QOpenGLFramebufferObjectFormat & other)
{
  // static_assert(sizeof(QOpenGLFramebufferObjectFormat) == 32, "tyszerr");
  QOpenGLFramebufferObjectFormat* rthis = new QOpenGLFramebufferObjectFormat(other);
  return rthis;
}

// QOpenGLFramebufferObjectFormat()
QOpenGLFramebufferObjectFormat* dector_ZN30QOpenGLFramebufferObjectFormatC1Ev()
{
  // static_assert(sizeof(QOpenGLFramebufferObjectFormat) == 32, "tyszerr");
  QOpenGLFramebufferObjectFormat* rthis = new QOpenGLFramebufferObjectFormat();
  return rthis;
}

int QOpenGLFramebufferObject_Class_Size()
{
  return sizeof(QOpenGLFramebufferObject);
}

// QOpenGLFramebufferObject(int, int, enum QOpenGLFramebufferObject::Attachment, GLenum, GLenum)
QOpenGLFramebufferObject* dector_ZN24QOpenGLFramebufferObjectC1EiiNS_10AttachmentEjj(int width, int height, QOpenGLFramebufferObject::Attachment attachment, GLenum target, GLenum internal_format)
{
  // static_assert(sizeof(QOpenGLFramebufferObject) == 32, "tyszerr");
  QOpenGLFramebufferObject* rthis = new QOpenGLFramebufferObject(width, height, attachment, target, internal_format);
  return rthis;
}

// QOpenGLFramebufferObject(const class QSize &, enum QOpenGLFramebufferObject::Attachment, GLenum, GLenum)
QOpenGLFramebufferObject* dector_ZN24QOpenGLFramebufferObjectC1ERK5QSizeNS_10AttachmentEjj(const QSize & size, QOpenGLFramebufferObject::Attachment attachment, GLenum target, GLenum internal_format)
{
  // static_assert(sizeof(QOpenGLFramebufferObject) == 32, "tyszerr");
  QOpenGLFramebufferObject* rthis = new QOpenGLFramebufferObject(size, attachment, target, internal_format);
  return rthis;
}

// QOpenGLFramebufferObject(const class QSize &, const class QOpenGLFramebufferObjectFormat &)
QOpenGLFramebufferObject* dector_ZN24QOpenGLFramebufferObjectC1ERK5QSizeRK30QOpenGLFramebufferObjectFormat(const QSize & size, const QOpenGLFramebufferObjectFormat & format)
{
  // static_assert(sizeof(QOpenGLFramebufferObject) == 32, "tyszerr");
  QOpenGLFramebufferObject* rthis = new QOpenGLFramebufferObject(size, format);
  return rthis;
}

// QOpenGLFramebufferObject(int, int, const class QOpenGLFramebufferObjectFormat &)
QOpenGLFramebufferObject* dector_ZN24QOpenGLFramebufferObjectC1EiiRK30QOpenGLFramebufferObjectFormat(int width, int height, const QOpenGLFramebufferObjectFormat & format)
{
  // static_assert(sizeof(QOpenGLFramebufferObject) == 32, "tyszerr");
  QOpenGLFramebufferObject* rthis = new QOpenGLFramebufferObject(width, height, format);
  return rthis;
}

// ~QOpenGLFramebufferObject()
void dedtor_ZN24QOpenGLFramebufferObjectD0Ev(QOpenGLFramebufferObject* that)
{
  QOpenGLFramebufferObject* rthis = (QOpenGLFramebufferObject*)that;
  delete rthis;
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

