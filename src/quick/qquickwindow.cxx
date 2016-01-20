// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
// src-file: /QtQuick/qquickwindow.h
// dst-file: /src/quick/qquickwindow.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qquickwindow.h>

extern "C" {

int QQuickWindow_Class_Size()
{
  return sizeof(QQuickWindow);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qquickwindow_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QQuickWindow_SlotProxy here
class QQuickWindow_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickWindow_SlotProxy():QObject(){}

public slots:
  // frameSwapped()
  void slot_proxy_func__ZN12QQuickWindow12frameSwappedEv();
public:
  void (*slot_func__ZN12QQuickWindow12frameSwappedEv)(void* rsfptr) = NULL;
public slots:
  // sceneGraphError(class QQuickWindow::SceneGraphError, const class QString &)
  void slot_proxy_func__ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString(QQuickWindow::SceneGraphError arg0, const QString & arg1);
public:
  void (*slot_func__ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString)(void* rsfptr, QQuickWindow::SceneGraphError arg0, const QString & arg1) = NULL;
public slots:
  // afterRendering()
  void slot_proxy_func__ZN12QQuickWindow14afterRenderingEv();
public:
  void (*slot_func__ZN12QQuickWindow14afterRenderingEv)(void* rsfptr) = NULL;
public slots:
  // closing(class QQuickCloseEvent *)
  void slot_proxy_func__ZN12QQuickWindow7closingEP16QQuickCloseEvent(QQuickCloseEvent * arg0);
public:
  void (*slot_func__ZN12QQuickWindow7closingEP16QQuickCloseEvent)(void* rsfptr, QQuickCloseEvent * arg0) = NULL;
public slots:
  // beforeRendering()
  void slot_proxy_func__ZN12QQuickWindow15beforeRenderingEv();
public:
  void (*slot_func__ZN12QQuickWindow15beforeRenderingEv)(void* rsfptr) = NULL;
public slots:
  // sceneGraphInvalidated()
  void slot_proxy_func__ZN12QQuickWindow21sceneGraphInvalidatedEv();
public:
  void (*slot_func__ZN12QQuickWindow21sceneGraphInvalidatedEv)(void* rsfptr) = NULL;
public slots:
  // activeFocusItemChanged()
  void slot_proxy_func__ZN12QQuickWindow22activeFocusItemChangedEv();
public:
  void (*slot_func__ZN12QQuickWindow22activeFocusItemChangedEv)(void* rsfptr) = NULL;
public slots:
  // afterSynchronizing()
  void slot_proxy_func__ZN12QQuickWindow18afterSynchronizingEv();
public:
  void (*slot_func__ZN12QQuickWindow18afterSynchronizingEv)(void* rsfptr) = NULL;
public slots:
  // beforeSynchronizing()
  void slot_proxy_func__ZN12QQuickWindow19beforeSynchronizingEv();
public:
  void (*slot_func__ZN12QQuickWindow19beforeSynchronizingEv)(void* rsfptr) = NULL;
public slots:
  // openglContextCreated(class QOpenGLContext *)
  void slot_proxy_func__ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext(QOpenGLContext * arg0);
public:
  void (*slot_func__ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext)(void* rsfptr, QOpenGLContext * arg0) = NULL;
public slots:
  // colorChanged(const class QColor &)
  void slot_proxy_func__ZN12QQuickWindow12colorChangedERK6QColor(const QColor & arg0);
public:
  void (*slot_func__ZN12QQuickWindow12colorChangedERK6QColor)(void* rsfptr, const QColor & arg0) = NULL;
public slots:
  // sceneGraphInitialized()
  void slot_proxy_func__ZN12QQuickWindow21sceneGraphInitializedEv();
public:
  void (*slot_func__ZN12QQuickWindow21sceneGraphInitializedEv)(void* rsfptr) = NULL;
public slots:
  // sceneGraphAboutToStop()
  void slot_proxy_func__ZN12QQuickWindow21sceneGraphAboutToStopEv();
public:
  void (*slot_func__ZN12QQuickWindow21sceneGraphAboutToStopEv)(void* rsfptr) = NULL;
public slots:
  // afterAnimating()
  void slot_proxy_func__ZN12QQuickWindow14afterAnimatingEv();
public:
  void (*slot_func__ZN12QQuickWindow14afterAnimatingEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qquickwindow.moc"

extern "C" {
  QQuickWindow_SlotProxy* QQuickWindow_SlotProxy_new()
  {
    return new QQuickWindow_SlotProxy();
  }
};

void QQuickWindow_SlotProxy::slot_proxy_func__ZN12QQuickWindow12frameSwappedEv() {
  if (this->slot_func__ZN12QQuickWindow12frameSwappedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QQuickWindow12frameSwappedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickWindow_SlotProxy_connect__ZN12QQuickWindow12frameSwappedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QQuickWindow12frameSwappedEv = (decltype(that->slot_func__ZN12QQuickWindow12frameSwappedEv))ffifptr;
  QObject::connect((QQuickWindow*)sender, SIGNAL(frameSwapped()), that, SLOT(slot_proxy_func__ZN12QQuickWindow12frameSwappedEv()));
  return that;
}
extern "C"
void QQuickWindow_SlotProxy_disconnect__ZN12QQuickWindow12frameSwappedEv(QQuickWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickWindow_SlotProxy::slot_proxy_func__ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString(QQuickWindow::SceneGraphError arg0, const QString & arg1) {
  if (this->slot_func__ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QQuickWindow_SlotProxy_connect__ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString = (decltype(that->slot_func__ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString))ffifptr;
  QObject::connect((QQuickWindow*)sender, SIGNAL(sceneGraphError(class QQuickWindow::SceneGraphError, const class QString &)), that, SLOT(slot_proxy_func__ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString(QQuickWindow::SceneGraphError arg0, const QString & arg1)));
  return that;
}
extern "C"
void QQuickWindow_SlotProxy_disconnect__ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString(QQuickWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickWindow_SlotProxy::slot_proxy_func__ZN12QQuickWindow14afterRenderingEv() {
  if (this->slot_func__ZN12QQuickWindow14afterRenderingEv != NULL) {
    // do smth...
    this->slot_func__ZN12QQuickWindow14afterRenderingEv(this->rsfptr);
  }
}
extern "C"
void* QQuickWindow_SlotProxy_connect__ZN12QQuickWindow14afterRenderingEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QQuickWindow14afterRenderingEv = (decltype(that->slot_func__ZN12QQuickWindow14afterRenderingEv))ffifptr;
  QObject::connect((QQuickWindow*)sender, SIGNAL(afterRendering()), that, SLOT(slot_proxy_func__ZN12QQuickWindow14afterRenderingEv()));
  return that;
}
extern "C"
void QQuickWindow_SlotProxy_disconnect__ZN12QQuickWindow14afterRenderingEv(QQuickWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickWindow_SlotProxy::slot_proxy_func__ZN12QQuickWindow7closingEP16QQuickCloseEvent(QQuickCloseEvent * arg0) {
  if (this->slot_func__ZN12QQuickWindow7closingEP16QQuickCloseEvent != NULL) {
    // do smth...
    this->slot_func__ZN12QQuickWindow7closingEP16QQuickCloseEvent(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickWindow_SlotProxy_connect__ZN12QQuickWindow7closingEP16QQuickCloseEvent(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QQuickWindow7closingEP16QQuickCloseEvent = (decltype(that->slot_func__ZN12QQuickWindow7closingEP16QQuickCloseEvent))ffifptr;
  QObject::connect((QQuickWindow*)sender, SIGNAL(closing(class QQuickCloseEvent *)), that, SLOT(slot_proxy_func__ZN12QQuickWindow7closingEP16QQuickCloseEvent(QQuickCloseEvent * arg0)));
  return that;
}
extern "C"
void QQuickWindow_SlotProxy_disconnect__ZN12QQuickWindow7closingEP16QQuickCloseEvent(QQuickWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickWindow_SlotProxy::slot_proxy_func__ZN12QQuickWindow15beforeRenderingEv() {
  if (this->slot_func__ZN12QQuickWindow15beforeRenderingEv != NULL) {
    // do smth...
    this->slot_func__ZN12QQuickWindow15beforeRenderingEv(this->rsfptr);
  }
}
extern "C"
void* QQuickWindow_SlotProxy_connect__ZN12QQuickWindow15beforeRenderingEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QQuickWindow15beforeRenderingEv = (decltype(that->slot_func__ZN12QQuickWindow15beforeRenderingEv))ffifptr;
  QObject::connect((QQuickWindow*)sender, SIGNAL(beforeRendering()), that, SLOT(slot_proxy_func__ZN12QQuickWindow15beforeRenderingEv()));
  return that;
}
extern "C"
void QQuickWindow_SlotProxy_disconnect__ZN12QQuickWindow15beforeRenderingEv(QQuickWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickWindow_SlotProxy::slot_proxy_func__ZN12QQuickWindow21sceneGraphInvalidatedEv() {
  if (this->slot_func__ZN12QQuickWindow21sceneGraphInvalidatedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QQuickWindow21sceneGraphInvalidatedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickWindow_SlotProxy_connect__ZN12QQuickWindow21sceneGraphInvalidatedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QQuickWindow21sceneGraphInvalidatedEv = (decltype(that->slot_func__ZN12QQuickWindow21sceneGraphInvalidatedEv))ffifptr;
  QObject::connect((QQuickWindow*)sender, SIGNAL(sceneGraphInvalidated()), that, SLOT(slot_proxy_func__ZN12QQuickWindow21sceneGraphInvalidatedEv()));
  return that;
}
extern "C"
void QQuickWindow_SlotProxy_disconnect__ZN12QQuickWindow21sceneGraphInvalidatedEv(QQuickWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickWindow_SlotProxy::slot_proxy_func__ZN12QQuickWindow22activeFocusItemChangedEv() {
  if (this->slot_func__ZN12QQuickWindow22activeFocusItemChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QQuickWindow22activeFocusItemChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickWindow_SlotProxy_connect__ZN12QQuickWindow22activeFocusItemChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QQuickWindow22activeFocusItemChangedEv = (decltype(that->slot_func__ZN12QQuickWindow22activeFocusItemChangedEv))ffifptr;
  QObject::connect((QQuickWindow*)sender, SIGNAL(activeFocusItemChanged()), that, SLOT(slot_proxy_func__ZN12QQuickWindow22activeFocusItemChangedEv()));
  return that;
}
extern "C"
void QQuickWindow_SlotProxy_disconnect__ZN12QQuickWindow22activeFocusItemChangedEv(QQuickWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickWindow_SlotProxy::slot_proxy_func__ZN12QQuickWindow18afterSynchronizingEv() {
  if (this->slot_func__ZN12QQuickWindow18afterSynchronizingEv != NULL) {
    // do smth...
    this->slot_func__ZN12QQuickWindow18afterSynchronizingEv(this->rsfptr);
  }
}
extern "C"
void* QQuickWindow_SlotProxy_connect__ZN12QQuickWindow18afterSynchronizingEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QQuickWindow18afterSynchronizingEv = (decltype(that->slot_func__ZN12QQuickWindow18afterSynchronizingEv))ffifptr;
  QObject::connect((QQuickWindow*)sender, SIGNAL(afterSynchronizing()), that, SLOT(slot_proxy_func__ZN12QQuickWindow18afterSynchronizingEv()));
  return that;
}
extern "C"
void QQuickWindow_SlotProxy_disconnect__ZN12QQuickWindow18afterSynchronizingEv(QQuickWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickWindow_SlotProxy::slot_proxy_func__ZN12QQuickWindow19beforeSynchronizingEv() {
  if (this->slot_func__ZN12QQuickWindow19beforeSynchronizingEv != NULL) {
    // do smth...
    this->slot_func__ZN12QQuickWindow19beforeSynchronizingEv(this->rsfptr);
  }
}
extern "C"
void* QQuickWindow_SlotProxy_connect__ZN12QQuickWindow19beforeSynchronizingEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QQuickWindow19beforeSynchronizingEv = (decltype(that->slot_func__ZN12QQuickWindow19beforeSynchronizingEv))ffifptr;
  QObject::connect((QQuickWindow*)sender, SIGNAL(beforeSynchronizing()), that, SLOT(slot_proxy_func__ZN12QQuickWindow19beforeSynchronizingEv()));
  return that;
}
extern "C"
void QQuickWindow_SlotProxy_disconnect__ZN12QQuickWindow19beforeSynchronizingEv(QQuickWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickWindow_SlotProxy::slot_proxy_func__ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext(QOpenGLContext * arg0) {
  if (this->slot_func__ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext != NULL) {
    // do smth...
    this->slot_func__ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickWindow_SlotProxy_connect__ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext = (decltype(that->slot_func__ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext))ffifptr;
  QObject::connect((QQuickWindow*)sender, SIGNAL(openglContextCreated(class QOpenGLContext *)), that, SLOT(slot_proxy_func__ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext(QOpenGLContext * arg0)));
  return that;
}
extern "C"
void QQuickWindow_SlotProxy_disconnect__ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext(QQuickWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickWindow_SlotProxy::slot_proxy_func__ZN12QQuickWindow12colorChangedERK6QColor(const QColor & arg0) {
  if (this->slot_func__ZN12QQuickWindow12colorChangedERK6QColor != NULL) {
    // do smth...
    this->slot_func__ZN12QQuickWindow12colorChangedERK6QColor(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickWindow_SlotProxy_connect__ZN12QQuickWindow12colorChangedERK6QColor(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QQuickWindow12colorChangedERK6QColor = (decltype(that->slot_func__ZN12QQuickWindow12colorChangedERK6QColor))ffifptr;
  QObject::connect((QQuickWindow*)sender, SIGNAL(colorChanged(const class QColor &)), that, SLOT(slot_proxy_func__ZN12QQuickWindow12colorChangedERK6QColor(const QColor & arg0)));
  return that;
}
extern "C"
void QQuickWindow_SlotProxy_disconnect__ZN12QQuickWindow12colorChangedERK6QColor(QQuickWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickWindow_SlotProxy::slot_proxy_func__ZN12QQuickWindow21sceneGraphInitializedEv() {
  if (this->slot_func__ZN12QQuickWindow21sceneGraphInitializedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QQuickWindow21sceneGraphInitializedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickWindow_SlotProxy_connect__ZN12QQuickWindow21sceneGraphInitializedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QQuickWindow21sceneGraphInitializedEv = (decltype(that->slot_func__ZN12QQuickWindow21sceneGraphInitializedEv))ffifptr;
  QObject::connect((QQuickWindow*)sender, SIGNAL(sceneGraphInitialized()), that, SLOT(slot_proxy_func__ZN12QQuickWindow21sceneGraphInitializedEv()));
  return that;
}
extern "C"
void QQuickWindow_SlotProxy_disconnect__ZN12QQuickWindow21sceneGraphInitializedEv(QQuickWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickWindow_SlotProxy::slot_proxy_func__ZN12QQuickWindow21sceneGraphAboutToStopEv() {
  if (this->slot_func__ZN12QQuickWindow21sceneGraphAboutToStopEv != NULL) {
    // do smth...
    this->slot_func__ZN12QQuickWindow21sceneGraphAboutToStopEv(this->rsfptr);
  }
}
extern "C"
void* QQuickWindow_SlotProxy_connect__ZN12QQuickWindow21sceneGraphAboutToStopEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QQuickWindow21sceneGraphAboutToStopEv = (decltype(that->slot_func__ZN12QQuickWindow21sceneGraphAboutToStopEv))ffifptr;
  QObject::connect((QQuickWindow*)sender, SIGNAL(sceneGraphAboutToStop()), that, SLOT(slot_proxy_func__ZN12QQuickWindow21sceneGraphAboutToStopEv()));
  return that;
}
extern "C"
void QQuickWindow_SlotProxy_disconnect__ZN12QQuickWindow21sceneGraphAboutToStopEv(QQuickWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickWindow_SlotProxy::slot_proxy_func__ZN12QQuickWindow14afterAnimatingEv() {
  if (this->slot_func__ZN12QQuickWindow14afterAnimatingEv != NULL) {
    // do smth...
    this->slot_func__ZN12QQuickWindow14afterAnimatingEv(this->rsfptr);
  }
}
extern "C"
void* QQuickWindow_SlotProxy_connect__ZN12QQuickWindow14afterAnimatingEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QQuickWindow14afterAnimatingEv = (decltype(that->slot_func__ZN12QQuickWindow14afterAnimatingEv))ffifptr;
  QObject::connect((QQuickWindow*)sender, SIGNAL(afterAnimating()), that, SLOT(slot_proxy_func__ZN12QQuickWindow14afterAnimatingEv()));
  return that;
}
extern "C"
void QQuickWindow_SlotProxy_disconnect__ZN12QQuickWindow14afterAnimatingEv(QQuickWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

