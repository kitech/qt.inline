// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtGui/qoffscreensurface.h
// dst-file: /src/gui/qoffscreensurface.cxx
//

// header block begin =>
#include <qoffscreensurface.h>

extern "C" {

int QOffscreenSurface_Class_Size()
{
  return sizeof(QOffscreenSurface);
}

// ~QOffscreenSurface()
void dedtor_ZN17QOffscreenSurfaceD0Ev(QOffscreenSurface* that)
{
  QOffscreenSurface* rthis = (QOffscreenSurface*)that;
  delete rthis;
}

// QOffscreenSurface(class QScreen *)
QOffscreenSurface* dector_ZN17QOffscreenSurfaceC1EP7QScreen(QScreen * screen)
{
  // static_assert(sizeof(QOffscreenSurface) == 32, "tyszerr");
  QOffscreenSurface* rthis = new QOffscreenSurface(screen);
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

