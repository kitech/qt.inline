// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qwizard.h
// dst-file: /src/widgets/qwizard.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qwizard.h>

extern "C" {

int QWizardPage_Class_Size()
{
  return sizeof(QWizardPage);
}

int QWizard_Class_Size()
{
  return sizeof(QWizard);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qwizard_inline_symbols() {
} // <= main block end

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
  void (*slot_func__ZN11QWizardPage15completeChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
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
    this->slot_func__ZN11QWizardPage15completeChangedEv(this->rsfptr);
  }
}
extern "C"
void* QWizardPage_SlotProxy_connect__ZN11QWizardPage15completeChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWizardPage_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QWizardPage15completeChangedEv = (decltype(that->slot_func__ZN11QWizardPage15completeChangedEv))ffifptr;
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
  // helpRequested()
  void slot_proxy_func__ZN7QWizard13helpRequestedEv();
public:
  void (*slot_func__ZN7QWizard13helpRequestedEv)(void* rsfptr) = NULL;
public slots:
  // currentIdChanged(int)
  void slot_proxy_func__ZN7QWizard16currentIdChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWizard16currentIdChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // pageRemoved(int)
  void slot_proxy_func__ZN7QWizard11pageRemovedEi(int arg0);
public:
  void (*slot_func__ZN7QWizard11pageRemovedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // customButtonClicked(int)
  void slot_proxy_func__ZN7QWizard19customButtonClickedEi(int arg0);
public:
  void (*slot_func__ZN7QWizard19customButtonClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // pageAdded(int)
  void slot_proxy_func__ZN7QWizard9pageAddedEi(int arg0);
public:
  void (*slot_func__ZN7QWizard9pageAddedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qwizard.moc"

extern "C" {
  QWizard_SlotProxy* QWizard_SlotProxy_new()
  {
    return new QWizard_SlotProxy();
  }
};

void QWizard_SlotProxy::slot_proxy_func__ZN7QWizard13helpRequestedEv() {
  if (this->slot_func__ZN7QWizard13helpRequestedEv != NULL) {
    // do smth...
    this->slot_func__ZN7QWizard13helpRequestedEv(this->rsfptr);
  }
}
extern "C"
void* QWizard_SlotProxy_connect__ZN7QWizard13helpRequestedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWizard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWizard13helpRequestedEv = (decltype(that->slot_func__ZN7QWizard13helpRequestedEv))ffifptr;
  QObject::connect((QWizard*)sender, SIGNAL(helpRequested()), that, SLOT(slot_proxy_func__ZN7QWizard13helpRequestedEv()));
  return that;
}
extern "C"
void QWizard_SlotProxy_disconnect__ZN7QWizard13helpRequestedEv(QWizard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWizard_SlotProxy::slot_proxy_func__ZN7QWizard16currentIdChangedEi(int arg0) {
  if (this->slot_func__ZN7QWizard16currentIdChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWizard16currentIdChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWizard_SlotProxy_connect__ZN7QWizard16currentIdChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWizard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWizard16currentIdChangedEi = (decltype(that->slot_func__ZN7QWizard16currentIdChangedEi))ffifptr;
  QObject::connect((QWizard*)sender, SIGNAL(currentIdChanged(int)), that, SLOT(slot_proxy_func__ZN7QWizard16currentIdChangedEi(int arg0)));
  return that;
}
extern "C"
void QWizard_SlotProxy_disconnect__ZN7QWizard16currentIdChangedEi(QWizard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWizard_SlotProxy::slot_proxy_func__ZN7QWizard11pageRemovedEi(int arg0) {
  if (this->slot_func__ZN7QWizard11pageRemovedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWizard11pageRemovedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWizard_SlotProxy_connect__ZN7QWizard11pageRemovedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWizard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWizard11pageRemovedEi = (decltype(that->slot_func__ZN7QWizard11pageRemovedEi))ffifptr;
  QObject::connect((QWizard*)sender, SIGNAL(pageRemoved(int)), that, SLOT(slot_proxy_func__ZN7QWizard11pageRemovedEi(int arg0)));
  return that;
}
extern "C"
void QWizard_SlotProxy_disconnect__ZN7QWizard11pageRemovedEi(QWizard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWizard_SlotProxy::slot_proxy_func__ZN7QWizard19customButtonClickedEi(int arg0) {
  if (this->slot_func__ZN7QWizard19customButtonClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWizard19customButtonClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWizard_SlotProxy_connect__ZN7QWizard19customButtonClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWizard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWizard19customButtonClickedEi = (decltype(that->slot_func__ZN7QWizard19customButtonClickedEi))ffifptr;
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
    this->slot_func__ZN7QWizard9pageAddedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWizard_SlotProxy_connect__ZN7QWizard9pageAddedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWizard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWizard9pageAddedEi = (decltype(that->slot_func__ZN7QWizard9pageAddedEi))ffifptr;
  QObject::connect((QWizard*)sender, SIGNAL(pageAdded(int)), that, SLOT(slot_proxy_func__ZN7QWizard9pageAddedEi(int arg0)));
  return that;
}
extern "C"
void QWizard_SlotProxy_disconnect__ZN7QWizard9pageAddedEi(QWizard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

