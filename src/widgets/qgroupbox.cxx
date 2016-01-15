// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qgroupbox.h
// dst-file: /src/widgets/qgroupbox.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qgroupbox.h>

extern "C" {

int QGroupBox_Class_Size()
{
  return sizeof(QGroupBox);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qgroupbox_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QGroupBox_SlotProxy here
class QGroupBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGroupBox_SlotProxy():QObject(){}

public slots:
  // clicked(_Bool)
  void slot_proxy_func__ZN9QGroupBox7clickedEb(bool arg0);
public:
  void (*slot_func__ZN9QGroupBox7clickedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // toggled(_Bool)
  void slot_proxy_func__ZN9QGroupBox7toggledEb(bool arg0);
public:
  void (*slot_func__ZN9QGroupBox7toggledEb)(void* rsfptr, bool arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qgroupbox.moc"

extern "C" {
  QGroupBox_SlotProxy* QGroupBox_SlotProxy_new()
  {
    return new QGroupBox_SlotProxy();
  }
};

void QGroupBox_SlotProxy::slot_proxy_func__ZN9QGroupBox7clickedEb(bool arg0) {
  if (this->slot_func__ZN9QGroupBox7clickedEb != NULL) {
    // do smth...
    this->slot_func__ZN9QGroupBox7clickedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QGroupBox_SlotProxy_connect__ZN9QGroupBox7clickedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGroupBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QGroupBox7clickedEb = (decltype(that->slot_func__ZN9QGroupBox7clickedEb))ffifptr;
  QObject::connect((QGroupBox*)sender, SIGNAL(clicked(_Bool)), that, SLOT(slot_proxy_func__ZN9QGroupBox7clickedEb(bool arg0)));
  return that;
}
extern "C"
void QGroupBox_SlotProxy_disconnect__ZN9QGroupBox7clickedEb(QGroupBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGroupBox_SlotProxy::slot_proxy_func__ZN9QGroupBox7toggledEb(bool arg0) {
  if (this->slot_func__ZN9QGroupBox7toggledEb != NULL) {
    // do smth...
    this->slot_func__ZN9QGroupBox7toggledEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QGroupBox_SlotProxy_connect__ZN9QGroupBox7toggledEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGroupBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QGroupBox7toggledEb = (decltype(that->slot_func__ZN9QGroupBox7toggledEb))ffifptr;
  QObject::connect((QGroupBox*)sender, SIGNAL(toggled(_Bool)), that, SLOT(slot_proxy_func__ZN9QGroupBox7toggledEb(bool arg0)));
  return that;
}
extern "C"
void QGroupBox_SlotProxy_disconnect__ZN9QGroupBox7toggledEb(QGroupBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

