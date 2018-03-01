//  header block begin
// /usr/include/qt/QtWidgets/qwidget.h
#ifndef protected
#define protected public
#endif
#include <qwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWidget is pure virtual: false
// QWidget has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWidget : public QWidget {
public:
  virtual ~MyQWidget() {}
// void QWidget(class QWidget *, Qt::WindowFlags)
MyQWidget(QWidget * parent, QFlags<Qt::WindowType> f) : QWidget(parent, f) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QWidget::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::mousePressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::mouseReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseDoubleClickEvent(class QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::mouseDoubleClickEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::mouseMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void wheelEvent(class QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::wheelEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::keyPressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyReleaseEvent(class QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::keyReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::focusInEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::focusOutEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void enterEvent(class QEvent *)
  virtual void enterEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"enterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::enterEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void leaveEvent(class QEvent *)
  virtual void leaveEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"leaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::leaveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::paintEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void moveEvent(class QMoveEvent *)
  virtual void moveEvent(QMoveEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"moveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::moveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::resizeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void closeEvent(class QCloseEvent *)
  virtual void closeEvent(QCloseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"closeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::closeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void contextMenuEvent(class QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::contextMenuEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void tabletEvent(class QTabletEvent *)
  virtual void tabletEvent(QTabletEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"tabletEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::tabletEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void actionEvent(class QActionEvent *)
  virtual void actionEvent(QActionEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"actionEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::actionEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragEnterEvent(class QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::dragEnterEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragMoveEvent(class QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::dragMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragLeaveEvent(class QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::dragLeaveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dropEvent(class QDropEvent *)
  virtual void dropEvent(QDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::dropEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::showEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void hideEvent(class QHideEvent *)
  virtual void hideEvent(QHideEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hideEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::hideEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool nativeEvent(const class QByteArray &, void *, long *)
  virtual bool nativeEvent(const QByteArray & eventType, void * message, long * result) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"nativeEvent", &handled, 3, (uint64_t)&eventType, (uint64_t)message, (uint64_t)result, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QWidget::nativeEvent(eventType, message, result);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::changeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// int metric(enum QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"metric", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QWidget::metric(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void initPainter(class QPainter *)
  virtual void initPainter(QPainter * painter) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initPainter", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::initPainter(painter);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QPaintDevice * redirected(class QPoint *)
  virtual QPaintDevice * redirected(QPoint * offset) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"redirected", &handled, 1, (uint64_t)offset, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPaintDevice *)(irv);
      // PointerPointerQPaintDevice *
    } else {
    return QWidget::redirected(offset);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QPainter * sharedPainter()
  virtual QPainter * sharedPainter() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sharedPainter", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPainter *)(irv);
      // PointerPointerQPainter *
    } else {
    return QWidget::sharedPainter();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void inputMethodEvent(class QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::inputMethodEvent(arg0);
  }
  }

// Protected Visibility=Default Availability=Available
// void updateMicroFocus()
  virtual void updateMicroFocus() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateMicroFocus", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::updateMicroFocus();
  }
  }

// Protected Visibility=Default Availability=Available
// void create(WId, _Bool, _Bool)
  virtual void create(WId arg0, bool initializeWindow, bool destroyOldWindow) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"create", &handled, 3, (uint64_t)arg0, (uint64_t)initializeWindow, (uint64_t)destroyOldWindow, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::create(arg0, initializeWindow, destroyOldWindow);
  }
  }

// Protected Visibility=Default Availability=Available
// void destroy(_Bool, _Bool)
  virtual void destroy(bool destroyWindow, bool destroySubWindows) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"destroy", &handled, 2, (uint64_t)destroyWindow, (uint64_t)destroySubWindows, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidget::destroy(destroyWindow, destroySubWindows);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool focusNextPrevChild(_Bool)
  virtual bool focusNextPrevChild(bool next) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QWidget::focusNextPrevChild(next);
  }
  }

// Protected inline Visibility=Default Availability=Available
// bool focusNextChild()
  virtual bool focusNextChild() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusNextChild", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QWidget::focusNextChild();
  }
  }

// Protected inline Visibility=Default Availability=Available
// bool focusPreviousChild()
  virtual bool focusPreviousChild() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusPreviousChild", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QWidget::focusPreviousChild();
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:611
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QWidget5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QWidget*)this_)->QWidget::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:612
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QWidget*)this_)->QWidget::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:613
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QWidget*)this_)->QWidget::mouseReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:614
// [-2] void mouseDoubleClickEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget21mouseDoubleClickEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QWidget*)this_)->QWidget::mouseDoubleClickEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:615
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QWidget*)this_)->QWidget::mouseMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:617
// [-2] void wheelEvent(class QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * event) {
  ((QWidget*)this_)->QWidget::wheelEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:619
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QWidget*)this_)->QWidget::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:620
// [-2] void keyReleaseEvent(class QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QWidget*)this_)->QWidget::keyReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:621
// [-2] void focusInEvent(class QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QWidget*)this_)->QWidget::focusInEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:622
// [-2] void focusOutEvent(class QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QWidget*)this_)->QWidget::focusOutEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:623
// [-2] void enterEvent(class QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget10enterEventEP6QEvent(void *this_, QEvent * event) {
  ((QWidget*)this_)->QWidget::enterEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:624
// [-2] void leaveEvent(class QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget10leaveEventEP6QEvent(void *this_, QEvent * event) {
  ((QWidget*)this_)->QWidget::leaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:625
// [-2] void paintEvent(class QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QWidget*)this_)->QWidget::paintEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:626
// [-2] void moveEvent(class QMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget9moveEventEP10QMoveEvent(void *this_, QMoveEvent * event) {
  ((QWidget*)this_)->QWidget::moveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:627
// [-2] void resizeEvent(class QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QWidget*)this_)->QWidget::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:628
// [-2] void closeEvent(class QCloseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget10closeEventEP11QCloseEvent(void *this_, QCloseEvent * event) {
  ((QWidget*)this_)->QWidget::closeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:630
// [-2] void contextMenuEvent(class QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * event) {
  ((QWidget*)this_)->QWidget::contextMenuEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:633
// [-2] void tabletEvent(class QTabletEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget11tabletEventEP12QTabletEvent(void *this_, QTabletEvent * event) {
  ((QWidget*)this_)->QWidget::tabletEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:636
// [-2] void actionEvent(class QActionEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget11actionEventEP12QActionEvent(void *this_, QActionEvent * event) {
  ((QWidget*)this_)->QWidget::actionEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:640
// [-2] void dragEnterEvent(class QDragEnterEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14dragEnterEventEP15QDragEnterEvent(void *this_, QDragEnterEvent * event) {
  ((QWidget*)this_)->QWidget::dragEnterEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:641
// [-2] void dragMoveEvent(class QDragMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget13dragMoveEventEP14QDragMoveEvent(void *this_, QDragMoveEvent * event) {
  ((QWidget*)this_)->QWidget::dragMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:642
