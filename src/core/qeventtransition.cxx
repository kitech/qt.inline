// /usr/include/qt/QtCore/qeventtransition.h
#include <qeventtransition.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qeventtransition.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK16QEventTransition10metaObjectEv(void *this_) {
  /*return*/ ((QEventTransition*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qeventtransition.h:58
// void QEventTransition(class QState *)
extern "C"
void* C_ZN16QEventTransitionC1EP6QState(QState * sourceState) {
  return new QEventTransition(sourceState);
}
// /usr/include/qt/QtCore/qeventtransition.h:59
// void QEventTransition(class QObject *, class QEvent::Type, class QState *)
extern "C"
void* C_ZN16QEventTransitionC1EP7QObjectN6QEvent4TypeEP6QState(QObject * object, QEvent::Type type, QState * sourceState) {
  return new QEventTransition(object, type, sourceState);
}
// virtual
// /usr/include/qt/QtCore/qeventtransition.h:60
// void ~QEventTransition()
extern "C"
void C_ZN16QEventTransitionD1Ev(void *this_) {
  delete (QEventTransition*)(this_);
}
// /usr/include/qt/QtCore/qeventtransition.h:62
// QObject * eventSource()
extern "C"
void C_ZNK16QEventTransition11eventSourceEv(void *this_) {
  /*return*/ ((QEventTransition*)this_)->eventSource();
}
// /usr/include/qt/QtCore/qeventtransition.h:63
// void setEventSource(class QObject *)
extern "C"
void C_ZN16QEventTransition14setEventSourceEP7QObject(void *this_, QObject * object) {
  ((QEventTransition*)this_)->setEventSource(object);
}
// /usr/include/qt/QtCore/qeventtransition.h:65
// QEvent::Type eventType()
extern "C"
void C_ZNK16QEventTransition9eventTypeEv(void *this_) {
  /*return*/ ((QEventTransition*)this_)->eventType();
}
// /usr/include/qt/QtCore/qeventtransition.h:66
// void setEventType(class QEvent::Type)
extern "C"
void C_ZN16QEventTransition12setEventTypeEN6QEvent4TypeE(void *this_, QEvent::Type type) {
  ((QEventTransition*)this_)->setEventType(type);
}