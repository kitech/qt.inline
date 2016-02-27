// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qquickrendercontrol.h
// dst-file: /src/quick/qquickrendercontrol.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qquickrendercontrol.h>


#include <qimage.h>
// <= header block end

// main block begin =>
void __keep_qquickrendercontrol_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qquickrendercontrol.h', line 66, column 22>
//   // proto:  QWindow * QQuickRenderControl::renderWindow(QPoint * offset);
if (true) {
  auto f = [](QQuickRenderControl flythis, QPoint * arg1) {
    ((QQuickRenderControl*)0)->renderWindow(arg1);
    flythis.renderWindow(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QQuickRenderControl12renderWindowEP6QPoint renderWindow(class QPoint *)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQuickRenderControl_Class_Size()
{
  return sizeof(QQuickRenderControl);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qquickrendercontrol.h', line 70, column 10>
//   // proto:  void QQuickRenderControl::sceneChanged();
// _ZN19QQuickRenderControl12sceneChangedEv sceneChanged()
extern "C"
void
C_ZN19QQuickRenderControl12sceneChangedEv(void *qthis) {
  ((QQuickRenderControl*)qthis)->sceneChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickrendercontrol.h', line 57, column 10>
//   // proto:  void QQuickRenderControl::invalidate();
// _ZN19QQuickRenderControl10invalidateEv invalidate()
extern "C"
void
C_ZN19QQuickRenderControl10invalidateEv(void *qthis) {
  ((QQuickRenderControl*)qthis)->invalidate();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickrendercontrol.h', line 66, column 22>
//   // proto:  QWindow * QQuickRenderControl::renderWindow(QPoint * offset);
// _ZN19QQuickRenderControl12renderWindowEP6QPoint renderWindow(class QPoint *)
extern "C"
void*
C_ZN19QQuickRenderControl12renderWindowEP6QPoint(void *qthis,
QPoint * arg1) {
  auto ret =
  ((QQuickRenderControl*)qthis)->renderWindow(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickrendercontrol.h', line 60, column 10>
//   // proto:  void QQuickRenderControl::render();
// _ZN19QQuickRenderControl6renderEv render()
extern "C"
void
C_ZN19QQuickRenderControl6renderEv(void *qthis) {
  ((QQuickRenderControl*)qthis)->render();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickrendercontrol.h', line 61, column 10>
//   // proto:  bool QQuickRenderControl::sync();
// _ZN19QQuickRenderControl4syncEv sync()
extern "C"
bool
C_ZN19QQuickRenderControl4syncEv(void *qthis) {
  auto ret =
  ((QQuickRenderControl*)qthis)->sync();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickrendercontrol.h', line 59, column 10>
//   // proto:  void QQuickRenderControl::polishItems();
// _ZN19QQuickRenderControl11polishItemsEv polishItems()
extern "C"
void
C_ZN19QQuickRenderControl11polishItemsEv(void *qthis) {
  ((QQuickRenderControl*)qthis)->polishItems();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickrendercontrol.h', line 52, column 5>
//   // proto:  void QQuickRenderControl::QQuickRenderControl(QObject * parent);
extern "C"
QQuickRenderControl*
C_ZN19QQuickRenderControlC2EP7QObject(QObject * arg1) {
  auto ret = new QQuickRenderControl(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickrendercontrol.h', line 55, column 10>
//   // proto:  void QQuickRenderControl::prepareThread(QThread * targetThread);
// _ZN19QQuickRenderControl13prepareThreadEP7QThread prepareThread(class QThread *)
extern "C"
void
C_ZN19QQuickRenderControl13prepareThreadEP7QThread(void *qthis,
QThread * arg1) {
  ((QQuickRenderControl*)qthis)->prepareThread(arg1);
}
//   // proto:  void QQuickRenderControl::~QQuickRenderControl();
extern "C"
void C_ZN19QQuickRenderControlD2Ev(void *qthis) {
  delete (QQuickRenderControl*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickrendercontrol.h', line 69, column 10>
//   // proto:  void QQuickRenderControl::renderRequested();
// _ZN19QQuickRenderControl15renderRequestedEv renderRequested()
extern "C"
void
C_ZN19QQuickRenderControl15renderRequestedEv(void *qthis) {
  ((QQuickRenderControl*)qthis)->renderRequested();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickrendercontrol.h', line 63, column 12>
//   // proto:  QImage QQuickRenderControl::grab();
// _ZN19QQuickRenderControl4grabEv grab()
extern "C"
QImage*
C_ZN19QQuickRenderControl4grabEv(void *qthis) {
  auto ret =
  ((QQuickRenderControl*)qthis)->grab();
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickrendercontrol.h', line 49, column 5>
//   // proto:  const QMetaObject * QQuickRenderControl::metaObject();
// _ZNK19QQuickRenderControl10metaObjectEv metaObject()
extern "C"
void*
C_ZNK19QQuickRenderControl10metaObjectEv(void *qthis) {
  auto ret =
  ((QQuickRenderControl*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickrendercontrol.h', line 65, column 21>
//   // proto: static QWindow * QQuickRenderControl::renderWindowFor(QQuickWindow * win, QPoint * offset);
// _ZN19QQuickRenderControl15renderWindowForEP12QQuickWindowP6QPoint renderWindowFor(class QQuickWindow *, class QPoint *)
extern "C"
void*
C_ZN19QQuickRenderControl15renderWindowForEP12QQuickWindowP6QPoint(QQuickWindow * arg1,
QPoint * arg2) {
  auto ret =
  QQuickRenderControl::renderWindowFor(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickrendercontrol.h', line 56, column 10>
//   // proto:  void QQuickRenderControl::initialize(QOpenGLContext * gl);
// _ZN19QQuickRenderControl10initializeEP14QOpenGLContext initialize(class QOpenGLContext *)
extern "C"
void
C_ZN19QQuickRenderControl10initializeEP14QOpenGLContext(void *qthis,
QOpenGLContext * arg1) {
  ((QQuickRenderControl*)qthis)->initialize(arg1);
}
// <= ext block end

// body block begin =>
// QQuickRenderControl_SlotProxy here
class QQuickRenderControl_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickRenderControl_SlotProxy():QObject(){}

public slots:
  // sceneChanged()
  void slot_proxy_func__ZN19QQuickRenderControl12sceneChangedEv();
public:
  void (*slot_func__ZN19QQuickRenderControl12sceneChangedEv)(void* rsfptr) = NULL;
public slots:
  // renderRequested()
  void slot_proxy_func__ZN19QQuickRenderControl15renderRequestedEv();
public:
  void (*slot_func__ZN19QQuickRenderControl15renderRequestedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qquickrendercontrol.moc"

extern "C" {
  QQuickRenderControl_SlotProxy* QQuickRenderControl_SlotProxy_new()
  {
    return new QQuickRenderControl_SlotProxy();
  }
};

void QQuickRenderControl_SlotProxy::slot_proxy_func__ZN19QQuickRenderControl12sceneChangedEv() {
  if (this->slot_func__ZN19QQuickRenderControl12sceneChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN19QQuickRenderControl12sceneChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickRenderControl_SlotProxy_connect__ZN19QQuickRenderControl12sceneChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickRenderControl_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN19QQuickRenderControl12sceneChangedEv = (decltype(that->slot_func__ZN19QQuickRenderControl12sceneChangedEv))ffifptr;
  QObject::connect((QQuickRenderControl*)sender, SIGNAL(sceneChanged()), that, SLOT(slot_proxy_func__ZN19QQuickRenderControl12sceneChangedEv()));
  return that;
}
extern "C"
void QQuickRenderControl_SlotProxy_disconnect__ZN19QQuickRenderControl12sceneChangedEv(QQuickRenderControl_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickRenderControl_SlotProxy::slot_proxy_func__ZN19QQuickRenderControl15renderRequestedEv() {
  if (this->slot_func__ZN19QQuickRenderControl15renderRequestedEv != NULL) {
    // do smth...
    this->slot_func__ZN19QQuickRenderControl15renderRequestedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickRenderControl_SlotProxy_connect__ZN19QQuickRenderControl15renderRequestedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickRenderControl_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN19QQuickRenderControl15renderRequestedEv = (decltype(that->slot_func__ZN19QQuickRenderControl15renderRequestedEv))ffifptr;
  QObject::connect((QQuickRenderControl*)sender, SIGNAL(renderRequested()), that, SLOT(slot_proxy_func__ZN19QQuickRenderControl15renderRequestedEv()));
  return that;
}
extern "C"
void QQuickRenderControl_SlotProxy_disconnect__ZN19QQuickRenderControl15renderRequestedEv(QQuickRenderControl_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

