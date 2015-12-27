// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qwizard.h
// dst-file: /src/widgets/qwizard.cxx
//

// header block begin =>
#include <qwizard.h>

extern "C" {

int QWizardPage_Class_Size()
{
  return sizeof(QWizardPage);
}

// QWizardPage(class QWidget *)
QWizardPage* dector_ZN11QWizardPageC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QWizardPage) == 32, "tyszerr");
  QWizardPage* rthis = new QWizardPage(parent);
  return rthis;
}

// ~QWizardPage()
void dedtor_ZN11QWizardPageD0Ev(QWizardPage* that)
{
  QWizardPage* rthis = (QWizardPage*)that;
  delete rthis;
}

int QWizard_Class_Size()
{
  return sizeof(QWizard);
}

// ~QWizard()
void dedtor_ZN7QWizardD0Ev(QWizard* that)
{
  QWizard* rthis = (QWizard*)that;
  delete rthis;
}

// QWizard(class QWidget *, Qt::WindowFlags)
QWizard* dector_ZN7QWizardC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags flags)
{
  // static_assert(sizeof(QWizard) == 32, "tyszerr");
  QWizard* rthis = new QWizard(parent, flags);
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
// QWizardPage_SlotProxy here
class QWizardPage_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QWizardPage_SlotProxy():QObject(){}

public slots:
  // completeChanged()
  void slot_proxy_func__ZN11QWizardPage15completeChangedEv();
public:
  void (*slot_func__ZN11QWizardPage15completeChangedEv)() = NULL;
};

extern "C" {
  QWizardPage_SlotProxy* QWizardPage_SlotProxy_new()
  {
    return new QWizardPage_SlotProxy();
  }
};

void QWizardPage_SlotProxy::slot_proxy_func__ZN11QWizardPage15completeChangedEv() {
  if (this->slot_func__ZN11QWizardPage15completeChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN11QWizardPage15completeChangedEv();
  }
}
extern "C"
void* QWizardPage_SlotProxy_connect__ZN11QWizardPage15completeChangedEv(QObject* sender, void* fptr){
  auto that = new QWizardPage_SlotProxy();
  that->slot_func__ZN11QWizardPage15completeChangedEv = (decltype(that->slot_func__ZN11QWizardPage15completeChangedEv))fptr;
  QObject::connect((QWizardPage*)sender, SIGNAL(completeChanged()), that, SLOT(slot_proxy_func__ZN11QWizardPage15completeChangedEv()));
  return that;
}
extern "C"
void QWizardPage_SlotProxy_disconnect__ZN11QWizardPage15completeChangedEv(QWizardPage_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QWizard_SlotProxy here
class QWizard_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QWizard_SlotProxy():QObject(){}

public slots:
  // currentIdChanged(int)
  void slot_proxy_func__ZN7QWizard16currentIdChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWizard16currentIdChangedEi)(int arg0) = NULL;
public slots:
  // helpRequested()
  void slot_proxy_func__ZN7QWizard13helpRequestedEv();
public:
  void (*slot_func__ZN7QWizard13helpRequestedEv)() = NULL;
public slots:
  // customButtonClicked(int)
  void slot_proxy_func__ZN7QWizard19customButtonClickedEi(int arg0);
public:
  void (*slot_func__ZN7QWizard19customButtonClickedEi)(int arg0) = NULL;
public slots:
  // pageAdded(int)
  void slot_proxy_func__ZN7QWizard9pageAddedEi(int arg0);
public:
  void (*slot_func__ZN7QWizard9pageAddedEi)(int arg0) = NULL;
public slots:
  // pageRemoved(int)
  void slot_proxy_func__ZN7QWizard11pageRemovedEi(int arg0);
public:
  void (*slot_func__ZN7QWizard11pageRemovedEi)(int arg0) = NULL;
};
#include "src/widgets/qwizard.moc"

extern "C" {
  QWizard_SlotProxy* QWizard_SlotProxy_new()
  {
    return new QWizard_SlotProxy();
  }
};

