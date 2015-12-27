// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
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
  // currentChanged(int)
  void slot_proxy_func__ZN10QTabWidget14currentChangedEi(int arg0);
public:
  void (*slot_func__ZN10QTabWidget14currentChangedEi)(int arg0) = NULL;
public slots:
  // tabCloseRequested(int)
  void slot_proxy_func__ZN10QTabWidget17tabCloseRequestedEi(int arg0);
public:
  void (*slot_func__ZN10QTabWidget17tabCloseRequestedEi)(int arg0) = NULL;
public slots:
  // tabBarClicked(int)
  void slot_proxy_func__ZN10QTabWidget13tabBarClickedEi(int arg0);
public:
  void (*slot_func__ZN10QTabWidget13tabBarClickedEi)(int arg0) = NULL;
public slots:
  // tabBarDoubleClicked(int)
  void slot_proxy_func__ZN10QTabWidget19tabBarDoubleClickedEi(int arg0);
public:
  void (*slot_func__ZN10QTabWidget19tabBarDoubleClickedEi)(int arg0) = NULL;
};
#include "src/widgets/qtabwidget.moc"

extern "C" {
  QTabWidget_SlotProxy* QTabWidget_SlotProxy_new()
  {
    return new QTabWidget_SlotProxy();
  }
};

void QTabWidget_SlotProxy::slot_proxy_func__ZN10QTabWidget14currentChangedEi(int arg0) {
  if (this->slot_func__ZN10QTabWidget14currentChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QTabWidget14currentChangedEi(arg0);
  }
}
extern "C"
void* QTabWidget_SlotProxy_connect__ZN10QTabWidget14currentChangedEi(QObject* sender, void* fptr){
  auto that = new QTabWidget_SlotProxy();
  that->slot_func__ZN10QTabWidget14currentChangedEi = (decltype(that->slot_func__ZN10QTabWidget14currentChangedEi))fptr;
  QObject::connect((QTabWidget*)sender, SIGNAL(currentChanged(int)), that, SLOT(slot_proxy_func__ZN10QTabWidget14currentChangedEi(int arg0)));
  return that;
}
extern "C"
void QTabWidget_SlotProxy_disconnect__ZN10QTabWidget14currentChangedEi(QTabWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabWidget_SlotProxy::slot_proxy_func__ZN10QTabWidget17tabCloseRequestedEi(int arg0) {
  if (this->slot_func__ZN10QTabWidget17tabCloseRequestedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QTabWidget17tabCloseRequestedEi(arg0);
  }
}
extern "C"
void* QTabWidget_SlotProxy_connect__ZN10QTabWidget17tabCloseRequestedEi(QObject* sender, void* fptr){
  auto that = new QTabWidget_SlotProxy();
  that->slot_func__ZN10QTabWidget17tabCloseRequestedEi = (decltype(that->slot_func__ZN10QTabWidget17tabCloseRequestedEi))fptr;
  QObject::connect((QTabWidget*)sender, SIGNAL(tabCloseRequested(int)), that, SLOT(slot_proxy_func__ZN10QTabWidget17tabCloseRequestedEi(int arg0)));
  return that;
}
extern "C"
void QTabWidget_SlotProxy_disconnect__ZN10QTabWidget17tabCloseRequestedEi(QTabWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabWidget_SlotProxy::slot_proxy_func__ZN10QTabWidget13tabBarClickedEi(int arg0) {
  if (this->slot_func__ZN10QTabWidget13tabBarClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QTabWidget13tabBarClickedEi(arg0);
  }
}
extern "C"
void* QTabWidget_SlotProxy_connect__ZN10QTabWidget13tabBarClickedEi(QObject* sender, void* fptr){
  auto that = new QTabWidget_SlotProxy();
  that->slot_func__ZN10QTabWidget13tabBarClickedEi = (decltype(that->slot_func__ZN10QTabWidget13tabBarClickedEi))fptr;
  QObject::connect((QTabWidget*)sender, SIGNAL(tabBarClicked(int)), that, SLOT(slot_proxy_func__ZN10QTabWidget13tabBarClickedEi(int arg0)));
  return that;
}
extern "C"
void QTabWidget_SlotProxy_disconnect__ZN10QTabWidget13tabBarClickedEi(QTabWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabWidget_SlotProxy::slot_proxy_func__ZN10QTabWidget19tabBarDoubleClickedEi(int arg0) {
  if (this->slot_func__ZN10QTabWidget19tabBarDoubleClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QTabWidget19tabBarDoubleClickedEi(arg0);
  }
}
extern "C"
void* QTabWidget_SlotProxy_connect__ZN10QTabWidget19tabBarDoubleClickedEi(QObject* sender, void* fptr){
  auto that = new QTabWidget_SlotProxy();
  that->slot_func__ZN10QTabWidget19tabBarDoubleClickedEi = (decltype(that->slot_func__ZN10QTabWidget19tabBarDoubleClickedEi))fptr;
  QObject::connect((QTabWidget*)sender, SIGNAL(tabBarDoubleClicked(int)), that, SLOT(slot_proxy_func__ZN10QTabWidget19tabBarDoubleClickedEi(int arg0)));
  return that;
}
extern "C"
void QTabWidget_SlotProxy_disconnect__ZN10QTabWidget19tabBarDoubleClickedEi(QTabWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

