//  header block begin
// /usr/include/qt/QtQuickWidgets/qquickwidget.h
#include <qquickwidget.h>
#include <QtQuickWidgets>
#include "callback_inherit.h"

// QQuickWidget is pure virtual: false
// QQuickWidget has virtual projected: true
//  header block end

//  main block begin

class MyQQuickWidget : public QQuickWidget {
public:
  virtual ~MyQQuickWidget() {}
// void QQuickWidget(class QWidget *)
MyQQuickWidget(QWidget * parent) : QQuickWidget(parent) {}
// void QQuickWidget(class QQmlEngine *, class QWidget *)
MyQQuickWidget(QQmlEngine * engine, QWidget * parent) : QQuickWidget(engine, parent) {}
// void QQuickWidget(const class QUrl &, class QWidget *)
MyQQuickWidget(const QUrl & source, QWidget * parent) : QQuickWidget(source, parent) {}
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::resizeEvent(arg0);
  }
  }

// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::timerEvent(arg0);
  }
  }

// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::keyPressEvent(arg0);
  }
  }

// void keyReleaseEvent(class QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::keyReleaseEvent(arg0);
  }
  }

// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::mousePressEvent(arg0);
  }
  }

// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::mouseReleaseEvent(arg0);
  }
  }

// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::mouseMoveEvent(arg0);
  }
  }

// void mouseDoubleClickEvent(class QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::mouseDoubleClickEvent(arg0);
  }
  }

// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::showEvent(arg0);
  }
  }

// void hideEvent(class QHideEvent *)
  virtual void hideEvent(QHideEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hideEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::hideEvent(arg0);
  }
  }

// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::focusInEvent(event);
  }
  }

// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::focusOutEvent(event);
  }
  }

// void wheelEvent(class QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::wheelEvent(arg0);
  }
  }

// void dragEnterEvent(class QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::dragEnterEvent(arg0);
  }
  }

// void dragMoveEvent(class QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::dragMoveEvent(arg0);
  }
  }

// void dragLeaveEvent(class QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::dragLeaveEvent(arg0);
  }
  }

// void dropEvent(class QDropEvent *)
  virtual void dropEvent(QDropEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::dropEvent(arg0);
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
    return QQuickWidget::event(arg0);
  }
  }

// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWidget::paintEvent(event);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:61
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK12QQuickWidget10metaObjectEv(void *this_) {
  return (void*)((QQuickWidget*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:67
// [-2] void QQuickWidget(class QWidget *)
extern "C"
void* C_ZN12QQuickWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQQuickWidget*)(0);
  return  new MyQQuickWidget(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:68
// [-2] void QQuickWidget(class QQmlEngine *, class QWidget *)
extern "C"
void* C_ZN12QQuickWidgetC2EP10QQmlEngineP7QWidget(QQmlEngine * engine, QWidget * parent) {
  auto _nilp = (MyQQuickWidget*)(0);
  return  new MyQQuickWidget(engine, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:69
// [-2] void QQuickWidget(const class QUrl &, class QWidget *)
extern "C"
void* C_ZN12QQuickWidgetC2ERK4QUrlP7QWidget(QUrl* source, QWidget * parent) {
  auto _nilp = (MyQQuickWidget*)(0);
  return  new MyQQuickWidget(*source, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:70
// [-2] void ~QQuickWidget()
extern "C"
void C_ZN12QQuickWidgetD2Ev(void *this_) {
  delete (QQuickWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:72
// [8] QUrl source()
extern "C"
void* C_ZNK12QQuickWidget6sourceEv(void *this_) {
  auto rv = ((QQuickWidget*)this_)->source();
return new QUrl(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:74
// [8] QQmlEngine * engine()
extern "C"
void* C_ZNK12QQuickWidget6engineEv(void *this_) {
  return (void*)((QQuickWidget*)this_)->engine();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:75
// [8] QQmlContext * rootContext()
extern "C"
void* C_ZNK12QQuickWidget11rootContextEv(void *this_) {
  return (void*)((QQuickWidget*)this_)->rootContext();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:77
// [8] QQuickItem * rootObject()
extern "C"
void* C_ZNK12QQuickWidget10rootObjectEv(void *this_) {
  return (void*)((QQuickWidget*)this_)->rootObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:81
// [4] QQuickWidget::ResizeMode resizeMode()
extern "C"
QQuickWidget::ResizeMode C_ZNK12QQuickWidget10resizeModeEv(void *this_) {
  return (QQuickWidget::ResizeMode)((QQuickWidget*)this_)->resizeMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:82
// [-2] void setResizeMode(enum QQuickWidget::ResizeMode)
extern "C"
void C_ZN12QQuickWidget13setResizeModeENS_10ResizeModeE(void *this_, QQuickWidget::ResizeMode arg0) {
  ((QQuickWidget*)this_)->setResizeMode(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:86
// [4] QQuickWidget::Status status()
extern "C"
QQuickWidget::Status C_ZNK12QQuickWidget6statusEv(void *this_) {
  return (QQuickWidget::Status)((QQuickWidget*)this_)->status();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:90
// [8] QSize sizeHint()
extern "C"
void* C_ZNK12QQuickWidget8sizeHintEv(void *this_) {
  auto rv = ((QQuickWidget*)this_)->sizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:91
// [8] QSize initialSize()
extern "C"
void* C_ZNK12QQuickWidget11initialSizeEv(void *this_) {
  auto rv = ((QQuickWidget*)this_)->initialSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:93
// [-2] void setFormat(const class QSurfaceFormat &)
extern "C"
void C_ZN12QQuickWidget9setFormatERK14QSurfaceFormat(void *this_, QSurfaceFormat* format) {
  ((QQuickWidget*)this_)->setFormat(*format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:94
// [8] QSurfaceFormat format()
extern "C"
void* C_ZNK12QQuickWidget6formatEv(void *this_) {
  auto rv = ((QQuickWidget*)this_)->format();
return new QSurfaceFormat(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:96
// [32] QImage grabFramebuffer()
extern "C"
void* C_ZNK12QQuickWidget15grabFramebufferEv(void *this_) {
  auto rv = ((QQuickWidget*)this_)->grabFramebuffer();
return new QImage(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:98
// [-2] void setClearColor(const class QColor &)
extern "C"
void C_ZN12QQuickWidget13setClearColorERK6QColor(void *this_, QColor* color) {
  ((QQuickWidget*)this_)->setClearColor(*color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:100
// [8] QQuickWindow * quickWindow()
extern "C"
void* C_ZNK12QQuickWidget11quickWindowEv(void *this_) {
  return (void*)((QQuickWidget*)this_)->quickWindow();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:103
// [-2] void setSource(const class QUrl &)
extern "C"
void C_ZN12QQuickWidget9setSourceERK4QUrl(void *this_, QUrl* arg0) {
  ((QQuickWidget*)this_)->setSource(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:104
// [-2] void setContent(const class QUrl &, class QQmlComponent *, class QObject *)
extern "C"
void C_ZN12QQuickWidget10setContentERK4QUrlP13QQmlComponentP7QObject(void *this_, QUrl* url, QQmlComponent * component, QObject * item) {
  ((QQuickWidget*)this_)->setContent(*url, component, item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:107
// [-2] void statusChanged(class QQuickWidget::Status)
extern "C"
void C_ZN12QQuickWidget13statusChangedENS_6StatusE(void *this_, QQuickWidget::Status arg0) {
  ((QQuickWidget*)this_)->statusChanged(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuickWidgets/qquickwidget.h:108
// [-2] void sceneGraphError(class QQuickWindow::SceneGraphError, const class QString &)
extern "C"
void C_ZN12QQuickWidget15sceneGraphErrorEN12QQuickWindow15SceneGraphErrorERK7QString(void *this_, QQuickWindow::SceneGraphError error, QString* message) {
  ((QQuickWidget*)this_)->sceneGraphError(error, *message);
}
//  main block end
