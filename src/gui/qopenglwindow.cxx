// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qopenglwindow.h
// dst-file: /src/gui/qopenglwindow.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qopenglwindow.h>


#include <qimage.h>
// <= header block end

// main block begin =>
void __keep_qopenglwindow_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QOpenGLWindow_Class_Size()
{
  return sizeof(QOpenGLWindow);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qopenglwindow.h', line 61, column 14>
//   // proto:  void QOpenGLWindow::QOpenGLWindow(QOpenGLWindow::UpdateBehavior updateBehavior, QWindow * parent);
extern "C"
QOpenGLWindow*
C_ZN13QOpenGLWindowC2ENS_14UpdateBehaviorEP7QWindow(QOpenGLWindow::UpdateBehavior arg1,
QWindow * arg2) {
  auto ret = new QOpenGLWindow(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglwindow.h', line 66, column 10>
//   // proto:  bool QOpenGLWindow::isValid();
// _ZNK13QOpenGLWindow7isValidEv isValid()
extern "C"
bool
C_ZNK13QOpenGLWindow7isValidEv(void *qthis) {
  auto ret =
  ((QOpenGLWindow*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglwindow.h', line 76, column 12>
//   // proto:  QImage QOpenGLWindow::grabFramebuffer();
// _ZN13QOpenGLWindow15grabFramebufferEv grabFramebuffer()
extern "C"
QImage*
C_ZN13QOpenGLWindow15grabFramebufferEv(void *qthis) {
  auto ret =
  ((QOpenGLWindow*)qthis)->grabFramebuffer();
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglwindow.h', line 79, column 10>
//   // proto:  void QOpenGLWindow::frameSwapped();
// _ZN13QOpenGLWindow12frameSwappedEv frameSwapped()
extern "C"
void
C_ZN13QOpenGLWindow12frameSwappedEv(void *qthis) {
  ((QOpenGLWindow*)qthis)->frameSwapped();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglwindow.h', line 72, column 21>
//   // proto:  QOpenGLContext * QOpenGLWindow::shareContext();
// _ZNK13QOpenGLWindow12shareContextEv shareContext()
extern "C"
void*
C_ZNK13QOpenGLWindow12shareContextEv(void *qthis) {
  auto ret =
  ((QOpenGLWindow*)qthis)->shareContext();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglwindow.h', line 68, column 10>
//   // proto:  void QOpenGLWindow::makeCurrent();
// _ZN13QOpenGLWindow11makeCurrentEv makeCurrent()
extern "C"
void
C_ZN13QOpenGLWindow11makeCurrentEv(void *qthis) {
  ((QOpenGLWindow*)qthis)->makeCurrent();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglwindow.h', line 71, column 21>
//   // proto:  QOpenGLContext * QOpenGLWindow::context();
// _ZNK13QOpenGLWindow7contextEv context()
extern "C"
void*
C_ZNK13QOpenGLWindow7contextEv(void *qthis) {
  auto ret =
  ((QOpenGLWindow*)qthis)->context();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglwindow.h', line 62, column 14>
//   // proto:  void QOpenGLWindow::QOpenGLWindow(QOpenGLContext * shareContext, QOpenGLWindow::UpdateBehavior updateBehavior, QWindow * parent);
extern "C"
QOpenGLWindow*
C_ZN13QOpenGLWindowC2EP14QOpenGLContextNS_14UpdateBehaviorEP7QWindow(QOpenGLContext * arg1,
QOpenGLWindow::UpdateBehavior arg2,
QWindow * arg3) {
  auto ret = new QOpenGLWindow(arg1,
arg2,
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglwindow.h', line 69, column 10>
//   // proto:  void QOpenGLWindow::doneCurrent();
// _ZN13QOpenGLWindow11doneCurrentEv doneCurrent()
extern "C"
void
C_ZN13QOpenGLWindow11doneCurrentEv(void *qthis) {
  ((QOpenGLWindow*)qthis)->doneCurrent();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglwindow.h', line 74, column 12>
//   // proto:  GLuint QOpenGLWindow::defaultFramebufferObject();
// _ZNK13QOpenGLWindow24defaultFramebufferObjectEv defaultFramebufferObject()
extern "C"
unsigned int
C_ZNK13QOpenGLWindow24defaultFramebufferObjectEv(void *qthis) {
  auto ret =
  ((QOpenGLWindow*)qthis)->defaultFramebufferObject();
  return ret; // 0 TypeKind.UINT
}
//   // proto:  void QOpenGLWindow::~QOpenGLWindow();
extern "C"
void C_ZN13QOpenGLWindowD2Ev(void *qthis) {
  delete (QOpenGLWindow*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglwindow.h', line 65, column 20>
//   // proto:  QOpenGLWindow::UpdateBehavior QOpenGLWindow::updateBehavior();
// _ZNK13QOpenGLWindow14updateBehaviorEv updateBehavior()
extern "C"
QOpenGLWindow::UpdateBehavior
C_ZNK13QOpenGLWindow14updateBehaviorEv(void *qthis) {
  auto ret =
  ((QOpenGLWindow*)qthis)->updateBehavior();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglwindow.h', line 51, column 5>
//   // proto:  const QMetaObject * QOpenGLWindow::metaObject();
// _ZNK13QOpenGLWindow10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QOpenGLWindow10metaObjectEv(void *qthis) {
  auto ret =
  ((QOpenGLWindow*)qthis)->metaObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QOpenGLWindow_SlotProxy here
class QOpenGLWindow_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLWindow_SlotProxy():QObject(){}

public slots:
  // frameSwapped()
  void slot_proxy_func__ZN13QOpenGLWindow12frameSwappedEv();
public:
  void (*slot_func__ZN13QOpenGLWindow12frameSwappedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qopenglwindow.moc"

extern "C" {
  QOpenGLWindow_SlotProxy* QOpenGLWindow_SlotProxy_new()
  {
    return new QOpenGLWindow_SlotProxy();
  }
};

void QOpenGLWindow_SlotProxy::slot_proxy_func__ZN13QOpenGLWindow12frameSwappedEv() {
  if (this->slot_func__ZN13QOpenGLWindow12frameSwappedEv != NULL) {
    // do smth...
    this->slot_func__ZN13QOpenGLWindow12frameSwappedEv(this->rsfptr);
  }
}
extern "C"
void* QOpenGLWindow_SlotProxy_connect__ZN13QOpenGLWindow12frameSwappedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QOpenGLWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QOpenGLWindow12frameSwappedEv = (decltype(that->slot_func__ZN13QOpenGLWindow12frameSwappedEv))ffifptr;
  QObject::connect((QOpenGLWindow*)sender, SIGNAL(frameSwapped()), that, SLOT(slot_proxy_func__ZN13QOpenGLWindow12frameSwappedEv()));
  return that;
}
extern "C"
void QOpenGLWindow_SlotProxy_disconnect__ZN13QOpenGLWindow12frameSwappedEv(QOpenGLWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

