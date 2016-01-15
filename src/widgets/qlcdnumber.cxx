// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qlcdnumber.h
// dst-file: /src/widgets/qlcdnumber.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qlcdnumber.h>

extern "C" {

int QLCDNumber_Class_Size()
{
  return sizeof(QLCDNumber);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qlcdnumber_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QLCDNumber_SlotProxy here
class QLCDNumber_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QLCDNumber_SlotProxy():QObject(){}

public slots:
  // overflow()
  void slot_proxy_func__ZN10QLCDNumber8overflowEv();
public:
  void (*slot_func__ZN10QLCDNumber8overflowEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qlcdnumber.moc"

extern "C" {
  QLCDNumber_SlotProxy* QLCDNumber_SlotProxy_new()
  {
    return new QLCDNumber_SlotProxy();
  }
};

void QLCDNumber_SlotProxy::slot_proxy_func__ZN10QLCDNumber8overflowEv() {
  if (this->slot_func__ZN10QLCDNumber8overflowEv != NULL) {
    // do smth...
    this->slot_func__ZN10QLCDNumber8overflowEv(this->rsfptr);
  }
}
extern "C"
void* QLCDNumber_SlotProxy_connect__ZN10QLCDNumber8overflowEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLCDNumber_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QLCDNumber8overflowEv = (decltype(that->slot_func__ZN10QLCDNumber8overflowEv))ffifptr;
  QObject::connect((QLCDNumber*)sender, SIGNAL(overflow()), that, SLOT(slot_proxy_func__ZN10QLCDNumber8overflowEv()));
  return that;
}
extern "C"
void QLCDNumber_SlotProxy_disconnect__ZN10QLCDNumber8overflowEv(QLCDNumber_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

