// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qeventtransition.h
// dst-file: /src/core/qeventtransition.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qeventtransition.h>


#include <qcoreevent.h>
// <= header block end

// main block begin =>
void __keep_qeventtransition_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QEventTransition_Class_Size()
{
  return sizeof(QEventTransition);
}

// <= use block end

// ext block begin =>
//   // proto:  void QEventTransition::~QEventTransition();
extern "C"
void C_ZN16QEventTransitionD2Ev(void *qthis) {
  delete (QEventTransition*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventtransition.h', line 57, column 10>
//   // proto:  void QEventTransition::setEventSource(QObject * object);
// _ZN16QEventTransition14setEventSourceEP7QObject setEventSource(class QObject *)
extern "C"
void
C_ZN16QEventTransition14setEventSourceEP7QObject(void *qthis,
QObject * arg1) {
  ((QEventTransition*)qthis)->setEventSource(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventtransition.h', line 53, column 5>
//   // proto:  void QEventTransition::QEventTransition(QObject * object, QEvent::Type type, QState * sourceState);
extern "C"
QEventTransition*
C_ZN16QEventTransitionC2EP7QObjectN6QEvent4TypeEP6QState(QObject * arg1,
QEvent::Type* arg2,
QState * arg3) {
  auto ret = new QEventTransition(arg1,
*((QEvent::Type*)arg2),
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventtransition.h', line 59, column 18>
//   // proto:  QEvent::Type QEventTransition::eventType();
// _ZNK16QEventTransition9eventTypeEv eventType()
extern "C"
QEvent::Type
C_ZNK16QEventTransition9eventTypeEv(void *qthis) {
  auto ret =
  ((QEventTransition*)qthis)->eventType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventtransition.h', line 52, column 5>
//   // proto:  void QEventTransition::QEventTransition(QState * sourceState);
extern "C"
QEventTransition*
C_ZN16QEventTransitionC2EP6QState(QState * arg1) {
  auto ret = new QEventTransition(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventtransition.h', line 48, column 5>
//   // proto:  const QMetaObject * QEventTransition::metaObject();
// _ZNK16QEventTransition10metaObjectEv metaObject()
extern "C"
void*
C_ZNK16QEventTransition10metaObjectEv(void *qthis) {
  auto ret =
  ((QEventTransition*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventtransition.h', line 60, column 10>
//   // proto:  void QEventTransition::setEventType(QEvent::Type type);
// _ZN16QEventTransition12setEventTypeEN6QEvent4TypeE setEventType(class QEvent::Type)
extern "C"
void
C_ZN16QEventTransition12setEventTypeEN6QEvent4TypeE(void *qthis,
QEvent::Type* arg1) {
  ((QEventTransition*)qthis)->setEventType(*((QEvent::Type*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qeventtransition.h', line 56, column 14>
//   // proto:  QObject * QEventTransition::eventSource();
// _ZNK16QEventTransition11eventSourceEv eventSource()
extern "C"
void*
C_ZNK16QEventTransition11eventSourceEv(void *qthis) {
  auto ret =
  ((QEventTransition*)qthis)->eventSource();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QEventTransition_SlotProxy here
class QEventTransition_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QEventTransition_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qeventtransition.moc"

extern "C" {
  QEventTransition_SlotProxy* QEventTransition_SlotProxy_new()
  {
    return new QEventTransition_SlotProxy();
  }
};

// <= body block end

