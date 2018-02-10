//  header block begin
// /usr/include/qt/QtGui/qwindow.h
#include <qwindow.h>
#include <QtGui>
#include "callback_inherit.h"

// QWindow is pure virtual: false
// QWindow has virtual projected: true
//  header block end

//  main block begin

class MyQWindow : public QWindow {
public:
  virtual ~MyQWindow() {}
// void QWindow(class QScreen *)
MyQWindow(QScreen * screen) : QWindow(screen) {}
// void QWindow(class QWindow *)
MyQWindow(QWindow * parent) : QWindow(parent) {}
// void exposeEvent(class QExposeEvent *)
  virtual void exposeEvent(QExposeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"exposeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::exposeEvent(arg0);
  }
  }

// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::resizeEvent(arg0);
  }
  }

// void moveEvent(class QMoveEvent *)
  virtual void moveEvent(QMoveEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"moveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::moveEvent(arg0);
  }
  }

// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::focusInEvent(arg0);
  }
  }

// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::focusOutEvent(arg0);
  }
  }

// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::showEvent(arg0);
  }
  }

// void hideEvent(class QHideEvent *)
  virtual void hideEvent(QHideEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hideEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::hideEvent(arg0);
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
    return QWindow::event(arg0);
  }
  }

// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::keyPressEvent(arg0);
  }
  }

// void keyReleaseEvent(class QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::keyReleaseEvent(arg0);
  }
  }

// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::mousePressEvent(arg0);
  }
  }

// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::mouseReleaseEvent(arg0);
  }
  }

// void mouseDoubleClickEvent(class QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::mouseDoubleClickEvent(arg0);
  }
  }

// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::mouseMoveEvent(arg0);
  }
  }

// void wheelEvent(class QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::wheelEvent(arg0);
  }
  }

// void touchEvent(class QTouchEvent *)
  virtual void touchEvent(QTouchEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"touchEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::touchEvent(arg0);
  }
  }

// void tabletEvent(class QTabletEvent *)
  virtual void tabletEvent(QTabletEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"tabletEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWindow::tabletEvent(arg0);
  }
  }

