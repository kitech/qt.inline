//  header block begin
// /usr/include/qt/QtWidgets/qmouseeventtransition.h
#ifndef protected
#define protected public
#endif
#include <qmouseeventtransition.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QMouseEventTransition is pure virtual: false
// QMouseEventTransition has virtual projected: true
//  header block end

//  main block begin

class MyQMouseEventTransition : public QMouseEventTransition {
public:
  virtual ~MyQMouseEventTransition() {}
// void QMouseEventTransition(class QState *)
MyQMouseEventTransition(QState * sourceState) : QMouseEventTransition(sourceState) {}
// void QMouseEventTransition(class QObject *, class QEvent::Type, Qt::MouseButton, class QState *)
MyQMouseEventTransition(QObject * object, QEvent::Type type_, Qt::MouseButton button, QState * sourceState) : QMouseEventTransition(object, type_, button, sourceState) {}
// Protected virtual Visibility=Default Availability=Available
// void onTransition(class QEvent *)
  virtual void onTransition(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onTransition", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMouseEventTransition::onTransition(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool eventTest(class QEvent *)
  virtual bool eventTest(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventTest", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QMouseEventTransition::eventTest(event);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:73
// [-2] void onTransition(class QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN21QMouseEventTransition12onTransitionEP6QEvent(void *this_, QEvent * event) {
  ((QMouseEventTransition*)this_)->QMouseEventTransition::onTransition(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:74
// [1] bool eventTest(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN21QMouseEventTransition9eventTestEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QMouseEventTransition*)this_)->QMouseEventTransition::eventTest(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QMouseEventTransition10metaObjectEv(void *this_) {
  return (void*)((QMouseEventTransition*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:58
// [-2] void QMouseEventTransition(class QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QMouseEventTransitionC2EP6QState(QState * sourceState) {
  auto _nilp = (MyQMouseEventTransition*)(0);
  return  new MyQMouseEventTransition(sourceState);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:59
// [-2] void QMouseEventTransition(class QObject *, class QEvent::Type, Qt::MouseButton, class QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QMouseEventTransitionC2EP7QObjectN6QEvent4TypeEN2Qt11MouseButtonEP6QState(QObject * object, QEvent::Type type_, Qt::MouseButton button, QState * sourceState) {
  auto _nilp = (MyQMouseEventTransition*)(0);
  return  new MyQMouseEventTransition(object, type_, button, sourceState);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:61
// [-2] void ~QMouseEventTransition()
extern "C" Q_DECL_EXPORT
void C_ZN21QMouseEventTransitionD2Ev(void *this_) {
  delete (QMouseEventTransition*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:63
// [4] Qt::MouseButton button()
extern "C" Q_DECL_EXPORT
Qt::MouseButton C_ZNK21QMouseEventTransition6buttonEv(void *this_) {
  return (Qt::MouseButton)((QMouseEventTransition*)this_)->button();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:64
// [-2] void setButton(Qt::MouseButton)
extern "C" Q_DECL_EXPORT
void C_ZN21QMouseEventTransition9setButtonEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  ((QMouseEventTransition*)this_)->setButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:66
// [4] Qt::KeyboardModifiers modifierMask()
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZNK21QMouseEventTransition12modifierMaskEv(void *this_) {
  return (Qt::KeyboardModifiers)((QMouseEventTransition*)this_)->modifierMask();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:67
// [-2] void setModifierMask(Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void C_ZN21QMouseEventTransition15setModifierMaskE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QMouseEventTransition*)this_)->setModifierMask(modifiers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:69
// [8] QPainterPath hitTestPath()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QMouseEventTransition11hitTestPathEv(void *this_) {
  auto rv = ((QMouseEventTransition*)this_)->hitTestPath();
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:70
// [-2] void setHitTestPath(const class QPainterPath &)
extern "C" Q_DECL_EXPORT
void C_ZN21QMouseEventTransition14setHitTestPathERK12QPainterPath(void *this_, QPainterPath* path) {
  ((QMouseEventTransition*)this_)->setHitTestPath(*path);
}

//  main block end
