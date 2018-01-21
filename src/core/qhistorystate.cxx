//  header block begin
// /usr/include/qt/QtCore/qhistorystate.h
#include <qhistorystate.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qhistorystate.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QHistoryState10metaObjectEv(void *this_) {
  /*return*/ ((QHistoryState*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qhistorystate.h:65
// void QHistoryState(class QState *)
extern "C"
void* C_ZN13QHistoryStateC1EP6QState(QState * parent) {
  return new QHistoryState(parent);
}
// /usr/include/qt/QtCore/qhistorystate.h:66
// void QHistoryState(enum QHistoryState::HistoryType, class QState *)
extern "C"
void* C_ZN13QHistoryStateC1ENS_11HistoryTypeEP6QState(QHistoryState::HistoryType type, QState * parent) {
  return new QHistoryState(type, parent);
}
// virtual
// /usr/include/qt/QtCore/qhistorystate.h:67
// void ~QHistoryState()
extern "C"
void C_ZN13QHistoryStateD1Ev(void *this_) {
  delete (QHistoryState*)(this_);
}
// /usr/include/qt/QtCore/qhistorystate.h:69
// QAbstractTransition * defaultTransition()
extern "C"
void C_ZNK13QHistoryState17defaultTransitionEv(void *this_) {
  /*return*/ ((QHistoryState*)this_)->defaultTransition();
}
// /usr/include/qt/QtCore/qhistorystate.h:70
// void setDefaultTransition(class QAbstractTransition *)
extern "C"
void C_ZN13QHistoryState20setDefaultTransitionEP19QAbstractTransition(void *this_, QAbstractTransition * transition) {
  ((QHistoryState*)this_)->setDefaultTransition(transition);
}
// /usr/include/qt/QtCore/qhistorystate.h:72
// QAbstractState * defaultState()
extern "C"
void C_ZNK13QHistoryState12defaultStateEv(void *this_) {
  /*return*/ ((QHistoryState*)this_)->defaultState();
}
// /usr/include/qt/QtCore/qhistorystate.h:73
// void setDefaultState(class QAbstractState *)
extern "C"
void C_ZN13QHistoryState15setDefaultStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QHistoryState*)this_)->setDefaultState(state);
}
// /usr/include/qt/QtCore/qhistorystate.h:75
// QHistoryState::HistoryType historyType()
extern "C"
void C_ZNK13QHistoryState11historyTypeEv(void *this_) {
  /*return*/ ((QHistoryState*)this_)->historyType();
}
// /usr/include/qt/QtCore/qhistorystate.h:76
// void setHistoryType(enum QHistoryState::HistoryType)
extern "C"
void C_ZN13QHistoryState14setHistoryTypeENS_11HistoryTypeE(void *this_, QHistoryState::HistoryType type) {
  ((QHistoryState*)this_)->setHistoryType(type);
}
//  main block end
