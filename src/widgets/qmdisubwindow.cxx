// /usr/include/qt/QtWidgets/qmdisubwindow.h
#include <qmdisubwindow.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qmdisubwindow.h:57
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QMdiSubWindow10metaObjectEv(void *this_) {
  /*return*/ ((QMdiSubWindow*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:69
// void QMdiSubWindow(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN13QMdiSubWindowC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  return new QMdiSubWindow(parent, flags);
}
// virtual
// /usr/include/qt/QtWidgets/qmdisubwindow.h:70
// void ~QMdiSubWindow()
extern "C"
void C_ZN13QMdiSubWindowD1Ev(void *this_) {
  delete (QMdiSubWindow*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qmdisubwindow.h:72
// QSize sizeHint()
extern "C"
void C_ZNK13QMdiSubWindow8sizeHintEv(void *this_) {
  /*return*/ ((QMdiSubWindow*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qmdisubwindow.h:73
// QSize minimumSizeHint()
extern "C"
void C_ZNK13QMdiSubWindow15minimumSizeHintEv(void *this_) {
  /*return*/ ((QMdiSubWindow*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:75
// void setWidget(class QWidget *)
extern "C"
void C_ZN13QMdiSubWindow9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QMdiSubWindow*)this_)->setWidget(widget);
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:76
// QWidget * widget()
extern "C"
void C_ZNK13QMdiSubWindow6widgetEv(void *this_) {
  /*return*/ ((QMdiSubWindow*)this_)->widget();
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:78
// QWidget * maximizedButtonsWidget()
extern "C"
void C_ZNK13QMdiSubWindow22maximizedButtonsWidgetEv(void *this_) {
  /*return*/ ((QMdiSubWindow*)this_)->maximizedButtonsWidget();
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:79
// QWidget * maximizedSystemMenuIconWidget()
extern "C"
void C_ZNK13QMdiSubWindow29maximizedSystemMenuIconWidgetEv(void *this_) {
  /*return*/ ((QMdiSubWindow*)this_)->maximizedSystemMenuIconWidget();
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:81
// bool isShaded()
extern "C"
void C_ZNK13QMdiSubWindow8isShadedEv(void *this_) {
  /*return*/ ((QMdiSubWindow*)this_)->isShaded();
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:83
// void setOption(enum QMdiSubWindow::SubWindowOption, _Bool)
extern "C"
void C_ZN13QMdiSubWindow9setOptionENS_15SubWindowOptionEb(void *this_, QMdiSubWindow::SubWindowOption option, bool on) {
  ((QMdiSubWindow*)this_)->setOption(option, on);
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:84
// bool testOption(enum QMdiSubWindow::SubWindowOption)
extern "C"
void C_ZNK13QMdiSubWindow10testOptionENS_15SubWindowOptionE(void *this_, QMdiSubWindow::SubWindowOption a0) {
  /*return*/ ((QMdiSubWindow*)this_)->testOption(a0);
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:86
// void setKeyboardSingleStep(int)
extern "C"
void C_ZN13QMdiSubWindow21setKeyboardSingleStepEi(void *this_, int step) {
  ((QMdiSubWindow*)this_)->setKeyboardSingleStep(step);
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:87
// int keyboardSingleStep()
extern "C"
void C_ZNK13QMdiSubWindow18keyboardSingleStepEv(void *this_) {
  /*return*/ ((QMdiSubWindow*)this_)->keyboardSingleStep();
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:89
// void setKeyboardPageStep(int)
extern "C"
void C_ZN13QMdiSubWindow19setKeyboardPageStepEi(void *this_, int step) {
  ((QMdiSubWindow*)this_)->setKeyboardPageStep(step);
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:90
// int keyboardPageStep()
extern "C"
void C_ZNK13QMdiSubWindow16keyboardPageStepEv(void *this_) {
  /*return*/ ((QMdiSubWindow*)this_)->keyboardPageStep();
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:93
// void setSystemMenu(class QMenu *)
extern "C"
void C_ZN13QMdiSubWindow13setSystemMenuEP5QMenu(void *this_, QMenu * systemMenu) {
  ((QMdiSubWindow*)this_)->setSystemMenu(systemMenu);
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:94
// QMenu * systemMenu()
extern "C"
void C_ZNK13QMdiSubWindow10systemMenuEv(void *this_) {
  /*return*/ ((QMdiSubWindow*)this_)->systemMenu();
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:97
// QMdiArea * mdiArea()
extern "C"
void C_ZNK13QMdiSubWindow7mdiAreaEv(void *this_) {
  /*return*/ ((QMdiSubWindow*)this_)->mdiArea();
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:100
// void windowStateChanged(Qt::WindowStates, Qt::WindowStates)
extern "C"
void C_ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(void *this_, QFlags<Qt::WindowState> oldState, QFlags<Qt::WindowState> newState) {
  ((QMdiSubWindow*)this_)->windowStateChanged(oldState, newState);
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:101
// void aboutToActivate()
extern "C"
void C_ZN13QMdiSubWindow15aboutToActivateEv(void *this_) {
  ((QMdiSubWindow*)this_)->aboutToActivate();
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:105
// void showSystemMenu()
extern "C"
void C_ZN13QMdiSubWindow14showSystemMenuEv(void *this_) {
  ((QMdiSubWindow*)this_)->showSystemMenu();
}
// /usr/include/qt/QtWidgets/qmdisubwindow.h:107
// void showShaded()
extern "C"
void C_ZN13QMdiSubWindow10showShadedEv(void *this_) {
  ((QMdiSubWindow*)this_)->showShaded();
}