// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qmdisubwindow.h
// dst-file: /src/widgets/qmdisubwindow.cxx
//

// header block begin =>
#include <qmdisubwindow.h>

extern "C" {

int QMdiSubWindow_Class_Size()
{
  return sizeof(QMdiSubWindow);
}

// ~QMdiSubWindow()
void dedtor_ZN13QMdiSubWindowD0Ev(QMdiSubWindow* that)
{
  QMdiSubWindow* rthis = (QMdiSubWindow*)that;
  delete rthis;
}

// QMdiSubWindow(class QWidget *, Qt::WindowFlags)
QMdiSubWindow* dector_ZN13QMdiSubWindowC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags flags)
{
  // static_assert(sizeof(QMdiSubWindow) == 32, "tyszerr");
  QMdiSubWindow* rthis = new QMdiSubWindow(parent, flags);
  return rthis;
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
// QMdiSubWindow_SlotProxy here
class QMdiSubWindow_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMdiSubWindow_SlotProxy():QObject(){}

public slots:
  // windowStateChanged(Qt::WindowStates, Qt::WindowStates)
  void slot_proxy_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(Qt::WindowStates arg0, Qt::WindowStates arg1);
public:
  void (*slot_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_)(void* rsfptr, Qt::WindowStates arg0, Qt::WindowStates arg1) = NULL;
public slots:
  // aboutToActivate()
  void slot_proxy_func__ZN13QMdiSubWindow15aboutToActivateEv();
public:
  void (*slot_func__ZN13QMdiSubWindow15aboutToActivateEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qmdisubwindow.moc"

extern "C" {
  QMdiSubWindow_SlotProxy* QMdiSubWindow_SlotProxy_new()
  {
    return new QMdiSubWindow_SlotProxy();
  }
};

void QMdiSubWindow_SlotProxy::slot_proxy_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(Qt::WindowStates arg0, Qt::WindowStates arg1) {
  if (this->slot_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_ != NULL) {
    // do smth...
    this->slot_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QMdiSubWindow_SlotProxy_connect__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMdiSubWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_ = (decltype(that->slot_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_))ffifptr;
  QObject::connect((QMdiSubWindow*)sender, SIGNAL(windowStateChanged(Qt::WindowStates, Qt::WindowStates)), that, SLOT(slot_proxy_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(Qt::WindowStates arg0, Qt::WindowStates arg1)));
  return that;
}
extern "C"
void QMdiSubWindow_SlotProxy_disconnect__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(QMdiSubWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMdiSubWindow_SlotProxy::slot_proxy_func__ZN13QMdiSubWindow15aboutToActivateEv() {
  if (this->slot_func__ZN13QMdiSubWindow15aboutToActivateEv != NULL) {
    // do smth...
    this->slot_func__ZN13QMdiSubWindow15aboutToActivateEv(this->rsfptr);
  }
}
extern "C"
void* QMdiSubWindow_SlotProxy_connect__ZN13QMdiSubWindow15aboutToActivateEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMdiSubWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QMdiSubWindow15aboutToActivateEv = (decltype(that->slot_func__ZN13QMdiSubWindow15aboutToActivateEv))ffifptr;
  QObject::connect((QMdiSubWindow*)sender, SIGNAL(aboutToActivate()), that, SLOT(slot_proxy_func__ZN13QMdiSubWindow15aboutToActivateEv()));
  return that;
}
extern "C"
void QMdiSubWindow_SlotProxy_disconnect__ZN13QMdiSubWindow15aboutToActivateEv(QMdiSubWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

