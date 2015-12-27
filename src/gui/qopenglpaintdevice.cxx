// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtGui/qopenglpaintdevice.h
// dst-file: /src/gui/qopenglpaintdevice.cxx
//

// header block begin =>
#include <qopenglpaintdevice.h>

extern "C" {

int QOpenGLPaintDevice_Class_Size()
{
  return sizeof(QOpenGLPaintDevice);
}

// ~QOpenGLPaintDevice()
void dedtor_ZN18QOpenGLPaintDeviceD0Ev(QOpenGLPaintDevice* that)
{
  QOpenGLPaintDevice* rthis = (QOpenGLPaintDevice*)that;
  delete rthis;
}

// QOpenGLPaintDevice(int, int)
QOpenGLPaintDevice* dector_ZN18QOpenGLPaintDeviceC1Eii(int width, int height)
{
  // static_assert(sizeof(QOpenGLPaintDevice) == 32, "tyszerr");
  QOpenGLPaintDevice* rthis = new QOpenGLPaintDevice(width, height);
  return rthis;
}

// QOpenGLPaintDevice()
QOpenGLPaintDevice* dector_ZN18QOpenGLPaintDeviceC1Ev()
{
  // static_assert(sizeof(QOpenGLPaintDevice) == 32, "tyszerr");
  QOpenGLPaintDevice* rthis = new QOpenGLPaintDevice();
  return rthis;
}

// QOpenGLPaintDevice(const class QSize &)
QOpenGLPaintDevice* dector_ZN18QOpenGLPaintDeviceC1ERK5QSize(const QSize & size)
{
  // static_assert(sizeof(QOpenGLPaintDevice) == 32, "tyszerr");
  QOpenGLPaintDevice* rthis = new QOpenGLPaintDevice(size);
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

