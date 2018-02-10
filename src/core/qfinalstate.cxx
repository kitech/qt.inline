//  header block begin
// /usr/include/qt/QtCore/qfinalstate.h
#include <qfinalstate.h>
#include <QtCore>
#include "callback_inherit.h"

// QFinalState is pure virtual: false
// QFinalState has virtual projected: true
//  header block end

//  main block begin

class MyQFinalState : public QFinalState {
public:
  virtual ~MyQFinalState() {}
// void QFinalState(class QState *)
MyQFinalState(QState * parent) : QFinalState(parent) {}
// void onEntry(class QEvent *)
  virtual void onEntry(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onEntry", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QFinalState::onEntry(event);
  }
  }

// void onExit(class QEvent *)
  virtual void onExit(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onExit", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QFinalState::onExit(event);
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
    return QFinalState::event(e);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:52
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QFinalState10metaObjectEv(void *this_) {
  return (void*)((QFinalState*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:54
// [-2] void QFinalState(class QState *)
extern "C"
void* C_ZN11QFinalStateC2EP6QState(QState * parent) {
  auto _nilp = (MyQFinalState*)(0);
  return  new MyQFinalState(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfinalstate.h:55
// [-2] void ~QFinalState()
extern "C"
void C_ZN11QFinalStateD2Ev(void *this_) {
  delete (QFinalState*)(this_);
}
//  main block end