// bool nativeEvent(const class QByteArray &, void *, long *)
  virtual bool nativeEvent(const QByteArray & eventType, void * message, long * result) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"nativeEvent", &handled, 3, (uint64_t)&eventType, (uint64_t)message, (uint64_t)result, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QWindow::nativeEvent(eventType, message, result);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:97
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK7QWindow10metaObjectEv(void *this_) {
  return (void*)((QWindow*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:144
// [-2] void QWindow(class QScreen *)
extern "C"
void* C_ZN7QWindowC2EP7QScreen(QScreen * screen) {
  auto _nilp = (MyQWindow*)(0);
  return  new MyQWindow(screen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:145
// [-2] void QWindow(class QWindow *)
extern "C"
void* C_ZN7QWindowC2EPS_(QWindow * parent) {
  auto _nilp = (MyQWindow*)(0);
  return  new MyQWindow(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:146
// [-2] void ~QWindow()
extern "C"
void C_ZN7QWindowD2Ev(void *this_) {
  delete (QWindow*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:148
// [-2] void setSurfaceType(enum QSurface::SurfaceType)
extern "C"
void C_ZN7QWindow14setSurfaceTypeEN8QSurface11SurfaceTypeE(void *this_, QSurface::SurfaceType surfaceType) {
  ((QWindow*)this_)->setSurfaceType(surfaceType);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:149
// [4] QSurface::SurfaceType surfaceType()
extern "C"
QSurface::SurfaceType C_ZNK7QWindow11surfaceTypeEv(void *this_) {
  return (QSurface::SurfaceType)((QWindow*)this_)->surfaceType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:151
// [1] bool isVisible()
extern "C"
bool C_ZNK7QWindow9isVisibleEv(void *this_) {
  return (bool)((QWindow*)this_)->isVisible();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:153
// [4] QWindow::Visibility visibility()
extern "C"
QWindow::Visibility C_ZNK7QWindow10visibilityEv(void *this_) {
  return (QWindow::Visibility)((QWindow*)this_)->visibility();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:154
// [-2] void setVisibility(enum QWindow::Visibility)
extern "C"
void C_ZN7QWindow13setVisibilityENS_10VisibilityE(void *this_, QWindow::Visibility v) {
  ((QWindow*)this_)->setVisibility(v);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:156
// [-2] void create()
extern "C"
void C_ZN7QWindow6createEv(void *this_) {
  ((QWindow*)this_)->create();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:158
// [8] WId winId()
extern "C"
WId C_ZNK7QWindow5winIdEv(void *this_) {
  return (WId)((QWindow*)this_)->winId();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:160
// [8] QWindow * parent(enum QWindow::AncestorMode)
extern "C"
void* C_ZNK7QWindow6parentENS_12AncestorModeE(void *this_, QWindow::AncestorMode mode) {
  return (void*)((QWindow*)this_)->parent(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:161
// [8] QWindow * parent()
extern "C"
void* C_ZNK7QWindow6parentEv(void *this_) {
  return (void*)((QWindow*)this_)->parent();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:162
// [-2] void setParent(class QWindow *)
extern "C"
void C_ZN7QWindow9setParentEPS_(void *this_, QWindow * parent) {
  ((QWindow*)this_)->setParent(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:164
// [1] bool isTopLevel()
extern "C"
bool C_ZNK7QWindow10isTopLevelEv(void *this_) {
  return (bool)((QWindow*)this_)->isTopLevel();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:166
// [1] bool isModal()
extern "C"
bool C_ZNK7QWindow7isModalEv(void *this_) {
  return (bool)((QWindow*)this_)->isModal();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:167
// [4] Qt::WindowModality modality()
extern "C"
Qt::WindowModality C_ZNK7QWindow8modalityEv(void *this_) {
  return (Qt::WindowModality)((QWindow*)this_)->modality();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:168
// [-2] void setModality(Qt::WindowModality)
extern "C"
void C_ZN7QWindow11setModalityEN2Qt14WindowModalityE(void *this_, Qt::WindowModality modality) {
  ((QWindow*)this_)->setModality(modality);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:170
// [-2] void setFormat(const class QSurfaceFormat &)
extern "C"
void C_ZN7QWindow9setFormatERK14QSurfaceFormat(void *this_, QSurfaceFormat* format) {
  ((QWindow*)this_)->setFormat(*format);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:171
// [8] QSurfaceFormat format()
extern "C"
void* C_ZNK7QWindow6formatEv(void *this_) {
  auto rv = ((QWindow*)this_)->format();
return new QSurfaceFormat(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:172
// [8] QSurfaceFormat requestedFormat()
extern "C"
void* C_ZNK7QWindow15requestedFormatEv(void *this_) {
  auto rv = ((QWindow*)this_)->requestedFormat();
return new QSurfaceFormat(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:174
// [-2] void setFlags(Qt::WindowFlags)
extern "C"
void C_ZN7QWindow8setFlagsE6QFlagsIN2Qt10WindowTypeEE(void *this_, QFlags<Qt::WindowType> flags) {
  ((QWindow*)this_)->setFlags(flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:175
// [4] Qt::WindowFlags flags()
extern "C"
Qt::WindowFlags C_ZNK7QWindow5flagsEv(void *this_) {
  return (Qt::WindowFlags)((QWindow*)this_)->flags();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:176
// [-2] void setFlag(Qt::WindowType, _Bool)
extern "C"
void C_ZN7QWindow7setFlagEN2Qt10WindowTypeEb(void *this_, Qt::WindowType arg0, bool on) {
  ((QWindow*)this_)->setFlag(arg0, on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:177
// [4] Qt::WindowType type()
extern "C"
Qt::WindowType C_ZNK7QWindow4typeEv(void *this_) {
  return (Qt::WindowType)((QWindow*)this_)->type();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:179
// [8] QString title()
extern "C"
void* C_ZNK7QWindow5titleEv(void *this_) {
  auto rv = ((QWindow*)this_)->title();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:181
// [-2] void setOpacity(qreal)
extern "C"
void C_ZN7QWindow10setOpacityEd(void *this_, qreal level) {
  ((QWindow*)this_)->setOpacity(level);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:182
// [8] qreal opacity()
extern "C"
qreal C_ZNK7QWindow7opacityEv(void *this_) {
  return (qreal)((QWindow*)this_)->opacity();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:184
// [-2] void setMask(const class QRegion &)
extern "C"
void C_ZN7QWindow7setMaskERK7QRegion(void *this_, QRegion* region) {
  ((QWindow*)this_)->setMask(*region);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:185
// [8] QRegion mask()
extern "C"
void* C_ZNK7QWindow4maskEv(void *this_) {
  auto rv = ((QWindow*)this_)->mask();
return new QRegion(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:187
// [1] bool isActive()
extern "C"
bool C_ZNK7QWindow8isActiveEv(void *this_) {
  return (bool)((QWindow*)this_)->isActive();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:189
// [-2] void reportContentOrientationChange(Qt::ScreenOrientation)
extern "C"
void C_ZN7QWindow30reportContentOrientationChangeEN2Qt17ScreenOrientationE(void *this_, Qt::ScreenOrientation orientation) {
  ((QWindow*)this_)->reportContentOrientationChange(orientation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:190
// [4] Qt::ScreenOrientation contentOrientation()
extern "C"
Qt::ScreenOrientation C_ZNK7QWindow18contentOrientationEv(void *this_) {
  return (Qt::ScreenOrientation)((QWindow*)this_)->contentOrientation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:192
// [8] qreal devicePixelRatio()
extern "C"
qreal C_ZNK7QWindow16devicePixelRatioEv(void *this_) {
  return (qreal)((QWindow*)this_)->devicePixelRatio();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:194
// [4] Qt::WindowState windowState()
extern "C"
Qt::WindowState C_ZNK7QWindow11windowStateEv(void *this_) {
  return (Qt::WindowState)((QWindow*)this_)->windowState();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:195
// [4] Qt::WindowStates windowStates()
extern "C"
Qt::WindowStates C_ZNK7QWindow12windowStatesEv(void *this_) {
  return (Qt::WindowStates)((QWindow*)this_)->windowStates();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:196
// [-2] void setWindowState(Qt::WindowState)
extern "C"
void C_ZN7QWindow14setWindowStateEN2Qt11WindowStateE(void *this_, Qt::WindowState state) {
  ((QWindow*)this_)->setWindowState(state);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:197
// [-2] void setWindowStates(Qt::WindowStates)
extern "C"
void C_ZN7QWindow15setWindowStatesE6QFlagsIN2Qt11WindowStateEE(void *this_, QFlags<Qt::WindowState> states) {
  ((QWindow*)this_)->setWindowStates(states);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:199
// [-2] void setTransientParent(class QWindow *)
extern "C"
void C_ZN7QWindow18setTransientParentEPS_(void *this_, QWindow * parent) {
  ((QWindow*)this_)->setTransientParent(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:200
// [8] QWindow * transientParent()
extern "C"
void* C_ZNK7QWindow15transientParentEv(void *this_) {
  return (void*)((QWindow*)this_)->transientParent();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:202
// [1] bool isAncestorOf(const class QWindow *, enum QWindow::AncestorMode)
extern "C"
bool C_ZNK7QWindow12isAncestorOfEPKS_NS_12AncestorModeE(void *this_, const QWindow * child, QWindow::AncestorMode mode) {
  return (bool)((QWindow*)this_)->isAncestorOf(child, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:204
// [1] bool isExposed()
extern "C"
bool C_ZNK7QWindow9isExposedEv(void *this_) {
  return (bool)((QWindow*)this_)->isExposed();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:206
// [4] int minimumWidth()
extern "C"
int C_ZNK7QWindow12minimumWidthEv(void *this_) {
  return (int)((QWindow*)this_)->minimumWidth();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:207
// [4] int minimumHeight()
extern "C"
int C_ZNK7QWindow13minimumHeightEv(void *this_) {
  return (int)((QWindow*)this_)->minimumHeight();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:208
// [4] int maximumWidth()
extern "C"
int C_ZNK7QWindow12maximumWidthEv(void *this_) {
  return (int)((QWindow*)this_)->maximumWidth();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:209
// [4] int maximumHeight()
extern "C"
int C_ZNK7QWindow13maximumHeightEv(void *this_) {
  return (int)((QWindow*)this_)->maximumHeight();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:211
// [8] QSize minimumSize()
extern "C"
void* C_ZNK7QWindow11minimumSizeEv(void *this_) {
  auto rv = ((QWindow*)this_)->minimumSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:212
// [8] QSize maximumSize()
extern "C"
void* C_ZNK7QWindow11maximumSizeEv(void *this_) {
  auto rv = ((QWindow*)this_)->maximumSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:213
// [8] QSize baseSize()
extern "C"
void* C_ZNK7QWindow8baseSizeEv(void *this_) {
  auto rv = ((QWindow*)this_)->baseSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:214
// [8] QSize sizeIncrement()
extern "C"
void* C_ZNK7QWindow13sizeIncrementEv(void *this_) {
  auto rv = ((QWindow*)this_)->sizeIncrement();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:216
// [-2] void setMinimumSize(const class QSize &)
extern "C"
void C_ZN7QWindow14setMinimumSizeERK5QSize(void *this_, QSize* size) {
  ((QWindow*)this_)->setMinimumSize(*size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:217
// [-2] void setMaximumSize(const class QSize &)
extern "C"
void C_ZN7QWindow14setMaximumSizeERK5QSize(void *this_, QSize* size) {
  ((QWindow*)this_)->setMaximumSize(*size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:218
// [-2] void setBaseSize(const class QSize &)
extern "C"
void C_ZN7QWindow11setBaseSizeERK5QSize(void *this_, QSize* size) {
  ((QWindow*)this_)->setBaseSize(*size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:219
// [-2] void setSizeIncrement(const class QSize &)
extern "C"
void C_ZN7QWindow16setSizeIncrementERK5QSize(void *this_, QSize* size) {
  ((QWindow*)this_)->setSizeIncrement(*size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:221
// [16] QRect geometry()
extern "C"
void* C_ZNK7QWindow8geometryEv(void *this_) {
  auto rv = ((QWindow*)this_)->geometry();
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:223
// [16] QMargins frameMargins()
extern "C"
void* C_ZNK7QWindow12frameMarginsEv(void *this_) {
  auto rv = ((QWindow*)this_)->frameMargins();
return new QMargins(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:224
// [16] QRect frameGeometry()
extern "C"
void* C_ZNK7QWindow13frameGeometryEv(void *this_) {
  auto rv = ((QWindow*)this_)->frameGeometry();
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:226
// [8] QPoint framePosition()
extern "C"
void* C_ZNK7QWindow13framePositionEv(void *this_) {
  auto rv = ((QWindow*)this_)->framePosition();
return new QPoint(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:227
// [-2] void setFramePosition(const class QPoint &)
extern "C"
void C_ZN7QWindow16setFramePositionERK6QPoint(void *this_, QPoint* point) {
  ((QWindow*)this_)->setFramePosition(*point);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:229
// [4] int width()
extern "C"
int C_ZNK7QWindow5widthEv(void *this_) {
  return (int)((QWindow*)this_)->width();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:230
// [4] int height()
extern "C"
int C_ZNK7QWindow6heightEv(void *this_) {
  return (int)((QWindow*)this_)->height();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:231
// [4] int x()
extern "C"
int C_ZNK7QWindow1xEv(void *this_) {
  return (int)((QWindow*)this_)->x();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:232
// [4] int y()
extern "C"
int C_ZNK7QWindow1yEv(void *this_) {
  return (int)((QWindow*)this_)->y();
}
// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:234
// [8] QSize size()
extern "C"
void* C_ZNK7QWindow4sizeEv(void *this_) {
  auto rv = ((QWindow*)this_)->size();
return new QSize(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:235
// [8] QPoint position()
extern "C"
void* C_ZNK7QWindow8positionEv(void *this_) {
  auto rv = ((QWindow*)this_)->position();
return new QPoint(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:237
// [-2] void setPosition(const class QPoint &)
extern "C"
void C_ZN7QWindow11setPositionERK6QPoint(void *this_, QPoint* pt) {
  ((QWindow*)this_)->setPosition(*pt);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:238
// [-2] void setPosition(int, int)
extern "C"
void C_ZN7QWindow11setPositionEii(void *this_, int posx, int posy) {
  ((QWindow*)this_)->setPosition(posx, posy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:240
// [-2] void resize(const class QSize &)
extern "C"
void C_ZN7QWindow6resizeERK5QSize(void *this_, QSize* newSize) {
  ((QWindow*)this_)->resize(*newSize);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:241
// [-2] void resize(int, int)
extern "C"
void C_ZN7QWindow6resizeEii(void *this_, int w, int h) {
  ((QWindow*)this_)->resize(w, h);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:243
// [-2] void setFilePath(const class QString &)
extern "C"
void C_ZN7QWindow11setFilePathERK7QString(void *this_, QString* filePath) {
  ((QWindow*)this_)->setFilePath(*filePath);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:244
// [8] QString filePath()
extern "C"
void* C_ZNK7QWindow8filePathEv(void *this_) {
  auto rv = ((QWindow*)this_)->filePath();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:246
// [-2] void setIcon(const class QIcon &)
extern "C"
void C_ZN7QWindow7setIconERK5QIcon(void *this_, QIcon* icon) {
  ((QWindow*)this_)->setIcon(*icon);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:247
// [8] QIcon icon()
extern "C"
void* C_ZNK7QWindow4iconEv(void *this_) {
  auto rv = ((QWindow*)this_)->icon();
return new QIcon(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:249
// [-2] void destroy()
extern "C"
void C_ZN7QWindow7destroyEv(void *this_) {
  ((QWindow*)this_)->destroy();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:253
// [1] bool setKeyboardGrabEnabled(_Bool)
extern "C"
bool C_ZN7QWindow22setKeyboardGrabEnabledEb(void *this_, bool grab) {
  return (bool)((QWindow*)this_)->setKeyboardGrabEnabled(grab);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:254
// [1] bool setMouseGrabEnabled(_Bool)
extern "C"
bool C_ZN7QWindow19setMouseGrabEnabledEb(void *this_, bool grab) {
  return (bool)((QWindow*)this_)->setMouseGrabEnabled(grab);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:256
// [8] QScreen * screen()
extern "C"
void* C_ZNK7QWindow6screenEv(void *this_) {
  return (void*)((QWindow*)this_)->screen();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:257
// [-2] void setScreen(class QScreen *)
extern "C"
void C_ZN7QWindow9setScreenEP7QScreen(void *this_, QScreen * screen) {
  ((QWindow*)this_)->setScreen(screen);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:259
// [8] QAccessibleInterface * accessibleRoot()
extern "C"
void* C_ZNK7QWindow14accessibleRootEv(void *this_) {
  return (void*)((QWindow*)this_)->accessibleRoot();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:260
// [8] QObject * focusObject()
extern "C"
void* C_ZNK7QWindow11focusObjectEv(void *this_) {
  return (void*)((QWindow*)this_)->focusObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:262
// [8] QPoint mapToGlobal(const class QPoint &)
extern "C"
void* C_ZNK7QWindow11mapToGlobalERK6QPoint(void *this_, QPoint* pos) {
  auto rv = ((QWindow*)this_)->mapToGlobal(*pos);
return new QPoint(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:263
// [8] QPoint mapFromGlobal(const class QPoint &)
extern "C"
void* C_ZNK7QWindow13mapFromGlobalERK6QPoint(void *this_, QPoint* pos) {
  auto rv = ((QWindow*)this_)->mapFromGlobal(*pos);
return new QPoint(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:266
// [8] QCursor cursor()
extern "C"
void* C_ZNK7QWindow6cursorEv(void *this_) {
  auto rv = ((QWindow*)this_)->cursor();
return new QCursor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:267
// [-2] void setCursor(const class QCursor &)
extern "C"
void C_ZN7QWindow9setCursorERK7QCursor(void *this_, QCursor* arg0) {
  ((QWindow*)this_)->setCursor(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:268
// [-2] void unsetCursor()
extern "C"
void C_ZN7QWindow11unsetCursorEv(void *this_) {
  ((QWindow*)this_)->unsetCursor();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:271
// [8] QWindow * fromWinId(WId)
extern "C"
void* C_ZN7QWindow9fromWinIdEy(WId id) {
  return (void*)QWindow::fromWinId(id);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:279
// [-2] void requestActivate()
extern "C"
void C_ZN7QWindow15requestActivateEv(void *this_) {
  ((QWindow*)this_)->requestActivate();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:281
// [-2] void setVisible(_Bool)
extern "C"
void C_ZN7QWindow10setVisibleEb(void *this_, bool visible) {
  ((QWindow*)this_)->setVisible(visible);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:283
// [-2] void show()
extern "C"
void C_ZN7QWindow4showEv(void *this_) {
  ((QWindow*)this_)->show();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:284
// [-2] void hide()
extern "C"
void C_ZN7QWindow4hideEv(void *this_) {
  ((QWindow*)this_)->hide();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:286
// [-2] void showMinimized()
extern "C"
void C_ZN7QWindow13showMinimizedEv(void *this_) {
  ((QWindow*)this_)->showMinimized();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:287
// [-2] void showMaximized()
extern "C"
void C_ZN7QWindow13showMaximizedEv(void *this_) {
  ((QWindow*)this_)->showMaximized();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:288
// [-2] void showFullScreen()
extern "C"
void C_ZN7QWindow14showFullScreenEv(void *this_) {
  ((QWindow*)this_)->showFullScreen();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:289
// [-2] void showNormal()
extern "C"
void C_ZN7QWindow10showNormalEv(void *this_) {
  ((QWindow*)this_)->showNormal();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:291
// [1] bool close()
extern "C"
bool C_ZN7QWindow5closeEv(void *this_) {
  return (bool)((QWindow*)this_)->close();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:292
// [-2] void raise()
extern "C"
void C_ZN7QWindow5raiseEv(void *this_) {
  ((QWindow*)this_)->raise();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:293
// [-2] void lower()
extern "C"
void C_ZN7QWindow5lowerEv(void *this_) {
  ((QWindow*)this_)->lower();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:295
// [-2] void setTitle(const class QString &)
extern "C"
void C_ZN7QWindow8setTitleERK7QString(void *this_, QString* arg0) {
  ((QWindow*)this_)->setTitle(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:297
// [-2] void setX(int)
extern "C"
void C_ZN7QWindow4setXEi(void *this_, int arg) {
  ((QWindow*)this_)->setX(arg);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:298
// [-2] void setY(int)
extern "C"
void C_ZN7QWindow4setYEi(void *this_, int arg) {
  ((QWindow*)this_)->setY(arg);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:299
// [-2] void setWidth(int)
extern "C"
void C_ZN7QWindow8setWidthEi(void *this_, int arg) {
  ((QWindow*)this_)->setWidth(arg);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:300
// [-2] void setHeight(int)
extern "C"
void C_ZN7QWindow9setHeightEi(void *this_, int arg) {
  ((QWindow*)this_)->setHeight(arg);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:301
// [-2] void setGeometry(int, int, int, int)
extern "C"
void C_ZN7QWindow11setGeometryEiiii(void *this_, int posx, int posy, int w, int h) {
  ((QWindow*)this_)->setGeometry(posx, posy, w, h);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:302
// [-2] void setGeometry(const class QRect &)
extern "C"
void C_ZN7QWindow11setGeometryERK5QRect(void *this_, QRect* rect) {
  ((QWindow*)this_)->setGeometry(*rect);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:304
// [-2] void setMinimumWidth(int)
extern "C"
void C_ZN7QWindow15setMinimumWidthEi(void *this_, int w) {
  ((QWindow*)this_)->setMinimumWidth(w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:305
// [-2] void setMinimumHeight(int)
extern "C"
void C_ZN7QWindow16setMinimumHeightEi(void *this_, int h) {
  ((QWindow*)this_)->setMinimumHeight(h);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:306
// [-2] void setMaximumWidth(int)
extern "C"
void C_ZN7QWindow15setMaximumWidthEi(void *this_, int w) {
  ((QWindow*)this_)->setMaximumWidth(w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:307
// [-2] void setMaximumHeight(int)
extern "C"
void C_ZN7QWindow16setMaximumHeightEi(void *this_, int h) {
  ((QWindow*)this_)->setMaximumHeight(h);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:309
// [-2] void alert(int)
extern "C"
void C_ZN7QWindow5alertEi(void *this_, int msec) {
  ((QWindow*)this_)->alert(msec);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:311
// [-2] void requestUpdate()
extern "C"
void C_ZN7QWindow13requestUpdateEv(void *this_) {
  ((QWindow*)this_)->requestUpdate();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:314
// [-2] void screenChanged(class QScreen *)
extern "C"
void C_ZN7QWindow13screenChangedEP7QScreen(void *this_, QScreen * screen) {
  ((QWindow*)this_)->screenChanged(screen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:315
// [-2] void modalityChanged(Qt::WindowModality)
extern "C"
void C_ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(void *this_, Qt::WindowModality modality) {
  ((QWindow*)this_)->modalityChanged(modality);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:316
// [-2] void windowStateChanged(Qt::WindowState)
extern "C"
void C_ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(void *this_, Qt::WindowState windowState) {
  ((QWindow*)this_)->windowStateChanged(windowState);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:317
// [-2] void windowTitleChanged(const class QString &)
extern "C"
void C_ZN7QWindow18windowTitleChangedERK7QString(void *this_, QString* title) {
  ((QWindow*)this_)->windowTitleChanged(*title);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:319
// [-2] void xChanged(int)
extern "C"
void C_ZN7QWindow8xChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->xChanged(arg);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:320
// [-2] void yChanged(int)
extern "C"
void C_ZN7QWindow8yChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->yChanged(arg);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:322
// [-2] void widthChanged(int)
extern "C"
void C_ZN7QWindow12widthChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->widthChanged(arg);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:323
// [-2] void heightChanged(int)
extern "C"
void C_ZN7QWindow13heightChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->heightChanged(arg);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:325
// [-2] void minimumWidthChanged(int)
extern "C"
void C_ZN7QWindow19minimumWidthChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->minimumWidthChanged(arg);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:326
// [-2] void minimumHeightChanged(int)
extern "C"
void C_ZN7QWindow20minimumHeightChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->minimumHeightChanged(arg);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:327
// [-2] void maximumWidthChanged(int)
extern "C"
void C_ZN7QWindow19maximumWidthChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->maximumWidthChanged(arg);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:328
// [-2] void maximumHeightChanged(int)
extern "C"
void C_ZN7QWindow20maximumHeightChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->maximumHeightChanged(arg);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:330
// [-2] void visibleChanged(_Bool)
extern "C"
void C_ZN7QWindow14visibleChangedEb(void *this_, bool arg) {
  ((QWindow*)this_)->visibleChanged(arg);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:331
// [-2] void visibilityChanged(class QWindow::Visibility)
extern "C"
void C_ZN7QWindow17visibilityChangedENS_10VisibilityE(void *this_, QWindow::Visibility visibility) {
  ((QWindow*)this_)->visibilityChanged(visibility);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:332
// [-2] void activeChanged()
extern "C"
void C_ZN7QWindow13activeChangedEv(void *this_) {
  ((QWindow*)this_)->activeChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:333
// [-2] void contentOrientationChanged(Qt::ScreenOrientation)
extern "C"
void C_ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(void *this_, Qt::ScreenOrientation orientation) {
  ((QWindow*)this_)->contentOrientationChanged(orientation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:335
// [-2] void focusObjectChanged(class QObject *)
extern "C"
void C_ZN7QWindow18focusObjectChangedEP7QObject(void *this_, QObject * object) {
  ((QWindow*)this_)->focusObjectChanged(object);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qwindow.h:337
// [-2] void opacityChanged(qreal)
extern "C"
void C_ZN7QWindow14opacityChangedEd(void *this_, qreal opacity) {
  ((QWindow*)this_)->opacityChanged(opacity);
}
//  main block end
