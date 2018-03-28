//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qeventtransition.h
#ifndef protected
#define protected public
#endif
#include <qeventtransition.h>
#include <QtCore>
#include "callback_inherit.h"

// QEventTransition is pure virtual: false
// QEventTransition has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQEventTransition : public QEventTransition {
public:
  virtual ~MyQEventTransition() {}
// void QEventTransition(QState *)
MyQEventTransition(QState * sourceState) : QEventTransition(sourceState) {}
// void QEventTransition(QObject *, QEvent::Type, QState *)
MyQEventTransition(QObject * object, QEvent::Type type_, QState * sourceState) : QEventTransition(object, type_, sourceState) {}
// Protected virtual Visibility=Default Availability=Available
// bool eventTest(QEvent *)
  virtual bool eventTest(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventTest", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QEventTransition::eventTest(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void onTransition(QEvent *)
  virtual void onTransition(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onTransition", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QEventTransition::onTransition(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QEventTransition::event(e);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:68
// [1] bool eventTest(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QEventTransition9eventTestEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QEventTransition*)this_)->QEventTransition::eventTest(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:69
// [-2] void onTransition(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QEventTransition12onTransitionEP6QEvent(void *this_, QEvent * event) {
  ((QEventTransition*)this_)->QEventTransition::onTransition(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:71
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QEventTransition5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QEventTransition*)this_)->QEventTransition::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QEventTransition10metaObjectEv(void *this_) {
  return (void*)((QEventTransition*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:57
// [-2] void QEventTransition(QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QEventTransitionC2EP6QState(QState * sourceState) {
  auto _nilp = (MyQEventTransition*)(0);
  return  new MyQEventTransition(sourceState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:58
// [-2] void QEventTransition(QObject *, QEvent::Type, QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QEventTransitionC2EP7QObjectN6QEvent4TypeEP6QState(QObject * object, QEvent::Type type_, QState * sourceState) {
  auto _nilp = (MyQEventTransition*)(0);
  return  new MyQEventTransition(object, type_, sourceState);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:59
// [-2] void ~QEventTransition()
extern "C" Q_DECL_EXPORT
void C_ZN16QEventTransitionD2Ev(void *this_) {
  delete (QEventTransition*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:61
// [8] QObject * eventSource()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QEventTransition11eventSourceEv(void *this_) {
  return (void*)((QEventTransition*)this_)->eventSource();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:62
// [-2] void setEventSource(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN16QEventTransition14setEventSourceEP7QObject(void *this_, QObject * object) {
  ((QEventTransition*)this_)->setEventSource(object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:64
// [4] QEvent::Type eventType()
extern "C" Q_DECL_EXPORT
QEvent::Type C_ZNK16QEventTransition9eventTypeEv(void *this_) {
  return (QEvent::Type)((QEventTransition*)this_)->eventType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:65
// [-2] void setEventType(QEvent::Type)
extern "C" Q_DECL_EXPORT
void C_ZN16QEventTransition12setEventTypeEN6QEvent4TypeE(void *this_, QEvent::Type type_) {
  ((QEventTransition*)this_)->setEventType(type_);
}

//  main block end
