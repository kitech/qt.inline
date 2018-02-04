//  header block begin
// /usr/include/qt/QtCore/qabstracttransition.h
#include <qabstracttransition.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractTransition is pure virtual: true
// QAbstractTransition has virtual projected: true
//  header block end

//  main block begin

class MyQAbstractTransition : public QAbstractTransition {
public:
  virtual ~MyQAbstractTransition() {}
// void QAbstractTransition(class QState *)
MyQAbstractTransition(QState * sourceState) : QAbstractTransition(sourceState) {}
// bool eventTest(class QEvent *)
  virtual bool eventTest(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventTest", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractTransition::eventTest(event);
  }
  }
// void onTransition(class QEvent *)
  virtual void onTransition(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onTransition", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractTransition::onTransition(event);
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
    return QAbstractTransition::event(e);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:63
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK19QAbstractTransition10metaObjectEv(void *this_) {
  return (void*)((QAbstractTransition*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:75
// [-2] void QAbstractTransition(class QState *)
extern "C"
void* C_ZN19QAbstractTransitionC1EP6QState(QState * sourceState) {
  auto _nilp = (MyQAbstractTransition*)(0);
  return 0; // new MyQAbstractTransition(sourceState);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:76
// [-2] void ~QAbstractTransition()
extern "C"
void C_ZN19QAbstractTransitionD2Ev(void *this_) {
  delete (QAbstractTransition*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:78
// [8] QState * sourceState()
extern "C"
void* C_ZNK19QAbstractTransition11sourceStateEv(void *this_) {
  return (void*)((QAbstractTransition*)this_)->sourceState();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:79
// [8] QAbstractState * targetState()
extern "C"
void* C_ZNK19QAbstractTransition11targetStateEv(void *this_) {
  return (void*)((QAbstractTransition*)this_)->targetState();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:80
// [-2] void setTargetState(class QAbstractState *)
extern "C"
void C_ZN19QAbstractTransition14setTargetStateEP14QAbstractState(void *this_, QAbstractState * target) {
  ((QAbstractTransition*)this_)->setTargetState(target);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:84
// [4] QAbstractTransition::TransitionType transitionType()
extern "C"
QAbstractTransition::TransitionType C_ZNK19QAbstractTransition14transitionTypeEv(void *this_) {
  return (QAbstractTransition::TransitionType)((QAbstractTransition*)this_)->transitionType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:85
// [-2] void setTransitionType(enum QAbstractTransition::TransitionType)
extern "C"
void C_ZN19QAbstractTransition17setTransitionTypeENS_14TransitionTypeE(void *this_, QAbstractTransition::TransitionType type) {
  ((QAbstractTransition*)this_)->setTransitionType(type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:87
// [8] QStateMachine * machine()
extern "C"
void* C_ZNK19QAbstractTransition7machineEv(void *this_) {
  return (void*)((QAbstractTransition*)this_)->machine();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:90
// [-2] void addAnimation(class QAbstractAnimation *)
extern "C"
void C_ZN19QAbstractTransition12addAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QAbstractTransition*)this_)->addAnimation(animation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:91
// [-2] void removeAnimation(class QAbstractAnimation *)
extern "C"
void C_ZN19QAbstractTransition15removeAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QAbstractTransition*)this_)->removeAnimation(animation);
}
//  main block end
