//  header block begin
// /usr/include/qt/QtWidgets/qkeyeventtransition.h
#include <qkeyeventtransition.h>
#include <QtWidgets>

// QKeyEventTransition is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:69
// [-2] void onTransition(class QEvent *)
extern "C"
void* callback_ZN19QKeyEventTransition12onTransitionEP6QEvent = 0;
extern "C" void set_callback_ZN19QKeyEventTransition12onTransitionEP6QEvent(void*cbfn)
{ callback_ZN19QKeyEventTransition12onTransitionEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:70
// [1] bool eventTest(class QEvent *)
extern "C"
void* callback_ZN19QKeyEventTransition9eventTestEP6QEvent = 0;
extern "C" void set_callback_ZN19QKeyEventTransition9eventTestEP6QEvent(void*cbfn)
{ callback_ZN19QKeyEventTransition9eventTestEP6QEvent = cbfn; }

class MyQKeyEventTransition : public QKeyEventTransition {
public:
MyQKeyEventTransition(QState * sourceState) : QKeyEventTransition(sourceState) {}
MyQKeyEventTransition(QObject * object, QEvent::Type type, int key, QState * sourceState) : QKeyEventTransition(object, type, key, sourceState) {}
// void onTransition(class QEvent *)
// void onTransition(class QEvent *)
virtual void onTransition(QEvent * event) {
  if (callback_ZN19QKeyEventTransition12onTransitionEP6QEvent != 0) {
  // callback_ZN19QKeyEventTransition12onTransitionEP6QEvent(event);
}}
// bool eventTest(class QEvent *)
// bool eventTest(class QEvent *)
virtual bool eventTest(QEvent * event) {
  if (callback_ZN19QKeyEventTransition9eventTestEP6QEvent != 0) {
  // callback_ZN19QKeyEventTransition9eventTestEP6QEvent(event);
}}
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
void* C_ZN19QKeyEventTransitionC1EP6QState(QState * sourceState) {
  (MyQKeyEventTransition*)(0);
  return  new MyQKeyEventTransition(sourceState);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:58
// [-2] void QKeyEventTransition(class QObject *, class QEvent::Type, int, class QState *)
extern "C"
void* C_ZN19QKeyEventTransitionC1EP7QObjectN6QEvent4TypeEiP6QState(QObject * object, QEvent::Type type, int key, QState * sourceState) {
  (MyQKeyEventTransition*)(0);
  return  new MyQKeyEventTransition(object, type, key, sourceState);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:60
// [-2] void ~QKeyEventTransition()
extern "C"
void C_ZN19QKeyEventTransitionD1Ev(void *this_) {
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
//  main block end
