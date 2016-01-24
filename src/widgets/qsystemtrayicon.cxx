// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qsystemtrayicon.h
// dst-file: /src/widgets/qsystemtrayicon.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsystemtrayicon.h>


#include <qstring.h>
#include <qrect.h>
#include <qicon.h>
// <= header block end

// main block begin =>
void __keep_qsystemtrayicon_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 96, column 17>
//   // proto:  void QSystemTrayIcon::hide();
if (true) {
  auto f = [](QSystemTrayIcon flythis) {
    ((QSystemTrayIcon*)0)->hide();
    flythis.hide();
  };
  if (f == nullptr){}
}
// _ZN15QSystemTrayIcon4hideEv hide()
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 95, column 17>
//   // proto:  void QSystemTrayIcon::show();
if (true) {
  auto f = [](QSystemTrayIcon flythis) {
    ((QSystemTrayIcon*)0)->show();
    flythis.show();
  };
  if (f == nullptr){}
}
// _ZN15QSystemTrayIcon4showEv show()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSystemTrayIcon_Class_Size()
{
  return sizeof(QSystemTrayIcon);
}

// <= use block end

// ext block begin =>
//   // proto:  void QSystemTrayIcon::~QSystemTrayIcon();
extern "C"
void C_ZN15QSystemTrayIconD2Ev(void *qthis) {
  delete (QSystemTrayIcon*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 94, column 10>
//   // proto:  void QSystemTrayIcon::setVisible(bool visible);
// _ZN15QSystemTrayIcon10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN15QSystemTrayIcon10setVisibleEb(void *qthis,
bool arg1) {
  ((QSystemTrayIcon*)qthis)->setVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 82, column 13>
//   // proto:  QString QSystemTrayIcon::toolTip();
// _ZNK15QSystemTrayIcon7toolTipEv toolTip()
extern "C"
QString*
C_ZNK15QSystemTrayIcon7toolTipEv(void *qthis) {
  auto ret =
  ((QSystemTrayIcon*)qthis)->toolTip();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 63, column 5>
//   // proto:  void QSystemTrayIcon::QSystemTrayIcon(const QIcon & icon, QObject * parent);
extern "C"
QSystemTrayIcon*
C_ZN15QSystemTrayIconC2ERK5QIconP7QObject(const QIcon* arg1,
QObject * arg2) {
  auto ret = new QSystemTrayIcon(*((const QIcon*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 96, column 17>
//   // proto:  void QSystemTrayIcon::hide();
// _ZN15QSystemTrayIcon4hideEv hide()
extern "C"
void
C_ZN15QSystemTrayIcon4hideEv(void *qthis) {
  ((QSystemTrayIcon*)qthis)->hide();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 56, column 5>
//   // proto:  const QMetaObject * QSystemTrayIcon::metaObject();
// _ZNK15QSystemTrayIcon10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QSystemTrayIcon10metaObjectEv(void *qthis) {
  auto ret =
  ((QSystemTrayIcon*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 80, column 10>
//   // proto:  void QSystemTrayIcon::setIcon(const QIcon & icon);
// _ZN15QSystemTrayIcon7setIconERK5QIcon setIcon(const class QIcon &)
extern "C"
void
C_ZN15QSystemTrayIcon7setIconERK5QIcon(void *qthis,
const QIcon* arg1) {
  ((QSystemTrayIcon*)qthis)->setIcon(*((const QIcon*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 101, column 10>
//   // proto:  void QSystemTrayIcon::activated(QSystemTrayIcon::ActivationReason reason);
// _ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE activated(class QSystemTrayIcon::ActivationReason)
extern "C"
void
C_ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE(void *qthis,
QSystemTrayIcon::ActivationReason* arg1) {
  ((QSystemTrayIcon*)qthis)->activated(*((QSystemTrayIcon::ActivationReason*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 91, column 10>
//   // proto:  bool QSystemTrayIcon::isVisible();
// _ZNK15QSystemTrayIcon9isVisibleEv isVisible()
extern "C"
bool
C_ZNK15QSystemTrayIcon9isVisibleEv(void *qthis) {
  auto ret =
  ((QSystemTrayIcon*)qthis)->isVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 62, column 5>
//   // proto:  void QSystemTrayIcon::QSystemTrayIcon(QObject * parent);
extern "C"
QSystemTrayIcon*
C_ZN15QSystemTrayIconC2EP7QObject(QObject * arg1) {
  auto ret = new QSystemTrayIcon(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 95, column 17>
//   // proto:  void QSystemTrayIcon::show();
// _ZN15QSystemTrayIcon4showEv show()
extern "C"
void
C_ZN15QSystemTrayIcon4showEv(void *qthis) {
  ((QSystemTrayIcon*)qthis)->show();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 86, column 17>
//   // proto: static bool QSystemTrayIcon::supportsMessages();
// _ZN15QSystemTrayIcon16supportsMessagesEv supportsMessages()
extern "C"
bool
C_ZN15QSystemTrayIcon16supportsMessagesEv() {
  auto ret =
  QSystemTrayIcon::supportsMessages();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 102, column 10>
//   // proto:  void QSystemTrayIcon::messageClicked();
// _ZN15QSystemTrayIcon14messageClickedEv messageClicked()
extern "C"
void
C_ZN15QSystemTrayIcon14messageClickedEv(void *qthis) {
  ((QSystemTrayIcon*)qthis)->messageClicked();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 75, column 10>
//   // proto:  void QSystemTrayIcon::setContextMenu(QMenu * menu);
// _ZN15QSystemTrayIcon14setContextMenuEP5QMenu setContextMenu(class QMenu *)
extern "C"
void
C_ZN15QSystemTrayIcon14setContextMenuEP5QMenu(void *qthis,
QMenu * arg1) {
  ((QSystemTrayIcon*)qthis)->setContextMenu(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 97, column 10>
//   // proto:  void QSystemTrayIcon::showMessage(const QString & title, const QString & msg, QSystemTrayIcon::MessageIcon icon, int msecs);
// _ZN15QSystemTrayIcon11showMessageERK7QStringS2_NS_11MessageIconEi showMessage(const class QString &, const class QString &, class QSystemTrayIcon::MessageIcon, int)
extern "C"
void
C_ZN15QSystemTrayIcon11showMessageERK7QStringS2_NS_11MessageIconEi(void *qthis,
const QString* arg1,
const QString* arg2,
QSystemTrayIcon::MessageIcon* arg3,
int arg4) {
  ((QSystemTrayIcon*)qthis)->showMessage(*((const QString*)arg1),
*((const QString*)arg2),
*((QSystemTrayIcon::MessageIcon*)arg3),
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 90, column 11>
//   // proto:  QRect QSystemTrayIcon::geometry();
// _ZNK15QSystemTrayIcon8geometryEv geometry()
extern "C"
QRect*
C_ZNK15QSystemTrayIcon8geometryEv(void *qthis) {
  auto ret =
  ((QSystemTrayIcon*)qthis)->geometry();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 83, column 10>
//   // proto:  void QSystemTrayIcon::setToolTip(const QString & tip);
// _ZN15QSystemTrayIcon10setToolTipERK7QString setToolTip(const class QString &)
extern "C"
void
C_ZN15QSystemTrayIcon10setToolTipERK7QString(void *qthis,
const QString* arg1) {
  ((QSystemTrayIcon*)qthis)->setToolTip(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 79, column 11>
//   // proto:  QIcon QSystemTrayIcon::icon();
// _ZNK15QSystemTrayIcon4iconEv icon()
extern "C"
QIcon*
C_ZNK15QSystemTrayIcon4iconEv(void *qthis) {
  auto ret =
  ((QSystemTrayIcon*)qthis)->icon();
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 76, column 12>
//   // proto:  QMenu * QSystemTrayIcon::contextMenu();
// _ZNK15QSystemTrayIcon11contextMenuEv contextMenu()
extern "C"
void*
C_ZNK15QSystemTrayIcon11contextMenuEv(void *qthis) {
  auto ret =
  ((QSystemTrayIcon*)qthis)->contextMenu();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsystemtrayicon.h', line 85, column 17>
//   // proto: static bool QSystemTrayIcon::isSystemTrayAvailable();
// _ZN15QSystemTrayIcon21isSystemTrayAvailableEv isSystemTrayAvailable()
extern "C"
bool
C_ZN15QSystemTrayIcon21isSystemTrayAvailableEv() {
  auto ret =
  QSystemTrayIcon::isSystemTrayAvailable();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QSystemTrayIcon_SlotProxy here
class QSystemTrayIcon_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSystemTrayIcon_SlotProxy():QObject(){}

public slots:
  // messageClicked()
  void slot_proxy_func__ZN15QSystemTrayIcon14messageClickedEv();
public:
  void (*slot_func__ZN15QSystemTrayIcon14messageClickedEv)(void* rsfptr) = NULL;
public slots:
  // activated(class QSystemTrayIcon::ActivationReason)
  void slot_proxy_func__ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE(QSystemTrayIcon::ActivationReason arg0);
public:
  void (*slot_func__ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE)(void* rsfptr, QSystemTrayIcon::ActivationReason arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qsystemtrayicon.moc"

extern "C" {
  QSystemTrayIcon_SlotProxy* QSystemTrayIcon_SlotProxy_new()
  {
    return new QSystemTrayIcon_SlotProxy();
  }
};

void QSystemTrayIcon_SlotProxy::slot_proxy_func__ZN15QSystemTrayIcon14messageClickedEv() {
  if (this->slot_func__ZN15QSystemTrayIcon14messageClickedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QSystemTrayIcon14messageClickedEv(this->rsfptr);
  }
}
extern "C"
void* QSystemTrayIcon_SlotProxy_connect__ZN15QSystemTrayIcon14messageClickedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSystemTrayIcon_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QSystemTrayIcon14messageClickedEv = (decltype(that->slot_func__ZN15QSystemTrayIcon14messageClickedEv))ffifptr;
  QObject::connect((QSystemTrayIcon*)sender, SIGNAL(messageClicked()), that, SLOT(slot_proxy_func__ZN15QSystemTrayIcon14messageClickedEv()));
  return that;
}
extern "C"
void QSystemTrayIcon_SlotProxy_disconnect__ZN15QSystemTrayIcon14messageClickedEv(QSystemTrayIcon_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QSystemTrayIcon_SlotProxy::slot_proxy_func__ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE(QSystemTrayIcon::ActivationReason arg0) {
  if (this->slot_func__ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE != NULL) {
    // do smth...
    this->slot_func__ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE(this->rsfptr, arg0);
  }
}
extern "C"
void* QSystemTrayIcon_SlotProxy_connect__ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSystemTrayIcon_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE = (decltype(that->slot_func__ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE))ffifptr;
  QObject::connect((QSystemTrayIcon*)sender, SIGNAL(activated(class QSystemTrayIcon::ActivationReason)), that, SLOT(slot_proxy_func__ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE(QSystemTrayIcon::ActivationReason arg0)));
  return that;
}
extern "C"
void QSystemTrayIcon_SlotProxy_disconnect__ZN15QSystemTrayIcon9activatedENS_16ActivationReasonE(QSystemTrayIcon_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

