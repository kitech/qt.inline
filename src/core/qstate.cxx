//  header block begin
// /usr/include/qt/QtCore/qstate.h
#include <qstate.h>
#include <QtCore>
#include "callback_inherit.h"

// QState is pure virtual: false
// QState has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN6QState7onEntryEP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN6QState7onEntryEP6QEvent(void*cbfn)
// { callback_ZN6QState7onEntryEP6QEvent_fnptr = cbfn; }
// void* callback_ZN6QState6onExitEP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN6QState6onExitEP6QEvent(void*cbfn)
// { callback_ZN6QState6onExitEP6QEvent_fnptr = cbfn; }
// void* callback_ZN6QState5eventEP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN6QState5eventEP6QEvent(void*cbfn)
// { callback_ZN6QState5eventEP6QEvent_fnptr = cbfn; }

class MyQState : public QState {
public:
  virtual ~MyQState() {}
// void QState(class QState *)
MyQState(QState * parent) : QState(parent) {}
// void QState(enum QState::ChildMode, class QState *)
MyQState(QState::ChildMode childMode, QState * parent) : QState(childMode, parent) {}
// void onEntry(class QEvent *)
  virtual void onEntry(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onEntry", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN6QState7onEntryEP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , event);
    // }
    QState::onEntry(event);
  }
  }
// void onExit(class QEvent *)
  virtual void onExit(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onExit", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN6QState6onExitEP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , event);
    // }
    QState::onExit(event);
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
    // auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN6QState5eventEP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    return QState::event(e);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK6QState10metaObjectEv(void *this_) {
  return (void*)((QState*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:74
// [-2] void QState(class QState *)
extern "C"
void* C_ZN6QStateC2EPS_(QState * parent) {
  auto _nilp = (MyQState*)(0);
  return  new MyQState(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:75
// [-2] void QState(enum QState::ChildMode, class QState *)
extern "C"
void* C_ZN6QStateC2ENS_9ChildModeEPS_(QState::ChildMode childMode, QState * parent) {
  auto _nilp = (MyQState*)(0);
  return  new MyQState(childMode, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:76
// [-2] void ~QState()
extern "C"
void C_ZN6QStateD2Ev(void *this_) {
  delete (QState*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:78
// [8] QAbstractState * errorState()
extern "C"
void* C_ZNK6QState10errorStateEv(void *this_) {
  return (void*)((QState*)this_)->errorState();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:79
// [-2] void setErrorState(class QAbstractState *)
extern "C"
void C_ZN6QState13setErrorStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QState*)this_)->setErrorState(state);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:81
// [-2] void addTransition(class QAbstractTransition *)
extern "C"
void C_ZN6QState13addTransitionEP19QAbstractTransition(void *this_, QAbstractTransition * transition) {
  ((QState*)this_)->addTransition(transition);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:82
// [8] QSignalTransition * addTransition(const class QObject *, const char *, class QAbstractState *)
extern "C"
void* C_ZN6QState13addTransitionEPK7QObjectPKcP14QAbstractState(void *this_, const QObject * sender, const char * signal, QAbstractState * target) {
  return (void*)((QState*)this_)->addTransition(sender, signal, target);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:96
// [8] QAbstractTransition * addTransition(class QAbstractState *)
extern "C"
void* C_ZN6QState13addTransitionEP14QAbstractState(void *this_, QAbstractState * target) {
  return (void*)((QState*)this_)->addTransition(target);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:97
// [-2] void removeTransition(class QAbstractTransition *)
extern "C"
void C_ZN6QState16removeTransitionEP19QAbstractTransition(void *this_, QAbstractTransition * transition) {
  ((QState*)this_)->removeTransition(transition);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:100
// [8] QAbstractState * initialState()
extern "C"
void* C_ZNK6QState12initialStateEv(void *this_) {
  return (void*)((QState*)this_)->initialState();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:101
// [-2] void setInitialState(class QAbstractState *)
extern "C"
void C_ZN6QState15setInitialStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QState*)this_)->setInitialState(state);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:103
// [4] QState::ChildMode childMode()
extern "C"
QState::ChildMode C_ZNK6QState9childModeEv(void *this_) {
  return (QState::ChildMode)((QState*)this_)->childMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:104
// [-2] void setChildMode(enum QState::ChildMode)
extern "C"
void C_ZN6QState12setChildModeENS_9ChildModeE(void *this_, QState::ChildMode mode) {
  ((QState*)this_)->setChildMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:107
// [-2] void assignProperty(class QObject *, const char *, const class QVariant &)
extern "C"
void C_ZN6QState14assignPropertyEP7QObjectPKcRK8QVariant(void *this_, QObject * object, const char * name, QVariant* value) {
  ((QState*)this_)->assignProperty(object, name, *value);
}
//  main block end