// [-2] void dragLeaveEvent(class QDragLeaveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14dragLeaveEventEP15QDragLeaveEvent(void *this_, QDragLeaveEvent * event) {
  ((QWidget*)this_)->QWidget::dragLeaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:643
// [-2] void dropEvent(class QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget9dropEventEP10QDropEvent(void *this_, QDropEvent * event) {
  ((QWidget*)this_)->QWidget::dropEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:646
// [-2] void showEvent(class QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget9showEventEP10QShowEvent(void *this_, QShowEvent * event) {
  ((QWidget*)this_)->QWidget::showEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:647
// [-2] void hideEvent(class QHideEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget9hideEventEP10QHideEvent(void *this_, QHideEvent * event) {
  ((QWidget*)this_)->QWidget::hideEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:648
// [1] bool nativeEvent(const class QByteArray &, void *, long *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QWidget11nativeEventERK10QByteArrayPvPl(void *this_, QByteArray* eventType, void * message, long * result) {
  return (bool)((QWidget*)this_)->QWidget::nativeEvent(*eventType, message, result);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:651
// [-2] void changeEvent(class QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget11changeEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QWidget*)this_)->QWidget::changeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:653
// [4] int metric(enum QPaintDevice::PaintDeviceMetric)
extern "C" Q_DECL_EXPORT
int C_ZNK7QWidget6metricEN12QPaintDevice17PaintDeviceMetricE(void *this_, QPaintDevice::PaintDeviceMetric arg0) {
  return (int)((QWidget*)this_)->QWidget::metric(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:654
// [-2] void initPainter(class QPainter *)
extern "C" Q_DECL_EXPORT
void C_ZNK7QWidget11initPainterEP8QPainter(void *this_, QPainter * painter) {
  ((QWidget*)this_)->QWidget::initPainter(painter);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:655
// [8] QPaintDevice * redirected(class QPoint *)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget10redirectedEP6QPoint(void *this_, QPoint * offset) {
  return (void*)((QWidget*)this_)->QWidget::redirected(offset);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:656
// [8] QPainter * sharedPainter()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget13sharedPainterEv(void *this_) {
  return (void*)((QWidget*)this_)->QWidget::sharedPainter();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:658
// [-2] void inputMethodEvent(class QInputMethodEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget16inputMethodEventEP17QInputMethodEvent(void *this_, QInputMethodEvent * arg0) {
  ((QWidget*)this_)->QWidget::inputMethodEvent(arg0);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:666
// [-2] void updateMicroFocus()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget16updateMicroFocusEv(void *this_) {
  ((QWidget*)this_)->QWidget::updateMicroFocus();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:669
// [-2] void create(WId, _Bool, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget6createEybb(void *this_, WId arg0, bool initializeWindow, bool destroyOldWindow) {
  ((QWidget*)this_)->QWidget::create(arg0, initializeWindow, destroyOldWindow);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:671
// [-2] void destroy(_Bool, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget7destroyEbb(void *this_, bool destroyWindow, bool destroySubWindows) {
  ((QWidget*)this_)->QWidget::destroy(destroyWindow, destroySubWindows);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:675
// [1] bool focusNextPrevChild(_Bool)
extern "C" Q_DECL_EXPORT
bool C_ZN7QWidget18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QWidget*)this_)->QWidget::focusNextPrevChild(next);
}

// Protected inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:676
// [1] bool focusNextChild()
extern "C" Q_DECL_EXPORT
bool C_ZN7QWidget14focusNextChildEv(void *this_) {
  return (bool)((QWidget*)this_)->QWidget::focusNextChild();
}

