// /usr/include/qt/QtCore/qstate.h
#include <qstate.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qstate.h:58
// const QMetaObject * metaObject()
extern "C"
void C_ZNK6QState10metaObjectEv(void *this_) {
  /*return*/ ((QState*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qstate.h:75
// void QState(class QState *)
extern "C"
void* C_ZN6QStateC1EPS_(QState * parent) {
  return new QState(parent);
}
// /usr/include/qt/QtCore/qstate.h:76
// void QState(enum QState::ChildMode, class QState *)
extern "C"
void* C_ZN6QStateC1ENS_9ChildModeEPS_(QState::ChildMode childMode, QState * parent) {
  return new QState(childMode, parent);
}
// virtual
// /usr/include/qt/QtCore/qstate.h:77
// void ~QState()
extern "C"
void C_ZN6QStateD1Ev(void *this_) {
  delete (QState*)(this_);
}
// /usr/include/qt/QtCore/qstate.h:79
// QAbstractState * errorState()
extern "C"
void C_ZNK6QState10errorStateEv(void *this_) {
  /*return*/ ((QState*)this_)->errorState();
}
// /usr/include/qt/QtCore/qstate.h:80
// void setErrorState(class QAbstractState *)
extern "C"
void C_ZN6QState13setErrorStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QState*)this_)->setErrorState(state);
}
// /usr/include/qt/QtCore/qstate.h:82
// void addTransition(class QAbstractTransition *)
extern "C"
void C_ZN6QState13addTransitionEP19QAbstractTransition(void *this_, QAbstractTransition * transition) {
  ((QState*)this_)->addTransition(transition);
}
// /usr/include/qt/QtCore/qstate.h:83
// QSignalTransition * addTransition(const class QObject *, const char *, class QAbstractState *)
extern "C"
void C_ZN6QState13addTransitionEPK7QObjectPKcP14QAbstractState(void *this_, const QObject * sender, const char * signal, QAbstractState * target) {
  /*return*/ ((QState*)this_)->addTransition(sender, signal, target);
}
// /usr/include/qt/QtCore/qstate.h:96
// QAbstractTransition * addTransition(class QAbstractState *)
extern "C"
void C_ZN6QState13addTransitionEP14QAbstractState(void *this_, QAbstractState * target) {
  /*return*/ ((QState*)this_)->addTransition(target);
}
// /usr/include/qt/QtCore/qstate.h:97
// void removeTransition(class QAbstractTransition *)
extern "C"
void C_ZN6QState16removeTransitionEP19QAbstractTransition(void *this_, QAbstractTransition * transition) {
  ((QState*)this_)->removeTransition(transition);
}
// /usr/include/qt/QtCore/qstate.h:98
// QList<QAbstractTransition *> transitions()
extern "C"
void C_ZNK6QState11transitionsEv(void *this_) {
  /*return*/ ((QState*)this_)->transitions();
}
// /usr/include/qt/QtCore/qstate.h:100
// QAbstractState * initialState()
extern "C"
void C_ZNK6QState12initialStateEv(void *this_) {
  /*return*/ ((QState*)this_)->initialState();
}
// /usr/include/qt/QtCore/qstate.h:101
// void setInitialState(class QAbstractState *)
extern "C"
void C_ZN6QState15setInitialStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QState*)this_)->setInitialState(state);
}
// /usr/include/qt/QtCore/qstate.h:103
// QState::ChildMode childMode()
extern "C"
void C_ZNK6QState9childModeEv(void *this_) {
  /*return*/ ((QState*)this_)->childMode();
}
// /usr/include/qt/QtCore/qstate.h:104
// void setChildMode(enum QState::ChildMode)
extern "C"
void C_ZN6QState12setChildModeENS_9ChildModeE(void *this_, QState::ChildMode mode) {
  ((QState*)this_)->setChildMode(mode);
}
// /usr/include/qt/QtCore/qstate.h:107
// void assignProperty(class QObject *, const char *, const class QVariant &)
extern "C"
void C_ZN6QState14assignPropertyEP7QObjectPKcRK8QVariant(void *this_, QObject * object, const char * name, const QVariant & value) {
  ((QState*)this_)->assignProperty(object, name, value);
}