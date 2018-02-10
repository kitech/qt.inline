//  header block begin
// /usr/include/qt/QtCore/qabstractstate.h
#include <qabstractstate.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractState is pure virtual: true
// QAbstractState has virtual projected: true
//  header block end

//  main block begin

class MyQAbstractState : public QAbstractState {
public:
  virtual ~MyQAbstractState() {}
// void QAbstractState(class QState *)
MyQAbstractState(QState * parent) : QAbstractState(parent) {}
// void onEntry(class QEvent *)
  virtual void onEntry(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onEntry", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractState::onEntry(event);
  }
  }

// void onExit(class QEvent *)
  virtual void onExit(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onExit", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractState::onExit(event);
  }
  }

// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractState::event(e);
  }
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
