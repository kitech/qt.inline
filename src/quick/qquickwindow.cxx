// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qquickwindow.h
// dst-file: /src/quick/qquickwindow.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qquickwindow.h>


#include <qglobal.h>
#include <qcolor.h>
#include <qsize.h>
#include <qimage.h>
// <= header block end

// main block begin =>
void __keep_qquickwindow_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQuickWindow_Class_Size()
{
  return sizeof(QQuickWindow);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 149, column 10>
//   // proto:  void QQuickWindow::frameSwapped();
// _ZN12QQuickWindow12frameSwappedEv frameSwapped()
extern "C"
void
C_ZN12QQuickWindow12frameSwappedEv(void *qthis) {
  ((QQuickWindow*)qthis)->frameSwapped();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 90, column 5>
//   // proto:  void QQuickWindow::QQuickWindow(QWindow * parent);
extern "C"
QQuickWindow*
C_ZN12QQuickWindowC2EP7QWindow(QWindow * arg1) {
  auto ret = new QQuickWindow(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 138, column 10>
//   // proto:  void QQuickWindow::setPersistentSceneGraph(bool persistent);
// _ZN12QQuickWindow23setPersistentSceneGraphEb setPersistentSceneGraph(_Bool)
extern "C"
void
C_ZN12QQuickWindow23setPersistentSceneGraphEb(void *qthis,
bool arg1) {
  ((QQuickWindow*)qthis)->setPersistentSceneGraph(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 136, column 10>
//   // proto:  bool QQuickWindow::isPersistentOpenGLContext();
// _ZNK12QQuickWindow25isPersistentOpenGLContextEv isPersistentOpenGLContext()
extern "C"
bool
C_ZNK12QQuickWindow25isPersistentOpenGLContextEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->isPersistentOpenGLContext();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 146, column 11>
//   // proto:  qreal QQuickWindow::effectiveDevicePixelRatio();
// _ZNK12QQuickWindow25effectiveDevicePixelRatioEv effectiveDevicePixelRatio()
extern "C"
double
C_ZNK12QQuickWindow25effectiveDevicePixelRatioEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->effectiveDevicePixelRatio();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 113, column 10>
//   // proto:  void QQuickWindow::resetOpenGLState();
// _ZN12QQuickWindow16resetOpenGLStateEv resetOpenGLState()
extern "C"
void
C_ZN12QQuickWindow16resetOpenGLStateEv(void *qthis) {
  ((QQuickWindow*)qthis)->resetOpenGLState();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 110, column 10>
//   // proto:  uint QQuickWindow::renderTargetId();
// _ZNK12QQuickWindow14renderTargetIdEv renderTargetId()
extern "C"
unsigned int
C_ZNK12QQuickWindow14renderTargetIdEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->renderTargetId();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 109, column 10>
//   // proto:  void QQuickWindow::setRenderTarget(uint fboId, const QSize & size);
// _ZN12QQuickWindow15setRenderTargetEjRK5QSize setRenderTarget(uint, const class QSize &)
extern "C"
void
C_ZN12QQuickWindow15setRenderTargetEjRK5QSize(void *qthis,
uint arg1,
const QSize* arg2) {
  ((QQuickWindow*)qthis)->setRenderTarget(arg1,
*((const QSize*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 60, column 5>
//   // proto:  const QMetaObject * QQuickWindow::metaObject();
// _ZNK12QQuickWindow10metaObjectEv metaObject()
extern "C"
void*
C_ZNK12QQuickWindow10metaObjectEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 160, column 24>
//   // proto:  void QQuickWindow::closing(QQuickCloseEvent * close);
// _ZN12QQuickWindow7closingEP16QQuickCloseEvent closing(class QQuickCloseEvent *)
extern "C"
void
C_ZN12QQuickWindow7closingEP16QQuickCloseEvent(void *qthis,
QQuickCloseEvent * arg1) {
  ((QQuickWindow*)qthis)->closing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 144, column 10>
//   // proto:  void QQuickWindow::scheduleRenderJob(QRunnable * job, QQuickWindow::RenderStage schedule);
// _ZN12QQuickWindow17scheduleRenderJobEP9QRunnableNS_11RenderStageE scheduleRenderJob(class QRunnable *, enum QQuickWindow::RenderStage)
extern "C"
void
C_ZN12QQuickWindow17scheduleRenderJobEP9QRunnableNS_11RenderStageE(void *qthis,
QRunnable * arg1,
QQuickWindow::RenderStage arg2) {
  ((QQuickWindow*)qthis)->scheduleRenderJob(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 153, column 10>
//   // proto:  void QQuickWindow::beforeSynchronizing();
// _ZN12QQuickWindow19beforeSynchronizingEv beforeSynchronizing()
extern "C"
void
C_ZN12QQuickWindow19beforeSynchronizingEv(void *qthis) {
  ((QQuickWindow*)qthis)->beforeSynchronizing();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 151, column 10>
//   // proto:  void QQuickWindow::sceneGraphInitialized();
// _ZN12QQuickWindow21sceneGraphInitializedEv sceneGraphInitialized()
extern "C"
void
C_ZN12QQuickWindow21sceneGraphInitializedEv(void *qthis) {
  ((QQuickWindow*)qthis)->sceneGraphInitialized();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 98, column 14>
//   // proto:  QObject * QQuickWindow::focusObject();
// _ZNK12QQuickWindow11focusObjectEv focusObject()
extern "C"
void*
C_ZNK12QQuickWindow11focusObjectEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->focusObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 97, column 17>
//   // proto:  QQuickItem * QQuickWindow::activeFocusItem();
// _ZNK12QQuickWindow15activeFocusItemEv activeFocusItem()
extern "C"
void*
C_ZNK12QQuickWindow15activeFocusItemEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->activeFocusItem();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 123, column 17>
//   // proto:  QSGTexture * QQuickWindow::createTextureFromImage(const QImage & image, CreateTextureOptions options);
// _ZNK12QQuickWindow22createTextureFromImageERK6QImage6QFlagsINS_19CreateTextureOptionEE createTextureFromImage(const class QImage &, CreateTextureOptions)
extern "C"
void*
C_ZNK12QQuickWindow22createTextureFromImageERK6QImage6QFlagsINS_19CreateTextureOptionEE(void *qthis,
const QImage* arg1,
QQuickWindow::CreateTextureOptions arg2) {
  auto ret =
  ((QQuickWindow*)qthis)->createTextureFromImage(*((const QImage*)arg1),
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 157, column 24>
//   // proto:  void QQuickWindow::afterAnimating();
// _ZN12QQuickWindow14afterAnimatingEv afterAnimating()
extern "C"
void
C_ZN12QQuickWindow14afterAnimatingEv(void *qthis) {
  ((QQuickWindow*)qthis)->afterAnimating();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 167, column 10>
//   // proto:  void QQuickWindow::update();
// _ZN12QQuickWindow6updateEv update()
extern "C"
void
C_ZN12QQuickWindow6updateEv(void *qthis) {
  ((QQuickWindow*)qthis)->update();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 141, column 21>
//   // proto:  QOpenGLContext * QQuickWindow::openglContext();
// _ZNK12QQuickWindow13openglContextEv openglContext()
extern "C"
void*
C_ZNK12QQuickWindow13openglContextEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->openglContext();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 130, column 12>
//   // proto:  QColor QQuickWindow::color();
// _ZNK12QQuickWindow5colorEv color()
extern "C"
QColor*
C_ZNK12QQuickWindow5colorEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->color();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 168, column 10>
//   // proto:  void QQuickWindow::releaseResources();
// _ZN12QQuickWindow16releaseResourcesEv releaseResources()
extern "C"
void
C_ZN12QQuickWindow16releaseResourcesEv(void *qthis) {
  ((QQuickWindow*)qthis)->releaseResources();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 91, column 14>
//   // proto:  void QQuickWindow::QQuickWindow(QQuickRenderControl * renderControl);
extern "C"
QQuickWindow*
C_ZN12QQuickWindowC2EP19QQuickRenderControl(QQuickRenderControl * arg1) {
  auto ret = new QQuickWindow(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 100, column 17>
//   // proto:  QQuickItem * QQuickWindow::mouseGrabberItem();
// _ZNK12QQuickWindow16mouseGrabberItemEv mouseGrabberItem()
extern "C"
void*
C_ZNK12QQuickWindow16mouseGrabberItemEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->mouseGrabberItem();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 154, column 24>
//   // proto:  void QQuickWindow::afterSynchronizing();
// _ZN12QQuickWindow18afterSynchronizingEv afterSynchronizing()
extern "C"
void
C_ZN12QQuickWindow18afterSynchronizingEv(void *qthis) {
  ((QQuickWindow*)qthis)->afterSynchronizing();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 150, column 24>
//   // proto:  void QQuickWindow::openglContextCreated(QOpenGLContext * context);
// _ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext openglContextCreated(class QOpenGLContext *)
extern "C"
void
C_ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext(void *qthis,
QOpenGLContext * arg1) {
  ((QQuickWindow*)qthis)->openglContextCreated(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 158, column 24>
//   // proto:  void QQuickWindow::sceneGraphAboutToStop();
// _ZN12QQuickWindow21sceneGraphAboutToStopEv sceneGraphAboutToStop()
extern "C"
void
C_ZN12QQuickWindow21sceneGraphAboutToStopEv(void *qthis) {
  ((QQuickWindow*)qthis)->sceneGraphAboutToStop();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 139, column 10>
//   // proto:  bool QQuickWindow::isPersistentSceneGraph();
// _ZNK12QQuickWindow22isPersistentSceneGraphEv isPersistentSceneGraph()
extern "C"
bool
C_ZNK12QQuickWindow22isPersistentSceneGraphEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->isPersistentSceneGraph();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 124, column 17>
//   // proto:  QSGTexture * QQuickWindow::createTextureFromId(uint id, const QSize & size, CreateTextureOptions options);
// _ZNK12QQuickWindow19createTextureFromIdEjRK5QSize6QFlagsINS_19CreateTextureOptionEE createTextureFromId(uint, const class QSize &, CreateTextureOptions)
extern "C"
void*
C_ZNK12QQuickWindow19createTextureFromIdEjRK5QSize6QFlagsINS_19CreateTextureOptionEE(void *qthis,
uint arg1,
const QSize* arg2,
QQuickWindow::CreateTextureOptions arg3) {
  auto ret =
  ((QQuickWindow*)qthis)->createTextureFromId(arg1,
*((const QSize*)arg2),
arg3);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 106, column 10>
//   // proto:  void QQuickWindow::setRenderTarget(QOpenGLFramebufferObject * fbo);
// _ZN12QQuickWindow15setRenderTargetEP24QOpenGLFramebufferObject setRenderTarget(class QOpenGLFramebufferObject *)
extern "C"
void
C_ZN12QQuickWindow15setRenderTargetEP24QOpenGLFramebufferObject(void *qthis,
QOpenGLFramebufferObject * arg1) {
  ((QQuickWindow*)qthis)->setRenderTarget(arg1);
}
//   // proto:  void QQuickWindow::~QQuickWindow();
extern "C"
void C_ZN12QQuickWindowD2Ev(void *qthis) {
  delete (QQuickWindow*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 156, column 10>
//   // proto:  void QQuickWindow::afterRendering();
// _ZN12QQuickWindow14afterRenderingEv afterRendering()
extern "C"
void
C_ZN12QQuickWindow14afterRenderingEv(void *qthis) {
  ((QQuickWindow*)qthis)->afterRendering();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 111, column 11>
//   // proto:  QSize QQuickWindow::renderTargetSize();
// _ZNK12QQuickWindow16renderTargetSizeEv renderTargetSize()
extern "C"
QSize*
C_ZNK12QQuickWindow16renderTargetSizeEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->renderTargetSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 129, column 10>
//   // proto:  void QQuickWindow::setColor(const QColor & color);
// _ZN12QQuickWindow8setColorERK6QColor setColor(const class QColor &)
extern "C"
void
C_ZN12QQuickWindow8setColorERK6QColor(void *qthis,
const QColor* arg1) {
  ((QQuickWindow*)qthis)->setColor(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 152, column 10>
//   // proto:  void QQuickWindow::sceneGraphInvalidated();
// _ZN12QQuickWindow21sceneGraphInvalidatedEv sceneGraphInvalidated()
extern "C"
void
C_ZN12QQuickWindow21sceneGraphInvalidatedEv(void *qthis) {
  ((QQuickWindow*)qthis)->sceneGraphInvalidated();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 133, column 17>
//   // proto: static void QQuickWindow::setDefaultAlphaBuffer(bool useAlpha);
// _ZN12QQuickWindow21setDefaultAlphaBufferEb setDefaultAlphaBuffer(_Bool)
extern "C"
void
C_ZN12QQuickWindow21setDefaultAlphaBufferEb(bool arg1) {
  QQuickWindow::setDefaultAlphaBuffer(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 118, column 27>
//   // proto:  QAccessibleInterface * QQuickWindow::accessibleRoot();
// _ZNK12QQuickWindow14accessibleRootEv accessibleRoot()
extern "C"
void*
C_ZNK12QQuickWindow14accessibleRootEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->accessibleRoot();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 142, column 10>
//   // proto:  bool QQuickWindow::isSceneGraphInitialized();
// _ZNK12QQuickWindow23isSceneGraphInitializedEv isSceneGraphInitialized()
extern "C"
bool
C_ZNK12QQuickWindow23isSceneGraphInitializedEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->isSceneGraphInitialized();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 161, column 10>
//   // proto:  void QQuickWindow::colorChanged(const QColor & );
// _ZN12QQuickWindow12colorChangedERK6QColor colorChanged(const class QColor &)
extern "C"
void
C_ZN12QQuickWindow12colorChangedERK6QColor(void *qthis,
const QColor* arg1) {
  ((QQuickWindow*)qthis)->colorChanged(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 126, column 10>
//   // proto:  void QQuickWindow::setClearBeforeRendering(bool enabled);
// _ZN12QQuickWindow23setClearBeforeRenderingEb setClearBeforeRendering(_Bool)
extern "C"
void
C_ZN12QQuickWindow23setClearBeforeRenderingEb(void *qthis,
bool arg1) {
  ((QQuickWindow*)qthis)->setClearBeforeRendering(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 104, column 12>
//   // proto:  QImage QQuickWindow::grabWindow();
// _ZN12QQuickWindow10grabWindowEv grabWindow()
extern "C"
QImage*
C_ZN12QQuickWindow10grabWindowEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->grabWindow();
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 135, column 10>
//   // proto:  void QQuickWindow::setPersistentOpenGLContext(bool persistent);
// _ZN12QQuickWindow26setPersistentOpenGLContextEb setPersistentOpenGLContext(_Bool)
extern "C"
void
C_ZN12QQuickWindow26setPersistentOpenGLContextEb(void *qthis,
bool arg1) {
  ((QQuickWindow*)qthis)->setPersistentOpenGLContext(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 102, column 10>
//   // proto:  bool QQuickWindow::sendEvent(QQuickItem * , QEvent * );
// _ZN12QQuickWindow9sendEventEP10QQuickItemP6QEvent sendEvent(class QQuickItem *, class QEvent *)
extern "C"
bool
C_ZN12QQuickWindow9sendEventEP10QQuickItemP6QEvent(void *qthis,
QQuickItem * arg1,
QEvent * arg2) {
  auto ret =
  ((QQuickWindow*)qthis)->sendEvent(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 107, column 31>
//   // proto:  QOpenGLFramebufferObject * QQuickWindow::renderTarget();
// _ZNK12QQuickWindow12renderTargetEv renderTarget()
extern "C"
void*
C_ZNK12QQuickWindow12renderTargetEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->renderTarget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 155, column 10>
//   // proto:  void QQuickWindow::beforeRendering();
// _ZN12QQuickWindow15beforeRenderingEv beforeRendering()
extern "C"
void
C_ZN12QQuickWindow15beforeRenderingEv(void *qthis) {
  ((QQuickWindow*)qthis)->beforeRendering();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 162, column 24>
//   // proto:  void QQuickWindow::activeFocusItemChanged();
// _ZN12QQuickWindow22activeFocusItemChangedEv activeFocusItemChanged()
extern "C"
void
C_ZN12QQuickWindow22activeFocusItemChangedEv(void *qthis) {
  ((QQuickWindow*)qthis)->activeFocusItemChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 122, column 17>
//   // proto:  QSGTexture * QQuickWindow::createTextureFromImage(const QImage & image);
// _ZNK12QQuickWindow22createTextureFromImageERK6QImage createTextureFromImage(const class QImage &)
extern "C"
void*
C_ZNK12QQuickWindow22createTextureFromImageERK6QImage(void *qthis,
const QImage* arg1) {
  auto ret =
  ((QQuickWindow*)qthis)->createTextureFromImage(*((const QImage*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 115, column 31>
//   // proto:  QQmlIncubationController * QQuickWindow::incubationController();
// _ZNK12QQuickWindow20incubationControllerEv incubationController()
extern "C"
void*
C_ZNK12QQuickWindow20incubationControllerEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->incubationController();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 127, column 10>
//   // proto:  bool QQuickWindow::clearBeforeRendering();
// _ZNK12QQuickWindow20clearBeforeRenderingEv clearBeforeRendering()
extern "C"
bool
C_ZNK12QQuickWindow20clearBeforeRenderingEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->clearBeforeRendering();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 95, column 17>
//   // proto:  QQuickItem * QQuickWindow::contentItem();
// _ZNK12QQuickWindow11contentItemEv contentItem()
extern "C"
void*
C_ZNK12QQuickWindow11contentItemEv(void *qthis) {
  auto ret =
  ((QQuickWindow*)qthis)->contentItem();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 163, column 24>
//   // proto:  void QQuickWindow::sceneGraphError(QQuickWindow::SceneGraphError error, const QString & message);
// _ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString sceneGraphError(class QQuickWindow::SceneGraphError, const class QString &)
extern "C"
void
C_ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString(void *qthis,
QQuickWindow::SceneGraphError* arg1,
const QString* arg2) {
  ((QQuickWindow*)qthis)->sceneGraphError(*((QQuickWindow::SceneGraphError*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickwindow.h', line 132, column 17>
//   // proto: static bool QQuickWindow::hasDefaultAlphaBuffer();
// _ZN12QQuickWindow21hasDefaultAlphaBufferEv hasDefaultAlphaBuffer()
extern "C"
bool
C_ZN12QQuickWindow21hasDefaultAlphaBufferEv() {
  auto ret =
  QQuickWindow::hasDefaultAlphaBuffer();
  return ret; // 0 TypeKind.BOOL
}
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

