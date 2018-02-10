//  header block begin
// /usr/include/qt/QtWidgets/qmdisubwindow.h
#include <qmdisubwindow.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QMdiSubWindow is pure virtual: false
// QMdiSubWindow has virtual projected: true
//  header block end

//  main block begin

class MyQMdiSubWindow : public QMdiSubWindow {
public:
  virtual ~MyQMdiSubWindow() {}
// void QMdiSubWindow(class QWidget *, Qt::WindowFlags)
MyQMdiSubWindow(QWidget * parent, QFlags<Qt::WindowType> flags) : QMdiSubWindow(parent, flags) {}
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * object, QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventFilter", &handled, 2, (uint64_t)object, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QMdiSubWindow::eventFilter(object, event);
  }
  }

// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QMdiSubWindow::event(event);
  }
  }

// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * showEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)showEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::showEvent(showEvent);
  }
  }

// void hideEvent(class QHideEvent *)
  virtual void hideEvent(QHideEvent * hideEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hideEvent", &handled, 1, (uint64_t)hideEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::hideEvent(hideEvent);
  }
  }

// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * changeEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)changeEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::changeEvent(changeEvent);
  }
  }

// void closeEvent(class QCloseEvent *)
  virtual void closeEvent(QCloseEvent * closeEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"closeEvent", &handled, 1, (uint64_t)closeEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::closeEvent(closeEvent);
  }
  }

// void leaveEvent(class QEvent *)
  virtual void leaveEvent(QEvent * leaveEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"leaveEvent", &handled, 1, (uint64_t)leaveEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::leaveEvent(leaveEvent);
  }
  }

// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * resizeEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)resizeEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::resizeEvent(resizeEvent);
  }
  }

// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * timerEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)timerEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::timerEvent(timerEvent);
  }
  }

// void moveEvent(class QMoveEvent *)
  virtual void moveEvent(QMoveEvent * moveEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"moveEvent", &handled, 1, (uint64_t)moveEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::moveEvent(moveEvent);
  }
  }

// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * paintEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)paintEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::paintEvent(paintEvent);
  }
  }

// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * mouseEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)mouseEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::mousePressEvent(mouseEvent);
  }
  }

// void mouseDoubleClickEvent(class QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * mouseEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)mouseEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
  }
  }

// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * mouseEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)mouseEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::mouseReleaseEvent(mouseEvent);
  }
  }

// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * mouseEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)mouseEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::mouseMoveEvent(mouseEvent);
  }
  }

// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * keyEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)keyEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::keyPressEvent(keyEvent);
  }
  }

// void contextMenuEvent(class QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * contextMenuEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)contextMenuEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::contextMenuEvent(contextMenuEvent);
  }
  }

// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * focusInEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)focusInEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::focusInEvent(focusInEvent);
  }
  }

// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * focusOutEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)focusOutEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::focusOutEvent(focusOutEvent);
  }
  }

