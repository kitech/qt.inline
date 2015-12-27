// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qaction.h
// dst-file: /src/widgets/qaction.cxx
//

// header block begin =>
#include <qaction.h>

extern "C" {

int QAction_Class_Size()
{
  return sizeof(QAction);
}

// QAction(const class QString &, class QObject *)
QAction* dector_ZN7QActionC1ERK7QStringP7QObject(const QString & text, QObject * parent)
{
  // static_assert(sizeof(QAction) == 32, "tyszerr");
  QAction* rthis = new QAction(text, parent);
  return rthis;
}

// ~QAction()
void dedtor_ZN7QActionD0Ev(QAction* that)
{
  QAction* rthis = (QAction*)that;
  delete rthis;
}

// QAction(class QObject *)
QAction* dector_ZN7QActionC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QAction) == 32, "tyszerr");
  QAction* rthis = new QAction(parent);
  return rthis;
}

// QAction(const class QIcon &, const class QString &, class QObject *)
QAction* dector_ZN7QActionC1ERK5QIconRK7QStringP7QObject(const QIcon & icon, const QString & text, QObject * parent)
{
  // static_assert(sizeof(QAction) == 32, "tyszerr");
  QAction* rthis = new QAction(icon, text, parent);
  return rthis;
}

  // proto:  void QAction::setDisabled(bool b);
void demth_ZN7QAction11setDisabledEb(void *that, bool b)
{
  QAction *cthat = (QAction *)that;
   cthat->setDisabled(b);
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
// QAction_SlotProxy here
class QAction_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QAction_SlotProxy():QObject(){}

public slots:
  // changed()
  void slot_proxy_func__ZN7QAction7changedEv();
public:
  void (*slot_func__ZN7QAction7changedEv)() = NULL;
public slots:
  // triggered(_Bool)
  void slot_proxy_func__ZN7QAction9triggeredEb(bool arg0);
public:
  void (*slot_func__ZN7QAction9triggeredEb)(bool arg0) = NULL;
public slots:
  // hovered()
  void slot_proxy_func__ZN7QAction7hoveredEv();
public:
  void (*slot_func__ZN7QAction7hoveredEv)() = NULL;
public slots:
  // toggled(_Bool)
  void slot_proxy_func__ZN7QAction7toggledEb(bool arg0);
public:
  void (*slot_func__ZN7QAction7toggledEb)(bool arg0) = NULL;
};
#include "src/widgets/qaction.moc"

extern "C" {
  QAction_SlotProxy* QAction_SlotProxy_new()
  {
    return new QAction_SlotProxy();
  }
};

void QAction_SlotProxy::slot_proxy_func__ZN7QAction7changedEv() {
  if (this->slot_func__ZN7QAction7changedEv != NULL) {
    // do smth...
    this->slot_func__ZN7QAction7changedEv();
  }
}
extern "C"
void* QAction_SlotProxy_connect__ZN7QAction7changedEv(QObject* sender, void* fptr){
  auto that = new QAction_SlotProxy();
  that->slot_func__ZN7QAction7changedEv = (decltype(that->slot_func__ZN7QAction7changedEv))fptr;
  QObject::connect((QAction*)sender, SIGNAL(changed()), that, SLOT(slot_proxy_func__ZN7QAction7changedEv()));
  return that;
}
extern "C"
void QAction_SlotProxy_disconnect__ZN7QAction7changedEv(QAction_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAction_SlotProxy::slot_proxy_func__ZN7QAction9triggeredEb(bool arg0) {
  if (this->slot_func__ZN7QAction9triggeredEb != NULL) {
    // do smth...
    this->slot_func__ZN7QAction9triggeredEb(arg0);
  }
}
extern "C"
void* QAction_SlotProxy_connect__ZN7QAction9triggeredEb(QObject* sender, void* fptr){
  auto that = new QAction_SlotProxy();
  that->slot_func__ZN7QAction9triggeredEb = (decltype(that->slot_func__ZN7QAction9triggeredEb))fptr;
  QObject::connect((QAction*)sender, SIGNAL(triggered(_Bool)), that, SLOT(slot_proxy_func__ZN7QAction9triggeredEb(bool arg0)));
  return that;
}
extern "C"
void QAction_SlotProxy_disconnect__ZN7QAction9triggeredEb(QAction_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAction_SlotProxy::slot_proxy_func__ZN7QAction7hoveredEv() {
  if (this->slot_func__ZN7QAction7hoveredEv != NULL) {
    // do smth...
    this->slot_func__ZN7QAction7hoveredEv();
  }
}
extern "C"
void* QAction_SlotProxy_connect__ZN7QAction7hoveredEv(QObject* sender, void* fptr){
  auto that = new QAction_SlotProxy();
  that->slot_func__ZN7QAction7hoveredEv = (decltype(that->slot_func__ZN7QAction7hoveredEv))fptr;
  QObject::connect((QAction*)sender, SIGNAL(hovered()), that, SLOT(slot_proxy_func__ZN7QAction7hoveredEv()));
  return that;
}
extern "C"
void QAction_SlotProxy_disconnect__ZN7QAction7hoveredEv(QAction_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAction_SlotProxy::slot_proxy_func__ZN7QAction7toggledEb(bool arg0) {
  if (this->slot_func__ZN7QAction7toggledEb != NULL) {
    // do smth...
    this->slot_func__ZN7QAction7toggledEb(arg0);
  }
}
extern "C"
void* QAction_SlotProxy_connect__ZN7QAction7toggledEb(QObject* sender, void* fptr){
  auto that = new QAction_SlotProxy();
  that->slot_func__ZN7QAction7toggledEb = (decltype(that->slot_func__ZN7QAction7toggledEb))fptr;
  QObject::connect((QAction*)sender, SIGNAL(toggled(_Bool)), that, SLOT(slot_proxy_func__ZN7QAction7toggledEb(bool arg0)));
  return that;
}
extern "C"
void QAction_SlotProxy_disconnect__ZN7QAction7toggledEb(QAction_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

