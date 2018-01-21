//  header block begin
// /usr/include/qt/QtCore/qstatemachine.h
#include <qstatemachine.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qstatemachine.h:60
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QStateMachine10metaObjectEv(void *this_) {
  /*return*/ ((QStateMachine*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qstatemachine.h:113
// void QStateMachine(class QObject *)
extern "C"
void* C_ZN13QStateMachineC1EP7QObject(QObject * parent) {
  return new QStateMachine(parent);
}
// /usr/include/qt/QtCore/qstatemachine.h:114
// void QStateMachine(class QState::ChildMode, class QObject *)
extern "C"
void* C_ZN13QStateMachineC1EN6QState9ChildModeEP7QObject(QState::ChildMode childMode, QObject * parent) {
  return new QStateMachine(childMode, parent);
}
// virtual
// /usr/include/qt/QtCore/qstatemachine.h:115
// void ~QStateMachine()
extern "C"
void C_ZN13QStateMachineD1Ev(void *this_) {
  delete (QStateMachine*)(this_);
}
// /usr/include/qt/QtCore/qstatemachine.h:117
// void addState(class QAbstractState *)
extern "C"
void C_ZN13QStateMachine8addStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QStateMachine*)this_)->addState(state);
}
// /usr/include/qt/QtCore/qstatemachine.h:118
// void removeState(class QAbstractState *)
extern "C"
void C_ZN13QStateMachine11removeStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QStateMachine*)this_)->removeState(state);
}
// /usr/include/qt/QtCore/qstatemachine.h:120
// QStateMachine::Error error()
extern "C"
void C_ZNK13QStateMachine5errorEv(void *this_) {
  /*return*/ ((QStateMachine*)this_)->error();
}
// /usr/include/qt/QtCore/qstatemachine.h:121
// QString errorString()
extern "C"
void C_ZNK13QStateMachine11errorStringEv(void *this_) {
  /*return*/ ((QStateMachine*)this_)->errorString();
}
// /usr/include/qt/QtCore/qstatemachine.h:122
// void clearError()
extern "C"
void C_ZN13QStateMachine10clearErrorEv(void *this_) {
  ((QStateMachine*)this_)->clearError();
}
// /usr/include/qt/QtCore/qstatemachine.h:124
// bool isRunning()
extern "C"
void C_ZNK13QStateMachine9isRunningEv(void *this_) {
  /*return*/ ((QStateMachine*)this_)->isRunning();
}
// /usr/include/qt/QtCore/qstatemachine.h:127
// bool isAnimated()
extern "C"
void C_ZNK13QStateMachine10isAnimatedEv(void *this_) {
  /*return*/ ((QStateMachine*)this_)->isAnimated();
}
// /usr/include/qt/QtCore/qstatemachine.h:128
// void setAnimated(_Bool)
extern "C"
void C_ZN13QStateMachine11setAnimatedEb(void *this_, bool enabled) {
  ((QStateMachine*)this_)->setAnimated(enabled);
}
// /usr/include/qt/QtCore/qstatemachine.h:130
// void addDefaultAnimation(class QAbstractAnimation *)
extern "C"
void C_ZN13QStateMachine19addDefaultAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QStateMachine*)this_)->addDefaultAnimation(animation);
}
// /usr/include/qt/QtCore/qstatemachine.h:131
// QList<QAbstractAnimation *> defaultAnimations()
extern "C"
void C_ZNK13QStateMachine17defaultAnimationsEv(void *this_) {
  /*return*/ ((QStateMachine*)this_)->defaultAnimations();
}
// /usr/include/qt/QtCore/qstatemachine.h:132
// void removeDefaultAnimation(class QAbstractAnimation *)
extern "C"
void C_ZN13QStateMachine22removeDefaultAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QStateMachine*)this_)->removeDefaultAnimation(animation);
}
// /usr/include/qt/QtCore/qstatemachine.h:135
// QState::RestorePolicy globalRestorePolicy()
extern "C"
void C_ZNK13QStateMachine19globalRestorePolicyEv(void *this_) {
  /*return*/ ((QStateMachine*)this_)->globalRestorePolicy();
}
// /usr/include/qt/QtCore/qstatemachine.h:136
// void setGlobalRestorePolicy(class QState::RestorePolicy)
extern "C"
void C_ZN13QStateMachine22setGlobalRestorePolicyEN6QState13RestorePolicyE(void *this_, QState::RestorePolicy restorePolicy) {
  ((QStateMachine*)this_)->setGlobalRestorePolicy(restorePolicy);
}
// /usr/include/qt/QtCore/qstatemachine.h:138
// void postEvent(class QEvent *, enum QStateMachine::EventPriority)
extern "C"
void C_ZN13QStateMachine9postEventEP6QEventNS_13EventPriorityE(void *this_, QEvent * event, QStateMachine::EventPriority priority) {
  ((QStateMachine*)this_)->postEvent(event, priority);
}
// /usr/include/qt/QtCore/qstatemachine.h:139
// int postDelayedEvent(class QEvent *, int)
extern "C"
void C_ZN13QStateMachine16postDelayedEventEP6QEventi(void *this_, QEvent * event, int delay) {
  /*return*/ ((QStateMachine*)this_)->postDelayedEvent(event, delay);
}
// /usr/include/qt/QtCore/qstatemachine.h:140
// bool cancelDelayedEvent(int)
extern "C"
void C_ZN13QStateMachine18cancelDelayedEventEi(void *this_, int id) {
  /*return*/ ((QStateMachine*)this_)->cancelDelayedEvent(id);
}
// /usr/include/qt/QtCore/qstatemachine.h:142
// QSet<QAbstractState *> configuration()
extern "C"
void C_ZNK13QStateMachine13configurationEv(void *this_) {
  /*return*/ ((QStateMachine*)this_)->configuration();
}
// virtual
// /usr/include/qt/QtCore/qstatemachine.h:145
// bool eventFilter(class QObject *, class QEvent *)
extern "C"
void C_ZN13QStateMachine11eventFilterEP7QObjectP6QEvent(void *this_, QObject * watched, QEvent * event) {
  /*return*/ ((QStateMachine*)this_)->eventFilter(watched, event);
}
// /usr/include/qt/QtCore/qstatemachine.h:149
// void start()
extern "C"
void C_ZN13QStateMachine5startEv(void *this_) {
  ((QStateMachine*)this_)->start();
}
// /usr/include/qt/QtCore/qstatemachine.h:150
// void stop()
extern "C"
void C_ZN13QStateMachine4stopEv(void *this_) {
  ((QStateMachine*)this_)->stop();
}
// /usr/include/qt/QtCore/qstatemachine.h:151
// void setRunning(_Bool)
extern "C"
void C_ZN13QStateMachine10setRunningEb(void *this_, bool running) {
  ((QStateMachine*)this_)->setRunning(running);
}
// /usr/include/qt/QtCore/qstatemachine.h:156
// void runningChanged(_Bool)
extern "C"
void C_ZN13QStateMachine14runningChangedEb(void *this_, bool running) {
  ((QStateMachine*)this_)->runningChanged(running);
}
//  main block end
