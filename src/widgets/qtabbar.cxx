// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qtabbar.h
// dst-file: /src/widgets/qtabbar.cxx
//

// header block begin =>
#include <qtabbar.h>

extern "C" {

int QTabBar_Class_Size()
{
  return sizeof(QTabBar);
}

// QTabBar(class QWidget *)
QTabBar* dector_ZN7QTabBarC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QTabBar) == 32, "tyszerr");
  QTabBar* rthis = new QTabBar(parent);
  return rthis;
}

// ~QTabBar()
void dedtor_ZN7QTabBarD0Ev(QTabBar* that)
{
  QTabBar* rthis = (QTabBar*)that;
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
// QTabBar_SlotProxy here
class QTabBar_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTabBar_SlotProxy():QObject(){}

public slots:
  // tabBarClicked(int)
  void slot_proxy_func__ZN7QTabBar13tabBarClickedEi(int arg0);
public:
  void (*slot_func__ZN7QTabBar13tabBarClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // tabBarDoubleClicked(int)
  void slot_proxy_func__ZN7QTabBar19tabBarDoubleClickedEi(int arg0);
public:
  void (*slot_func__ZN7QTabBar19tabBarDoubleClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // tabCloseRequested(int)
  void slot_proxy_func__ZN7QTabBar17tabCloseRequestedEi(int arg0);
public:
  void (*slot_func__ZN7QTabBar17tabCloseRequestedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // tabMoved(int, int)
  void slot_proxy_func__ZN7QTabBar8tabMovedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN7QTabBar8tabMovedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public slots:
  // currentChanged(int)
  void slot_proxy_func__ZN7QTabBar14currentChangedEi(int arg0);
public:
  void (*slot_func__ZN7QTabBar14currentChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtabbar.moc"

extern "C" {
  QTabBar_SlotProxy* QTabBar_SlotProxy_new()
  {
    return new QTabBar_SlotProxy();
  }
};

void QTabBar_SlotProxy::slot_proxy_func__ZN7QTabBar13tabBarClickedEi(int arg0) {
  if (this->slot_func__ZN7QTabBar13tabBarClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QTabBar13tabBarClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabBar_SlotProxy_connect__ZN7QTabBar13tabBarClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QTabBar13tabBarClickedEi = (decltype(that->slot_func__ZN7QTabBar13tabBarClickedEi))ffifptr;
  QObject::connect((QTabBar*)sender, SIGNAL(tabBarClicked(int)), that, SLOT(slot_proxy_func__ZN7QTabBar13tabBarClickedEi(int arg0)));
  return that;
}
extern "C"
void QTabBar_SlotProxy_disconnect__ZN7QTabBar13tabBarClickedEi(QTabBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabBar_SlotProxy::slot_proxy_func__ZN7QTabBar19tabBarDoubleClickedEi(int arg0) {
  if (this->slot_func__ZN7QTabBar19tabBarDoubleClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QTabBar19tabBarDoubleClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabBar_SlotProxy_connect__ZN7QTabBar19tabBarDoubleClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QTabBar19tabBarDoubleClickedEi = (decltype(that->slot_func__ZN7QTabBar19tabBarDoubleClickedEi))ffifptr;
  QObject::connect((QTabBar*)sender, SIGNAL(tabBarDoubleClicked(int)), that, SLOT(slot_proxy_func__ZN7QTabBar19tabBarDoubleClickedEi(int arg0)));
  return that;
}
extern "C"
void QTabBar_SlotProxy_disconnect__ZN7QTabBar19tabBarDoubleClickedEi(QTabBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabBar_SlotProxy::slot_proxy_func__ZN7QTabBar17tabCloseRequestedEi(int arg0) {
  if (this->slot_func__ZN7QTabBar17tabCloseRequestedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QTabBar17tabCloseRequestedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabBar_SlotProxy_connect__ZN7QTabBar17tabCloseRequestedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QTabBar17tabCloseRequestedEi = (decltype(that->slot_func__ZN7QTabBar17tabCloseRequestedEi))ffifptr;
  QObject::connect((QTabBar*)sender, SIGNAL(tabCloseRequested(int)), that, SLOT(slot_proxy_func__ZN7QTabBar17tabCloseRequestedEi(int arg0)));
  return that;
}
extern "C"
void QTabBar_SlotProxy_disconnect__ZN7QTabBar17tabCloseRequestedEi(QTabBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabBar_SlotProxy::slot_proxy_func__ZN7QTabBar8tabMovedEii(int arg0, int arg1) {
  if (this->slot_func__ZN7QTabBar8tabMovedEii != NULL) {
    // do smth...
    this->slot_func__ZN7QTabBar8tabMovedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTabBar_SlotProxy_connect__ZN7QTabBar8tabMovedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QTabBar8tabMovedEii = (decltype(that->slot_func__ZN7QTabBar8tabMovedEii))ffifptr;
  QObject::connect((QTabBar*)sender, SIGNAL(tabMoved(int, int)), that, SLOT(slot_proxy_func__ZN7QTabBar8tabMovedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QTabBar_SlotProxy_disconnect__ZN7QTabBar8tabMovedEii(QTabBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabBar_SlotProxy::slot_proxy_func__ZN7QTabBar14currentChangedEi(int arg0) {
  if (this->slot_func__ZN7QTabBar14currentChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QTabBar14currentChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabBar_SlotProxy_connect__ZN7QTabBar14currentChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QTabBar14currentChangedEi = (decltype(that->slot_func__ZN7QTabBar14currentChangedEi))ffifptr;
  QObject::connect((QTabBar*)sender, SIGNAL(currentChanged(int)), that, SLOT(slot_proxy_func__ZN7QTabBar14currentChangedEi(int arg0)));
  return that;
}
extern "C"
void QTabBar_SlotProxy_disconnect__ZN7QTabBar14currentChangedEi(QTabBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

