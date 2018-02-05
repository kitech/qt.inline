//  header block begin
// /usr/include/qt/QtQuick/qquickwindow.h
#include <qquickwindow.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickWindow is pure virtual: false
// QQuickWindow has virtual projected: true
//  header block end

//  main block begin

class MyQQuickWindow : public QQuickWindow {
public:
  virtual ~MyQQuickWindow() {}
// void QQuickWindow(class QWindow *)
MyQQuickWindow(QWindow * parent) : QQuickWindow(parent) {}
// void QQuickWindow(class QQuickRenderControl *)
MyQQuickWindow(QQuickRenderControl * renderControl) : QQuickWindow(renderControl) {}
// void exposeEvent(class QExposeEvent *)
  virtual void exposeEvent(QExposeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"exposeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWindow::exposeEvent(arg0);
  }
  }
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWindow::resizeEvent(arg0);
  }
  }
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWindow::showEvent(arg0);
  }
  }
// void hideEvent(class QHideEvent *)
  virtual void hideEvent(QHideEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hideEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWindow::hideEvent(arg0);
  }
  }
// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWindow::focusInEvent(arg0);
  }
  }
// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWindow::focusOutEvent(arg0);
  }
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QQuickWindow::event(arg0);
  }
  }
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWindow::keyPressEvent(arg0);
  }
  }
// void keyReleaseEvent(class QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWindow::keyReleaseEvent(arg0);
  }
  }
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWindow::mousePressEvent(arg0);
  }
  }
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWindow::mouseReleaseEvent(arg0);
  }
  }
// void mouseDoubleClickEvent(class QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWindow::mouseDoubleClickEvent(arg0);
  }
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWindow::mouseMoveEvent(arg0);
  }
  }
