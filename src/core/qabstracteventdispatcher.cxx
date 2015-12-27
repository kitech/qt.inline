// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qabstracteventdispatcher.h
// dst-file: /src/core/qabstracteventdispatcher.cxx
//

// header block begin =>
#include <qabstracteventdispatcher.h>

extern "C" {

int QAbstractEventDispatcher_Class_Size()
{
  return sizeof(QAbstractEventDispatcher);
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
// QAbstractEventDispatcher_SlotProxy here
class QAbstractEventDispatcher_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QAbstractEventDispatcher_SlotProxy():QObject(){}

public slots:
  // aboutToBlock()
  void slot_proxy_func__ZN24QAbstractEventDispatcher12aboutToBlockEv();
public:
  void (*slot_func__ZN24QAbstractEventDispatcher12aboutToBlockEv)() = NULL;
public slots:
  // awake()
  void slot_proxy_func__ZN24QAbstractEventDispatcher5awakeEv();
public:
  void (*slot_func__ZN24QAbstractEventDispatcher5awakeEv)() = NULL;
};
#include "src/core/qabstracteventdispatcher.moc"

extern "C" {
  QAbstractEventDispatcher_SlotProxy* QAbstractEventDispatcher_SlotProxy_new()
  {
    return new QAbstractEventDispatcher_SlotProxy();
  }
};

void QAbstractEventDispatcher_SlotProxy::slot_proxy_func__ZN24QAbstractEventDispatcher12aboutToBlockEv() {
  if (this->slot_func__ZN24QAbstractEventDispatcher12aboutToBlockEv != NULL) {
    // do smth...
    this->slot_func__ZN24QAbstractEventDispatcher12aboutToBlockEv();
  }
}
extern "C"
void* QAbstractEventDispatcher_SlotProxy_connect__ZN24QAbstractEventDispatcher12aboutToBlockEv(QObject* sender, void* fptr){
  auto that = new QAbstractEventDispatcher_SlotProxy();
  that->slot_func__ZN24QAbstractEventDispatcher12aboutToBlockEv = (decltype(that->slot_func__ZN24QAbstractEventDispatcher12aboutToBlockEv))fptr;
  QObject::connect((QAbstractEventDispatcher*)sender, SIGNAL(aboutToBlock()), that, SLOT(slot_proxy_func__ZN24QAbstractEventDispatcher12aboutToBlockEv()));
  return that;
}
extern "C"
void QAbstractEventDispatcher_SlotProxy_disconnect__ZN24QAbstractEventDispatcher12aboutToBlockEv(QAbstractEventDispatcher_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractEventDispatcher_SlotProxy::slot_proxy_func__ZN24QAbstractEventDispatcher5awakeEv() {
  if (this->slot_func__ZN24QAbstractEventDispatcher5awakeEv != NULL) {
    // do smth...
    this->slot_func__ZN24QAbstractEventDispatcher5awakeEv();
  }
}
extern "C"
void* QAbstractEventDispatcher_SlotProxy_connect__ZN24QAbstractEventDispatcher5awakeEv(QObject* sender, void* fptr){
  auto that = new QAbstractEventDispatcher_SlotProxy();
  that->slot_func__ZN24QAbstractEventDispatcher5awakeEv = (decltype(that->slot_func__ZN24QAbstractEventDispatcher5awakeEv))fptr;
  QObject::connect((QAbstractEventDispatcher*)sender, SIGNAL(awake()), that, SLOT(slot_proxy_func__ZN24QAbstractEventDispatcher5awakeEv()));
  return that;
}
extern "C"
void QAbstractEventDispatcher_SlotProxy_disconnect__ZN24QAbstractEventDispatcher5awakeEv(QAbstractEventDispatcher_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

