// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qbuffer.h
// dst-file: /src/core/qbuffer.cxx
//

// header block begin =>
#include <qbuffer.h>

extern "C" {

// ~QBuffer()
void dedtor_ZN7QBufferD0Ev(QBuffer* that)
{
  QBuffer* rthis = (QBuffer*)that;
  delete rthis;
}

// QBuffer(class QObject *)
QBuffer* dector_ZN7QBufferC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QBuffer) == 32, "tyszerr");
  QBuffer* rthis = new QBuffer(parent);
  return rthis;
}

// QBuffer(class QByteArray *, class QObject *)
QBuffer* dector_ZN7QBufferC1EP10QByteArrayP7QObject(QByteArray * buf, QObject * parent)
{
  // static_assert(sizeof(QBuffer) == 32, "tyszerr");
  QBuffer* rthis = new QBuffer(buf, parent);
  return rthis;
}

  // proto:  void QBuffer::setData(const char * data, int len);
void _ZN7QBuffer7setDataEPKci(void *that, const char * data, int len)
{
  QBuffer *cthat = (QBuffer *)that;
   cthat->setData(data, len);
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

