//  header block begin
// /usr/include/qt/QtWidgets/qkeyeventtransition.h
#include <qkeyeventtransition.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QKeyEventTransition is pure virtual: false
// QKeyEventTransition has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN19QKeyEventTransition12onTransitionEP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN19QKeyEventTransition12onTransitionEP6QEvent(void*cbfn)
// { callback_ZN19QKeyEventTransition12onTransitionEP6QEvent_fnptr = cbfn; }
// void* callback_ZN19QKeyEventTransition9eventTestEP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN19QKeyEventTransition9eventTestEP6QEvent(void*cbfn)
// { callback_ZN19QKeyEventTransition9eventTestEP6QEvent_fnptr = cbfn; }

class MyQKeyEventTransition : public QKeyEventTransition {
public:
  virtual ~MyQKeyEventTransition() {}
// void QKeyEventTransition(class QState *)
MyQKeyEventTransition(QState * sourceState) : QKeyEventTransition(sourceState) {}
// void QKeyEventTransition(class QObject *, class QEvent::Type, int, class QState *)
MyQKeyEventTransition(QObject * object, QEvent::Type type, int key, QState * sourceState) : QKeyEventTransition(object, type, key, sourceState) {}
// void onTransition(class QEvent *)
  virtual void onTransition(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onTransition", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN19QKeyEventTransition12onTransitionEP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , event);
    // }
    QKeyEventTransition::onTransition(event);
  }
  }
// bool eventTest(class QEvent *)
  virtual bool eventTest(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventTest", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    // auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN19QKeyEventTransition9eventTestEP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , event);
    // }
    return QKeyEventTransition::eventTest(event);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK19QKeyEventTransition10metaObjectEv(void *this_) {
  return (void*)((QKeyEventTransition*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:57
// [-2] void QKeyEventTransition(class QState *)
extern "C"
void* C_ZN19QKeyEventTransitionC2EP6QState(QState * sourceState) {
  auto _nilp = (MyQKeyEventTransition*)(0);
  return  new MyQKeyEventTransition(sourceState);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:58
// [-2] void QKeyEventTransition(class QObject *, class QEvent::Type, int, class QState *)
extern "C"
void* C_ZN19QKeyEventTransitionC2EP7QObjectN6QEvent4TypeEiP6QState(QObject * object, QEvent::Type type, int key, QState * sourceState) {
  auto _nilp = (MyQKeyEventTransition*)(0);
  return  new MyQKeyEventTransition(object, type, key, sourceState);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:60
// [-2] void ~QKeyEventTransition()
extern "C"
void C_ZN19QKeyEventTransitionD2Ev(void *this_) {
  delete (QKeyEventTransition*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:62
// [4] int key()
extern "C"
int C_ZNK19QKeyEventTransition3keyEv(void *this_) {
  return (int)((QKeyEventTransition*)this_)->key();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:63
// [-2] void setKey(int)
extern "C"
void C_ZN19QKeyEventTransition6setKeyEi(void *this_, int key) {
  ((QKeyEventTransition*)this_)->setKey(key);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:65
// [4] Qt::KeyboardModifiers modifierMask()
extern "C"
Qt::KeyboardModifiers C_ZNK19QKeyEventTransition12modifierMaskEv(void *this_) {
  return (Qt::KeyboardModifiers)((QKeyEventTransition*)this_)->modifierMask();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:66
// [-2] void setModifierMask(Qt::KeyboardModifiers)
extern "C"
void C_ZN19QKeyEventTransition15setModifierMaskE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QKeyEventTransition*)this_)->setModifierMask(modifiers);
}
//  main block end
