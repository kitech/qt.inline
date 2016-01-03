// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qopenglbuffer.h
// dst-file: /src/gui/qopenglbuffer.cxx
//

// header block begin =>
#include <qopenglbuffer.h>

extern "C" {

int QOpenGLBuffer_Class_Size()
{
  return sizeof(QOpenGLBuffer);
}

// QOpenGLBuffer(const class QOpenGLBuffer &)
QOpenGLBuffer* dector_ZN13QOpenGLBufferC1ERKS_(const QOpenGLBuffer & other)
{
  // static_assert(sizeof(QOpenGLBuffer) == 32, "tyszerr");
  QOpenGLBuffer* rthis = new QOpenGLBuffer(other);
  return rthis;
}

// QOpenGLBuffer()
QOpenGLBuffer* dector_ZN13QOpenGLBufferC1Ev()
{
  // static_assert(sizeof(QOpenGLBuffer) == 32, "tyszerr");
  QOpenGLBuffer* rthis = new QOpenGLBuffer();
  return rthis;
}

// ~QOpenGLBuffer()
void dedtor_ZN13QOpenGLBufferD0Ev(QOpenGLBuffer* that)
{
  QOpenGLBuffer* rthis = (QOpenGLBuffer*)that;
  delete rthis;
}

// QOpenGLBuffer(class QOpenGLBuffer::Type)
QOpenGLBuffer* dector_ZN13QOpenGLBufferC1ENS_4TypeE(QOpenGLBuffer::Type type)
{
  // static_assert(sizeof(QOpenGLBuffer) == 32, "tyszerr");
  QOpenGLBuffer* rthis = new QOpenGLBuffer(type);
  return rthis;
}

  // proto:  void QOpenGLBuffer::allocate(int count);
void demth_ZN13QOpenGLBuffer8allocateEi(void *that, int count)
{
  QOpenGLBuffer *cthat = (QOpenGLBuffer *)that;
   cthat->allocate(count);
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

