// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qabstractspinbox.h
// dst-file: /src/widgets/qabstractspinbox.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qabstractspinbox.h>

extern "C" {

int QAbstractSpinBox_Class_Size()
{
  return sizeof(QAbstractSpinBox);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qabstractspinbox_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QAbstractSpinBox_SlotProxy here
class QAbstractSpinBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractSpinBox_SlotProxy():QObject(){}

public slots:
  // editingFinished()
  void slot_proxy_func__ZN16QAbstractSpinBox15editingFinishedEv();
public:
  void (*slot_func__ZN16QAbstractSpinBox15editingFinishedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qabstractspinbox.moc"

extern "C" {
  QAbstractSpinBox_SlotProxy* QAbstractSpinBox_SlotProxy_new()
  {
    return new QAbstractSpinBox_SlotProxy();
  }
};

void QAbstractSpinBox_SlotProxy::slot_proxy_func__ZN16QAbstractSpinBox15editingFinishedEv() {
  if (this->slot_func__ZN16QAbstractSpinBox15editingFinishedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QAbstractSpinBox15editingFinishedEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractSpinBox_SlotProxy_connect__ZN16QAbstractSpinBox15editingFinishedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSpinBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QAbstractSpinBox15editingFinishedEv = (decltype(that->slot_func__ZN16QAbstractSpinBox15editingFinishedEv))ffifptr;
  QObject::connect((QAbstractSpinBox*)sender, SIGNAL(editingFinished()), that, SLOT(slot_proxy_func__ZN16QAbstractSpinBox15editingFinishedEv()));
  return that;
}
extern "C"
void QAbstractSpinBox_SlotProxy_disconnect__ZN16QAbstractSpinBox15editingFinishedEv(QAbstractSpinBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

