// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qstate.h
// dst-file: /src/core/qstate.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstate.h>


#include <qlist.h>
#include <qmetaobject.h>
// <= header block end

// main block begin =>
void __keep_qstate_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QState_Class_Size()
{
  return sizeof(QState);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qstate.h', line 79, column 21>
//   // proto:  QAbstractState * QState::errorState();
// _ZNK6QState10errorStateEv errorState()
extern "C"
void*
C_ZNK6QState10errorStateEv(void *qthis) {
  auto ret =
  ((QState*)qthis)->errorState();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstate.h', line 100, column 21>
//   // proto:  QAbstractState * QState::initialState();
// _ZNK6QState12initialStateEv initialState()
extern "C"
void*
C_ZNK6QState12initialStateEv(void *qthis) {
  auto ret =
  ((QState*)qthis)->initialState();
  return (void*)ret;
}
//   // proto:  void QState::~QState();
extern "C"
void C_ZN6QStateD2Ev(void *qthis) {
  delete (QState*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstate.h', line 107, column 10>
//   // proto:  void QState::assignProperty(QObject * object, const char * name, const QVariant & value);
// _ZN6QState14assignPropertyEP7QObjectPKcRK8QVariant assignProperty(class QObject *, const char *, const class QVariant &)
extern "C"
void
C_ZN6QState14assignPropertyEP7QObjectPKcRK8QVariant(void *qthis,
QObject * arg1,
const char * arg2,
const QVariant* arg3) {
  ((QState*)qthis)->assignProperty(arg1,
arg2,
*((const QVariant*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtCore/qstate.h', line 104, column 10>
//   // proto:  void QState::setChildMode(QState::ChildMode mode);
// _ZN6QState12setChildModeENS_9ChildModeE setChildMode(enum QState::ChildMode)
extern "C"
void
C_ZN6QState12setChildModeENS_9ChildModeE(void *qthis,
QState::ChildMode arg1) {
  ((QState*)qthis)->setChildMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstate.h', line 103, column 15>
//   // proto:  QState::ChildMode QState::childMode();
// _ZNK6QState9childModeEv childMode()
extern "C"
QState::ChildMode
C_ZNK6QState9childModeEv(void *qthis) {
  auto ret =
  ((QState*)qthis)->childMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qstate.h', line 76, column 5>
//   // proto:  void QState::QState(QState::ChildMode childMode, QState * parent);
extern "C"
QState*
C_ZN6QStateC2ENS_9ChildModeEPS_(QState::ChildMode arg1,
QState * arg2) {
  auto ret = new QState(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstate.h', line 75, column 5>
//   // proto:  void QState::QState(QState * parent);
extern "C"
QState*
C_ZN6QStateC2EPS_(QState * arg1) {
  auto ret = new QState(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstate.h', line 58, column 5>
//   // proto:  const QMetaObject * QState::metaObject();
// _ZNK6QState10metaObjectEv metaObject()
extern "C"
void*
C_ZNK6QState10metaObjectEv(void *qthis) {
  auto ret =
  ((QState*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstate.h', line 80, column 10>
//   // proto:  void QState::setErrorState(QAbstractState * state);
// _ZN6QState13setErrorStateEP14QAbstractState setErrorState(class QAbstractState *)
extern "C"
void
C_ZN6QState13setErrorStateEP14QAbstractState(void *qthis,
QAbstractState * arg1) {
  ((QState*)qthis)->setErrorState(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstate.h', line 82, column 10>
//   // proto:  void QState::addTransition(QAbstractTransition * transition);
// _ZN6QState13addTransitionEP19QAbstractTransition addTransition(class QAbstractTransition *)
extern "C"
void
C_ZN6QState13addTransitionEP19QAbstractTransition(void *qthis,
QAbstractTransition * arg1) {
  ((QState*)qthis)->addTransition(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstate.h', line 97, column 10>
//   // proto:  void QState::removeTransition(QAbstractTransition * transition);
// _ZN6QState16removeTransitionEP19QAbstractTransition removeTransition(class QAbstractTransition *)
extern "C"
void
C_ZN6QState16removeTransitionEP19QAbstractTransition(void *qthis,
QAbstractTransition * arg1) {
  ((QState*)qthis)->removeTransition(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstate.h', line 83, column 24>
//   // proto:  QSignalTransition * QState::addTransition(const QObject * sender, const char * signal, QAbstractState * target);
// _ZN6QState13addTransitionEPK7QObjectPKcP14QAbstractState addTransition(const class QObject *, const char *, class QAbstractState *)
extern "C"
void*
C_ZN6QState13addTransitionEPK7QObjectPKcP14QAbstractState(void *qthis,
const QObject * arg1,
const char * arg2,
QAbstractState * arg3) {
  auto ret =
  ((QState*)qthis)->addTransition(arg1,
arg2,
arg3);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstate.h', line 96, column 26>
//   // proto:  QAbstractTransition * QState::addTransition(QAbstractState * target);
// _ZN6QState13addTransitionEP14QAbstractState addTransition(class QAbstractState *)
extern "C"
void*
C_ZN6QState13addTransitionEP14QAbstractState(void *qthis,
QAbstractState * arg1) {
  auto ret =
  ((QState*)qthis)->addTransition(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstate.h', line 98, column 33>
//   // proto:  QList<QAbstractTransition *> QState::transitions();
// _ZNK6QState11transitionsEv transitions()
extern "C"
QList<QAbstractTransition *>*
C_ZNK6QState11transitionsEv(void *qthis) {
  auto ret =
  ((QState*)qthis)->transitions();
  return new QList<QAbstractTransition *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstate.h', line 101, column 10>
//   // proto:  void QState::setInitialState(QAbstractState * state);
// _ZN6QState15setInitialStateEP14QAbstractState setInitialState(class QAbstractState *)
extern "C"
void
C_ZN6QState15setInitialStateEP14QAbstractState(void *qthis,
QAbstractState * arg1) {
  ((QState*)qthis)->setInitialState(arg1);
}
// <= ext block end

// body block begin =>
// QState_SlotProxy here
class QState_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QState_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qstate.moc"

extern "C" {
  QState_SlotProxy* QState_SlotProxy_new()
  {
    return new QState_SlotProxy();
  }
};

// <= body block end

