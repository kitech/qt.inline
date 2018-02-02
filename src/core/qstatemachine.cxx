//  header block begin
// /usr/include/qt/QtCore/qstatemachine.h
#include <qstatemachine.h>
#include <QtCore>

// QStateMachine is pure virtual: false
// QStateMachine has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:159
// [-2] void onEntry(class QEvent *)
extern "C"
void* callback_ZN13QStateMachine7onEntryEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN13QStateMachine7onEntryEP6QEvent(void*cbfn)
{ callback_ZN13QStateMachine7onEntryEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:160
// [-2] void onExit(class QEvent *)
extern "C"
void* callback_ZN13QStateMachine6onExitEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN13QStateMachine6onExitEP6QEvent(void*cbfn)
{ callback_ZN13QStateMachine6onExitEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:162
// [-2] void beginSelectTransitions(class QEvent *)
extern "C"
void* callback_ZN13QStateMachine22beginSelectTransitionsEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN13QStateMachine22beginSelectTransitionsEP6QEvent(void*cbfn)
{ callback_ZN13QStateMachine22beginSelectTransitionsEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:163
// [-2] void endSelectTransitions(class QEvent *)
extern "C"
void* callback_ZN13QStateMachine20endSelectTransitionsEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN13QStateMachine20endSelectTransitionsEP6QEvent(void*cbfn)
{ callback_ZN13QStateMachine20endSelectTransitionsEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:165
// [-2] void beginMicrostep(class QEvent *)
extern "C"
void* callback_ZN13QStateMachine14beginMicrostepEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN13QStateMachine14beginMicrostepEP6QEvent(void*cbfn)
{ callback_ZN13QStateMachine14beginMicrostepEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:166
// [-2] void endMicrostep(class QEvent *)
extern "C"
void* callback_ZN13QStateMachine12endMicrostepEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN13QStateMachine12endMicrostepEP6QEvent(void*cbfn)
{ callback_ZN13QStateMachine12endMicrostepEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:168
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN13QStateMachine5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN13QStateMachine5eventEP6QEvent(void*cbfn)
{ callback_ZN13QStateMachine5eventEP6QEvent_fnptr = cbfn; }

class MyQStateMachine : public QStateMachine {
public:
  virtual ~MyQStateMachine() {}
// void QStateMachine(class QObject *)
MyQStateMachine(QObject * parent) : QStateMachine(parent) {}
// void QStateMachine(class QState::ChildMode, class QObject *)
MyQStateMachine(QState::ChildMode childMode, QObject * parent) : QStateMachine(childMode, parent) {}
// void onEntry(class QEvent *)
  virtual void onEntry(QEvent * event) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN13QStateMachine7onEntryEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    QStateMachine::onEntry(event);
  }
// void onExit(class QEvent *)
  virtual void onExit(QEvent * event) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN13QStateMachine6onExitEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    QStateMachine::onExit(event);
  }
// void beginSelectTransitions(class QEvent *)
  virtual void beginSelectTransitions(QEvent * event) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN13QStateMachine22beginSelectTransitionsEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    QStateMachine::beginSelectTransitions(event);
  }
// void endSelectTransitions(class QEvent *)
  virtual void endSelectTransitions(QEvent * event) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN13QStateMachine20endSelectTransitionsEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    QStateMachine::endSelectTransitions(event);
  }
// void beginMicrostep(class QEvent *)
  virtual void beginMicrostep(QEvent * event) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN13QStateMachine14beginMicrostepEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    QStateMachine::beginMicrostep(event);
  }
// void endMicrostep(class QEvent *)
  virtual void endMicrostep(QEvent * event) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN13QStateMachine12endMicrostepEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    QStateMachine::endMicrostep(event);
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN13QStateMachine5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , e);
    }
    return QStateMachine::event(e);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:59
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QStateMachine10metaObjectEv(void *this_) {
  return (void*)((QStateMachine*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:112
// [-2] void QStateMachine(class QObject *)
extern "C"
void* C_ZN13QStateMachineC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQStateMachine*)(0);
  return  new MyQStateMachine(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:113
// [-2] void QStateMachine(class QState::ChildMode, class QObject *)
extern "C"
void* C_ZN13QStateMachineC2EN6QState9ChildModeEP7QObject(QState::ChildMode childMode, QObject * parent) {
  auto _nilp = (MyQStateMachine*)(0);
  return  new MyQStateMachine(childMode, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:114
// [-2] void ~QStateMachine()
extern "C"
void C_ZN13QStateMachineD2Ev(void *this_) {
  delete (QStateMachine*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:116
// [-2] void addState(class QAbstractState *)
extern "C"
void C_ZN13QStateMachine8addStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QStateMachine*)this_)->addState(state);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:117
// [-2] void removeState(class QAbstractState *)
extern "C"
void C_ZN13QStateMachine11removeStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QStateMachine*)this_)->removeState(state);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:119
// [4] QStateMachine::Error error()
extern "C"
QStateMachine::Error C_ZNK13QStateMachine5errorEv(void *this_) {
  return (QStateMachine::Error)((QStateMachine*)this_)->error();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:120
// [8] QString errorString()
extern "C"
void* C_ZNK13QStateMachine11errorStringEv(void *this_) {
  auto rv = ((QStateMachine*)this_)->errorString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:121
// [-2] void clearError()
extern "C"
void C_ZN13QStateMachine10clearErrorEv(void *this_) {
  ((QStateMachine*)this_)->clearError();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:123
// [1] bool isRunning()
extern "C"
bool C_ZNK13QStateMachine9isRunningEv(void *this_) {
  return (bool)((QStateMachine*)this_)->isRunning();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:126
// [1] bool isAnimated()
extern "C"
bool C_ZNK13QStateMachine10isAnimatedEv(void *this_) {
  return (bool)((QStateMachine*)this_)->isAnimated();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:127
// [-2] void setAnimated(_Bool)
extern "C"
void C_ZN13QStateMachine11setAnimatedEb(void *this_, bool enabled) {
  ((QStateMachine*)this_)->setAnimated(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:129
// [-2] void addDefaultAnimation(class QAbstractAnimation *)
extern "C"
void C_ZN13QStateMachine19addDefaultAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QStateMachine*)this_)->addDefaultAnimation(animation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:131
// [-2] void removeDefaultAnimation(class QAbstractAnimation *)
extern "C"
void C_ZN13QStateMachine22removeDefaultAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QStateMachine*)this_)->removeDefaultAnimation(animation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:134
// [4] QState::RestorePolicy globalRestorePolicy()
extern "C"
QState::RestorePolicy C_ZNK13QStateMachine19globalRestorePolicyEv(void *this_) {
  return (QState::RestorePolicy)((QStateMachine*)this_)->globalRestorePolicy();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:135
// [-2] void setGlobalRestorePolicy(class QState::RestorePolicy)
extern "C"
void C_ZN13QStateMachine22setGlobalRestorePolicyEN6QState13RestorePolicyE(void *this_, QState::RestorePolicy restorePolicy) {
  ((QStateMachine*)this_)->setGlobalRestorePolicy(restorePolicy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:137
// [-2] void postEvent(class QEvent *, enum QStateMachine::EventPriority)
extern "C"
void C_ZN13QStateMachine9postEventEP6QEventNS_13EventPriorityE(void *this_, QEvent * event, QStateMachine::EventPriority priority) {
  ((QStateMachine*)this_)->postEvent(event, priority);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:138
// [4] int postDelayedEvent(class QEvent *, int)
extern "C"
int C_ZN13QStateMachine16postDelayedEventEP6QEventi(void *this_, QEvent * event, int delay) {
  return (int)((QStateMachine*)this_)->postDelayedEvent(event, delay);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:139
// [1] bool cancelDelayedEvent(int)
extern "C"
bool C_ZN13QStateMachine18cancelDelayedEventEi(void *this_, int id) {
  return (bool)((QStateMachine*)this_)->cancelDelayedEvent(id);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:144
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C"
bool C_ZN13QStateMachine11eventFilterEP7QObjectP6QEvent(void *this_, QObject * watched, QEvent * event) {
  return (bool)((QStateMachine*)this_)->eventFilter(watched, event);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:148
// [-2] void start()
extern "C"
void C_ZN13QStateMachine5startEv(void *this_) {
  ((QStateMachine*)this_)->start();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:149
// [-2] void stop()
extern "C"
void C_ZN13QStateMachine4stopEv(void *this_) {
  ((QStateMachine*)this_)->stop();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:150
// [-2] void setRunning(_Bool)
extern "C"
void C_ZN13QStateMachine10setRunningEb(void *this_, bool running) {
  ((QStateMachine*)this_)->setRunning(running);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:155
// [-2] void runningChanged(_Bool)
extern "C"
void C_ZN13QStateMachine14runningChangedEb(void *this_, bool running) {
  ((QStateMachine*)this_)->runningChanged(running);
}
//  main block end