// void wheelEvent(class QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWindow::wheelEvent(arg0);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:71
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK12QQuickWindow10metaObjectEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:109
// [-2] void QQuickWindow(class QWindow *)
extern "C"
void* C_ZN12QQuickWindowC2EP7QWindow(QWindow * parent) {
  auto _nilp = (MyQQuickWindow*)(0);
  return  new MyQQuickWindow(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:110
// [-2] void QQuickWindow(class QQuickRenderControl *)
extern "C"
void* C_ZN12QQuickWindowC2EP19QQuickRenderControl(QQuickRenderControl * renderControl) {
  auto _nilp = (MyQQuickWindow*)(0);
  return  new MyQQuickWindow(renderControl);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:112
// [-2] void ~QQuickWindow()
extern "C"
void C_ZN12QQuickWindowD2Ev(void *this_) {
  delete (QQuickWindow*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:114
// [8] QQuickItem * contentItem()
extern "C"
void* C_ZNK12QQuickWindow11contentItemEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->contentItem();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:116
// [8] QQuickItem * activeFocusItem()
extern "C"
void* C_ZNK12QQuickWindow15activeFocusItemEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->activeFocusItem();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:117
// [8] QObject * focusObject()
extern "C"
void* C_ZNK12QQuickWindow11focusObjectEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->focusObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:119
// [8] QQuickItem * mouseGrabberItem()
extern "C"
void* C_ZNK12QQuickWindow16mouseGrabberItemEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->mouseGrabberItem();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:122
// [1] bool sendEvent(class QQuickItem *, class QEvent *)
extern "C"
bool C_ZN12QQuickWindow9sendEventEP10QQuickItemP6QEvent(void *this_, QQuickItem * arg0, QEvent * arg1) {
  return (bool)((QQuickWindow*)this_)->sendEvent(arg0, arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:125
// [32] QImage grabWindow()
extern "C"
void* C_ZN12QQuickWindow10grabWindowEv(void *this_) {
  auto rv = ((QQuickWindow*)this_)->grabWindow();
return new QImage(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:130
// [-2] void setRenderTarget(uint, const class QSize &)
extern "C"
void C_ZN12QQuickWindow15setRenderTargetEjRK5QSize(void *this_, uint fboId, QSize* size) {
  ((QQuickWindow*)this_)->setRenderTarget(fboId, *size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:131
// [4] uint renderTargetId()
extern "C"
uint C_ZNK12QQuickWindow14renderTargetIdEv(void *this_) {
  return (uint)((QQuickWindow*)this_)->renderTargetId();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:132
// [8] QSize renderTargetSize()
extern "C"
void* C_ZNK12QQuickWindow16renderTargetSizeEv(void *this_) {
  auto rv = ((QQuickWindow*)this_)->renderTargetSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:134
// [-2] void resetOpenGLState()
extern "C"
void C_ZN12QQuickWindow16resetOpenGLStateEv(void *this_) {
  ((QQuickWindow*)this_)->resetOpenGLState();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:136
// [8] QQmlIncubationController * incubationController()
extern "C"
void* C_ZNK12QQuickWindow20incubationControllerEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->incubationController();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:139
// [8] QAccessibleInterface * accessibleRoot()
extern "C"
void* C_ZNK12QQuickWindow14accessibleRootEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->accessibleRoot();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:143
// [8] QSGTexture * createTextureFromImage(const class QImage &)
extern "C"
void* C_ZNK12QQuickWindow22createTextureFromImageERK6QImage(void *this_, QImage* image) {
  return (void*)((QQuickWindow*)this_)->createTextureFromImage(*image);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:144
// [8] QSGTexture * createTextureFromImage(const class QImage &, QQuickWindow::CreateTextureOptions)
extern "C"
void* C_ZNK12QQuickWindow22createTextureFromImageERK6QImage6QFlagsINS_19CreateTextureOptionEE(void *this_, QImage* image, QFlags<QQuickWindow::CreateTextureOption> options) {
  return (void*)((QQuickWindow*)this_)->createTextureFromImage(*image, options);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:145
// [8] QSGTexture * createTextureFromId(uint, const class QSize &, QQuickWindow::CreateTextureOptions)
extern "C"
void* C_ZNK12QQuickWindow19createTextureFromIdEjRK5QSize6QFlagsINS_19CreateTextureOptionEE(void *this_, uint id, QSize* size, QFlags<QQuickWindow::CreateTextureOption> options) {
  return (void*)((QQuickWindow*)this_)->createTextureFromId(id, *size, options);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:147
// [-2] void setClearBeforeRendering(_Bool)
extern "C"
void C_ZN12QQuickWindow23setClearBeforeRenderingEb(void *this_, bool enabled) {
  ((QQuickWindow*)this_)->setClearBeforeRendering(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:148
// [1] bool clearBeforeRendering()
extern "C"
bool C_ZNK12QQuickWindow20clearBeforeRenderingEv(void *this_) {
  return (bool)((QQuickWindow*)this_)->clearBeforeRendering();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:150
// [-2] void setColor(const class QColor &)
extern "C"
void C_ZN12QQuickWindow8setColorERK6QColor(void *this_, QColor* color) {
  ((QQuickWindow*)this_)->setColor(*color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:151
// [16] QColor color()
extern "C"
void* C_ZNK12QQuickWindow5colorEv(void *this_) {
  auto rv = ((QQuickWindow*)this_)->color();
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:153
// [1] bool hasDefaultAlphaBuffer()
extern "C"
bool C_ZN12QQuickWindow21hasDefaultAlphaBufferEv() {
  return (bool)QQuickWindow::hasDefaultAlphaBuffer();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:154
// [-2] void setDefaultAlphaBuffer(_Bool)
extern "C"
void C_ZN12QQuickWindow21setDefaultAlphaBufferEb(bool useAlpha) {
  QQuickWindow::setDefaultAlphaBuffer(useAlpha);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:156
// [-2] void setPersistentOpenGLContext(_Bool)
extern "C"
void C_ZN12QQuickWindow26setPersistentOpenGLContextEb(void *this_, bool persistent) {
  ((QQuickWindow*)this_)->setPersistentOpenGLContext(persistent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:157
// [1] bool isPersistentOpenGLContext()
extern "C"
bool C_ZNK12QQuickWindow25isPersistentOpenGLContextEv(void *this_) {
  return (bool)((QQuickWindow*)this_)->isPersistentOpenGLContext();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:159
// [-2] void setPersistentSceneGraph(_Bool)
extern "C"
void C_ZN12QQuickWindow23setPersistentSceneGraphEb(void *this_, bool persistent) {
  ((QQuickWindow*)this_)->setPersistentSceneGraph(persistent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:160
// [1] bool isPersistentSceneGraph()
extern "C"
bool C_ZNK12QQuickWindow22isPersistentSceneGraphEv(void *this_) {
  return (bool)((QQuickWindow*)this_)->isPersistentSceneGraph();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:163
// [1] bool isSceneGraphInitialized()
extern "C"
bool C_ZNK12QQuickWindow23isSceneGraphInitializedEv(void *this_) {
  return (bool)((QQuickWindow*)this_)->isSceneGraphInitialized();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:165
// [-2] void scheduleRenderJob(class QRunnable *, enum QQuickWindow::RenderStage)
extern "C"
void C_ZN12QQuickWindow17scheduleRenderJobEP9QRunnableNS_11RenderStageE(void *this_, QRunnable * job, QQuickWindow::RenderStage schedule) {
  ((QQuickWindow*)this_)->scheduleRenderJob(job, schedule);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:167
// [8] qreal effectiveDevicePixelRatio()
extern "C"
qreal C_ZNK12QQuickWindow25effectiveDevicePixelRatioEv(void *this_) {
  return (qreal)((QQuickWindow*)this_)->effectiveDevicePixelRatio();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:169
// [8] QSGRendererInterface * rendererInterface()
extern "C"
void* C_ZNK12QQuickWindow17rendererInterfaceEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->rendererInterface();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:171
// [-2] void setSceneGraphBackend(class QSGRendererInterface::GraphicsApi)
extern "C"
void C_ZN12QQuickWindow20setSceneGraphBackendEN20QSGRendererInterface11GraphicsApiE(QSGRendererInterface::GraphicsApi api) {
  QQuickWindow::setSceneGraphBackend(api);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:172
// [-2] void setSceneGraphBackend(const class QString &)
extern "C"
void C_ZN12QQuickWindow20setSceneGraphBackendERK7QString(QString* backend) {
  QQuickWindow::setSceneGraphBackend(*backend);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:173
// [8] QString sceneGraphBackend()
extern "C"
void* C_ZN12QQuickWindow17sceneGraphBackendEv() {
  auto rv = QQuickWindow::sceneGraphBackend();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:175
// [8] QSGRectangleNode * createRectangleNode()
extern "C"
void* C_ZNK12QQuickWindow19createRectangleNodeEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->createRectangleNode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:176
// [8] QSGImageNode * createImageNode()
extern "C"
void* C_ZNK12QQuickWindow15createImageNodeEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->createImageNode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:177
// [8] QSGNinePatchNode * createNinePatchNode()
extern "C"
void* C_ZNK12QQuickWindow19createNinePatchNodeEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->createNinePatchNode();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:179
// [4] QQuickWindow::TextRenderType textRenderType()
extern "C"
QQuickWindow::TextRenderType C_ZN12QQuickWindow14textRenderTypeEv() {
  return (QQuickWindow::TextRenderType)QQuickWindow::textRenderType();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:180
// [-2] void setTextRenderType(enum QQuickWindow::TextRenderType)
extern "C"
void C_ZN12QQuickWindow17setTextRenderTypeENS_14TextRenderTypeE(QQuickWindow::TextRenderType renderType) {
  QQuickWindow::setTextRenderType(renderType);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:183
// [-2] void frameSwapped()
extern "C"
void C_ZN12QQuickWindow12frameSwappedEv(void *this_) {
  ((QQuickWindow*)this_)->frameSwapped();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:185
// [-2] void sceneGraphInitialized()
extern "C"
void C_ZN12QQuickWindow21sceneGraphInitializedEv(void *this_) {
  ((QQuickWindow*)this_)->sceneGraphInitialized();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:186
// [-2] void sceneGraphInvalidated()
extern "C"
void C_ZN12QQuickWindow21sceneGraphInvalidatedEv(void *this_) {
  ((QQuickWindow*)this_)->sceneGraphInvalidated();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:187
// [-2] void beforeSynchronizing()
extern "C"
void C_ZN12QQuickWindow19beforeSynchronizingEv(void *this_) {
  ((QQuickWindow*)this_)->beforeSynchronizing();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:188
// [-2] void afterSynchronizing()
extern "C"
void C_ZN12QQuickWindow18afterSynchronizingEv(void *this_) {
  ((QQuickWindow*)this_)->afterSynchronizing();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:189
// [-2] void beforeRendering()
extern "C"
void C_ZN12QQuickWindow15beforeRenderingEv(void *this_) {
  ((QQuickWindow*)this_)->beforeRendering();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:190
// [-2] void afterRendering()
extern "C"
void C_ZN12QQuickWindow14afterRenderingEv(void *this_) {
  ((QQuickWindow*)this_)->afterRendering();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:191
// [-2] void afterAnimating()
extern "C"
void C_ZN12QQuickWindow14afterAnimatingEv(void *this_) {
  ((QQuickWindow*)this_)->afterAnimating();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:192
// [-2] void sceneGraphAboutToStop()
extern "C"
void C_ZN12QQuickWindow21sceneGraphAboutToStopEv(void *this_) {
  ((QQuickWindow*)this_)->sceneGraphAboutToStop();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:195
// [-2] void colorChanged(const class QColor &)
extern "C"
void C_ZN12QQuickWindow12colorChangedERK6QColor(void *this_, QColor* arg0) {
  ((QQuickWindow*)this_)->colorChanged(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:196
// [-2] void activeFocusItemChanged()
extern "C"
void C_ZN12QQuickWindow22activeFocusItemChangedEv(void *this_) {
  ((QQuickWindow*)this_)->activeFocusItemChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:197
// [-2] void sceneGraphError(class QQuickWindow::SceneGraphError, const class QString &)
extern "C"
void C_ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString(void *this_, QQuickWindow::SceneGraphError error, QString* message) {
  ((QQuickWindow*)this_)->sceneGraphError(error, *message);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:201
// [-2] void update()
extern "C"
void C_ZN12QQuickWindow6updateEv(void *this_) {
  ((QQuickWindow*)this_)->update();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:202
// [-2] void releaseResources()
extern "C"
void C_ZN12QQuickWindow16releaseResourcesEv(void *this_) {
  ((QQuickWindow*)this_)->releaseResources();
}
//  main block end
