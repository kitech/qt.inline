//  header block begin
// /usr/include/qt/QtCore/qabstractstate.h
#include <qabstractstate.h>
#include <QtCore>

// QAbstractState is pure virtual: true
// QAbstractState has virtual projected: true
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:71
// [-2] void QAbstractState(class QState *)
extern "C"
void* callback_ZN14QAbstractStateC1EP6QState = 0;
extern "C" void set_callback_ZN14QAbstractStateC1EP6QState(void*cbfn)
{ callback_ZN14QAbstractStateC1EP6QState = cbfn; }
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:73
// [-2] void onEntry(class QEvent *)
extern "C"
void* callback_ZN14QAbstractState7onEntryEP6QEvent = 0;
extern "C" void set_callback_ZN14QAbstractState7onEntryEP6QEvent(void*cbfn)
{ callback_ZN14QAbstractState7onEntryEP6QEvent = cbfn; }
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:74
// [-2] void onExit(class QEvent *)
extern "C"
void* callback_ZN14QAbstractState6onExitEP6QEvent = 0;
extern "C" void set_callback_ZN14QAbstractState6onExitEP6QEvent(void*cbfn)
{ callback_ZN14QAbstractState6onExitEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:76
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN14QAbstractState5eventEP6QEvent = 0;
extern "C" void set_callback_ZN14QAbstractState5eventEP6QEvent(void*cbfn)
{ callback_ZN14QAbstractState5eventEP6QEvent = cbfn; }

class MyQAbstractState : public QAbstractState {
public:
  virtual ~MyQAbstractState() {}
// void QAbstractState(class QState *)
MyQAbstractState(QState * parent) : QAbstractState(parent) {}
// void onEntry(class QEvent *)
  virtual void onEntry(QEvent * event) {
    if (callback_ZN14QAbstractState7onEntryEP6QEvent != 0) {
      // callback_ZN14QAbstractState7onEntryEP6QEvent(event);
    }
    QAbstractState::onEntry(event);
  }
// void onExit(class QEvent *)
  virtual void onExit(QEvent * event) {
    if (callback_ZN14QAbstractState6onExitEP6QEvent != 0) {
      // callback_ZN14QAbstractState6onExitEP6QEvent(event);
    }
    QAbstractState::onExit(event);
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    if (callback_ZN14QAbstractState5eventEP6QEvent != 0) {
      // callback_ZN14QAbstractState5eventEP6QEvent(e);
    }
    return QAbstractState::event(e);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK14QAbstractState10metaObjectEv(void *this_) {
  return (void*)((QAbstractState*)this_)->metaObject();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:58
// [-2] void ~QAbstractState()
extern "C"
void C_ZN14QAbstractStateD2Ev(void *this_) {
  delete (QAbstractState*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:60
// [8] QState * parentState()
extern "C"
void* C_ZNK14QAbstractState11parentStateEv(void *this_) {
  return (void*)((QAbstractState*)this_)->parentState();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:61
// [8] QStateMachine * machine()
extern "C"
void* C_ZNK14QAbstractState7machineEv(void *this_) {
  return (void*)((QAbstractState*)this_)->machine();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:63
// [1] bool active()
extern "C"
bool C_ZNK14QAbstractState6activeEv(void *this_) {
  return (bool)((QAbstractState*)this_)->active();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractstate.h:68
// [-2] void activeChanged(_Bool)
extern "C"
void C_ZN14QAbstractState13activeChangedEb(void *this_, bool active) {
  ((QAbstractState*)this_)->activeChanged(active);
}
//  main block end
