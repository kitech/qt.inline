// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qdialogbuttonbox.h
// dst-file: /src/widgets/qdialogbuttonbox.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qdialogbuttonbox.h>

extern "C" {

int QDialogButtonBox_Class_Size()
{
  return sizeof(QDialogButtonBox);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qdialogbuttonbox_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QDialogButtonBox_SlotProxy here
class QDialogButtonBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDialogButtonBox_SlotProxy():QObject(){}

public slots:
  // accepted()
  void slot_proxy_func__ZN16QDialogButtonBox8acceptedEv();
public:
  void (*slot_func__ZN16QDialogButtonBox8acceptedEv)(void* rsfptr) = NULL;
public slots:
  // helpRequested()
  void slot_proxy_func__ZN16QDialogButtonBox13helpRequestedEv();
public:
  void (*slot_func__ZN16QDialogButtonBox13helpRequestedEv)(void* rsfptr) = NULL;
public slots:
  // clicked(class QAbstractButton *)
  void slot_proxy_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton(QAbstractButton * arg0);
public:
  void (*slot_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton)(void* rsfptr, QAbstractButton * arg0) = NULL;
public slots:
  // rejected()
  void slot_proxy_func__ZN16QDialogButtonBox8rejectedEv();
public:
  void (*slot_func__ZN16QDialogButtonBox8rejectedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qdialogbuttonbox.moc"

extern "C" {
  QDialogButtonBox_SlotProxy* QDialogButtonBox_SlotProxy_new()
  {
    return new QDialogButtonBox_SlotProxy();
  }
};

void QDialogButtonBox_SlotProxy::slot_proxy_func__ZN16QDialogButtonBox8acceptedEv() {
  if (this->slot_func__ZN16QDialogButtonBox8acceptedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QDialogButtonBox8acceptedEv(this->rsfptr);
  }
}
extern "C"
void* QDialogButtonBox_SlotProxy_connect__ZN16QDialogButtonBox8acceptedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDialogButtonBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QDialogButtonBox8acceptedEv = (decltype(that->slot_func__ZN16QDialogButtonBox8acceptedEv))ffifptr;
  QObject::connect((QDialogButtonBox*)sender, SIGNAL(accepted()), that, SLOT(slot_proxy_func__ZN16QDialogButtonBox8acceptedEv()));
  return that;
}
extern "C"
void QDialogButtonBox_SlotProxy_disconnect__ZN16QDialogButtonBox8acceptedEv(QDialogButtonBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDialogButtonBox_SlotProxy::slot_proxy_func__ZN16QDialogButtonBox13helpRequestedEv() {
  if (this->slot_func__ZN16QDialogButtonBox13helpRequestedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QDialogButtonBox13helpRequestedEv(this->rsfptr);
  }
}
extern "C"
void* QDialogButtonBox_SlotProxy_connect__ZN16QDialogButtonBox13helpRequestedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDialogButtonBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QDialogButtonBox13helpRequestedEv = (decltype(that->slot_func__ZN16QDialogButtonBox13helpRequestedEv))ffifptr;
  QObject::connect((QDialogButtonBox*)sender, SIGNAL(helpRequested()), that, SLOT(slot_proxy_func__ZN16QDialogButtonBox13helpRequestedEv()));
  return that;
}
extern "C"
void QDialogButtonBox_SlotProxy_disconnect__ZN16QDialogButtonBox13helpRequestedEv(QDialogButtonBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDialogButtonBox_SlotProxy::slot_proxy_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton(QAbstractButton * arg0) {
  if (this->slot_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton != NULL) {
    // do smth...
    this->slot_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton(this->rsfptr, arg0);
  }
}
extern "C"
void* QDialogButtonBox_SlotProxy_connect__ZN16QDialogButtonBox7clickedEP15QAbstractButton(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDialogButtonBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton = (decltype(that->slot_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton))ffifptr;
  QObject::connect((QDialogButtonBox*)sender, SIGNAL(clicked(class QAbstractButton *)), that, SLOT(slot_proxy_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton(QAbstractButton * arg0)));
  return that;
}
extern "C"
void QDialogButtonBox_SlotProxy_disconnect__ZN16QDialogButtonBox7clickedEP15QAbstractButton(QDialogButtonBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDialogButtonBox_SlotProxy::slot_proxy_func__ZN16QDialogButtonBox8rejectedEv() {
  if (this->slot_func__ZN16QDialogButtonBox8rejectedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QDialogButtonBox8rejectedEv(this->rsfptr);
  }
}
extern "C"
void* QDialogButtonBox_SlotProxy_connect__ZN16QDialogButtonBox8rejectedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDialogButtonBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QDialogButtonBox8rejectedEv = (decltype(that->slot_func__ZN16QDialogButtonBox8rejectedEv))ffifptr;
  QObject::connect((QDialogButtonBox*)sender, SIGNAL(rejected()), that, SLOT(slot_proxy_func__ZN16QDialogButtonBox8rejectedEv()));
  return that;
}
extern "C"
void QDialogButtonBox_SlotProxy_disconnect__ZN16QDialogButtonBox8rejectedEv(QDialogButtonBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

