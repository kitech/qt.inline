// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
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
  // rejected()
  void slot_proxy_func__ZN7QDialog8rejectedEv();
public:
  void (*slot_func__ZN7QDialog8rejectedEv)(void* rsfptr) = NULL;
public slots:
  // finished(int)
  void slot_proxy_func__ZN7QDialog8finishedEi(int arg0);
public:
  void (*slot_func__ZN7QDialog8finishedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // accepted()
  void slot_proxy_func__ZN7QDialog8acceptedEv();
public:
  void (*slot_func__ZN7QDialog8acceptedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qdialog.moc"

extern "C" {
  QDialog_SlotProxy* QDialog_SlotProxy_new()
  {
    return new QDialog_SlotProxy();
  }
};

void QDialog_SlotProxy::slot_proxy_func__ZN7QDialog8rejectedEv() {
  if (this->slot_func__ZN7QDialog8rejectedEv != NULL) {
    // do smth...
    this->slot_func__ZN7QDialog8rejectedEv(this->rsfptr);
  }
}
extern "C"
void* QDialog_SlotProxy_connect__ZN7QDialog8rejectedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QDialog8rejectedEv = (decltype(that->slot_func__ZN7QDialog8rejectedEv))ffifptr;
  QObject::connect((QDialog*)sender, SIGNAL(rejected()), that, SLOT(slot_proxy_func__ZN7QDialog8rejectedEv()));
  return that;
}
extern "C"
void QDialog_SlotProxy_disconnect__ZN7QDialog8rejectedEv(QDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDialog_SlotProxy::slot_proxy_func__ZN7QDialog8finishedEi(int arg0) {
  if (this->slot_func__ZN7QDialog8finishedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QDialog8finishedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QDialog_SlotProxy_connect__ZN7QDialog8finishedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QDialog8finishedEi = (decltype(that->slot_func__ZN7QDialog8finishedEi))ffifptr;
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
    this->slot_func__ZN7QDialog8acceptedEv(this->rsfptr);
  }
}
extern "C"
void* QDialog_SlotProxy_connect__ZN7QDialog8acceptedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QDialog8acceptedEv = (decltype(that->slot_func__ZN7QDialog8acceptedEv))ffifptr;
  QObject::connect((QDialog*)sender, SIGNAL(accepted()), that, SLOT(slot_proxy_func__ZN7QDialog8acceptedEv()));
  return that;
}
extern "C"
void QDialog_SlotProxy_disconnect__ZN7QDialog8acceptedEv(QDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

