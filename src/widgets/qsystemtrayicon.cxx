// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qsystemtrayicon.h
// dst-file: /src/widgets/qsystemtrayicon.cxx
//

// header block begin =>
#include <qsystemtrayicon.h>

extern "C" {

int QSystemTrayIcon_Class_Size()
{
  return sizeof(QSystemTrayIcon);
}

// ~QSystemTrayIcon()
void dedtor_ZN15QSystemTrayIconD0Ev(QSystemTrayIcon* that)
{
  QSystemTrayIcon* rthis = (QSystemTrayIcon*)that;
  delete rthis;
}

// QSystemTrayIcon(const class QIcon &, class QObject *)
QSystemTrayIcon* dector_ZN15QSystemTrayIconC1ERK5QIconP7QObject(const QIcon & icon, QObject * parent)
{
  // static_assert(sizeof(QSystemTrayIcon) == 32, "tyszerr");
  QSystemTrayIcon* rthis = new QSystemTrayIcon(icon, parent);
  return rthis;
}

// QSystemTrayIcon(class QObject *)
QSystemTrayIcon* dector_ZN15QSystemTrayIconC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QSystemTrayIcon) == 32, "tyszerr");
  QSystemTrayIcon* rthis = new QSystemTrayIcon(parent);
  return rthis;
}

  // proto:  void QSystemTrayIcon::hide();
void demth_ZN15QSystemTrayIcon4hideEv(void *that)
{
  QSystemTrayIcon *cthat = (QSystemTrayIcon *)that;
   cthat->hide();
}

  // proto:  void QSystemTrayIcon::show();
void demth_ZN15QSystemTrayIcon4showEv(void *that)
{
  QSystemTrayIcon *cthat = (QSystemTrayIcon *)that;
   cthat->show();
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
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

