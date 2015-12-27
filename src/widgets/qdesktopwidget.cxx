// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qdesktopwidget.h
// dst-file: /src/widgets/qdesktopwidget.cxx
//

// header block begin =>
#include <qdesktopwidget.h>

extern "C" {

int QDesktopWidget_Class_Size()
{
  return sizeof(QDesktopWidget);
}

// ~QDesktopWidget()
void dedtor_ZN14QDesktopWidgetD0Ev(QDesktopWidget* that)
{
  QDesktopWidget* rthis = (QDesktopWidget*)that;
  delete rthis;
}

// QDesktopWidget()
QDesktopWidget* dector_ZN14QDesktopWidgetC1Ev()
{
  // static_assert(sizeof(QDesktopWidget) == 32, "tyszerr");
  QDesktopWidget* rthis = new QDesktopWidget();
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
// QDesktopWidget_SlotProxy here
class QDesktopWidget_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QDesktopWidget_SlotProxy():QObject(){}

public slots:
  // resized(int)
  void slot_proxy_func__ZN14QDesktopWidget7resizedEi(int arg0);
public:
  void (*slot_func__ZN14QDesktopWidget7resizedEi)(int arg0) = NULL;
public slots:
  // workAreaResized(int)
  void slot_proxy_func__ZN14QDesktopWidget15workAreaResizedEi(int arg0);
public:
  void (*slot_func__ZN14QDesktopWidget15workAreaResizedEi)(int arg0) = NULL;
public slots:
  // screenCountChanged(int)
  void slot_proxy_func__ZN14QDesktopWidget18screenCountChangedEi(int arg0);
public:
  void (*slot_func__ZN14QDesktopWidget18screenCountChangedEi)(int arg0) = NULL;
};
#include "src/widgets/qdesktopwidget.moc"

extern "C" {
  QDesktopWidget_SlotProxy* QDesktopWidget_SlotProxy_new()
  {
    return new QDesktopWidget_SlotProxy();
  }
};

void QDesktopWidget_SlotProxy::slot_proxy_func__ZN14QDesktopWidget7resizedEi(int arg0) {
  if (this->slot_func__ZN14QDesktopWidget7resizedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QDesktopWidget7resizedEi(arg0);
  }
}
extern "C"
void* QDesktopWidget_SlotProxy_connect__ZN14QDesktopWidget7resizedEi(QObject* sender, void* fptr){
  auto that = new QDesktopWidget_SlotProxy();
  that->slot_func__ZN14QDesktopWidget7resizedEi = (decltype(that->slot_func__ZN14QDesktopWidget7resizedEi))fptr;
  QObject::connect((QDesktopWidget*)sender, SIGNAL(resized(int)), that, SLOT(slot_proxy_func__ZN14QDesktopWidget7resizedEi(int arg0)));
  return that;
}
extern "C"
void QDesktopWidget_SlotProxy_disconnect__ZN14QDesktopWidget7resizedEi(QDesktopWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDesktopWidget_SlotProxy::slot_proxy_func__ZN14QDesktopWidget15workAreaResizedEi(int arg0) {
  if (this->slot_func__ZN14QDesktopWidget15workAreaResizedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QDesktopWidget15workAreaResizedEi(arg0);
  }
}
extern "C"
void* QDesktopWidget_SlotProxy_connect__ZN14QDesktopWidget15workAreaResizedEi(QObject* sender, void* fptr){
  auto that = new QDesktopWidget_SlotProxy();
  that->slot_func__ZN14QDesktopWidget15workAreaResizedEi = (decltype(that->slot_func__ZN14QDesktopWidget15workAreaResizedEi))fptr;
  QObject::connect((QDesktopWidget*)sender, SIGNAL(workAreaResized(int)), that, SLOT(slot_proxy_func__ZN14QDesktopWidget15workAreaResizedEi(int arg0)));
  return that;
}
extern "C"
void QDesktopWidget_SlotProxy_disconnect__ZN14QDesktopWidget15workAreaResizedEi(QDesktopWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDesktopWidget_SlotProxy::slot_proxy_func__ZN14QDesktopWidget18screenCountChangedEi(int arg0) {
  if (this->slot_func__ZN14QDesktopWidget18screenCountChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QDesktopWidget18screenCountChangedEi(arg0);
  }
}
extern "C"
void* QDesktopWidget_SlotProxy_connect__ZN14QDesktopWidget18screenCountChangedEi(QObject* sender, void* fptr){
  auto that = new QDesktopWidget_SlotProxy();
  that->slot_func__ZN14QDesktopWidget18screenCountChangedEi = (decltype(that->slot_func__ZN14QDesktopWidget18screenCountChangedEi))fptr;
  QObject::connect((QDesktopWidget*)sender, SIGNAL(screenCountChanged(int)), that, SLOT(slot_proxy_func__ZN14QDesktopWidget18screenCountChangedEi(int arg0)));
  return that;
}
extern "C"
void QDesktopWidget_SlotProxy_disconnect__ZN14QDesktopWidget18screenCountChangedEi(QDesktopWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

