// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
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

  // proto:  int QWindow::minimumHeight();
int demth_ZNK7QWindow13minimumHeightEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->minimumHeight();
}

  // proto:  int QWindow::maximumHeight();
int demth_ZNK7QWindow13maximumHeightEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->maximumHeight();
}

  // proto:  int QWindow::y();
int demth_ZNK7QWindow1yEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->y();
}

  // proto:  int QWindow::width();
int demth_ZNK7QWindow5widthEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->width();
}

  // proto:  int QWindow::minimumWidth();
int demth_ZNK7QWindow12minimumWidthEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->minimumWidth();
}

  // proto:  int QWindow::x();
int demth_ZNK7QWindow1xEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->x();
}

  // proto:  int QWindow::height();
int demth_ZNK7QWindow6heightEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->height();
}

  // proto:  QSize QWindow::size();
QSize* demth_ZNK7QWindow4sizeEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  auto recret = cthat->size();
  return new QSize(recret);
}

  // proto:  int QWindow::maximumWidth();
int demth_ZNK7QWindow12maximumWidthEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->maximumWidth();
}

  // proto:  QPoint QWindow::position();
QPoint* demth_ZNK7QWindow8positionEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  auto recret = cthat->position();
  return new QPoint(recret);
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

