// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qdialog.h
// dst-file: /src/widgets/qdialog.cxx
//

// header block begin =>
#include <qdialog.h>

extern "C" {

int QDialog_Class_Size()
{
  return sizeof(QDialog);
}

// ~QDialog()
void dedtor_ZN7QDialogD0Ev(QDialog* that)
{
  QDialog* rthis = (QDialog*)that;
  delete rthis;
}

// QDialog(class QWidget *, Qt::WindowFlags)
QDialog* dector_ZN7QDialogC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags f)
{
  // static_assert(sizeof(QDialog) == 32, "tyszerr");
  QDialog* rthis = new QDialog(parent, f);
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
// QDialog_SlotProxy here
class QDialog_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QDialog_SlotProxy():QObject(){}

public slots:
  // finished(int)
  void slot_proxy_func__ZN7QDialog8finishedEi(int arg0);
public:
  void (*slot_func__ZN7QDialog8finishedEi)(int arg0) = NULL;
public slots:
  // accepted()
  void slot_proxy_func__ZN7QDialog8acceptedEv();
public:
  void (*slot_func__ZN7QDialog8acceptedEv)() = NULL;
public slots:
  // rejected()
  void slot_proxy_func__ZN7QDialog8rejectedEv();
public:
  void (*slot_func__ZN7QDialog8rejectedEv)() = NULL;
};
#include "src/widgets/qdialog.moc"

extern "C" {
  QDialog_SlotProxy* QDialog_SlotProxy_new()
  {
    return new QDialog_SlotProxy();
  }
};

void QDialog_SlotProxy::slot_proxy_func__ZN7QDialog8finishedEi(int arg0) {
  if (this->slot_func__ZN7QDialog8finishedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QDialog8finishedEi(arg0);
  }
}
extern "C"
void* QDialog_SlotProxy_connect__ZN7QDialog8finishedEi(QObject* sender, void* fptr){
  auto that = new QDialog_SlotProxy();
  that->slot_func__ZN7QDialog8finishedEi = (decltype(that->slot_func__ZN7QDialog8finishedEi))fptr;
  QObject::connect((QDialog*)sender, SIGNAL(finished(int)), that, SLOT(slot_proxy_func__ZN7QDialog8finishedEi(int arg0)));
  return that;
}
extern "C"
void QDialog_SlotProxy_disconnect__ZN7QDialog8finishedEi(QDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDialog_SlotProxy::slot_proxy_func__ZN7QDialog8acceptedEv() {
  if (this->slot_func__ZN7QDialog8acceptedEv != NULL) {
    // do smth...
    this->slot_func__ZN7QDialog8acceptedEv();
  }
}
extern "C"
void* QDialog_SlotProxy_connect__ZN7QDialog8acceptedEv(QObject* sender, void* fptr){
  auto that = new QDialog_SlotProxy();
  that->slot_func__ZN7QDialog8acceptedEv = (decltype(that->slot_func__ZN7QDialog8acceptedEv))fptr;
  QObject::connect((QDialog*)sender, SIGNAL(accepted()), that, SLOT(slot_proxy_func__ZN7QDialog8acceptedEv()));
  return that;
}
extern "C"
void QDialog_SlotProxy_disconnect__ZN7QDialog8acceptedEv(QDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDialog_SlotProxy::slot_proxy_func__ZN7QDialog8rejectedEv() {
  if (this->slot_func__ZN7QDialog8rejectedEv != NULL) {
    // do smth...
    this->slot_func__ZN7QDialog8rejectedEv();
  }
}
extern "C"
void* QDialog_SlotProxy_connect__ZN7QDialog8rejectedEv(QObject* sender, void* fptr){
  auto that = new QDialog_SlotProxy();
  that->slot_func__ZN7QDialog8rejectedEv = (decltype(that->slot_func__ZN7QDialog8rejectedEv))fptr;
  QObject::connect((QDialog*)sender, SIGNAL(rejected()), that, SLOT(slot_proxy_func__ZN7QDialog8rejectedEv()));
  return that;
}
extern "C"
void QDialog_SlotProxy_disconnect__ZN7QDialog8rejectedEv(QDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

