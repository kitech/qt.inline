// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qabstracttransition.h
// dst-file: /src/core/qabstracttransition.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstracttransition.h>


#include <qabstractstate.h>
#include <qlist.h>
#include <qmetaobject.h>
#include <qabstractanimation.h>
// <= header block end

// main block begin =>
void __keep_qabstracttransition_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAbstractTransition_Class_Size()
{
  return sizeof(QAbstractTransition);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qabstracttransition.h', line 80, column 10>
//   // proto:  void QAbstractTransition::setTransitionType(QAbstractTransition::TransitionType type);
// _ZN19QAbstractTransition17setTransitionTypeENS_14TransitionTypeE setTransitionType(enum QAbstractTransition::TransitionType)
extern "C"
void
C_ZN19QAbstractTransition17setTransitionTypeENS_14TransitionTypeE(void *qthis,
QAbstractTransition::TransitionType arg1) {
  ((QAbstractTransition*)qthis)->setTransitionType(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracttransition.h', line 74, column 21>
//   // proto:  QAbstractState * QAbstractTransition::targetState();
// _ZNK19QAbstractTransition11targetStateEv targetState()
extern "C"
void*
C_ZNK19QAbstractTransition11targetStateEv(void *qthis) {
  auto ret =
  ((QAbstractTransition*)qthis)->targetState();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracttransition.h', line 76, column 28>
//   // proto:  QList<QAbstractState *> QAbstractTransition::targetStates();
// _ZNK19QAbstractTransition12targetStatesEv targetStates()
extern "C"
QList<QAbstractState *>*
C_ZNK19QAbstractTransition12targetStatesEv(void *qthis) {
  auto ret =
  ((QAbstractTransition*)qthis)->targetStates();
  return new QList<QAbstractState *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracttransition.h', line 79, column 20>
//   // proto:  QAbstractTransition::TransitionType QAbstractTransition::transitionType();
// _ZNK19QAbstractTransition14transitionTypeEv transitionType()
extern "C"
QAbstractTransition::TransitionType
C_ZNK19QAbstractTransition14transitionTypeEv(void *qthis) {
  auto ret =
  ((QAbstractTransition*)qthis)->transitionType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracttransition.h', line 73, column 13>
//   // proto:  QState * QAbstractTransition::sourceState();
// _ZNK19QAbstractTransition11sourceStateEv sourceState()
extern "C"
void*
C_ZNK19QAbstractTransition11sourceStateEv(void *qthis) {
  auto ret =
  ((QAbstractTransition*)qthis)->sourceState();
  return (void*)ret;
}
//   // proto:  void QAbstractTransition::~QAbstractTransition();
extern "C"
void C_ZN19QAbstractTransitionD2Ev(void *qthis) {
  delete (QAbstractTransition*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracttransition.h', line 70, column 5>
//   // proto:  void QAbstractTransition::QAbstractTransition(QState * sourceState);
extern "C"
QAbstractTransition*
C_ZN19QAbstractTransitionC2EP6QState(QState * arg1) {
  // auto ret = new QAbstractTransition(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracttransition.h', line 77, column 10>
//   // proto:  void QAbstractTransition::setTargetStates(const QList<QAbstractState *> & targets);
// _ZN19QAbstractTransition15setTargetStatesERK5QListIP14QAbstractStateE setTargetStates(const QList<class QAbstractState *> &)
extern "C"
void
C_ZN19QAbstractTransition15setTargetStatesERK5QListIP14QAbstractStateE(void *qthis,
const QList<QAbstractState *>* arg1) {
  ((QAbstractTransition*)qthis)->setTargetStates(*((const QList<QAbstractState *>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracttransition.h', line 75, column 10>
//   // proto:  void QAbstractTransition::setTargetState(QAbstractState * target);
// _ZN19QAbstractTransition14setTargetStateEP14QAbstractState setTargetState(class QAbstractState *)
extern "C"
void
C_ZN19QAbstractTransition14setTargetStateEP14QAbstractState(void *qthis,
QAbstractState * arg1) {
  ((QAbstractTransition*)qthis)->setTargetState(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracttransition.h', line 85, column 10>
//   // proto:  void QAbstractTransition::addAnimation(QAbstractAnimation * animation);
// _ZN19QAbstractTransition12addAnimationEP18QAbstractAnimation addAnimation(class QAbstractAnimation *)
extern "C"
void
C_ZN19QAbstractTransition12addAnimationEP18QAbstractAnimation(void *qthis,
QAbstractAnimation * arg1) {
  ((QAbstractTransition*)qthis)->addAnimation(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracttransition.h', line 87, column 32>
//   // proto:  QList<QAbstractAnimation *> QAbstractTransition::animations();
// _ZNK19QAbstractTransition10animationsEv animations()
extern "C"
QList<QAbstractAnimation *>*
C_ZNK19QAbstractTransition10animationsEv(void *qthis) {
  auto ret =
  ((QAbstractTransition*)qthis)->animations();
  return new QList<QAbstractAnimation *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracttransition.h', line 86, column 10>
//   // proto:  void QAbstractTransition::removeAnimation(QAbstractAnimation * animation);
// _ZN19QAbstractTransition15removeAnimationEP18QAbstractAnimation removeAnimation(class QAbstractAnimation *)
extern "C"
void
C_ZN19QAbstractTransition15removeAnimationEP18QAbstractAnimation(void *qthis,
QAbstractAnimation * arg1) {
  ((QAbstractTransition*)qthis)->removeAnimation(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracttransition.h', line 58, column 5>
//   // proto:  const QMetaObject * QAbstractTransition::metaObject();
// _ZNK19QAbstractTransition10metaObjectEv metaObject()
extern "C"
void*
C_ZNK19QAbstractTransition10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractTransition*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracttransition.h', line 82, column 20>
//   // proto:  QStateMachine * QAbstractTransition::machine();
// _ZNK19QAbstractTransition7machineEv machine()
extern "C"
void*
C_ZNK19QAbstractTransition7machineEv(void *qthis) {
  auto ret =
  ((QAbstractTransition*)qthis)->machine();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QAbstractTransition_SlotProxy here
class QAbstractTransition_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractTransition_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qabstracttransition.moc"

extern "C" {
  QAbstractTransition_SlotProxy* QAbstractTransition_SlotProxy_new()
  {
    return new QAbstractTransition_SlotProxy();
  }
};

// <= body block end

