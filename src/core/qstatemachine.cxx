// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qstatemachine.h
// dst-file: /src/core/qstatemachine.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstatemachine.h>

extern "C" {

int QStateMachine_Class_Size()
{
  return sizeof(QStateMachine);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qstatemachine_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QStateMachine_SlotProxy here
class QStateMachine_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStateMachine_SlotProxy():QObject(){}

public slots:
  // runningChanged(_Bool)
  void slot_proxy_func__ZN13QStateMachine14runningChangedEb(bool arg0);
public:
  void (*slot_func__ZN13QStateMachine14runningChangedEb)(void* rsfptr, bool arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qstatemachine.moc"

extern "C" {
  QStateMachine_SlotProxy* QStateMachine_SlotProxy_new()
  {
    return new QStateMachine_SlotProxy();
  }
};

void QStateMachine_SlotProxy::slot_proxy_func__ZN13QStateMachine14runningChangedEb(bool arg0) {
  if (this->slot_func__ZN13QStateMachine14runningChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN13QStateMachine14runningChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QStateMachine_SlotProxy_connect__ZN13QStateMachine14runningChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStateMachine_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QStateMachine14runningChangedEb = (decltype(that->slot_func__ZN13QStateMachine14runningChangedEb))ffifptr;
  QObject::connect((QStateMachine*)sender, SIGNAL(runningChanged(_Bool)), that, SLOT(slot_proxy_func__ZN13QStateMachine14runningChangedEb(bool arg0)));
  return that;
}
extern "C"
void QStateMachine_SlotProxy_disconnect__ZN13QStateMachine14runningChangedEb(QStateMachine_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