// Protected inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:677
// [1] bool focusPreviousChild()
extern "C" Q_DECL_EXPORT
bool C_ZN7QWidget18focusPreviousChildEv(void *this_) {
  return (bool)((QWidget*)this_)->QWidget::focusPreviousChild();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:130
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget10metaObjectEv(void *this_) {
  return (void*)((QWidget*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:214
// [-2] void QWidget(class QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN7QWidgetC2EPS_6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQWidget*)(0);
  return  new MyQWidget(parent, f);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:215
// [-2] void ~QWidget()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidgetD2Ev(void *this_) {
  delete (QWidget*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:217
// [4] int devType()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWidget7devTypeEv(void *this_) {
  return (int)((QWidget*)this_)->devType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:219
// [8] WId winId()
extern "C" Q_DECL_EXPORT
WId C_ZNK7QWidget5winIdEv(void *this_) {
  return (WId)((QWidget*)this_)->winId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:220
// [-2] void createWinId()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget11createWinIdEv(void *this_) {
  ((QWidget*)this_)->createWinId();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:221
// [8] WId internalWinId()
extern "C" Q_DECL_EXPORT
WId C_ZNK7QWidget13internalWinIdEv(void *this_) {
  return (WId)((QWidget*)this_)->internalWinId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:222
// [8] WId effectiveWinId()
extern "C" Q_DECL_EXPORT
WId C_ZNK7QWidget14effectiveWinIdEv(void *this_) {
  return (WId)((QWidget*)this_)->effectiveWinId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:225
// [8] QStyle * style()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget5styleEv(void *this_) {
  return (void*)((QWidget*)this_)->style();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:226
// [-2] void setStyle(class QStyle *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget8setStyleEP6QStyle(void *this_, QStyle * arg0) {
  ((QWidget*)this_)->setStyle(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:229
// [1] bool isTopLevel()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget10isTopLevelEv(void *this_) {
  return (bool)((QWidget*)this_)->isTopLevel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:230
// [1] bool isWindow()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget8isWindowEv(void *this_) {
  return (bool)((QWidget*)this_)->isWindow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:232
// [1] bool isModal()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget7isModalEv(void *this_) {
  return (bool)((QWidget*)this_)->isModal();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:233
// [4] Qt::WindowModality windowModality()
extern "C" Q_DECL_EXPORT
Qt::WindowModality C_ZNK7QWidget14windowModalityEv(void *this_) {
  return (Qt::WindowModality)((QWidget*)this_)->windowModality();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:234
// [-2] void setWindowModality(Qt::WindowModality)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget17setWindowModalityEN2Qt14WindowModalityE(void *this_, Qt::WindowModality windowModality) {
  ((QWidget*)this_)->setWindowModality(windowModality);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:236
// [1] bool isEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget9isEnabledEv(void *this_) {
  return (bool)((QWidget*)this_)->isEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:237
// [1] bool isEnabledTo(const class QWidget *)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget11isEnabledToEPKS_(void *this_, const QWidget * arg0) {
  return (bool)((QWidget*)this_)->isEnabledTo(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:238
// [1] bool isEnabledToTLW()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget14isEnabledToTLWEv(void *this_) {
  return (bool)((QWidget*)this_)->isEnabledToTLW();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:241
// [-2] void setEnabled(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget10setEnabledEb(void *this_, bool arg0) {
  ((QWidget*)this_)->setEnabled(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:242
// [-2] void setDisabled(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget11setDisabledEb(void *this_, bool arg0) {
  ((QWidget*)this_)->setDisabled(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:243
// [-2] void setWindowModified(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget17setWindowModifiedEb(void *this_, bool arg0) {
  ((QWidget*)this_)->setWindowModified(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:248
// [16] QRect frameGeometry()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget13frameGeometryEv(void *this_) {
  auto rv = ((QWidget*)this_)->frameGeometry();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:249
// [16] const QRect & geometry()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget8geometryEv(void *this_) {
  auto& rv = ((QWidget*)this_)->geometry();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:250
// [16] QRect normalGeometry()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget14normalGeometryEv(void *this_) {
  auto rv = ((QWidget*)this_)->normalGeometry();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:252
// [4] int x()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWidget1xEv(void *this_) {
  return (int)((QWidget*)this_)->x();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:253
// [4] int y()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWidget1yEv(void *this_) {
  return (int)((QWidget*)this_)->y();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:254
// [8] QPoint pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget3posEv(void *this_) {
  auto rv = ((QWidget*)this_)->pos();
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:255
// [8] QSize frameSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget9frameSizeEv(void *this_) {
  auto rv = ((QWidget*)this_)->frameSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:256
// [8] QSize size()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget4sizeEv(void *this_) {
  auto rv = ((QWidget*)this_)->size();
return new QSize(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:257
// [4] int width()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWidget5widthEv(void *this_) {
  return (int)((QWidget*)this_)->width();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:258
// [4] int height()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWidget6heightEv(void *this_) {
  return (int)((QWidget*)this_)->height();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:259
// [16] QRect rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget4rectEv(void *this_) {
  auto rv = ((QWidget*)this_)->rect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:260
// [16] QRect childrenRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget12childrenRectEv(void *this_) {
  auto rv = ((QWidget*)this_)->childrenRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:261
// [8] QRegion childrenRegion()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget14childrenRegionEv(void *this_) {
  auto rv = ((QWidget*)this_)->childrenRegion();
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:263
// [8] QSize minimumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget11minimumSizeEv(void *this_) {
  auto rv = ((QWidget*)this_)->minimumSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:264
// [8] QSize maximumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget11maximumSizeEv(void *this_) {
  auto rv = ((QWidget*)this_)->maximumSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:265
// [4] int minimumWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWidget12minimumWidthEv(void *this_) {
  return (int)((QWidget*)this_)->minimumWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:266
// [4] int minimumHeight()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWidget13minimumHeightEv(void *this_) {
  return (int)((QWidget*)this_)->minimumHeight();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:267
// [4] int maximumWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWidget12maximumWidthEv(void *this_) {
  return (int)((QWidget*)this_)->maximumWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:268
// [4] int maximumHeight()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWidget13maximumHeightEv(void *this_) {
  return (int)((QWidget*)this_)->maximumHeight();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:269
// [-2] void setMinimumSize(const class QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14setMinimumSizeERK5QSize(void *this_, QSize* arg0) {
  ((QWidget*)this_)->setMinimumSize(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:270
// [-2] void setMinimumSize(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14setMinimumSizeEii(void *this_, int minw, int minh) {
  ((QWidget*)this_)->setMinimumSize(minw, minh);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:271
// [-2] void setMaximumSize(const class QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14setMaximumSizeERK5QSize(void *this_, QSize* arg0) {
  ((QWidget*)this_)->setMaximumSize(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:272
// [-2] void setMaximumSize(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14setMaximumSizeEii(void *this_, int maxw, int maxh) {
  ((QWidget*)this_)->setMaximumSize(maxw, maxh);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:273
// [-2] void setMinimumWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget15setMinimumWidthEi(void *this_, int minw) {
  ((QWidget*)this_)->setMinimumWidth(minw);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:274
// [-2] void setMinimumHeight(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget16setMinimumHeightEi(void *this_, int minh) {
  ((QWidget*)this_)->setMinimumHeight(minh);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:275
// [-2] void setMaximumWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget15setMaximumWidthEi(void *this_, int maxw) {
  ((QWidget*)this_)->setMaximumWidth(maxw);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:276
// [-2] void setMaximumHeight(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget16setMaximumHeightEi(void *this_, int maxh) {
  ((QWidget*)this_)->setMaximumHeight(maxh);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:282
// [8] QSize sizeIncrement()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget13sizeIncrementEv(void *this_) {
  auto rv = ((QWidget*)this_)->sizeIncrement();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:283
// [-2] void setSizeIncrement(const class QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget16setSizeIncrementERK5QSize(void *this_, QSize* arg0) {
  ((QWidget*)this_)->setSizeIncrement(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:284
// [-2] void setSizeIncrement(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget16setSizeIncrementEii(void *this_, int w, int h) {
  ((QWidget*)this_)->setSizeIncrement(w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:285
// [8] QSize baseSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget8baseSizeEv(void *this_) {
  auto rv = ((QWidget*)this_)->baseSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:286
// [-2] void setBaseSize(const class QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget11setBaseSizeERK5QSize(void *this_, QSize* arg0) {
  ((QWidget*)this_)->setBaseSize(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:287
// [-2] void setBaseSize(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget11setBaseSizeEii(void *this_, int basew, int baseh) {
  ((QWidget*)this_)->setBaseSize(basew, baseh);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:289
// [-2] void setFixedSize(const class QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget12setFixedSizeERK5QSize(void *this_, QSize* arg0) {
  ((QWidget*)this_)->setFixedSize(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:290
// [-2] void setFixedSize(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget12setFixedSizeEii(void *this_, int w, int h) {
  ((QWidget*)this_)->setFixedSize(w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:291
// [-2] void setFixedWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget13setFixedWidthEi(void *this_, int w) {
  ((QWidget*)this_)->setFixedWidth(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:292
// [-2] void setFixedHeight(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14setFixedHeightEi(void *this_, int h) {
  ((QWidget*)this_)->setFixedHeight(h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:296
// [8] QPoint mapToGlobal(const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget11mapToGlobalERK6QPoint(void *this_, QPoint* arg0) {
  auto rv = ((QWidget*)this_)->mapToGlobal(*arg0);
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:297
// [8] QPoint mapFromGlobal(const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget13mapFromGlobalERK6QPoint(void *this_, QPoint* arg0) {
  auto rv = ((QWidget*)this_)->mapFromGlobal(*arg0);
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:298
// [8] QPoint mapToParent(const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget11mapToParentERK6QPoint(void *this_, QPoint* arg0) {
  auto rv = ((QWidget*)this_)->mapToParent(*arg0);
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:299
// [8] QPoint mapFromParent(const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget13mapFromParentERK6QPoint(void *this_, QPoint* arg0) {
  auto rv = ((QWidget*)this_)->mapFromParent(*arg0);
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:300
// [8] QPoint mapTo(const class QWidget *, const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget5mapToEPKS_RK6QPoint(void *this_, const QWidget * arg0, QPoint* arg1) {
  auto rv = ((QWidget*)this_)->mapTo(arg0, *arg1);
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:301
// [8] QPoint mapFrom(const class QWidget *, const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget7mapFromEPKS_RK6QPoint(void *this_, const QWidget * arg0, QPoint* arg1) {
  auto rv = ((QWidget*)this_)->mapFrom(arg0, *arg1);
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:303
// [8] QWidget * window()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget6windowEv(void *this_) {
  return (void*)((QWidget*)this_)->window();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:304
// [8] QWidget * nativeParentWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget18nativeParentWidgetEv(void *this_) {
  return (void*)((QWidget*)this_)->nativeParentWidget();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:305
// [8] QWidget * topLevelWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget14topLevelWidgetEv(void *this_) {
  return (void*)((QWidget*)this_)->topLevelWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:308
// [16] const QPalette & palette()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget7paletteEv(void *this_) {
  auto& rv = ((QWidget*)this_)->palette();
return new QPalette(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:309
// [-2] void setPalette(const class QPalette &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget10setPaletteERK8QPalette(void *this_, QPalette* arg0) {
  ((QWidget*)this_)->setPalette(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:311
// [-2] void setBackgroundRole(class QPalette::ColorRole)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget17setBackgroundRoleEN8QPalette9ColorRoleE(void *this_, QPalette::ColorRole arg0) {
  ((QWidget*)this_)->setBackgroundRole(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:312
// [4] QPalette::ColorRole backgroundRole()
extern "C" Q_DECL_EXPORT
QPalette::ColorRole C_ZNK7QWidget14backgroundRoleEv(void *this_) {
  return (QPalette::ColorRole)((QWidget*)this_)->backgroundRole();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:314
// [-2] void setForegroundRole(class QPalette::ColorRole)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget17setForegroundRoleEN8QPalette9ColorRoleE(void *this_, QPalette::ColorRole arg0) {
  ((QWidget*)this_)->setForegroundRole(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:315
// [4] QPalette::ColorRole foregroundRole()
extern "C" Q_DECL_EXPORT
QPalette::ColorRole C_ZNK7QWidget14foregroundRoleEv(void *this_) {
  return (QPalette::ColorRole)((QWidget*)this_)->foregroundRole();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:317
// [16] const QFont & font()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget4fontEv(void *this_) {
  auto& rv = ((QWidget*)this_)->font();
return new QFont(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:318
// [-2] void setFont(const class QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget7setFontERK5QFont(void *this_, QFont* arg0) {
  ((QWidget*)this_)->setFont(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:319
// [8] QFontMetrics fontMetrics()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget11fontMetricsEv(void *this_) {
  auto rv = ((QWidget*)this_)->fontMetrics();
return new QFontMetrics(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:320
// [8] QFontInfo fontInfo()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget8fontInfoEv(void *this_) {
  auto rv = ((QWidget*)this_)->fontInfo();
return new QFontInfo(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:323
// [8] QCursor cursor()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget6cursorEv(void *this_) {
  auto rv = ((QWidget*)this_)->cursor();
return new QCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:324
// [-2] void setCursor(const class QCursor &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget9setCursorERK7QCursor(void *this_, QCursor* arg0) {
  ((QWidget*)this_)->setCursor(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:325
// [-2] void unsetCursor()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget11unsetCursorEv(void *this_) {
  ((QWidget*)this_)->unsetCursor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:328
// [-2] void setMouseTracking(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget16setMouseTrackingEb(void *this_, bool enable) {
  ((QWidget*)this_)->setMouseTracking(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:329
// [1] bool hasMouseTracking()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget16hasMouseTrackingEv(void *this_) {
  return (bool)((QWidget*)this_)->hasMouseTracking();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:330
// [1] bool underMouse()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget10underMouseEv(void *this_) {
  return (bool)((QWidget*)this_)->underMouse();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:332
// [-2] void setTabletTracking(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget17setTabletTrackingEb(void *this_, bool enable) {
  ((QWidget*)this_)->setTabletTracking(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:333
// [1] bool hasTabletTracking()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget17hasTabletTrackingEv(void *this_) {
  return (bool)((QWidget*)this_)->hasTabletTracking();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:335
// [-2] void setMask(const class QBitmap &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget7setMaskERK7QBitmap(void *this_, QBitmap* arg0) {
  ((QWidget*)this_)->setMask(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:336
// [-2] void setMask(const class QRegion &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget7setMaskERK7QRegion(void *this_, QRegion* arg0) {
  ((QWidget*)this_)->setMask(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:337
// [8] QRegion mask()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget4maskEv(void *this_) {
  auto rv = ((QWidget*)this_)->mask();
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:338
// [-2] void clearMask()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget9clearMaskEv(void *this_) {
  ((QWidget*)this_)->clearMask();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:340
// [-2] void render(class QPaintDevice *, const class QPoint &, const class QRegion &, QWidget::RenderFlags)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget6renderEP12QPaintDeviceRK6QPointRK7QRegion6QFlagsINS_10RenderFlagEE(void *this_, QPaintDevice * target, QPoint* targetOffset, QRegion* sourceRegion, QFlags<QWidget::RenderFlag> renderFlags) {
  ((QWidget*)this_)->render(target, *targetOffset, *sourceRegion, renderFlags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:344
// [-2] void render(class QPainter *, const class QPoint &, const class QRegion &, QWidget::RenderFlags)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget6renderEP8QPainterRK6QPointRK7QRegion6QFlagsINS_10RenderFlagEE(void *this_, QPainter * painter, QPoint* targetOffset, QRegion* sourceRegion, QFlags<QWidget::RenderFlag> renderFlags) {
  ((QWidget*)this_)->render(painter, *targetOffset, *sourceRegion, renderFlags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:348
// [32] QPixmap grab(const class QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QWidget4grabERK5QRect(void *this_, QRect* rectangle) {
  auto rv = ((QWidget*)this_)->grab(*rectangle);
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:351
// [8] QGraphicsEffect * graphicsEffect()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget14graphicsEffectEv(void *this_) {
  return (void*)((QWidget*)this_)->graphicsEffect();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:352
// [-2] void setGraphicsEffect(class QGraphicsEffect *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget17setGraphicsEffectEP15QGraphicsEffect(void *this_, QGraphicsEffect * effect) {
  ((QWidget*)this_)->setGraphicsEffect(effect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:356
// [-2] void grabGesture(Qt::GestureType, Qt::GestureFlags)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget11grabGestureEN2Qt11GestureTypeE6QFlagsINS0_11GestureFlagEE(void *this_, Qt::GestureType type_, QFlags<Qt::GestureFlag> flags) {
  ((QWidget*)this_)->grabGesture(type_, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:357
// [-2] void ungrabGesture(Qt::GestureType)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget13ungrabGestureEN2Qt11GestureTypeE(void *this_, Qt::GestureType type_) {
  ((QWidget*)this_)->ungrabGesture(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:361
// [-2] void setWindowTitle(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14setWindowTitleERK7QString(void *this_, QString* arg0) {
  ((QWidget*)this_)->setWindowTitle(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:363
// [-2] void setStyleSheet(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget13setStyleSheetERK7QString(void *this_, QString* styleSheet) {
  ((QWidget*)this_)->setStyleSheet(*styleSheet);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:367
// [8] QString styleSheet()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget10styleSheetEv(void *this_) {
  auto rv = ((QWidget*)this_)->styleSheet();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:369
// [8] QString windowTitle()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget11windowTitleEv(void *this_) {
  auto rv = ((QWidget*)this_)->windowTitle();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:370
// [-2] void setWindowIcon(const class QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget13setWindowIconERK5QIcon(void *this_, QIcon* icon) {
  ((QWidget*)this_)->setWindowIcon(*icon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:371
// [8] QIcon windowIcon()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget10windowIconEv(void *this_) {
  auto rv = ((QWidget*)this_)->windowIcon();
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:372
// [-2] void setWindowIconText(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget17setWindowIconTextERK7QString(void *this_, QString* arg0) {
  ((QWidget*)this_)->setWindowIconText(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:373
// [8] QString windowIconText()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget14windowIconTextEv(void *this_) {
  auto rv = ((QWidget*)this_)->windowIconText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:374
// [-2] void setWindowRole(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget13setWindowRoleERK7QString(void *this_, QString* arg0) {
  ((QWidget*)this_)->setWindowRole(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:375
// [8] QString windowRole()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget10windowRoleEv(void *this_) {
  auto rv = ((QWidget*)this_)->windowRole();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:376
// [-2] void setWindowFilePath(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget17setWindowFilePathERK7QString(void *this_, QString* filePath) {
  ((QWidget*)this_)->setWindowFilePath(*filePath);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:377
// [8] QString windowFilePath()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget14windowFilePathEv(void *this_) {
  auto rv = ((QWidget*)this_)->windowFilePath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:379
// [-2] void setWindowOpacity(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget16setWindowOpacityEd(void *this_, qreal level) {
  ((QWidget*)this_)->setWindowOpacity(level);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:380
// [8] qreal windowOpacity()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QWidget13windowOpacityEv(void *this_) {
  return (qreal)((QWidget*)this_)->windowOpacity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:382
// [1] bool isWindowModified()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget16isWindowModifiedEv(void *this_) {
  return (bool)((QWidget*)this_)->isWindowModified();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:384
// [-2] void setToolTip(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget10setToolTipERK7QString(void *this_, QString* arg0) {
  ((QWidget*)this_)->setToolTip(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:385
// [8] QString toolTip()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget7toolTipEv(void *this_) {
  auto rv = ((QWidget*)this_)->toolTip();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:386
// [-2] void setToolTipDuration(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget18setToolTipDurationEi(void *this_, int msec) {
  ((QWidget*)this_)->setToolTipDuration(msec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:387
// [4] int toolTipDuration()
extern "C" Q_DECL_EXPORT
int C_ZNK7QWidget15toolTipDurationEv(void *this_) {
  return (int)((QWidget*)this_)->toolTipDuration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:390
// [-2] void setStatusTip(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget12setStatusTipERK7QString(void *this_, QString* arg0) {
  ((QWidget*)this_)->setStatusTip(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:391
// [8] QString statusTip()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget9statusTipEv(void *this_) {
  auto rv = ((QWidget*)this_)->statusTip();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:394
// [-2] void setWhatsThis(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget12setWhatsThisERK7QString(void *this_, QString* arg0) {
  ((QWidget*)this_)->setWhatsThis(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:395
// [8] QString whatsThis()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget9whatsThisEv(void *this_) {
  auto rv = ((QWidget*)this_)->whatsThis();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:398
// [8] QString accessibleName()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget14accessibleNameEv(void *this_) {
  auto rv = ((QWidget*)this_)->accessibleName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:399
// [-2] void setAccessibleName(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget17setAccessibleNameERK7QString(void *this_, QString* name) {
  ((QWidget*)this_)->setAccessibleName(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:400
// [8] QString accessibleDescription()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget21accessibleDescriptionEv(void *this_) {
  auto rv = ((QWidget*)this_)->accessibleDescription();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:401
// [-2] void setAccessibleDescription(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget24setAccessibleDescriptionERK7QString(void *this_, QString* description) {
  ((QWidget*)this_)->setAccessibleDescription(*description);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:404
// [-2] void setLayoutDirection(Qt::LayoutDirection)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget18setLayoutDirectionEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection direction) {
  ((QWidget*)this_)->setLayoutDirection(direction);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:405
// [4] Qt::LayoutDirection layoutDirection()
extern "C" Q_DECL_EXPORT
Qt::LayoutDirection C_ZNK7QWidget15layoutDirectionEv(void *this_) {
  return (Qt::LayoutDirection)((QWidget*)this_)->layoutDirection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:406
// [-2] void unsetLayoutDirection()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget20unsetLayoutDirectionEv(void *this_) {
  ((QWidget*)this_)->unsetLayoutDirection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:408
// [-2] void setLocale(const class QLocale &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget9setLocaleERK7QLocale(void *this_, QLocale* locale) {
  ((QWidget*)this_)->setLocale(*locale);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:409
// [8] QLocale locale()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget6localeEv(void *this_) {
  auto rv = ((QWidget*)this_)->locale();
return new QLocale(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:410
// [-2] void unsetLocale()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget11unsetLocaleEv(void *this_) {
  ((QWidget*)this_)->unsetLocale();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:412
// [1] bool isRightToLeft()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget13isRightToLeftEv(void *this_) {
  return (bool)((QWidget*)this_)->isRightToLeft();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:413
// [1] bool isLeftToRight()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget13isLeftToRightEv(void *this_) {
  return (bool)((QWidget*)this_)->isLeftToRight();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:416
// [-2] void setFocus()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget8setFocusEv(void *this_) {
  ((QWidget*)this_)->setFocus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:419
// [1] bool isActiveWindow()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget14isActiveWindowEv(void *this_) {
  return (bool)((QWidget*)this_)->isActiveWindow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:420
// [-2] void activateWindow()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14activateWindowEv(void *this_) {
  ((QWidget*)this_)->activateWindow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:421
// [-2] void clearFocus()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget10clearFocusEv(void *this_) {
  ((QWidget*)this_)->clearFocus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:423
// [-2] void setFocus(Qt::FocusReason)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget8setFocusEN2Qt11FocusReasonE(void *this_, Qt::FocusReason reason) {
  ((QWidget*)this_)->setFocus(reason);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:424
// [4] Qt::FocusPolicy focusPolicy()
extern "C" Q_DECL_EXPORT
Qt::FocusPolicy C_ZNK7QWidget11focusPolicyEv(void *this_) {
  return (Qt::FocusPolicy)((QWidget*)this_)->focusPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:425
// [-2] void setFocusPolicy(Qt::FocusPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14setFocusPolicyEN2Qt11FocusPolicyE(void *this_, Qt::FocusPolicy policy) {
  ((QWidget*)this_)->setFocusPolicy(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:426
// [1] bool hasFocus()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget8hasFocusEv(void *this_) {
  return (bool)((QWidget*)this_)->hasFocus();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:427
// [-2] void setTabOrder(class QWidget *, class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget11setTabOrderEPS_S0_(QWidget * arg0, QWidget * arg1) {
  QWidget::setTabOrder(arg0, arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:428
// [-2] void setFocusProxy(class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget13setFocusProxyEPS_(void *this_, QWidget * arg0) {
  ((QWidget*)this_)->setFocusProxy(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:429
// [8] QWidget * focusProxy()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget10focusProxyEv(void *this_) {
  return (void*)((QWidget*)this_)->focusProxy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:430
// [4] Qt::ContextMenuPolicy contextMenuPolicy()
extern "C" Q_DECL_EXPORT
Qt::ContextMenuPolicy C_ZNK7QWidget17contextMenuPolicyEv(void *this_) {
  return (Qt::ContextMenuPolicy)((QWidget*)this_)->contextMenuPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:431
// [-2] void setContextMenuPolicy(Qt::ContextMenuPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget20setContextMenuPolicyEN2Qt17ContextMenuPolicyE(void *this_, Qt::ContextMenuPolicy policy) {
  ((QWidget*)this_)->setContextMenuPolicy(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:434
// [-2] void grabMouse()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget9grabMouseEv(void *this_) {
  ((QWidget*)this_)->grabMouse();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:436
// [-2] void grabMouse(const class QCursor &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget9grabMouseERK7QCursor(void *this_, QCursor* arg0) {
  ((QWidget*)this_)->grabMouse(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:438
// [-2] void releaseMouse()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget12releaseMouseEv(void *this_) {
  ((QWidget*)this_)->releaseMouse();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:439
// [-2] void grabKeyboard()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget12grabKeyboardEv(void *this_) {
  ((QWidget*)this_)->grabKeyboard();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:440
// [-2] void releaseKeyboard()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget15releaseKeyboardEv(void *this_) {
  ((QWidget*)this_)->releaseKeyboard();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:442
// [4] int grabShortcut(const class QKeySequence &, Qt::ShortcutContext)
extern "C" Q_DECL_EXPORT
int C_ZN7QWidget12grabShortcutERK12QKeySequenceN2Qt15ShortcutContextE(void *this_, QKeySequence* key, Qt::ShortcutContext context) {
  return (int)((QWidget*)this_)->grabShortcut(*key, context);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:443
// [-2] void releaseShortcut(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget15releaseShortcutEi(void *this_, int id) {
  ((QWidget*)this_)->releaseShortcut(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:444
// [-2] void setShortcutEnabled(int, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget18setShortcutEnabledEib(void *this_, int id, bool enable) {
  ((QWidget*)this_)->setShortcutEnabled(id, enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:445
// [-2] void setShortcutAutoRepeat(int, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget21setShortcutAutoRepeatEib(void *this_, int id, bool enable) {
  ((QWidget*)this_)->setShortcutAutoRepeat(id, enable);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:447
// [8] QWidget * mouseGrabber()
extern "C" Q_DECL_EXPORT
void* C_ZN7QWidget12mouseGrabberEv() {
  return (void*)QWidget::mouseGrabber();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:448
// [8] QWidget * keyboardGrabber()
extern "C" Q_DECL_EXPORT
void* C_ZN7QWidget15keyboardGrabberEv() {
  return (void*)QWidget::keyboardGrabber();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:451
// [1] bool updatesEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget14updatesEnabledEv(void *this_) {
  return (bool)((QWidget*)this_)->updatesEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:452
// [-2] void setUpdatesEnabled(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget17setUpdatesEnabledEb(void *this_, bool enable) {
  ((QWidget*)this_)->setUpdatesEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:455
// [8] QGraphicsProxyWidget * graphicsProxyWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget19graphicsProxyWidgetEv(void *this_) {
  return (void*)((QWidget*)this_)->graphicsProxyWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:459
// [-2] void update()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget6updateEv(void *this_) {
  ((QWidget*)this_)->update();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:460
// [-2] void repaint()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget7repaintEv(void *this_) {
  ((QWidget*)this_)->repaint();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:463
// [-2] void update(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget6updateEiiii(void *this_, int x, int y, int w, int h) {
  ((QWidget*)this_)->update(x, y, w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:464
// [-2] void update(const class QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget6updateERK5QRect(void *this_, QRect* arg0) {
  ((QWidget*)this_)->update(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:465
// [-2] void update(const class QRegion &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget6updateERK7QRegion(void *this_, QRegion* arg0) {
  ((QWidget*)this_)->update(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:467
// [-2] void repaint(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget7repaintEiiii(void *this_, int x, int y, int w, int h) {
  ((QWidget*)this_)->repaint(x, y, w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:468
// [-2] void repaint(const class QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget7repaintERK5QRect(void *this_, QRect* arg0) {
  ((QWidget*)this_)->repaint(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:469
// [-2] void repaint(const class QRegion &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget7repaintERK7QRegion(void *this_, QRegion* arg0) {
  ((QWidget*)this_)->repaint(*arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:474
// [-2] void setVisible(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget10setVisibleEb(void *this_, bool visible) {
  ((QWidget*)this_)->setVisible(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:475
// [-2] void setHidden(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget9setHiddenEb(void *this_, bool hidden) {
  ((QWidget*)this_)->setHidden(hidden);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:476
// [-2] void show()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget4showEv(void *this_) {
  ((QWidget*)this_)->show();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:477
// [-2] void hide()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget4hideEv(void *this_) {
  ((QWidget*)this_)->hide();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:479
// [-2] void showMinimized()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget13showMinimizedEv(void *this_) {
  ((QWidget*)this_)->showMinimized();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:480
// [-2] void showMaximized()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget13showMaximizedEv(void *this_) {
  ((QWidget*)this_)->showMaximized();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:481
// [-2] void showFullScreen()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14showFullScreenEv(void *this_) {
  ((QWidget*)this_)->showFullScreen();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:482
// [-2] void showNormal()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget10showNormalEv(void *this_) {
  ((QWidget*)this_)->showNormal();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:484
// [1] bool close()
extern "C" Q_DECL_EXPORT
bool C_ZN7QWidget5closeEv(void *this_) {
  return (bool)((QWidget*)this_)->close();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:485
// [-2] void raise()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget5raiseEv(void *this_) {
  ((QWidget*)this_)->raise();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:486
// [-2] void lower()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget5lowerEv(void *this_) {
  ((QWidget*)this_)->lower();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:489
// [-2] void stackUnder(class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget10stackUnderEPS_(void *this_, QWidget * arg0) {
  ((QWidget*)this_)->stackUnder(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:490
// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget4moveEii(void *this_, int x, int y) {
  ((QWidget*)this_)->move(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:491
// [-2] void move(const class QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget4moveERK6QPoint(void *this_, QPoint* arg0) {
  ((QWidget*)this_)->move(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:492
// [-2] void resize(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget6resizeEii(void *this_, int w, int h) {
  ((QWidget*)this_)->resize(w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:493
// [-2] void resize(const class QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget6resizeERK5QSize(void *this_, QSize* arg0) {
  ((QWidget*)this_)->resize(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:494
// [-2] void setGeometry(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget11setGeometryEiiii(void *this_, int x, int y, int w, int h) {
  ((QWidget*)this_)->setGeometry(x, y, w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:495
// [-2] void setGeometry(const class QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget11setGeometryERK5QRect(void *this_, QRect* arg0) {
  ((QWidget*)this_)->setGeometry(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:496
// [8] QByteArray saveGeometry()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget12saveGeometryEv(void *this_) {
  auto rv = ((QWidget*)this_)->saveGeometry();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:497
// [1] bool restoreGeometry(const class QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZN7QWidget15restoreGeometryERK10QByteArray(void *this_, QByteArray* geometry) {
  return (bool)((QWidget*)this_)->restoreGeometry(*geometry);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:498
// [-2] void adjustSize()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget10adjustSizeEv(void *this_) {
  ((QWidget*)this_)->adjustSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:499
// [1] bool isVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget9isVisibleEv(void *this_) {
  return (bool)((QWidget*)this_)->isVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:500
// [1] bool isVisibleTo(const class QWidget *)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget11isVisibleToEPKS_(void *this_, const QWidget * arg0) {
  return (bool)((QWidget*)this_)->isVisibleTo(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:501
// [1] bool isHidden()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget8isHiddenEv(void *this_) {
  return (bool)((QWidget*)this_)->isHidden();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:503
// [1] bool isMinimized()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget11isMinimizedEv(void *this_) {
  return (bool)((QWidget*)this_)->isMinimized();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:504
// [1] bool isMaximized()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget11isMaximizedEv(void *this_) {
  return (bool)((QWidget*)this_)->isMaximized();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:505
// [1] bool isFullScreen()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget12isFullScreenEv(void *this_) {
  return (bool)((QWidget*)this_)->isFullScreen();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:507
// [4] Qt::WindowStates windowState()
extern "C" Q_DECL_EXPORT
Qt::WindowStates C_ZNK7QWidget11windowStateEv(void *this_) {
  return (Qt::WindowStates)((QWidget*)this_)->windowState();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:508
// [-2] void setWindowState(Qt::WindowStates)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14setWindowStateE6QFlagsIN2Qt11WindowStateEE(void *this_, QFlags<Qt::WindowState> state) {
  ((QWidget*)this_)->setWindowState(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:509
// [-2] void overrideWindowState(Qt::WindowStates)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget19overrideWindowStateE6QFlagsIN2Qt11WindowStateEE(void *this_, QFlags<Qt::WindowState> state) {
  ((QWidget*)this_)->overrideWindowState(state);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:511
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget8sizeHintEv(void *this_) {
  auto rv = ((QWidget*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:512
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget15minimumSizeHintEv(void *this_) {
  auto rv = ((QWidget*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:514
// [4] QSizePolicy sizePolicy()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget10sizePolicyEv(void *this_) {
  auto rv = ((QWidget*)this_)->sizePolicy();
return new QSizePolicy(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:515
// [-2] void setSizePolicy(class QSizePolicy)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget13setSizePolicyE11QSizePolicy(void *this_, QSizePolicy* arg0) {
  ((QWidget*)this_)->setSizePolicy(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:516
// [-2] void setSizePolicy(class QSizePolicy::Policy, class QSizePolicy::Policy)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget13setSizePolicyEN11QSizePolicy6PolicyES1_(void *this_, QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical) {
  ((QWidget*)this_)->setSizePolicy(horizontal, vertical);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:517
// [4] int heightForWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK7QWidget14heightForWidthEi(void *this_, int arg0) {
  return (int)((QWidget*)this_)->heightForWidth(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:518
// [1] bool hasHeightForWidth()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget17hasHeightForWidthEv(void *this_) {
  return (bool)((QWidget*)this_)->hasHeightForWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:520
// [8] QRegion visibleRegion()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget13visibleRegionEv(void *this_) {
  auto rv = ((QWidget*)this_)->visibleRegion();
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:522
// [-2] void setContentsMargins(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget18setContentsMarginsEiiii(void *this_, int left, int top, int right, int bottom) {
  ((QWidget*)this_)->setContentsMargins(left, top, right, bottom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:523
// [-2] void setContentsMargins(const class QMargins &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget18setContentsMarginsERK8QMargins(void *this_, QMargins* margins) {
  ((QWidget*)this_)->setContentsMargins(*margins);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:524
// [-2] void getContentsMargins(int *, int *, int *, int *)
extern "C" Q_DECL_EXPORT
void C_ZNK7QWidget18getContentsMarginsEPiS0_S0_S0_(void *this_, int * left, int * top, int * right, int * bottom) {
  ((QWidget*)this_)->getContentsMargins(left, top, right, bottom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:525
// [16] QMargins contentsMargins()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget15contentsMarginsEv(void *this_) {
  auto rv = ((QWidget*)this_)->contentsMargins();
return new QMargins(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:527
// [16] QRect contentsRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget12contentsRectEv(void *this_) {
  auto rv = ((QWidget*)this_)->contentsRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:530
// [8] QLayout * layout()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget6layoutEv(void *this_) {
  return (void*)((QWidget*)this_)->layout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:531
// [-2] void setLayout(class QLayout *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget9setLayoutEP7QLayout(void *this_, QLayout * arg0) {
  ((QWidget*)this_)->setLayout(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:532
// [-2] void updateGeometry()
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14updateGeometryEv(void *this_) {
  ((QWidget*)this_)->updateGeometry();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:534
// [-2] void setParent(class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget9setParentEPS_(void *this_, QWidget * parent) {
  ((QWidget*)this_)->setParent(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:535
// [-2] void setParent(class QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget9setParentEPS_6QFlagsIN2Qt10WindowTypeEE(void *this_, QWidget * parent, QFlags<Qt::WindowType> f) {
  ((QWidget*)this_)->setParent(parent, f);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:537
// [-2] void scroll(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget6scrollEii(void *this_, int dx, int dy) {
  ((QWidget*)this_)->scroll(dx, dy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:538
// [-2] void scroll(int, int, const class QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget6scrollEiiRK5QRect(void *this_, int dx, int dy, QRect* arg2) {
  ((QWidget*)this_)->scroll(dx, dy, *arg2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:542
// [8] QWidget * focusWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget11focusWidgetEv(void *this_) {
  return (void*)((QWidget*)this_)->focusWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:543
// [8] QWidget * nextInFocusChain()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget16nextInFocusChainEv(void *this_) {
  return (void*)((QWidget*)this_)->nextInFocusChain();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:544
// [8] QWidget * previousInFocusChain()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget20previousInFocusChainEv(void *this_) {
  return (void*)((QWidget*)this_)->previousInFocusChain();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:547
// [1] bool acceptDrops()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget11acceptDropsEv(void *this_) {
  return (bool)((QWidget*)this_)->acceptDrops();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:548
// [-2] void setAcceptDrops(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14setAcceptDropsEb(void *this_, bool on) {
  ((QWidget*)this_)->setAcceptDrops(on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:552
// [-2] void addAction(class QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget9addActionEP7QAction(void *this_, QAction * action) {
  ((QWidget*)this_)->addAction(action);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:560
// [-2] void insertAction(class QAction *, class QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget12insertActionEP7QActionS1_(void *this_, QAction * before, QAction * action) {
  ((QWidget*)this_)->insertAction(before, action);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:561
// [-2] void removeAction(class QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget12removeActionEP7QAction(void *this_, QAction * action) {
  ((QWidget*)this_)->removeAction(action);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:565
// [8] QWidget * parentWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget12parentWidgetEv(void *this_) {
  return (void*)((QWidget*)this_)->parentWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:567
// [-2] void setWindowFlags(Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget14setWindowFlagsE6QFlagsIN2Qt10WindowTypeEE(void *this_, QFlags<Qt::WindowType> type_) {
  ((QWidget*)this_)->setWindowFlags(type_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:568
// [4] Qt::WindowFlags windowFlags()
extern "C" Q_DECL_EXPORT
Qt::WindowFlags C_ZNK7QWidget11windowFlagsEv(void *this_) {
  return (Qt::WindowFlags)((QWidget*)this_)->windowFlags();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:569
// [-2] void setWindowFlag(Qt::WindowType, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget13setWindowFlagEN2Qt10WindowTypeEb(void *this_, Qt::WindowType arg0, bool on) {
  ((QWidget*)this_)->setWindowFlag(arg0, on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:570
// [-2] void overrideWindowFlags(Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget19overrideWindowFlagsE6QFlagsIN2Qt10WindowTypeEE(void *this_, QFlags<Qt::WindowType> type_) {
  ((QWidget*)this_)->overrideWindowFlags(type_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:572
// [4] Qt::WindowType windowType()
extern "C" Q_DECL_EXPORT
Qt::WindowType C_ZNK7QWidget10windowTypeEv(void *this_) {
  return (Qt::WindowType)((QWidget*)this_)->windowType();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:574
// [8] QWidget * find(WId)
extern "C" Q_DECL_EXPORT
void* C_ZN7QWidget4findEy(WId arg0) {
  return (void*)QWidget::find(arg0);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:575
// [8] QWidget * childAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget7childAtEii(void *this_, int x, int y) {
  return (void*)((QWidget*)this_)->childAt(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:576
// [8] QWidget * childAt(const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget7childAtERK6QPoint(void *this_, QPoint* p) {
  return (void*)((QWidget*)this_)->childAt(*p);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:578
// [-2] void setAttribute(Qt::WidgetAttribute, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget12setAttributeEN2Qt15WidgetAttributeEb(void *this_, Qt::WidgetAttribute arg0, bool on) {
  ((QWidget*)this_)->setAttribute(arg0, on);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:579
// [1] bool testAttribute(Qt::WidgetAttribute)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget13testAttributeEN2Qt15WidgetAttributeE(void *this_, Qt::WidgetAttribute arg0) {
  return (bool)((QWidget*)this_)->testAttribute(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:581
// [8] QPaintEngine * paintEngine()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget11paintEngineEv(void *this_) {
  return (void*)((QWidget*)this_)->paintEngine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:583
// [-2] void ensurePolished()
extern "C" Q_DECL_EXPORT
void C_ZNK7QWidget14ensurePolishedEv(void *this_) {
  ((QWidget*)this_)->ensurePolished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:585
// [1] bool isAncestorOf(const class QWidget *)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget12isAncestorOfEPKS_(void *this_, const QWidget * child) {
  return (bool)((QWidget*)this_)->isAncestorOf(child);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:592
// [1] bool autoFillBackground()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QWidget18autoFillBackgroundEv(void *this_) {
  return (bool)((QWidget*)this_)->autoFillBackground();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:593
// [-2] void setAutoFillBackground(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget21setAutoFillBackgroundEb(void *this_, bool enabled) {
  ((QWidget*)this_)->setAutoFillBackground(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:595
// [8] QBackingStore * backingStore()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget12backingStoreEv(void *this_) {
  return (void*)((QWidget*)this_)->backingStore();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:597
// [8] QWindow * windowHandle()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget12windowHandleEv(void *this_) {
  return (void*)((QWidget*)this_)->windowHandle();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:599
// [8] QWidget * createWindowContainer(class QWindow *, class QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN7QWidget21createWindowContainerEP7QWindowPS_6QFlagsIN2Qt10WindowTypeEE(QWindow * window, QWidget * parent, QFlags<Qt::WindowType> flags) {
  return (void*)QWidget::createWindowContainer(window, parent, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:604
// [-2] void windowTitleChanged(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget18windowTitleChangedERK7QString(void *this_, QString* title) {
  ((QWidget*)this_)->windowTitleChanged(*title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:605
// [-2] void windowIconChanged(const class QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget17windowIconChangedERK5QIcon(void *this_, QIcon* icon) {
  ((QWidget*)this_)->windowIconChanged(*icon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:606
// [-2] void windowIconTextChanged(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget21windowIconTextChangedERK7QString(void *this_, QString* iconText) {
  ((QWidget*)this_)->windowIconTextChanged(*iconText);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:607
// [-2] void customContextMenuRequested(const class QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget26customContextMenuRequestedERK6QPoint(void *this_, QPoint* pos) {
  ((QWidget*)this_)->customContextMenuRequested(*pos);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:660
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QWidget16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery arg0) {
  auto rv = ((QWidget*)this_)->inputMethodQuery(arg0);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:662
// [4] Qt::InputMethodHints inputMethodHints()
extern "C" Q_DECL_EXPORT
Qt::InputMethodHints C_ZNK7QWidget16inputMethodHintsEv(void *this_) {
  return (Qt::InputMethodHints)((QWidget*)this_)->inputMethodHints();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:663
// [-2] void setInputMethodHints(Qt::InputMethodHints)
extern "C" Q_DECL_EXPORT
void C_ZN7QWidget19setInputMethodHintsE6QFlagsIN2Qt15InputMethodHintEE(void *this_, QFlags<Qt::InputMethodHint> hints) {
  ((QWidget*)this_)->setInputMethodHints(hints);
}

//  main block end
