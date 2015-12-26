// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtGui/qwindow.h
// dst-file: /src/gui/qwindow.cxx
//

// header block begin =>
#include <qwindow.h>

extern "C" {

int QWindow_Class_Size()
{
  return sizeof(QWindow);
}

// ~QWindow()
void dedtor_ZN7QWindowD0Ev(QWindow* that)
{
  QWindow* rthis = (QWindow*)that;
  delete rthis;
}

// QWindow(class QScreen *)
QWindow* dector_ZN7QWindowC1EP7QScreen(QScreen * screen)
{
  // static_assert(sizeof(QWindow) == 32, "tyszerr");
  QWindow* rthis = new QWindow(screen);
  return rthis;
}

// QWindow(class QWindow *)
QWindow* dector_ZN7QWindowC1EPS_(QWindow * parent)
{
  // static_assert(sizeof(QWindow) == 32, "tyszerr");
  QWindow* rthis = new QWindow(parent);
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