void QWizard_SlotProxy::slot_proxy_func__ZN7QWizard16currentIdChangedEi(int arg0) {
  if (this->slot_func__ZN7QWizard16currentIdChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWizard16currentIdChangedEi(arg0);
  }
}
extern "C"
void* QWizard_SlotProxy_connect__ZN7QWizard16currentIdChangedEi(QObject* sender, void* fptr){
  auto that = new QWizard_SlotProxy();
  that->slot_func__ZN7QWizard16currentIdChangedEi = (decltype(that->slot_func__ZN7QWizard16currentIdChangedEi))fptr;
  QObject::connect((QWizard*)sender, SIGNAL(currentIdChanged(int)), that, SLOT(slot_proxy_func__ZN7QWizard16currentIdChangedEi(int arg0)));
  return that;
}
extern "C"
void QWizard_SlotProxy_disconnect__ZN7QWizard16currentIdChangedEi(QWizard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWizard_SlotProxy::slot_proxy_func__ZN7QWizard13helpRequestedEv() {
  if (this->slot_func__ZN7QWizard13helpRequestedEv != NULL) {
    // do smth...
    this->slot_func__ZN7QWizard13helpRequestedEv();
  }
}
extern "C"
void* QWizard_SlotProxy_connect__ZN7QWizard13helpRequestedEv(QObject* sender, void* fptr){
  auto that = new QWizard_SlotProxy();
  that->slot_func__ZN7QWizard13helpRequestedEv = (decltype(that->slot_func__ZN7QWizard13helpRequestedEv))fptr;
  QObject::connect((QWizard*)sender, SIGNAL(helpRequested()), that, SLOT(slot_proxy_func__ZN7QWizard13helpRequestedEv()));
  return that;
}
extern "C"
void QWizard_SlotProxy_disconnect__ZN7QWizard13helpRequestedEv(QWizard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWizard_SlotProxy::slot_proxy_func__ZN7QWizard19customButtonClickedEi(int arg0) {
  if (this->slot_func__ZN7QWizard19customButtonClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWizard19customButtonClickedEi(arg0);
  }
}
extern "C"
void* QWizard_SlotProxy_connect__ZN7QWizard19customButtonClickedEi(QObject* sender, void* fptr){
  auto that = new QWizard_SlotProxy();
  that->slot_func__ZN7QWizard19customButtonClickedEi = (decltype(that->slot_func__ZN7QWizard19customButtonClickedEi))fptr;
  QObject::connect((QWizard*)sender, SIGNAL(customButtonClicked(int)), that, SLOT(slot_proxy_func__ZN7QWizard19customButtonClickedEi(int arg0)));
  return that;
}
extern "C"
void QWizard_SlotProxy_disconnect__ZN7QWizard19customButtonClickedEi(QWizard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWizard_SlotProxy::slot_proxy_func__ZN7QWizard9pageAddedEi(int arg0) {
  if (this->slot_func__ZN7QWizard9pageAddedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWizard9pageAddedEi(arg0);
  }
}
extern "C"
void* QWizard_SlotProxy_connect__ZN7QWizard9pageAddedEi(QObject* sender, void* fptr){
  auto that = new QWizard_SlotProxy();
  that->slot_func__ZN7QWizard9pageAddedEi = (decltype(that->slot_func__ZN7QWizard9pageAddedEi))fptr;
  QObject::connect((QWizard*)sender, SIGNAL(pageAdded(int)), that, SLOT(slot_proxy_func__ZN7QWizard9pageAddedEi(int arg0)));
  return that;
}
extern "C"
void QWizard_SlotProxy_disconnect__ZN7QWizard9pageAddedEi(QWizard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWizard_SlotProxy::slot_proxy_func__ZN7QWizard11pageRemovedEi(int arg0) {
  if (this->slot_func__ZN7QWizard11pageRemovedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWizard11pageRemovedEi(arg0);
  }
}
extern "C"
void* QWizard_SlotProxy_connect__ZN7QWizard11pageRemovedEi(QObject* sender, void* fptr){
  auto that = new QWizard_SlotProxy();
  that->slot_func__ZN7QWizard11pageRemovedEi = (decltype(that->slot_func__ZN7QWizard11pageRemovedEi))fptr;
  QObject::connect((QWizard*)sender, SIGNAL(pageRemoved(int)), that, SLOT(slot_proxy_func__ZN7QWizard11pageRemovedEi(int arg0)));
  return that;
}
extern "C"
void QWizard_SlotProxy_disconnect__ZN7QWizard11pageRemovedEi(QWizard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

