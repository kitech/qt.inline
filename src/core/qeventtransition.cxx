//  header block begin
// /usr/include/qt/QtCore/qeventtransition.h
#include <qeventtransition.h>
#include <QtCore>

// QEventTransition is pure virtual: false
// QEventTransition has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:68
// [1] bool eventTest(class QEvent *)
extern "C"
void* callback_ZN16QEventTransition9eventTestEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN16QEventTransition9eventTestEP6QEvent(void*cbfn)
{ callback_ZN16QEventTransition9eventTestEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:69
// [-2] void onTransition(class QEvent *)
extern "C"
void* callback_ZN16QEventTransition12onTransitionEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN16QEventTransition12onTransitionEP6QEvent(void*cbfn)
{ callback_ZN16QEventTransition12onTransitionEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:71
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN16QEventTransition5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN16QEventTransition5eventEP6QEvent(void*cbfn)
{ callback_ZN16QEventTransition5eventEP6QEvent_fnptr = cbfn; }

class MyQEventTransition : public QEventTransition {
public:
  virtual ~MyQEventTransition() {}
// void QEventTransition(class QState *)
MyQEventTransition(QState * sourceState) : QEventTransition(sourceState) {}
// void QEventTransition(class QObject *, class QEvent::Type, class QState *)
MyQEventTransition(QObject * object, QEvent::Type type, QState * sourceState) : QEventTransition(object, type, sourceState) {}
// bool eventTest(class QEvent *)
  virtual bool eventTest(QEvent * event) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN16QEventTransition9eventTestEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    return QEventTransition::eventTest(event);
  }
// void onTransition(class QEvent *)
  virtual void onTransition(QEvent * event) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN16QEventTransition12onTransitionEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    QEventTransition::onTransition(event);
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN16QEventTransition5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , e);
    }
    return QEventTransition::event(e);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK16QEventTransition10metaObjectEv(void *this_) {
  return (void*)((QEventTransition*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:57
// [-2] void QEventTransition(class QState *)
extern "C"
void* C_ZN16QEventTransitionC2EP6QState(QState * sourceState) {
  auto _nilp = (MyQEventTransition*)(0);
  return  new MyQEventTransition(sourceState);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:58
// [-2] void QEventTransition(class QObject *, class QEvent::Type, class QState *)
extern "C"
void* C_ZN16QEventTransitionC2EP7QObjectN6QEvent4TypeEP6QState(QObject * object, QEvent::Type type, QState * sourceState) {
  auto _nilp = (MyQEventTransition*)(0);
  return  new MyQEventTransition(object, type, sourceState);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:59
// [-2] void ~QEventTransition()
extern "C"
void C_ZN16QEventTransitionD2Ev(void *this_) {
  delete (QEventTransition*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:61
// [8] QObject * eventSource()
extern "C"
void* C_ZNK16QEventTransition11eventSourceEv(void *this_) {
  return (void*)((QEventTransition*)this_)->eventSource();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:62
// [-2] void setEventSource(class QObject *)
extern "C"
void C_ZN16QEventTransition14setEventSourceEP7QObject(void *this_, QObject * object) {
  ((QEventTransition*)this_)->setEventSource(object);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:64
// [4] QEvent::Type eventType()
extern "C"
QEvent::Type C_ZNK16QEventTransition9eventTypeEv(void *this_) {
  return (QEvent::Type)((QEventTransition*)this_)->eventType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:65
// [-2] void setEventType(class QEvent::Type)
extern "C"
void C_ZN16QEventTransition12setEventTypeEN6QEvent4TypeE(void *this_, QEvent::Type type) {
  ((QEventTransition*)this_)->setEventType(type);
}
//  main block end
