// /usr/include/qt/QtWidgets/qsystemtrayicon.h
#include <qsystemtrayicon.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:62
// const QMetaObject * metaObject()
extern "C"
void C_ZNK15QSystemTrayIcon10metaObjectEv(void *this_) {
  /*return*/ ((QSystemTrayIcon*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:68
// void QSystemTrayIcon(class QObject *)
extern "C"
void* C_ZN15QSystemTrayIconC1EP7QObject(QObject * parent) {
  return new QSystemTrayIcon(parent);
}
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:69
// void QSystemTrayIcon(const class QIcon &, class QObject *)
extern "C"
void* C_ZN15QSystemTrayIconC1ERK5QIconP7QObject(const QIcon & icon, QObject * parent) {
  return new QSystemTrayIcon(icon, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:70
// void ~QSystemTrayIcon()
extern "C"
void C_ZN15QSystemTrayIconD1Ev(void *this_) {
  delete (QSystemTrayIcon*)(this_);
}
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:81
// void setContextMenu(class QMenu *)
extern "C"
void C_ZN15QSystemTrayIcon14setContextMenuEP5QMenu(void *this_, QMenu * menu) {
  ((QSystemTrayIcon*)this_)->setContextMenu(menu);
}
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:82
// QMenu * contextMenu()
extern "C"
void C_ZNK15QSystemTrayIcon11contextMenuEv(void *this_) {
  /*return*/ ((QSystemTrayIcon*)this_)->contextMenu();
}
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:85
// QIcon icon()
extern "C"
void C_ZNK15QSystemTrayIcon4iconEv(void *this_) {
  /*return*/ ((QSystemTrayIcon*)this_)->icon();
}
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:86
// void setIcon(const class QIcon &)
extern "C"
void C_ZN15QSystemTrayIcon7setIconERK5QIcon(void *this_, const QIcon & icon) {
  ((QSystemTrayIcon*)this_)->setIcon(icon);
}
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:88
// QString toolTip()
extern "C"
void C_ZNK15QSystemTrayIcon7toolTipEv(void *this_) {
  /*return*/ ((QSystemTrayIcon*)this_)->toolTip();
}
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:89
// void setToolTip(const class QString &)
extern "C"
void C_ZN15QSystemTrayIcon10setToolTipERK7QString(void *this_, const QString & tip) {
  ((QSystemTrayIcon*)this_)->setToolTip(tip);
}
// static
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:91
// bool isSystemTrayAvailable()
extern "C"
void C_ZN15QSystemTrayIcon21isSystemTrayAvailableEv() {
  /*return*/ QSystemTrayIcon::isSystemTrayAvailable();
}
// static
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:92
// bool supportsMessages()
extern "C"
void C_ZN15QSystemTrayIcon16supportsMessagesEv() {
  /*return*/ QSystemTrayIcon::supportsMessages();
}
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:96
// QRect geometry()
extern "C"
void C_ZNK15QSystemTrayIcon8geometryEv(void *this_) {
  /*return*/ ((QSystemTrayIcon*)this_)->geometry();
}
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:97
// bool isVisible()
extern "C"
void C_ZNK15QSystemTrayIcon9isVisibleEv(void *this_) {
  /*return*/ ((QSystemTrayIcon*)this_)->isVisible();
}
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:100
// void setVisible(_Bool)
extern "C"
void C_ZN15QSystemTrayIcon10setVisibleEb(void *this_, bool visible) {
  ((QSystemTrayIcon*)this_)->setVisible(visible);
}
// inline
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:101
// void show()
extern "C"
void C_ZN15QSystemTrayIcon4showEv(void *this_) {
  ((QSystemTrayIcon*)this_)->show();
}
// inline
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:102
// void hide()
extern "C"
void C_ZN15QSystemTrayIcon4hideEv(void *this_) {
  ((QSystemTrayIcon*)this_)->hide();
}
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:103
// void showMessage(const class QString &, const class QString &, class QSystemTrayIcon::MessageIcon, int)
extern "C"
void C_ZN15QSystemTrayIcon11showMessageERK7QStringS2_NS_11MessageIconEi(void *this_, const QString & title, const QString & msg, QSystemTrayIcon::MessageIcon icon, int msecs) {
  ((QSystemTrayIcon*)this_)->showMessage(title, msg, icon, msecs);
}
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:107
// void activated(class QSystemTrayIcon::ActivationReason)
extern "C"
void C_ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE(void *this_, QSystemTrayIcon::ActivationReason reason) {
  ((QSystemTrayIcon*)this_)->activated(reason);
}
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:108
// void messageClicked()
extern "C"
void C_ZN15QSystemTrayIcon14messageClickedEv(void *this_) {
  ((QSystemTrayIcon*)this_)->messageClicked();
}