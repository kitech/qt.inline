#include <qimage.h>
#include <qsize.h>
#include <qcolor.h>
#include <qglobal.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
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
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 149, column 10>
//   // proto:  void QQuickWindow::frameSwapped();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->frameSwapped();
    flythis.frameSwapped();
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow12frameSwappedEv frameSwapped()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 90, column 5>
//   // proto:  void QQuickWindow::QQuickWindow(QWindow * parent);
if (true) {
  auto f = [](QWindow * arg1) {
    new QQuickWindow(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 138, column 10>
//   // proto:  void QQuickWindow::setPersistentSceneGraph(bool persistent);
if (true) {
  auto f = [](QQuickWindow flythis, bool arg1) {
    ((QQuickWindow*)0)->setPersistentSceneGraph(arg1);
    flythis.setPersistentSceneGraph(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow23setPersistentSceneGraphEb setPersistentSceneGraph(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 136, column 10>
//   // proto:  bool QQuickWindow::isPersistentOpenGLContext();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->isPersistentOpenGLContext();
    flythis.isPersistentOpenGLContext();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow25isPersistentOpenGLContextEv isPersistentOpenGLContext()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 146, column 11>
//   // proto:  qreal QQuickWindow::effectiveDevicePixelRatio();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->effectiveDevicePixelRatio();
    flythis.effectiveDevicePixelRatio();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow25effectiveDevicePixelRatioEv effectiveDevicePixelRatio()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 113, column 10>
//   // proto:  void QQuickWindow::resetOpenGLState();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->resetOpenGLState();
    flythis.resetOpenGLState();
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow16resetOpenGLStateEv resetOpenGLState()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 110, column 10>
//   // proto:  uint QQuickWindow::renderTargetId();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->renderTargetId();
    flythis.renderTargetId();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow14renderTargetIdEv renderTargetId()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 109, column 10>
//   // proto:  void QQuickWindow::setRenderTarget(uint fboId, const QSize & size);
if (true) {
  auto f = [](QQuickWindow flythis, uint arg1, const QSize & arg2) {
    ((QQuickWindow*)0)->setRenderTarget(arg1, arg2);
    flythis.setRenderTarget(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow15setRenderTargetEjRK5QSize setRenderTarget(uint, const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 60, column 5>
//   // proto:  const QMetaObject * QQuickWindow::metaObject();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 160, column 24>
//   // proto:  void QQuickWindow::closing(QQuickCloseEvent * close);
if (true) {
  auto f = [](QQuickWindow flythis, QQuickCloseEvent * arg1) {
    ((QQuickWindow*)0)->closing(arg1);
    flythis.closing(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow7closingEP16QQuickCloseEvent closing(class QQuickCloseEvent *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 144, column 10>
//   // proto:  void QQuickWindow::scheduleRenderJob(QRunnable * job, QQuickWindow::RenderStage schedule);
if (true) {
  auto f = [](QQuickWindow flythis, QRunnable * arg1, QQuickWindow::RenderStage arg2) {
    ((QQuickWindow*)0)->scheduleRenderJob(arg1, arg2);
    flythis.scheduleRenderJob(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow17scheduleRenderJobEP9QRunnableNS_11RenderStageE scheduleRenderJob(class QRunnable *, enum QQuickWindow::RenderStage)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 153, column 10>
//   // proto:  void QQuickWindow::beforeSynchronizing();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->beforeSynchronizing();
    flythis.beforeSynchronizing();
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow19beforeSynchronizingEv beforeSynchronizing()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 151, column 10>
//   // proto:  void QQuickWindow::sceneGraphInitialized();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->sceneGraphInitialized();
    flythis.sceneGraphInitialized();
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow21sceneGraphInitializedEv sceneGraphInitialized()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 98, column 14>
//   // proto:  QObject * QQuickWindow::focusObject();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->focusObject();
    flythis.focusObject();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow11focusObjectEv focusObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 97, column 17>
//   // proto:  QQuickItem * QQuickWindow::activeFocusItem();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->activeFocusItem();
    flythis.activeFocusItem();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow15activeFocusItemEv activeFocusItem()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 123, column 17>
//   // proto:  QSGTexture * QQuickWindow::createTextureFromImage(const QImage & image, CreateTextureOptions options);
if (true) {
  auto f = [](QQuickWindow flythis, const QImage & arg1, QQuickWindow::CreateTextureOptions arg2) {
    ((QQuickWindow*)0)->createTextureFromImage(arg1, arg2);
    flythis.createTextureFromImage(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow22createTextureFromImageERK6QImage6QFlagsINS_19CreateTextureOptionEE createTextureFromImage(const class QImage &, CreateTextureOptions)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 157, column 24>
//   // proto:  void QQuickWindow::afterAnimating();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->afterAnimating();
    flythis.afterAnimating();
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow14afterAnimatingEv afterAnimating()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 167, column 10>
//   // proto:  void QQuickWindow::update();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->update();
    flythis.update();
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow6updateEv update()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 141, column 21>
//   // proto:  QOpenGLContext * QQuickWindow::openglContext();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->openglContext();
    flythis.openglContext();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow13openglContextEv openglContext()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 130, column 12>
//   // proto:  QColor QQuickWindow::color();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->color();
    flythis.color();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow5colorEv color()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 168, column 10>
//   // proto:  void QQuickWindow::releaseResources();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->releaseResources();
    flythis.releaseResources();
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow16releaseResourcesEv releaseResources()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 91, column 14>
//   // proto:  void QQuickWindow::QQuickWindow(QQuickRenderControl * renderControl);
if (true) {
  auto f = [](QQuickRenderControl * arg1) {
    new QQuickWindow(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 100, column 17>
//   // proto:  QQuickItem * QQuickWindow::mouseGrabberItem();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->mouseGrabberItem();
    flythis.mouseGrabberItem();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow16mouseGrabberItemEv mouseGrabberItem()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 154, column 24>
//   // proto:  void QQuickWindow::afterSynchronizing();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->afterSynchronizing();
    flythis.afterSynchronizing();
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow18afterSynchronizingEv afterSynchronizing()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 150, column 24>
//   // proto:  void QQuickWindow::openglContextCreated(QOpenGLContext * context);
if (true) {
  auto f = [](QQuickWindow flythis, QOpenGLContext * arg1) {
    ((QQuickWindow*)0)->openglContextCreated(arg1);
    flythis.openglContextCreated(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext openglContextCreated(class QOpenGLContext *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 158, column 24>
//   // proto:  void QQuickWindow::sceneGraphAboutToStop();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->sceneGraphAboutToStop();
    flythis.sceneGraphAboutToStop();
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow21sceneGraphAboutToStopEv sceneGraphAboutToStop()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 139, column 10>
//   // proto:  bool QQuickWindow::isPersistentSceneGraph();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->isPersistentSceneGraph();
    flythis.isPersistentSceneGraph();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow22isPersistentSceneGraphEv isPersistentSceneGraph()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 124, column 17>
//   // proto:  QSGTexture * QQuickWindow::createTextureFromId(uint id, const QSize & size, CreateTextureOptions options);
if (true) {
  auto f = [](QQuickWindow flythis, uint arg1, const QSize & arg2, QQuickWindow::CreateTextureOptions arg3) {
    ((QQuickWindow*)0)->createTextureFromId(arg1, arg2, arg3);
    flythis.createTextureFromId(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow19createTextureFromIdEjRK5QSize6QFlagsINS_19CreateTextureOptionEE createTextureFromId(uint, const class QSize &, CreateTextureOptions)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 106, column 10>
//   // proto:  void QQuickWindow::setRenderTarget(QOpenGLFramebufferObject * fbo);
if (true) {
  auto f = [](QQuickWindow flythis, QOpenGLFramebufferObject * arg1) {
    ((QQuickWindow*)0)->setRenderTarget(arg1);
    flythis.setRenderTarget(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow15setRenderTargetEP24QOpenGLFramebufferObject setRenderTarget(class QOpenGLFramebufferObject *)
//   // proto:  void QQuickWindow::~QQuickWindow();
if (true) {
  delete ((QQuickWindow*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 156, column 10>
//   // proto:  void QQuickWindow::afterRendering();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->afterRendering();
    flythis.afterRendering();
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow14afterRenderingEv afterRendering()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 111, column 11>
//   // proto:  QSize QQuickWindow::renderTargetSize();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->renderTargetSize();
    flythis.renderTargetSize();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow16renderTargetSizeEv renderTargetSize()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 129, column 10>
//   // proto:  void QQuickWindow::setColor(const QColor & color);
if (true) {
  auto f = [](QQuickWindow flythis, const QColor & arg1) {
    ((QQuickWindow*)0)->setColor(arg1);
    flythis.setColor(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow8setColorERK6QColor setColor(const class QColor &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 152, column 10>
//   // proto:  void QQuickWindow::sceneGraphInvalidated();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->sceneGraphInvalidated();
    flythis.sceneGraphInvalidated();
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow21sceneGraphInvalidatedEv sceneGraphInvalidated()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 133, column 17>
//   // proto: static void QQuickWindow::setDefaultAlphaBuffer(bool useAlpha);
if (true) {
  auto f = [](QQuickWindow flythis, bool arg1) {
    ((QQuickWindow*)0)->setDefaultAlphaBuffer(arg1);
    flythis.setDefaultAlphaBuffer(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow21setDefaultAlphaBufferEb setDefaultAlphaBuffer(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 118, column 27>
//   // proto:  QAccessibleInterface * QQuickWindow::accessibleRoot();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->accessibleRoot();
    flythis.accessibleRoot();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow14accessibleRootEv accessibleRoot()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 142, column 10>
//   // proto:  bool QQuickWindow::isSceneGraphInitialized();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->isSceneGraphInitialized();
    flythis.isSceneGraphInitialized();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow23isSceneGraphInitializedEv isSceneGraphInitialized()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 161, column 10>
//   // proto:  void QQuickWindow::colorChanged(const QColor & );
if (true) {
  auto f = [](QQuickWindow flythis, const QColor & arg1) {
    ((QQuickWindow*)0)->colorChanged(arg1);
    flythis.colorChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow12colorChangedERK6QColor colorChanged(const class QColor &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 126, column 10>
//   // proto:  void QQuickWindow::setClearBeforeRendering(bool enabled);
if (true) {
  auto f = [](QQuickWindow flythis, bool arg1) {
    ((QQuickWindow*)0)->setClearBeforeRendering(arg1);
    flythis.setClearBeforeRendering(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow23setClearBeforeRenderingEb setClearBeforeRendering(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 104, column 12>
//   // proto:  QImage QQuickWindow::grabWindow();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->grabWindow();
    flythis.grabWindow();
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow10grabWindowEv grabWindow()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 135, column 10>
//   // proto:  void QQuickWindow::setPersistentOpenGLContext(bool persistent);
if (true) {
  auto f = [](QQuickWindow flythis, bool arg1) {
    ((QQuickWindow*)0)->setPersistentOpenGLContext(arg1);
    flythis.setPersistentOpenGLContext(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow26setPersistentOpenGLContextEb setPersistentOpenGLContext(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 102, column 10>
//   // proto:  bool QQuickWindow::sendEvent(QQuickItem * , QEvent * );
if (true) {
  auto f = [](QQuickWindow flythis, QQuickItem * arg1, QEvent * arg2) {
    ((QQuickWindow*)0)->sendEvent(arg1, arg2);
    flythis.sendEvent(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow9sendEventEP10QQuickItemP6QEvent sendEvent(class QQuickItem *, class QEvent *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 107, column 31>
//   // proto:  QOpenGLFramebufferObject * QQuickWindow::renderTarget();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->renderTarget();
    flythis.renderTarget();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow12renderTargetEv renderTarget()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 155, column 10>
//   // proto:  void QQuickWindow::beforeRendering();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->beforeRendering();
    flythis.beforeRendering();
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow15beforeRenderingEv beforeRendering()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 162, column 24>
//   // proto:  void QQuickWindow::activeFocusItemChanged();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->activeFocusItemChanged();
    flythis.activeFocusItemChanged();
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow22activeFocusItemChangedEv activeFocusItemChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 122, column 17>
//   // proto:  QSGTexture * QQuickWindow::createTextureFromImage(const QImage & image);
if (true) {
  auto f = [](QQuickWindow flythis, const QImage & arg1) {
    ((QQuickWindow*)0)->createTextureFromImage(arg1);
    flythis.createTextureFromImage(arg1);
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow22createTextureFromImageERK6QImage createTextureFromImage(const class QImage &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 115, column 31>
//   // proto:  QQmlIncubationController * QQuickWindow::incubationController();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->incubationController();
    flythis.incubationController();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow20incubationControllerEv incubationController()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 127, column 10>
//   // proto:  bool QQuickWindow::clearBeforeRendering();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->clearBeforeRendering();
    flythis.clearBeforeRendering();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow20clearBeforeRenderingEv clearBeforeRendering()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 95, column 17>
//   // proto:  QQuickItem * QQuickWindow::contentItem();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->contentItem();
    flythis.contentItem();
  };
  if (f == nullptr){}
}
// _ZNK12QQuickWindow11contentItemEv contentItem()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 163, column 24>
//   // proto:  void QQuickWindow::sceneGraphError(QQuickWindow::SceneGraphError error, const QString & message);
if (true) {
  auto f = [](QQuickWindow flythis, QQuickWindow::SceneGraphError arg1, const QString & arg2) {
    ((QQuickWindow*)0)->sceneGraphError(arg1, arg2);
    flythis.sceneGraphError(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString sceneGraphError(class QQuickWindow::SceneGraphError, const class QString &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 132, column 17>
//   // proto: static bool QQuickWindow::hasDefaultAlphaBuffer();
if (true) {
  auto f = [](QQuickWindow flythis) {
    ((QQuickWindow*)0)->hasDefaultAlphaBuffer();
    flythis.hasDefaultAlphaBuffer();
  };
  if (f == nullptr){}
}
// _ZN12QQuickWindow21hasDefaultAlphaBufferEv hasDefaultAlphaBuffer()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 149, column 10>
//   // proto:  void QQuickWindow::frameSwapped();
extern "C"
void C_ZN12QQuickWindow12frameSwappedEv(void *qthis) {
  ((QQuickWindow*)qthis)->frameSwapped();
}
// _ZN12QQuickWindow12frameSwappedEv frameSwapped()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 90, column 5>
//   // proto:  void QQuickWindow::QQuickWindow(QWindow * parent);
extern "C"
void C_ZN12QQuickWindowC2EP7QWindow(QWindow * arg1) {
  new QQuickWindow(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 138, column 10>
//   // proto:  void QQuickWindow::setPersistentSceneGraph(bool persistent);
extern "C"
void C_ZN12QQuickWindow23setPersistentSceneGraphEb(void *qthis, bool arg1) {
  ((QQuickWindow*)qthis)->setPersistentSceneGraph(arg1);
}
// _ZN12QQuickWindow23setPersistentSceneGraphEb setPersistentSceneGraph(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 136, column 10>
//   // proto:  bool QQuickWindow::isPersistentOpenGLContext();
extern "C"
void C_ZNK12QQuickWindow25isPersistentOpenGLContextEv(void *qthis) {
  ((QQuickWindow*)qthis)->isPersistentOpenGLContext();
}
// _ZNK12QQuickWindow25isPersistentOpenGLContextEv isPersistentOpenGLContext()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 146, column 11>
//   // proto:  qreal QQuickWindow::effectiveDevicePixelRatio();
extern "C"
void C_ZNK12QQuickWindow25effectiveDevicePixelRatioEv(void *qthis) {
  ((QQuickWindow*)qthis)->effectiveDevicePixelRatio();
}
// _ZNK12QQuickWindow25effectiveDevicePixelRatioEv effectiveDevicePixelRatio()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 113, column 10>
//   // proto:  void QQuickWindow::resetOpenGLState();
extern "C"
void C_ZN12QQuickWindow16resetOpenGLStateEv(void *qthis) {
  ((QQuickWindow*)qthis)->resetOpenGLState();
}
// _ZN12QQuickWindow16resetOpenGLStateEv resetOpenGLState()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 110, column 10>
//   // proto:  uint QQuickWindow::renderTargetId();
extern "C"
void C_ZNK12QQuickWindow14renderTargetIdEv(void *qthis) {
  ((QQuickWindow*)qthis)->renderTargetId();
}
// _ZNK12QQuickWindow14renderTargetIdEv renderTargetId()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 109, column 10>
//   // proto:  void QQuickWindow::setRenderTarget(uint fboId, const QSize & size);
extern "C"
void C_ZN12QQuickWindow15setRenderTargetEjRK5QSize(void *qthis, uint arg1, const QSize & arg2) {
  ((QQuickWindow*)qthis)->setRenderTarget(arg1, arg2);
}
// _ZN12QQuickWindow15setRenderTargetEjRK5QSize setRenderTarget(uint, const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 60, column 5>
//   // proto:  const QMetaObject * QQuickWindow::metaObject();
extern "C"
void C_ZNK12QQuickWindow10metaObjectEv(void *qthis) {
  ((QQuickWindow*)qthis)->metaObject();
}
// _ZNK12QQuickWindow10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 160, column 24>
//   // proto:  void QQuickWindow::closing(QQuickCloseEvent * close);
extern "C"
void C_ZN12QQuickWindow7closingEP16QQuickCloseEvent(void *qthis, QQuickCloseEvent * arg1) {
  ((QQuickWindow*)qthis)->closing(arg1);
}
// _ZN12QQuickWindow7closingEP16QQuickCloseEvent closing(class QQuickCloseEvent *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 144, column 10>
//   // proto:  void QQuickWindow::scheduleRenderJob(QRunnable * job, QQuickWindow::RenderStage schedule);
extern "C"
void C_ZN12QQuickWindow17scheduleRenderJobEP9QRunnableNS_11RenderStageE(void *qthis, QRunnable * arg1, QQuickWindow::RenderStage arg2) {
  ((QQuickWindow*)qthis)->scheduleRenderJob(arg1, arg2);
}
// _ZN12QQuickWindow17scheduleRenderJobEP9QRunnableNS_11RenderStageE scheduleRenderJob(class QRunnable *, enum QQuickWindow::RenderStage)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 153, column 10>
//   // proto:  void QQuickWindow::beforeSynchronizing();
extern "C"
void C_ZN12QQuickWindow19beforeSynchronizingEv(void *qthis) {
  ((QQuickWindow*)qthis)->beforeSynchronizing();
}
// _ZN12QQuickWindow19beforeSynchronizingEv beforeSynchronizing()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 151, column 10>
//   // proto:  void QQuickWindow::sceneGraphInitialized();
extern "C"
void C_ZN12QQuickWindow21sceneGraphInitializedEv(void *qthis) {
  ((QQuickWindow*)qthis)->sceneGraphInitialized();
}
// _ZN12QQuickWindow21sceneGraphInitializedEv sceneGraphInitialized()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 98, column 14>
//   // proto:  QObject * QQuickWindow::focusObject();
extern "C"
void C_ZNK12QQuickWindow11focusObjectEv(void *qthis) {
  ((QQuickWindow*)qthis)->focusObject();
}
// _ZNK12QQuickWindow11focusObjectEv focusObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 97, column 17>
//   // proto:  QQuickItem * QQuickWindow::activeFocusItem();
extern "C"
void C_ZNK12QQuickWindow15activeFocusItemEv(void *qthis) {
  ((QQuickWindow*)qthis)->activeFocusItem();
}
// _ZNK12QQuickWindow15activeFocusItemEv activeFocusItem()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 123, column 17>
//   // proto:  QSGTexture * QQuickWindow::createTextureFromImage(const QImage & image, CreateTextureOptions options);
extern "C"
void C_ZNK12QQuickWindow22createTextureFromImageERK6QImage6QFlagsINS_19CreateTextureOptionEE(void *qthis, const QImage & arg1, QQuickWindow::CreateTextureOptions arg2) {
  ((QQuickWindow*)qthis)->createTextureFromImage(arg1, arg2);
}
// _ZNK12QQuickWindow22createTextureFromImageERK6QImage6QFlagsINS_19CreateTextureOptionEE createTextureFromImage(const class QImage &, CreateTextureOptions)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 157, column 24>
//   // proto:  void QQuickWindow::afterAnimating();
extern "C"
void C_ZN12QQuickWindow14afterAnimatingEv(void *qthis) {
  ((QQuickWindow*)qthis)->afterAnimating();
}
// _ZN12QQuickWindow14afterAnimatingEv afterAnimating()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 167, column 10>
//   // proto:  void QQuickWindow::update();
extern "C"
void C_ZN12QQuickWindow6updateEv(void *qthis) {
  ((QQuickWindow*)qthis)->update();
}
// _ZN12QQuickWindow6updateEv update()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 141, column 21>
//   // proto:  QOpenGLContext * QQuickWindow::openglContext();
extern "C"
void C_ZNK12QQuickWindow13openglContextEv(void *qthis) {
  ((QQuickWindow*)qthis)->openglContext();
}
// _ZNK12QQuickWindow13openglContextEv openglContext()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 130, column 12>
//   // proto:  QColor QQuickWindow::color();
extern "C"
void C_ZNK12QQuickWindow5colorEv(void *qthis) {
  ((QQuickWindow*)qthis)->color();
}
// _ZNK12QQuickWindow5colorEv color()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 168, column 10>
//   // proto:  void QQuickWindow::releaseResources();
extern "C"
void C_ZN12QQuickWindow16releaseResourcesEv(void *qthis) {
  ((QQuickWindow*)qthis)->releaseResources();
}
// _ZN12QQuickWindow16releaseResourcesEv releaseResources()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 91, column 14>
//   // proto:  void QQuickWindow::QQuickWindow(QQuickRenderControl * renderControl);
extern "C"
void C_ZN12QQuickWindowC2EP19QQuickRenderControl(QQuickRenderControl * arg1) {
  new QQuickWindow(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 100, column 17>
//   // proto:  QQuickItem * QQuickWindow::mouseGrabberItem();
extern "C"
void C_ZNK12QQuickWindow16mouseGrabberItemEv(void *qthis) {
  ((QQuickWindow*)qthis)->mouseGrabberItem();
}
// _ZNK12QQuickWindow16mouseGrabberItemEv mouseGrabberItem()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 154, column 24>
//   // proto:  void QQuickWindow::afterSynchronizing();
extern "C"
void C_ZN12QQuickWindow18afterSynchronizingEv(void *qthis) {
  ((QQuickWindow*)qthis)->afterSynchronizing();
}
// _ZN12QQuickWindow18afterSynchronizingEv afterSynchronizing()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 150, column 24>
//   // proto:  void QQuickWindow::openglContextCreated(QOpenGLContext * context);
extern "C"
void C_ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext(void *qthis, QOpenGLContext * arg1) {
  ((QQuickWindow*)qthis)->openglContextCreated(arg1);
}
// _ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext openglContextCreated(class QOpenGLContext *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 158, column 24>
//   // proto:  void QQuickWindow::sceneGraphAboutToStop();
extern "C"
void C_ZN12QQuickWindow21sceneGraphAboutToStopEv(void *qthis) {
  ((QQuickWindow*)qthis)->sceneGraphAboutToStop();
}
// _ZN12QQuickWindow21sceneGraphAboutToStopEv sceneGraphAboutToStop()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 139, column 10>
//   // proto:  bool QQuickWindow::isPersistentSceneGraph();
extern "C"
void C_ZNK12QQuickWindow22isPersistentSceneGraphEv(void *qthis) {
  ((QQuickWindow*)qthis)->isPersistentSceneGraph();
}
// _ZNK12QQuickWindow22isPersistentSceneGraphEv isPersistentSceneGraph()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 124, column 17>
//   // proto:  QSGTexture * QQuickWindow::createTextureFromId(uint id, const QSize & size, CreateTextureOptions options);
extern "C"
void C_ZNK12QQuickWindow19createTextureFromIdEjRK5QSize6QFlagsINS_19CreateTextureOptionEE(void *qthis, uint arg1, const QSize & arg2, QQuickWindow::CreateTextureOptions arg3) {
  ((QQuickWindow*)qthis)->createTextureFromId(arg1, arg2, arg3);
}
// _ZNK12QQuickWindow19createTextureFromIdEjRK5QSize6QFlagsINS_19CreateTextureOptionEE createTextureFromId(uint, const class QSize &, CreateTextureOptions)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 106, column 10>
//   // proto:  void QQuickWindow::setRenderTarget(QOpenGLFramebufferObject * fbo);
extern "C"
void C_ZN12QQuickWindow15setRenderTargetEP24QOpenGLFramebufferObject(void *qthis, QOpenGLFramebufferObject * arg1) {
  ((QQuickWindow*)qthis)->setRenderTarget(arg1);
}
// _ZN12QQuickWindow15setRenderTargetEP24QOpenGLFramebufferObject setRenderTarget(class QOpenGLFramebufferObject *)
//   // proto:  void QQuickWindow::~QQuickWindow();
extern "C"
void C_ZN12QQuickWindowD2Ev(void *qthis) {
  delete (QQuickWindow*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 156, column 10>
//   // proto:  void QQuickWindow::afterRendering();
extern "C"
void C_ZN12QQuickWindow14afterRenderingEv(void *qthis) {
  ((QQuickWindow*)qthis)->afterRendering();
}
// _ZN12QQuickWindow14afterRenderingEv afterRendering()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 111, column 11>
//   // proto:  QSize QQuickWindow::renderTargetSize();
extern "C"
void C_ZNK12QQuickWindow16renderTargetSizeEv(void *qthis) {
  ((QQuickWindow*)qthis)->renderTargetSize();
}
// _ZNK12QQuickWindow16renderTargetSizeEv renderTargetSize()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 129, column 10>
//   // proto:  void QQuickWindow::setColor(const QColor & color);
extern "C"
void C_ZN12QQuickWindow8setColorERK6QColor(void *qthis, const QColor & arg1) {
  ((QQuickWindow*)qthis)->setColor(arg1);
}
// _ZN12QQuickWindow8setColorERK6QColor setColor(const class QColor &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 152, column 10>
//   // proto:  void QQuickWindow::sceneGraphInvalidated();
extern "C"
void C_ZN12QQuickWindow21sceneGraphInvalidatedEv(void *qthis) {
  ((QQuickWindow*)qthis)->sceneGraphInvalidated();
}
// _ZN12QQuickWindow21sceneGraphInvalidatedEv sceneGraphInvalidated()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 133, column 17>
//   // proto: static void QQuickWindow::setDefaultAlphaBuffer(bool useAlpha);
extern "C"
void C_ZN12QQuickWindow21setDefaultAlphaBufferEb(void *qthis, bool arg1) {
  ((QQuickWindow*)qthis)->setDefaultAlphaBuffer(arg1);
}
// _ZN12QQuickWindow21setDefaultAlphaBufferEb setDefaultAlphaBuffer(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 118, column 27>
//   // proto:  QAccessibleInterface * QQuickWindow::accessibleRoot();
extern "C"
void C_ZNK12QQuickWindow14accessibleRootEv(void *qthis) {
  ((QQuickWindow*)qthis)->accessibleRoot();
}
// _ZNK12QQuickWindow14accessibleRootEv accessibleRoot()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 142, column 10>
//   // proto:  bool QQuickWindow::isSceneGraphInitialized();
extern "C"
void C_ZNK12QQuickWindow23isSceneGraphInitializedEv(void *qthis) {
  ((QQuickWindow*)qthis)->isSceneGraphInitialized();
}
// _ZNK12QQuickWindow23isSceneGraphInitializedEv isSceneGraphInitialized()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 161, column 10>
//   // proto:  void QQuickWindow::colorChanged(const QColor & );
extern "C"
void C_ZN12QQuickWindow12colorChangedERK6QColor(void *qthis, const QColor & arg1) {
  ((QQuickWindow*)qthis)->colorChanged(arg1);
}
// _ZN12QQuickWindow12colorChangedERK6QColor colorChanged(const class QColor &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 126, column 10>
//   // proto:  void QQuickWindow::setClearBeforeRendering(bool enabled);
extern "C"
void C_ZN12QQuickWindow23setClearBeforeRenderingEb(void *qthis, bool arg1) {
  ((QQuickWindow*)qthis)->setClearBeforeRendering(arg1);
}
// _ZN12QQuickWindow23setClearBeforeRenderingEb setClearBeforeRendering(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 104, column 12>
//   // proto:  QImage QQuickWindow::grabWindow();
extern "C"
void C_ZN12QQuickWindow10grabWindowEv(void *qthis) {
  ((QQuickWindow*)qthis)->grabWindow();
}
// _ZN12QQuickWindow10grabWindowEv grabWindow()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 135, column 10>
//   // proto:  void QQuickWindow::setPersistentOpenGLContext(bool persistent);
extern "C"
void C_ZN12QQuickWindow26setPersistentOpenGLContextEb(void *qthis, bool arg1) {
  ((QQuickWindow*)qthis)->setPersistentOpenGLContext(arg1);
}
// _ZN12QQuickWindow26setPersistentOpenGLContextEb setPersistentOpenGLContext(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 102, column 10>
//   // proto:  bool QQuickWindow::sendEvent(QQuickItem * , QEvent * );
extern "C"
void C_ZN12QQuickWindow9sendEventEP10QQuickItemP6QEvent(void *qthis, QQuickItem * arg1, QEvent * arg2) {
  ((QQuickWindow*)qthis)->sendEvent(arg1, arg2);
}
// _ZN12QQuickWindow9sendEventEP10QQuickItemP6QEvent sendEvent(class QQuickItem *, class QEvent *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 107, column 31>
//   // proto:  QOpenGLFramebufferObject * QQuickWindow::renderTarget();
extern "C"
void C_ZNK12QQuickWindow12renderTargetEv(void *qthis) {
  ((QQuickWindow*)qthis)->renderTarget();
}
// _ZNK12QQuickWindow12renderTargetEv renderTarget()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 155, column 10>
//   // proto:  void QQuickWindow::beforeRendering();
extern "C"
void C_ZN12QQuickWindow15beforeRenderingEv(void *qthis) {
  ((QQuickWindow*)qthis)->beforeRendering();
}
// _ZN12QQuickWindow15beforeRenderingEv beforeRendering()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 162, column 24>
//   // proto:  void QQuickWindow::activeFocusItemChanged();
extern "C"
void C_ZN12QQuickWindow22activeFocusItemChangedEv(void *qthis) {
  ((QQuickWindow*)qthis)->activeFocusItemChanged();
}
// _ZN12QQuickWindow22activeFocusItemChangedEv activeFocusItemChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 122, column 17>
//   // proto:  QSGTexture * QQuickWindow::createTextureFromImage(const QImage & image);
extern "C"
void C_ZNK12QQuickWindow22createTextureFromImageERK6QImage(void *qthis, const QImage & arg1) {
  ((QQuickWindow*)qthis)->createTextureFromImage(arg1);
}
// _ZNK12QQuickWindow22createTextureFromImageERK6QImage createTextureFromImage(const class QImage &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 115, column 31>
//   // proto:  QQmlIncubationController * QQuickWindow::incubationController();
extern "C"
void C_ZNK12QQuickWindow20incubationControllerEv(void *qthis) {
  ((QQuickWindow*)qthis)->incubationController();
}
// _ZNK12QQuickWindow20incubationControllerEv incubationController()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 127, column 10>
//   // proto:  bool QQuickWindow::clearBeforeRendering();
extern "C"
void C_ZNK12QQuickWindow20clearBeforeRenderingEv(void *qthis) {
  ((QQuickWindow*)qthis)->clearBeforeRendering();
}
// _ZNK12QQuickWindow20clearBeforeRenderingEv clearBeforeRendering()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 95, column 17>
//   // proto:  QQuickItem * QQuickWindow::contentItem();
extern "C"
void C_ZNK12QQuickWindow11contentItemEv(void *qthis) {
  ((QQuickWindow*)qthis)->contentItem();
}
// _ZNK12QQuickWindow11contentItemEv contentItem()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 163, column 24>
//   // proto:  void QQuickWindow::sceneGraphError(QQuickWindow::SceneGraphError error, const QString & message);
extern "C"
void C_ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString(void *qthis, QQuickWindow::SceneGraphError arg1, const QString & arg2) {
  ((QQuickWindow*)qthis)->sceneGraphError(arg1, arg2);
}
// _ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString sceneGraphError(class QQuickWindow::SceneGraphError, const class QString &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 132, column 17>
//   // proto: static bool QQuickWindow::hasDefaultAlphaBuffer();
extern "C"
void C_ZN12QQuickWindow21hasDefaultAlphaBufferEv(void *qthis) {
  ((QQuickWindow*)qthis)->hasDefaultAlphaBuffer();
}
// _ZN12QQuickWindow21hasDefaultAlphaBufferEv hasDefaultAlphaBuffer()
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

