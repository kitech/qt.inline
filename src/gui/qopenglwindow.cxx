// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtGui/qopenglwindow.h
// dst-file: /src/gui/qopenglwindow.cxx
//

// header block begin =>
#include <qopenglwindow.h>

extern "C" {

int QOpenGLWindow_Class_Size()
{
  return sizeof(QOpenGLWindow);
}

// QOpenGLWindow(enum QOpenGLWindow::UpdateBehavior, class QWindow *)
QOpenGLWindow* dector_ZN13QOpenGLWindowC1ENS_14UpdateBehaviorEP7QWindow(QOpenGLWindow::UpdateBehavior updateBehavior, QWindow * parent)
{
  // static_assert(sizeof(QOpenGLWindow) == 32, "tyszerr");
  QOpenGLWindow* rthis = new QOpenGLWindow(updateBehavior, parent);
  return rthis;
}

// QOpenGLWindow(class QOpenGLContext *, enum QOpenGLWindow::UpdateBehavior, class QWindow *)
QOpenGLWindow* dector_ZN13QOpenGLWindowC1EP14QOpenGLContextNS_14UpdateBehaviorEP7QWindow(QOpenGLContext * shareContext, QOpenGLWindow::UpdateBehavior updateBehavior, QWindow * parent)
{
  // static_assert(sizeof(QOpenGLWindow) == 32, "tyszerr");
  QOpenGLWindow* rthis = new QOpenGLWindow(shareContext, updateBehavior, parent);
  return rthis;
}

// ~QOpenGLWindow()
void dedtor_ZN13QOpenGLWindowD0Ev(QOpenGLWindow* that)
{
  QOpenGLWindow* rthis = (QOpenGLWindow*)that;
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

