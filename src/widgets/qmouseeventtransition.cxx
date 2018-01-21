//  header block begin
// /usr/include/qt/QtWidgets/qmouseeventtransition.h
#include <qmouseeventtransition.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK21QMouseEventTransition10metaObjectEv(void *this_) {
  /*return*/ ((QMouseEventTransition*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:58
// void QMouseEventTransition(class QState *)
extern "C"
void* C_ZN21QMouseEventTransitionC1EP6QState(QState * sourceState) {
  return new QMouseEventTransition(sourceState);
}
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:59
// void QMouseEventTransition(class QObject *, class QEvent::Type, Qt::MouseButton, class QState *)
extern "C"
void* C_ZN21QMouseEventTransitionC1EP7QObjectN6QEvent4TypeEN2Qt11MouseButtonEP6QState(QObject * object, QEvent::Type type, Qt::MouseButton button, QState * sourceState) {
  return new QMouseEventTransition(object, type, button, sourceState);
}
// virtual
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:61
// void ~QMouseEventTransition()
extern "C"
void C_ZN21QMouseEventTransitionD1Ev(void *this_) {
  delete (QMouseEventTransition*)(this_);
}
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:63
// Qt::MouseButton button()
extern "C"
void C_ZNK21QMouseEventTransition6buttonEv(void *this_) {
  /*return*/ ((QMouseEventTransition*)this_)->button();
}
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:64
// void setButton(Qt::MouseButton)
extern "C"
void C_ZN21QMouseEventTransition9setButtonEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  ((QMouseEventTransition*)this_)->setButton(button);
}
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:66
// Qt::KeyboardModifiers modifierMask()
extern "C"
void C_ZNK21QMouseEventTransition12modifierMaskEv(void *this_) {
  /*return*/ ((QMouseEventTransition*)this_)->modifierMask();
}
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:67
// void setModifierMask(Qt::KeyboardModifiers)
extern "C"
void C_ZN21QMouseEventTransition15setModifierMaskE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QMouseEventTransition*)this_)->setModifierMask(modifiers);
}
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:69
// QPainterPath hitTestPath()
extern "C"
void C_ZNK21QMouseEventTransition11hitTestPathEv(void *this_) {
  /*return*/ ((QMouseEventTransition*)this_)->hitTestPath();
}
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:70
// void setHitTestPath(const class QPainterPath &)
extern "C"
void C_ZN21QMouseEventTransition14setHitTestPathERK12QPainterPath(void *this_, const QPainterPath & path) {
  ((QMouseEventTransition*)this_)->setHitTestPath(path);
}
//  main block end
