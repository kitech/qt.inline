//  header block begin
// /usr/include/qt/QtWidgets/qmouseeventtransition.h
#include <qmouseeventtransition.h>
#include <QtWidgets>

// QMouseEventTransition is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:73
// [-2] void onTransition(class QEvent *)
extern "C"
void* callback_ZN21QMouseEventTransition12onTransitionEP6QEvent = 0;
extern "C" void set_callback_ZN21QMouseEventTransition12onTransitionEP6QEvent(void*cbfn)
{ callback_ZN21QMouseEventTransition12onTransitionEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:74
// [1] bool eventTest(class QEvent *)
extern "C"
void* callback_ZN21QMouseEventTransition9eventTestEP6QEvent = 0;
extern "C" void set_callback_ZN21QMouseEventTransition9eventTestEP6QEvent(void*cbfn)
{ callback_ZN21QMouseEventTransition9eventTestEP6QEvent = cbfn; }

class MyQMouseEventTransition : public QMouseEventTransition {
public:
MyQMouseEventTransition(QState * sourceState) : QMouseEventTransition(sourceState) {}
MyQMouseEventTransition(QObject * object, QEvent::Type type, Qt::MouseButton button, QState * sourceState) : QMouseEventTransition(object, type, button, sourceState) {}
// void onTransition(class QEvent *)
// void onTransition(class QEvent *)
virtual void onTransition(QEvent * event) {
  if (callback_ZN21QMouseEventTransition12onTransitionEP6QEvent != 0) {
  // callback_ZN21QMouseEventTransition12onTransitionEP6QEvent(event);
}}
// bool eventTest(class QEvent *)
// bool eventTest(class QEvent *)
virtual bool eventTest(QEvent * event) {
  if (callback_ZN21QMouseEventTransition9eventTestEP6QEvent != 0) {
  // callback_ZN21QMouseEventTransition9eventTestEP6QEvent(event);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK21QMouseEventTransition10metaObjectEv(void *this_) {
  return (void*)((QMouseEventTransition*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:58
// [-2] void QMouseEventTransition(class QState *)
extern "C"
void* C_ZN21QMouseEventTransitionC1EP6QState(QState * sourceState) {
  (MyQMouseEventTransition*)(0);
  return  new MyQMouseEventTransition(sourceState);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:59
// [-2] void QMouseEventTransition(class QObject *, class QEvent::Type, Qt::MouseButton, class QState *)
extern "C"
void* C_ZN21QMouseEventTransitionC1EP7QObjectN6QEvent4TypeEN2Qt11MouseButtonEP6QState(QObject * object, QEvent::Type type, Qt::MouseButton button, QState * sourceState) {
  (MyQMouseEventTransition*)(0);
  return  new MyQMouseEventTransition(object, type, button, sourceState);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:61
// [-2] void ~QMouseEventTransition()
extern "C"
void C_ZN21QMouseEventTransitionD1Ev(void *this_) {
  delete (QMouseEventTransition*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:63
// [4] Qt::MouseButton button()
extern "C"
Qt::MouseButton C_ZNK21QMouseEventTransition6buttonEv(void *this_) {
  return (Qt::MouseButton)((QMouseEventTransition*)this_)->button();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:64
// [-2] void setButton(Qt::MouseButton)
extern "C"
void C_ZN21QMouseEventTransition9setButtonEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  ((QMouseEventTransition*)this_)->setButton(button);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:66
// [4] Qt::KeyboardModifiers modifierMask()
extern "C"
Qt::KeyboardModifiers C_ZNK21QMouseEventTransition12modifierMaskEv(void *this_) {
  return (Qt::KeyboardModifiers)((QMouseEventTransition*)this_)->modifierMask();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:69
// [8] QPainterPath hitTestPath()
extern "C"
void* C_ZNK21QMouseEventTransition11hitTestPathEv(void *this_) {
  auto rv = ((QMouseEventTransition*)this_)->hitTestPath();
return new QPainterPath(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:70
// [-2] void setHitTestPath(const class QPainterPath &)
extern "C"
void C_ZN21QMouseEventTransition14setHitTestPathERK12QPainterPath(void *this_, const QPainterPath & path) {
  ((QMouseEventTransition*)this_)->setHitTestPath(path);
}
//  main block end
