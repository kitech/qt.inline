// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qabstractstate.h
// dst-file: /src/core/qabstractstate.cxx
//

// header block begin =>
#include <qabstractstate.h>

extern "C" {

int QAbstractState_Class_Size()
{
  return sizeof(QAbstractState);
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
// QAbstractState_SlotProxy here
class QAbstractState_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QAbstractState_SlotProxy():QObject(){}

public slots:
  // activeChanged(_Bool)
  void slot_proxy_func__ZN14QAbstractState13activeChangedEb(bool arg0);
public:
  void (*slot_func__ZN14QAbstractState13activeChangedEb)(bool arg0) = NULL;
};
#include "src/core/qabstractstate.moc"

extern "C" {
  QAbstractState_SlotProxy* QAbstractState_SlotProxy_new()
  {
    return new QAbstractState_SlotProxy();
  }
};

void QAbstractState_SlotProxy::slot_proxy_func__ZN14QAbstractState13activeChangedEb(bool arg0) {
  if (this->slot_func__ZN14QAbstractState13activeChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN14QAbstractState13activeChangedEb(arg0);
  }
}
extern "C"
void* QAbstractState_SlotProxy_connect__ZN14QAbstractState13activeChangedEb(QObject* sender, void* fptr){
  auto that = new QAbstractState_SlotProxy();
  that->slot_func__ZN14QAbstractState13activeChangedEb = (decltype(that->slot_func__ZN14QAbstractState13activeChangedEb))fptr;
  QObject::connect((QAbstractState*)sender, SIGNAL(activeChanged(_Bool)), that, SLOT(slot_proxy_func__ZN14QAbstractState13activeChangedEb(bool arg0)));
  return that;
}
extern "C"
void QAbstractState_SlotProxy_disconnect__ZN14QAbstractState13activeChangedEb(QAbstractState_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

