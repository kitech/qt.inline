//  header block begin
// /usr/include/qt/QtWidgets/qmouseeventtransition.h
#include <qmouseeventtransition.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QMouseEventTransition is pure virtual: false
// QMouseEventTransition has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN21QMouseEventTransition12onTransitionEP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN21QMouseEventTransition12onTransitionEP6QEvent(void*cbfn)
// { callback_ZN21QMouseEventTransition12onTransitionEP6QEvent_fnptr = cbfn; }
// void* callback_ZN21QMouseEventTransition9eventTestEP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN21QMouseEventTransition9eventTestEP6QEvent(void*cbfn)
// { callback_ZN21QMouseEventTransition9eventTestEP6QEvent_fnptr = cbfn; }

class MyQMouseEventTransition : public QMouseEventTransition {
public:
  virtual ~MyQMouseEventTransition() {}
// void QMouseEventTransition(class QState *)
MyQMouseEventTransition(QState * sourceState) : QMouseEventTransition(sourceState) {}
// void QMouseEventTransition(class QObject *, class QEvent::Type, Qt::MouseButton, class QState *)
MyQMouseEventTransition(QObject * object, QEvent::Type type, Qt::MouseButton button, QState * sourceState) : QMouseEventTransition(object, type, button, sourceState) {}
// void onTransition(class QEvent *)
  virtual void onTransition(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onTransition", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN21QMouseEventTransition12onTransitionEP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , event);
    // }
    QMouseEventTransition::onTransition(event);
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
    // auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN21QMouseEventTransition9eventTestEP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , event);
    // }
    return QMouseEventTransition::eventTest(event);
  }
  }
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
void* C_ZN21QMouseEventTransitionC2EP6QState(QState * sourceState) {
  auto _nilp = (MyQMouseEventTransition*)(0);
  return  new MyQMouseEventTransition(sourceState);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:59
// [-2] void QMouseEventTransition(class QObject *, class QEvent::Type, Qt::MouseButton, class QState *)
extern "C"
void* C_ZN21QMouseEventTransitionC2EP7QObjectN6QEvent4TypeEN2Qt11MouseButtonEP6QState(QObject * object, QEvent::Type type, Qt::MouseButton button, QState * sourceState) {
  auto _nilp = (MyQMouseEventTransition*)(0);
  return  new MyQMouseEventTransition(object, type, button, sourceState);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:61
// [-2] void ~QMouseEventTransition()
extern "C"
void C_ZN21QMouseEventTransitionD2Ev(void *this_) {
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
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:67
// [-2] void setModifierMask(Qt::KeyboardModifiers)
extern "C"
void C_ZN21QMouseEventTransition15setModifierMaskE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QMouseEventTransition*)this_)->setModifierMask(modifiers);
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
void C_ZN21QMouseEventTransition14setHitTestPathERK12QPainterPath(void *this_, QPainterPath* path) {
  ((QMouseEventTransition*)this_)->setHitTestPath(*path);
}
//  main block end
