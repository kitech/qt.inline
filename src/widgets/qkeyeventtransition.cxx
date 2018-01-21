//  header block begin
// /usr/include/qt/QtWidgets/qkeyeventtransition.h
#include <qkeyeventtransition.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK19QKeyEventTransition10metaObjectEv(void *this_) {
  /*return*/ ((QKeyEventTransition*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:57
// void QKeyEventTransition(class QState *)
extern "C"
void* C_ZN19QKeyEventTransitionC1EP6QState(QState * sourceState) {
  return new QKeyEventTransition(sourceState);
}
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:58
// void QKeyEventTransition(class QObject *, class QEvent::Type, int, class QState *)
extern "C"
void* C_ZN19QKeyEventTransitionC1EP7QObjectN6QEvent4TypeEiP6QState(QObject * object, QEvent::Type type, int key, QState * sourceState) {
  return new QKeyEventTransition(object, type, key, sourceState);
}
// virtual
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:60
// void ~QKeyEventTransition()
extern "C"
void C_ZN19QKeyEventTransitionD1Ev(void *this_) {
  delete (QKeyEventTransition*)(this_);
}
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:62
// int key()
extern "C"
void C_ZNK19QKeyEventTransition3keyEv(void *this_) {
  /*return*/ ((QKeyEventTransition*)this_)->key();
}
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:63
// void setKey(int)
extern "C"
void C_ZN19QKeyEventTransition6setKeyEi(void *this_, int key) {
  ((QKeyEventTransition*)this_)->setKey(key);
}
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:65
// Qt::KeyboardModifiers modifierMask()
extern "C"
void C_ZNK19QKeyEventTransition12modifierMaskEv(void *this_) {
  /*return*/ ((QKeyEventTransition*)this_)->modifierMask();
}
// /usr/include/qt/QtWidgets/qkeyeventtransition.h:66
// void setModifierMask(Qt::KeyboardModifiers)
extern "C"
void C_ZN19QKeyEventTransition15setModifierMaskE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QKeyEventTransition*)this_)->setModifierMask(modifiers);
}
//  main block end
