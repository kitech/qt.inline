// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qtabwidget.h
// dst-file: /src/widgets/qtabwidget.cxx
//

// header block begin =>
#include <qtabwidget.h>

extern "C" {

int QTabWidget_Class_Size()
{
  return sizeof(QTabWidget);
}

// QTabWidget(class QWidget *)
QTabWidget* dector_ZN10QTabWidgetC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QTabWidget) == 32, "tyszerr");
  QTabWidget* rthis = new QTabWidget(parent);
  return rthis;
}

// ~QTabWidget()
void dedtor_ZN10QTabWidgetD0Ev(QTabWidget* that)
{
  QTabWidget* rthis = (QTabWidget*)that;
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
// QTabWidget_SlotProxy here
class QTabWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTabWidget_SlotProxy():QObject(){}

public slots:
  // tabBarDoubleClicked(int)
  void slot_proxy_func__ZN10QTabWidget19tabBarDoubleClickedEi(int arg0);
public:
  void (*slot_func__ZN10QTabWidget19tabBarDoubleClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // tabBarClicked(int)
  void slot_proxy_func__ZN10QTabWidget13tabBarClickedEi(int arg0);
public:
  void (*slot_func__ZN10QTabWidget13tabBarClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // tabCloseRequested(int)
  void slot_proxy_func__ZN10QTabWidget17tabCloseRequestedEi(int arg0);
public:
  void (*slot_func__ZN10QTabWidget17tabCloseRequestedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // currentChanged(int)
  void slot_proxy_func__ZN10QTabWidget14currentChangedEi(int arg0);
public:
  void (*slot_func__ZN10QTabWidget14currentChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtabwidget.moc"

extern "C" {
  QTabWidget_SlotProxy* QTabWidget_SlotProxy_new()
  {
    return new QTabWidget_SlotProxy();
  }
};

void QTabWidget_SlotProxy::slot_proxy_func__ZN10QTabWidget19tabBarDoubleClickedEi(int arg0) {
  if (this->slot_func__ZN10QTabWidget19tabBarDoubleClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QTabWidget19tabBarDoubleClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabWidget_SlotProxy_connect__ZN10QTabWidget19tabBarDoubleClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QTabWidget19tabBarDoubleClickedEi = (decltype(that->slot_func__ZN10QTabWidget19tabBarDoubleClickedEi))ffifptr;
  QObject::connect((QTabWidget*)sender, SIGNAL(tabBarDoubleClicked(int)), that, SLOT(slot_proxy_func__ZN10QTabWidget19tabBarDoubleClickedEi(int arg0)));
  return that;
}
extern "C"
void QTabWidget_SlotProxy_disconnect__ZN10QTabWidget19tabBarDoubleClickedEi(QTabWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabWidget_SlotProxy::slot_proxy_func__ZN10QTabWidget13tabBarClickedEi(int arg0) {
  if (this->slot_func__ZN10QTabWidget13tabBarClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QTabWidget13tabBarClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabWidget_SlotProxy_connect__ZN10QTabWidget13tabBarClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QTabWidget13tabBarClickedEi = (decltype(that->slot_func__ZN10QTabWidget13tabBarClickedEi))ffifptr;
  QObject::connect((QTabWidget*)sender, SIGNAL(tabBarClicked(int)), that, SLOT(slot_proxy_func__ZN10QTabWidget13tabBarClickedEi(int arg0)));
  return that;
}
extern "C"
void QTabWidget_SlotProxy_disconnect__ZN10QTabWidget13tabBarClickedEi(QTabWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabWidget_SlotProxy::slot_proxy_func__ZN10QTabWidget17tabCloseRequestedEi(int arg0) {
  if (this->slot_func__ZN10QTabWidget17tabCloseRequestedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QTabWidget17tabCloseRequestedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabWidget_SlotProxy_connect__ZN10QTabWidget17tabCloseRequestedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QTabWidget17tabCloseRequestedEi = (decltype(that->slot_func__ZN10QTabWidget17tabCloseRequestedEi))ffifptr;
  QObject::connect((QTabWidget*)sender, SIGNAL(tabCloseRequested(int)), that, SLOT(slot_proxy_func__ZN10QTabWidget17tabCloseRequestedEi(int arg0)));
  return that;
}
extern "C"
void QTabWidget_SlotProxy_disconnect__ZN10QTabWidget17tabCloseRequestedEi(QTabWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabWidget_SlotProxy::slot_proxy_func__ZN10QTabWidget14currentChangedEi(int arg0) {
  if (this->slot_func__ZN10QTabWidget14currentChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QTabWidget14currentChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabWidget_SlotProxy_connect__ZN10QTabWidget14currentChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QTabWidget14currentChangedEi = (decltype(that->slot_func__ZN10QTabWidget14currentChangedEi))ffifptr;
  QObject::connect((QTabWidget*)sender, SIGNAL(currentChanged(int)), that, SLOT(slot_proxy_func__ZN10QTabWidget14currentChangedEi(int arg0)));
  return that;
}
extern "C"
void QTabWidget_SlotProxy_disconnect__ZN10QTabWidget14currentChangedEi(QTabWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

