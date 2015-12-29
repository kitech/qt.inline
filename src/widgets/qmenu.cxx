// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qmenu.h
// dst-file: /src/widgets/qmenu.cxx
//

// header block begin =>
#include <qmenu.h>

extern "C" {

int QMenu_Class_Size()
{
  return sizeof(QMenu);
}

// QMenu(class QWidget *)
QMenu* dector_ZN5QMenuC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QMenu) == 32, "tyszerr");
  QMenu* rthis = new QMenu(parent);
  return rthis;
}

// QMenu(const class QString &, class QWidget *)
QMenu* dector_ZN5QMenuC1ERK7QStringP7QWidget(const QString & title, QWidget * parent)
{
  // static_assert(sizeof(QMenu) == 32, "tyszerr");
  QMenu* rthis = new QMenu(title, parent);
  return rthis;
}

// ~QMenu()
void dedtor_ZN5QMenuD0Ev(QMenu* that)
{
  QMenu* rthis = (QMenu*)that;
  delete rthis;
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
// QMenu_SlotProxy here
class QMenu_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMenu_SlotProxy():QObject(){}

public slots:
  // aboutToShow()
  void slot_proxy_func__ZN5QMenu11aboutToShowEv();
public:
  void (*slot_func__ZN5QMenu11aboutToShowEv)(void* rsfptr) = NULL;
public slots:
  // hovered(class QAction *)
  void slot_proxy_func__ZN5QMenu7hoveredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN5QMenu7hoveredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public slots:
  // aboutToHide()
  void slot_proxy_func__ZN5QMenu11aboutToHideEv();
public:
  void (*slot_func__ZN5QMenu11aboutToHideEv)(void* rsfptr) = NULL;
public slots:
  // triggered(class QAction *)
  void slot_proxy_func__ZN5QMenu9triggeredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN5QMenu9triggeredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qmenu.moc"

extern "C" {
  QMenu_SlotProxy* QMenu_SlotProxy_new()
  {
    return new QMenu_SlotProxy();
  }
};

void QMenu_SlotProxy::slot_proxy_func__ZN5QMenu11aboutToShowEv() {
  if (this->slot_func__ZN5QMenu11aboutToShowEv != NULL) {
    // do smth...
    this->slot_func__ZN5QMenu11aboutToShowEv(this->rsfptr);
  }
}
extern "C"
void* QMenu_SlotProxy_connect__ZN5QMenu11aboutToShowEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMenu_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN5QMenu11aboutToShowEv = (decltype(that->slot_func__ZN5QMenu11aboutToShowEv))ffifptr;
  QObject::connect((QMenu*)sender, SIGNAL(aboutToShow()), that, SLOT(slot_proxy_func__ZN5QMenu11aboutToShowEv()));
  return that;
}
extern "C"
void QMenu_SlotProxy_disconnect__ZN5QMenu11aboutToShowEv(QMenu_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMenu_SlotProxy::slot_proxy_func__ZN5QMenu7hoveredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN5QMenu7hoveredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN5QMenu7hoveredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QMenu_SlotProxy_connect__ZN5QMenu7hoveredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMenu_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN5QMenu7hoveredEP7QAction = (decltype(that->slot_func__ZN5QMenu7hoveredEP7QAction))ffifptr;
  QObject::connect((QMenu*)sender, SIGNAL(hovered(class QAction *)), that, SLOT(slot_proxy_func__ZN5QMenu7hoveredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QMenu_SlotProxy_disconnect__ZN5QMenu7hoveredEP7QAction(QMenu_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMenu_SlotProxy::slot_proxy_func__ZN5QMenu11aboutToHideEv() {
  if (this->slot_func__ZN5QMenu11aboutToHideEv != NULL) {
    // do smth...
    this->slot_func__ZN5QMenu11aboutToHideEv(this->rsfptr);
  }
}
extern "C"
void* QMenu_SlotProxy_connect__ZN5QMenu11aboutToHideEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMenu_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN5QMenu11aboutToHideEv = (decltype(that->slot_func__ZN5QMenu11aboutToHideEv))ffifptr;
  QObject::connect((QMenu*)sender, SIGNAL(aboutToHide()), that, SLOT(slot_proxy_func__ZN5QMenu11aboutToHideEv()));
  return that;
}
extern "C"
void QMenu_SlotProxy_disconnect__ZN5QMenu11aboutToHideEv(QMenu_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMenu_SlotProxy::slot_proxy_func__ZN5QMenu9triggeredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN5QMenu9triggeredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN5QMenu9triggeredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QMenu_SlotProxy_connect__ZN5QMenu9triggeredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMenu_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN5QMenu9triggeredEP7QAction = (decltype(that->slot_func__ZN5QMenu9triggeredEP7QAction))ffifptr;
  QObject::connect((QMenu*)sender, SIGNAL(triggered(class QAction *)), that, SLOT(slot_proxy_func__ZN5QMenu9triggeredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QMenu_SlotProxy_disconnect__ZN5QMenu9triggeredEP7QAction(QMenu_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

