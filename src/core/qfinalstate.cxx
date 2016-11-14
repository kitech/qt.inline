// /usr/include/qt/QtCore/qfinalstate.h
#include <qfinalstate.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qfinalstate.h:52
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QFinalState10metaObjectEv(void *this_) {
  /*return*/ ((QFinalState*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qfinalstate.h:54
// void QFinalState(class QState *)
extern "C"
void* C_ZN11QFinalStateC1EP6QState(QState * parent) {
  return new QFinalState(parent);
}
// virtual
// /usr/include/qt/QtCore/qfinalstate.h:55
// void ~QFinalState()
extern "C"
void C_ZN11QFinalStateD1Ev(void *this_) {
  delete (QFinalState*)(this_);
}