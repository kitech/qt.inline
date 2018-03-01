//  header block begin
// /usr/include/qt/QtCore/qabstracttransition.h
#ifndef protected
#define protected public
#endif
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
// Protected purevirtual virtual Visibility=Default Availability=Available
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

// Protected purevirtual virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:101
// [1] bool eventTest(class QEvent *)
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:103
// [-2] void onTransition(class QEvent *)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:105
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN19QAbstractTransition5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QAbstractTransition*)this_)->QAbstractTransition::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:63
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractTransition10metaObjectEv(void *this_) {
  return (void*)((QAbstractTransition*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:75
// [-2] void QAbstractTransition(class QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractTransitionC2EP6QState(QState * sourceState) {
  auto _nilp = (MyQAbstractTransition*)(0);
  return 0; // new MyQAbstractTransition(sourceState);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:76
// [-2] void ~QAbstractTransition()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractTransitionD2Ev(void *this_) {
  delete (QAbstractTransition*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:78
// [8] QState * sourceState()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractTransition11sourceStateEv(void *this_) {
  return (void*)((QAbstractTransition*)this_)->sourceState();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:79
// [8] QAbstractState * targetState()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractTransition11targetStateEv(void *this_) {
  return (void*)((QAbstractTransition*)this_)->targetState();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:80
// [-2] void setTargetState(class QAbstractState *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractTransition14setTargetStateEP14QAbstractState(void *this_, QAbstractState * target) {
  ((QAbstractTransition*)this_)->setTargetState(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:84
// [4] QAbstractTransition::TransitionType transitionType()
extern "C" Q_DECL_EXPORT
QAbstractTransition::TransitionType C_ZNK19QAbstractTransition14transitionTypeEv(void *this_) {
  return (QAbstractTransition::TransitionType)((QAbstractTransition*)this_)->transitionType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:85
// [-2] void setTransitionType(enum QAbstractTransition::TransitionType)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractTransition17setTransitionTypeENS_14TransitionTypeE(void *this_, QAbstractTransition::TransitionType type_) {
  ((QAbstractTransition*)this_)->setTransitionType(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:87
// [8] QStateMachine * machine()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractTransition7machineEv(void *this_) {
  return (void*)((QAbstractTransition*)this_)->machine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:90
// [-2] void addAnimation(class QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractTransition12addAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QAbstractTransition*)this_)->addAnimation(animation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracttransition.h:91
// [-2] void removeAnimation(class QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractTransition15removeAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QAbstractTransition*)this_)->removeAnimation(animation);
}

//  main block end
