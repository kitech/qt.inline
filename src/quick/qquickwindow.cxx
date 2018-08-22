//  header block begin
// since 0x050000
// /usr/include/qt/QtQuick/qquickwindow.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickwindow.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickWindow is pure virtual: false
// QQuickWindow has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQuickWindow : public QQuickWindow {
public:
  virtual ~MyQQuickWindow() {}
// void QQuickWindow(QWindow *)
MyQQuickWindow(QWindow * parent) : QQuickWindow(parent) {}
// void QQuickWindow(QQuickRenderControl *)
MyQQuickWindow(QQuickRenderControl * renderControl) : QQuickWindow(renderControl) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void exposeEvent(QExposeEvent *)
  virtual void exposeEvent(QExposeEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"exposeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::exposeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::resizeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::showEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void hideEvent(QHideEvent *)
  virtual void hideEvent(QHideEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hideEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::hideEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::focusInEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::focusOutEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QQuickWindow::event(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::keyPressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::keyReleaseEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::mousePressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::mouseReleaseEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::mouseDoubleClickEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::mouseMoveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::wheelEvent(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:207
// [-2] void exposeEvent(QExposeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow11exposeEventEP12QExposeEvent(void *this_, QExposeEvent * arg0) {
  ((QQuickWindow*)this_)->QQuickWindow::exposeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:208
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QQuickWindow*)this_)->QQuickWindow::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:210
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow9showEventEP10QShowEvent(void *this_, QShowEvent * arg0) {
  ((QQuickWindow*)this_)->QQuickWindow::showEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:211
// [-2] void hideEvent(QHideEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow9hideEventEP10QHideEvent(void *this_, QHideEvent * arg0) {
  ((QQuickWindow*)this_)->QQuickWindow::hideEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:214
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * arg0) {
  ((QQuickWindow*)this_)->QQuickWindow::focusInEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:215
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * arg0) {
  ((QQuickWindow*)this_)->QQuickWindow::focusOutEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:217
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QQuickWindow5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QQuickWindow*)this_)->QQuickWindow::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:218
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QQuickWindow*)this_)->QQuickWindow::keyPressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:219
// [-2] void keyReleaseEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QQuickWindow*)this_)->QQuickWindow::keyReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:220
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QQuickWindow*)this_)->QQuickWindow::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:221
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QQuickWindow*)this_)->QQuickWindow::mouseReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:222
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow21mouseDoubleClickEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QQuickWindow*)this_)->QQuickWindow::mouseDoubleClickEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:223
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QQuickWindow*)this_)->QQuickWindow::mouseMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:225
// [-2] void wheelEvent(QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * arg0) {
  ((QQuickWindow*)this_)->QQuickWindow::wheelEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:71
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow10metaObjectEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:71
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQuickWindow11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQuickWindow*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:71
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QQuickWindow11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQuickWindow*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:71
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQuickWindow2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickWindow::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:71
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQuickWindow6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickWindow::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:109
// [-2] void QQuickWindow(QWindow *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQuickWindowC2EP7QWindow(QWindow * parent) {
  auto _nilp = (MyQQuickWindow*)(0);
  return  new MyQQuickWindow(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:110
// [-2] void QQuickWindow(QQuickRenderControl *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QQuickWindowC2EP19QQuickRenderControl(QQuickRenderControl * renderControl) {
  auto _nilp = (MyQQuickWindow*)(0);
  return  new MyQQuickWindow(renderControl);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:112
// [-2] void ~QQuickWindow()
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindowD2Ev(void *this_) {
  delete (QQuickWindow*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:114
// [8] QQuickItem * contentItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow11contentItemEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->contentItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:116
// [8] QQuickItem * activeFocusItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow15activeFocusItemEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->activeFocusItem();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:117
// [8] QObject * focusObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow11focusObjectEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->focusObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:119
// [8] QQuickItem * mouseGrabberItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow16mouseGrabberItemEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->mouseGrabberItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:122
// [1] bool sendEvent(QQuickItem *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QQuickWindow9sendEventEP10QQuickItemP6QEvent(void *this_, QQuickItem * arg0, QEvent * arg1) {
  return (bool)((QQuickWindow*)this_)->sendEvent(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:125
// [32] QImage grabWindow()
extern "C" Q_DECL_EXPORT
void* C_ZN12QQuickWindow10grabWindowEv(void *this_) {
  auto rv = ((QQuickWindow*)this_)->grabWindow();
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:127
// [-2] void setRenderTarget(QOpenGLFramebufferObject *)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow15setRenderTargetEP24QOpenGLFramebufferObject(void *this_, QOpenGLFramebufferObject * fbo) {
  ((QQuickWindow*)this_)->setRenderTarget(fbo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:128
// [8] QOpenGLFramebufferObject * renderTarget()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow12renderTargetEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->renderTarget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:130
// [-2] void setRenderTarget(uint, const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow15setRenderTargetEjRK5QSize(void *this_, uint fboId, QSize* size) {
  ((QQuickWindow*)this_)->setRenderTarget(fboId, *size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:131
// [4] uint renderTargetId()
extern "C" Q_DECL_EXPORT
uint C_ZNK12QQuickWindow14renderTargetIdEv(void *this_) {
  return (uint)((QQuickWindow*)this_)->renderTargetId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:132
// [8] QSize renderTargetSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow16renderTargetSizeEv(void *this_) {
  auto rv = ((QQuickWindow*)this_)->renderTargetSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtQuick/qquickwindow.h:134
// [-2] void resetOpenGLState()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow16resetOpenGLStateEv(void *this_) {
  ((QQuickWindow*)this_)->resetOpenGLState();
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:136
// [8] QQmlIncubationController * incubationController()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow20incubationControllerEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->incubationController();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:139
// [8] QAccessibleInterface * accessibleRoot()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow14accessibleRootEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->accessibleRoot();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:143
// [8] QSGTexture * createTextureFromImage(const QImage &)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow22createTextureFromImageERK6QImage(void *this_, QImage* image) {
  return (void*)((QQuickWindow*)this_)->createTextureFromImage(*image);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:144
// [8] QSGTexture * createTextureFromImage(const QImage &, QQuickWindow::CreateTextureOptions)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow22createTextureFromImageERK6QImage6QFlagsINS_19CreateTextureOptionEE(void *this_, QImage* image, QFlags<QQuickWindow::CreateTextureOption> options) {
  return (void*)((QQuickWindow*)this_)->createTextureFromImage(*image, options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:145
// [8] QSGTexture * createTextureFromId(uint, const QSize &, QQuickWindow::CreateTextureOptions)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow19createTextureFromIdEjRK5QSize6QFlagsINS_19CreateTextureOptionEE(void *this_, uint id, QSize* size, QFlags<QQuickWindow::CreateTextureOption> options) {
  return (void*)((QQuickWindow*)this_)->createTextureFromId(id, *size, options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:147
// [-2] void setClearBeforeRendering(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow23setClearBeforeRenderingEb(void *this_, bool enabled) {
  ((QQuickWindow*)this_)->setClearBeforeRendering(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:148
// [1] bool clearBeforeRendering()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQuickWindow20clearBeforeRenderingEv(void *this_) {
  return (bool)((QQuickWindow*)this_)->clearBeforeRendering();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:150
// [-2] void setColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow8setColorERK6QColor(void *this_, QColor* color) {
  ((QQuickWindow*)this_)->setColor(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:151
// [16] QColor color()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow5colorEv(void *this_) {
  auto rv = ((QQuickWindow*)this_)->color();
return new QColor(rv);
}

// Public static Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtQuick/qquickwindow.h:153
// [1] bool hasDefaultAlphaBuffer()
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
bool C_ZN12QQuickWindow21hasDefaultAlphaBufferEv() {
  return (bool)QQuickWindow::hasDefaultAlphaBuffer();
}
#endif // QT_VERSION >= 0x050100

// Public static Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtQuick/qquickwindow.h:154
// [-2] void setDefaultAlphaBuffer(bool)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow21setDefaultAlphaBufferEb(bool useAlpha) {
  QQuickWindow::setDefaultAlphaBuffer(useAlpha);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:156
// [-2] void setPersistentOpenGLContext(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow26setPersistentOpenGLContextEb(void *this_, bool persistent) {
  ((QQuickWindow*)this_)->setPersistentOpenGLContext(persistent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:157
// [1] bool isPersistentOpenGLContext()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQuickWindow25isPersistentOpenGLContextEv(void *this_) {
  return (bool)((QQuickWindow*)this_)->isPersistentOpenGLContext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:159
// [-2] void setPersistentSceneGraph(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow23setPersistentSceneGraphEb(void *this_, bool persistent) {
  ((QQuickWindow*)this_)->setPersistentSceneGraph(persistent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:160
// [1] bool isPersistentSceneGraph()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQuickWindow22isPersistentSceneGraphEv(void *this_) {
  return (bool)((QQuickWindow*)this_)->isPersistentSceneGraph();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:162
// [8] QOpenGLContext * openglContext()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow13openglContextEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->openglContext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:163
// [1] bool isSceneGraphInitialized()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QQuickWindow23isSceneGraphInitializedEv(void *this_) {
  return (bool)((QQuickWindow*)this_)->isSceneGraphInitialized();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:165
// [-2] void scheduleRenderJob(QRunnable *, QQuickWindow::RenderStage)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow17scheduleRenderJobEP9QRunnableNS_11RenderStageE(void *this_, QRunnable * job, QQuickWindow::RenderStage schedule) {
  ((QQuickWindow*)this_)->scheduleRenderJob(job, schedule);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:167
// [8] qreal effectiveDevicePixelRatio()
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QQuickWindow25effectiveDevicePixelRatioEv(void *this_) {
  return (qreal)((QQuickWindow*)this_)->effectiveDevicePixelRatio();
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtQuick/qquickwindow.h:169
// [8] QSGRendererInterface * rendererInterface()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow17rendererInterfaceEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->rendererInterface();
}
#endif // QT_VERSION >= 0x050800

// Public static Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtQuick/qquickwindow.h:171
// [-2] void setSceneGraphBackend(QSGRendererInterface::GraphicsApi)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow20setSceneGraphBackendEN20QSGRendererInterface11GraphicsApiE(QSGRendererInterface::GraphicsApi api) {
  QQuickWindow::setSceneGraphBackend(api);
}
#endif // QT_VERSION >= 0x050800

// Public static Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtQuick/qquickwindow.h:172
// [-2] void setSceneGraphBackend(const QString &)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow20setSceneGraphBackendERK7QString(QString* backend) {
  QQuickWindow::setSceneGraphBackend(*backend);
}
#endif // QT_VERSION >= 0x050800

// Public static Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtQuick/qquickwindow.h:173
// [8] QString sceneGraphBackend()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void* C_ZN12QQuickWindow17sceneGraphBackendEv() {
  auto rv = QQuickWindow::sceneGraphBackend();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtQuick/qquickwindow.h:175
// [8] QSGRectangleNode * createRectangleNode()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow19createRectangleNodeEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->createRectangleNode();
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtQuick/qquickwindow.h:176
// [8] QSGImageNode * createImageNode()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow15createImageNodeEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->createImageNode();
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtQuick/qquickwindow.h:177
// [8] QSGNinePatchNode * createNinePatchNode()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK12QQuickWindow19createNinePatchNodeEv(void *this_) {
  return (void*)((QQuickWindow*)this_)->createNinePatchNode();
}
#endif // QT_VERSION >= 0x050800

// Public static Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtQuick/qquickwindow.h:179
// [4] QQuickWindow::TextRenderType textRenderType()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
QQuickWindow::TextRenderType C_ZN12QQuickWindow14textRenderTypeEv() {
  return (QQuickWindow::TextRenderType)QQuickWindow::textRenderType();
}
#endif // QT_VERSION >= 0x050a00

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:180
// [-2] void setTextRenderType(QQuickWindow::TextRenderType)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow17setTextRenderTypeENS_14TextRenderTypeE(QQuickWindow::TextRenderType renderType) {
  QQuickWindow::setTextRenderType(renderType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:183
// [-2] void frameSwapped()
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow12frameSwappedEv(void *this_) {
  ((QQuickWindow*)this_)->frameSwapped();
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtQuick/qquickwindow.h:184
// [-2] void openglContextCreated(QOpenGLContext *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow20openglContextCreatedEP14QOpenGLContext(void *this_, QOpenGLContext * context) {
  ((QQuickWindow*)this_)->openglContextCreated(context);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:185
// [-2] void sceneGraphInitialized()
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow21sceneGraphInitializedEv(void *this_) {
  ((QQuickWindow*)this_)->sceneGraphInitialized();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:186
// [-2] void sceneGraphInvalidated()
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow21sceneGraphInvalidatedEv(void *this_) {
  ((QQuickWindow*)this_)->sceneGraphInvalidated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:187
// [-2] void beforeSynchronizing()
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow19beforeSynchronizingEv(void *this_) {
  ((QQuickWindow*)this_)->beforeSynchronizing();
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtQuick/qquickwindow.h:188
// [-2] void afterSynchronizing()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow18afterSynchronizingEv(void *this_) {
  ((QQuickWindow*)this_)->afterSynchronizing();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:189
// [-2] void beforeRendering()
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow15beforeRenderingEv(void *this_) {
  ((QQuickWindow*)this_)->beforeRendering();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:190
// [-2] void afterRendering()
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow14afterRenderingEv(void *this_) {
  ((QQuickWindow*)this_)->afterRendering();
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtQuick/qquickwindow.h:191
// [-2] void afterAnimating()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow14afterAnimatingEv(void *this_) {
  ((QQuickWindow*)this_)->afterAnimating();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtQuick/qquickwindow.h:192
// [-2] void sceneGraphAboutToStop()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow21sceneGraphAboutToStopEv(void *this_) {
  ((QQuickWindow*)this_)->sceneGraphAboutToStop();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtQuick/qquickwindow.h:194
// [-2] void closing(QQuickCloseEvent *)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow7closingEP16QQuickCloseEvent(void *this_, QQuickCloseEvent * close) {
  ((QQuickWindow*)this_)->closing(close);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:195
// [-2] void colorChanged(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow12colorChangedERK6QColor(void *this_, QColor* arg0) {
  ((QQuickWindow*)this_)->colorChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:196
// [-2] void activeFocusItemChanged()
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow22activeFocusItemChangedEv(void *this_) {
  ((QQuickWindow*)this_)->activeFocusItemChanged();
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtQuick/qquickwindow.h:197
// [-2] void sceneGraphError(QQuickWindow::SceneGraphError, const QString &)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow15sceneGraphErrorENS_15SceneGraphErrorERK7QString(void *this_, QQuickWindow::SceneGraphError error, QString* message) {
  ((QQuickWindow*)this_)->sceneGraphError(error, *message);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:201
// [-2] void update()
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow6updateEv(void *this_) {
  ((QQuickWindow*)this_)->update();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:202
// [-2] void releaseResources()
extern "C" Q_DECL_EXPORT
void C_ZN12QQuickWindow16releaseResourcesEv(void *this_) {
  ((QQuickWindow*)this_)->releaseResources();
}

//  main block end
