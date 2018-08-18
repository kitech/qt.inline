//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qsystemtrayicon.h
#ifndef protected
#define protected public
#endif
#include <qsystemtrayicon.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSystemTrayIcon is pure virtual: false
// QSystemTrayIcon has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSystemTrayIcon : public QSystemTrayIcon {
public:
  virtual ~MyQSystemTrayIcon() {}
// void QSystemTrayIcon(QObject *)
MyQSystemTrayIcon(QObject * parent) : QSystemTrayIcon(parent) {}
// void QSystemTrayIcon(const QIcon &, QObject *)
MyQSystemTrayIcon(const QIcon & icon, QObject * parent) : QSystemTrayIcon(icon, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSystemTrayIcon::event(event);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:113
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QSystemTrayIcon5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QSystemTrayIcon*)this_)->QSystemTrayIcon::event(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:63
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSystemTrayIcon10metaObjectEv(void *this_) {
  return (void*)((QSystemTrayIcon*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:69
// [-2] void QSystemTrayIcon(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSystemTrayIconC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQSystemTrayIcon*)(0);
  return  new MyQSystemTrayIcon(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:70
// [-2] void QSystemTrayIcon(const QIcon &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSystemTrayIconC2ERK5QIconP7QObject(QIcon* icon, QObject * parent) {
  auto _nilp = (MyQSystemTrayIcon*)(0);
  return  new MyQSystemTrayIcon(*icon, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:71
// [-2] void ~QSystemTrayIcon()
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIconD2Ev(void *this_) {
  delete (QSystemTrayIcon*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:82
// [-2] void setContextMenu(QMenu *)
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon14setContextMenuEP5QMenu(void *this_, QMenu * menu) {
  ((QSystemTrayIcon*)this_)->setContextMenu(menu);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:83
// [8] QMenu * contextMenu()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSystemTrayIcon11contextMenuEv(void *this_) {
  return (void*)((QSystemTrayIcon*)this_)->contextMenu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:86
// [8] QIcon icon()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSystemTrayIcon4iconEv(void *this_) {
  auto rv = ((QSystemTrayIcon*)this_)->icon();
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:87
// [-2] void setIcon(const QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon7setIconERK5QIcon(void *this_, QIcon* icon) {
  ((QSystemTrayIcon*)this_)->setIcon(*icon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:89
// [8] QString toolTip()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSystemTrayIcon7toolTipEv(void *this_) {
  auto rv = ((QSystemTrayIcon*)this_)->toolTip();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:90
// [-2] void setToolTip(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon10setToolTipERK7QString(void *this_, QString* tip) {
  ((QSystemTrayIcon*)this_)->setToolTip(*tip);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:92
// [1] bool isSystemTrayAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZN15QSystemTrayIcon21isSystemTrayAvailableEv() {
  return (bool)QSystemTrayIcon::isSystemTrayAvailable();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:93
// [1] bool supportsMessages()
extern "C" Q_DECL_EXPORT
bool C_ZN15QSystemTrayIcon16supportsMessagesEv() {
  return (bool)QSystemTrayIcon::supportsMessages();
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:97
// [16] QRect geometry()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSystemTrayIcon8geometryEv(void *this_) {
  auto rv = ((QSystemTrayIcon*)this_)->geometry();
return new QRect(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:98
// [1] bool isVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QSystemTrayIcon9isVisibleEv(void *this_) {
  return (bool)((QSystemTrayIcon*)this_)->isVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:101
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon10setVisibleEb(void *this_, bool visible) {
  ((QSystemTrayIcon*)this_)->setVisible(visible);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:102
// [-2] void show()
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon4showEv(void *this_) {
  ((QSystemTrayIcon*)this_)->show();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:103
// [-2] void hide()
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon4hideEv(void *this_) {
  ((QSystemTrayIcon*)this_)->hide();
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:104
// [-2] void showMessage(const QString &, const QString &, const QIcon &, int)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon11showMessageERK7QStringS2_RK5QIconi(void *this_, QString* title, QString* msg, QIcon* icon, int msecs) {
  ((QSystemTrayIcon*)this_)->showMessage(*title, *msg, *icon, msecs);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:105
// [-2] void showMessage(const QString &, const QString &, QSystemTrayIcon::MessageIcon, int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon11showMessageERK7QStringS2_NS_11MessageIconEi(void *this_, QString* title, QString* msg, QSystemTrayIcon::MessageIcon icon, int msecs) {
  ((QSystemTrayIcon*)this_)->showMessage(*title, *msg, icon, msecs);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:109
// [-2] void activated(QSystemTrayIcon::ActivationReason)
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE(void *this_, QSystemTrayIcon::ActivationReason reason) {
  ((QSystemTrayIcon*)this_)->activated(reason);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsystemtrayicon.h:110
// [-2] void messageClicked()
extern "C" Q_DECL_EXPORT
void C_ZN15QSystemTrayIcon14messageClickedEv(void *this_) {
  ((QSystemTrayIcon*)this_)->messageClicked();
}

//  main block end
