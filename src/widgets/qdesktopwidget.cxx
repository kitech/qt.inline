// /usr/include/qt/QtWidgets/qdesktopwidget.h
#include <qdesktopwidget.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qdesktopwidget.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK14QDesktopWidget10metaObjectEv(void *this_) {
  /*return*/ ((QDesktopWidget*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:58
// void QDesktopWidget()
extern "C"
void* C_ZN14QDesktopWidgetC1Ev() {
  return new QDesktopWidget();
}
// virtual
// /usr/include/qt/QtWidgets/qdesktopwidget.h:59
// void ~QDesktopWidget()
extern "C"
void C_ZN14QDesktopWidgetD1Ev(void *this_) {
  delete (QDesktopWidget*)(this_);
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:61
// bool isVirtualDesktop()
extern "C"
void C_ZNK14QDesktopWidget16isVirtualDesktopEv(void *this_) {
  /*return*/ ((QDesktopWidget*)this_)->isVirtualDesktop();
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:63
// int numScreens()
extern "C"
void C_ZNK14QDesktopWidget10numScreensEv(void *this_) {
  /*return*/ ((QDesktopWidget*)this_)->numScreens();
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:64
// int screenCount()
extern "C"
void C_ZNK14QDesktopWidget11screenCountEv(void *this_) {
  /*return*/ ((QDesktopWidget*)this_)->screenCount();
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:65
// int primaryScreen()
extern "C"
void C_ZNK14QDesktopWidget13primaryScreenEv(void *this_) {
  /*return*/ ((QDesktopWidget*)this_)->primaryScreen();
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:67
// int screenNumber(const class QWidget *)
extern "C"
void C_ZNK14QDesktopWidget12screenNumberEPK7QWidget(void *this_, const QWidget * widget) {
  /*return*/ ((QDesktopWidget*)this_)->screenNumber(widget);
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:68
// int screenNumber(const class QPoint &)
extern "C"
void C_ZNK14QDesktopWidget12screenNumberERK6QPoint(void *this_, const QPoint & a0) {
  /*return*/ ((QDesktopWidget*)this_)->screenNumber(a0);
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:70
// QWidget * screen(int)
extern "C"
void C_ZN14QDesktopWidget6screenEi(void *this_, int screen) {
  /*return*/ ((QDesktopWidget*)this_)->screen(screen);
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:72
// const QRect screenGeometry(int)
extern "C"
void C_ZNK14QDesktopWidget14screenGeometryEi(void *this_, int screen) {
  /*return*/ ((QDesktopWidget*)this_)->screenGeometry(screen);
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:73
// const QRect screenGeometry(const class QWidget *)
extern "C"
void C_ZNK14QDesktopWidget14screenGeometryEPK7QWidget(void *this_, const QWidget * widget) {
  /*return*/ ((QDesktopWidget*)this_)->screenGeometry(widget);
}
// inline
// /usr/include/qt/QtWidgets/qdesktopwidget.h:74
// const QRect screenGeometry(const class QPoint &)
extern "C"
void C_ZNK14QDesktopWidget14screenGeometryERK6QPoint(void *this_, const QPoint & point) {
  /*return*/ ((QDesktopWidget*)this_)->screenGeometry(point);
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:77
// const QRect availableGeometry(int)
extern "C"
void C_ZNK14QDesktopWidget17availableGeometryEi(void *this_, int screen) {
  /*return*/ ((QDesktopWidget*)this_)->availableGeometry(screen);
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:78
// const QRect availableGeometry(const class QWidget *)
extern "C"
void C_ZNK14QDesktopWidget17availableGeometryEPK7QWidget(void *this_, const QWidget * widget) {
  /*return*/ ((QDesktopWidget*)this_)->availableGeometry(widget);
}
// inline
// /usr/include/qt/QtWidgets/qdesktopwidget.h:79
// const QRect availableGeometry(const class QPoint &)
extern "C"
void C_ZNK14QDesktopWidget17availableGeometryERK6QPoint(void *this_, const QPoint & point) {
  /*return*/ ((QDesktopWidget*)this_)->availableGeometry(point);
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:83
// void resized(int)
extern "C"
void C_ZN14QDesktopWidget7resizedEi(void *this_, int a0) {
  ((QDesktopWidget*)this_)->resized(a0);
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:84
// void workAreaResized(int)
extern "C"
void C_ZN14QDesktopWidget15workAreaResizedEi(void *this_, int a0) {
  ((QDesktopWidget*)this_)->workAreaResized(a0);
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:85
// void screenCountChanged(int)
extern "C"
void C_ZN14QDesktopWidget18screenCountChangedEi(void *this_, int a0) {
  ((QDesktopWidget*)this_)->screenCountChanged(a0);
}
// /usr/include/qt/QtWidgets/qdesktopwidget.h:86
// void primaryScreenChanged()
extern "C"
void C_ZN14QDesktopWidget20primaryScreenChangedEv(void *this_) {
  ((QDesktopWidget*)this_)->primaryScreenChanged();
}