// void childEvent(class QChildEvent *)
  virtual void childEvent(QChildEvent * childEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"childEvent", &handled, 1, (uint64_t)childEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMdiSubWindow::childEvent(childEvent);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QMdiSubWindow10metaObjectEv(void *this_) {
  return (void*)((QMdiSubWindow*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:69
// [-2] void QMdiSubWindow(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN13QMdiSubWindowC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  auto _nilp = (MyQMdiSubWindow*)(0);
  return  new MyQMdiSubWindow(parent, flags);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:70
// [-2] void ~QMdiSubWindow()
extern "C"
void C_ZN13QMdiSubWindowD2Ev(void *this_) {
  delete (QMdiSubWindow*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:72
// [8] QSize sizeHint()
extern "C"
void* C_ZNK13QMdiSubWindow8sizeHintEv(void *this_) {
  auto rv = ((QMdiSubWindow*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:73
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK13QMdiSubWindow15minimumSizeHintEv(void *this_) {
  auto rv = ((QMdiSubWindow*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:75
// [-2] void setWidget(class QWidget *)
extern "C"
void C_ZN13QMdiSubWindow9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QMdiSubWindow*)this_)->setWidget(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:76
// [8] QWidget * widget()
extern "C"
void* C_ZNK13QMdiSubWindow6widgetEv(void *this_) {
  return (void*)((QMdiSubWindow*)this_)->widget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:78
// [8] QWidget * maximizedButtonsWidget()
extern "C"
void* C_ZNK13QMdiSubWindow22maximizedButtonsWidgetEv(void *this_) {
  return (void*)((QMdiSubWindow*)this_)->maximizedButtonsWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:79
// [8] QWidget * maximizedSystemMenuIconWidget()
extern "C"
void* C_ZNK13QMdiSubWindow29maximizedSystemMenuIconWidgetEv(void *this_) {
  return (void*)((QMdiSubWindow*)this_)->maximizedSystemMenuIconWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:81
// [1] bool isShaded()
extern "C"
bool C_ZNK13QMdiSubWindow8isShadedEv(void *this_) {
  return (bool)((QMdiSubWindow*)this_)->isShaded();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:83
// [-2] void setOption(enum QMdiSubWindow::SubWindowOption, _Bool)
extern "C"
void C_ZN13QMdiSubWindow9setOptionENS_15SubWindowOptionEb(void *this_, QMdiSubWindow::SubWindowOption option, bool on) {
  ((QMdiSubWindow*)this_)->setOption(option, on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:84
// [1] bool testOption(enum QMdiSubWindow::SubWindowOption)
extern "C"
bool C_ZNK13QMdiSubWindow10testOptionENS_15SubWindowOptionE(void *this_, QMdiSubWindow::SubWindowOption arg0) {
  return (bool)((QMdiSubWindow*)this_)->testOption(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:86
// [-2] void setKeyboardSingleStep(int)
extern "C"
void C_ZN13QMdiSubWindow21setKeyboardSingleStepEi(void *this_, int step) {
  ((QMdiSubWindow*)this_)->setKeyboardSingleStep(step);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:87
// [4] int keyboardSingleStep()
extern "C"
int C_ZNK13QMdiSubWindow18keyboardSingleStepEv(void *this_) {
  return (int)((QMdiSubWindow*)this_)->keyboardSingleStep();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:89
// [-2] void setKeyboardPageStep(int)
extern "C"
void C_ZN13QMdiSubWindow19setKeyboardPageStepEi(void *this_, int step) {
  ((QMdiSubWindow*)this_)->setKeyboardPageStep(step);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:90
// [4] int keyboardPageStep()
extern "C"
int C_ZNK13QMdiSubWindow16keyboardPageStepEv(void *this_) {
  return (int)((QMdiSubWindow*)this_)->keyboardPageStep();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:93
// [-2] void setSystemMenu(class QMenu *)
extern "C"
void C_ZN13QMdiSubWindow13setSystemMenuEP5QMenu(void *this_, QMenu * systemMenu) {
  ((QMdiSubWindow*)this_)->setSystemMenu(systemMenu);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:94
// [8] QMenu * systemMenu()
extern "C"
void* C_ZNK13QMdiSubWindow10systemMenuEv(void *this_) {
  return (void*)((QMdiSubWindow*)this_)->systemMenu();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:97
// [8] QMdiArea * mdiArea()
extern "C"
void* C_ZNK13QMdiSubWindow7mdiAreaEv(void *this_) {
  return (void*)((QMdiSubWindow*)this_)->mdiArea();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:100
// [-2] void windowStateChanged(Qt::WindowStates, Qt::WindowStates)
extern "C"
void C_ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(void *this_, QFlags<Qt::WindowState> oldState, QFlags<Qt::WindowState> newState) {
  ((QMdiSubWindow*)this_)->windowStateChanged(oldState, newState);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:101
// [-2] void aboutToActivate()
extern "C"
void C_ZN13QMdiSubWindow15aboutToActivateEv(void *this_) {
  ((QMdiSubWindow*)this_)->aboutToActivate();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:105
// [-2] void showSystemMenu()
extern "C"
void C_ZN13QMdiSubWindow14showSystemMenuEv(void *this_) {
  ((QMdiSubWindow*)this_)->showSystemMenu();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:107
// [-2] void showShaded()
extern "C"
void C_ZN13QMdiSubWindow10showShadedEv(void *this_) {
  ((QMdiSubWindow*)this_)->showShaded();
}
//  main block end
