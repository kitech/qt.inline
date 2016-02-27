// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qstatemachine.h
// dst-file: /src/core/qstatemachine.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstatemachine.h>


#include <qabstractanimation.h>
#include <qlist.h>
#include <qmetaobject.h>
#include <qstate.h>
#include <qabstractstate.h>
#include <qset.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qstatemachine_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStateMachine_Class_Size()
{
  return sizeof(QStateMachine);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 108, column 14>
//   // proto:  void QStateMachine::QStateMachine(QState::ChildMode childMode, QObject * parent);
extern "C"
QStateMachine*
C_ZN13QStateMachineC2EN6QState9ChildModeEP7QObject(QState::ChildMode* arg1,
QObject * arg2) {
  auto ret = new QStateMachine(*((QState::ChildMode*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 125, column 33>
//   // proto:  QList<QAbstractAnimation *> QStateMachine::defaultAnimations();
// _ZNK13QStateMachine17defaultAnimationsEv defaultAnimations()
extern "C"
QList<QAbstractAnimation *>*
C_ZNK13QStateMachine17defaultAnimationsEv(void *qthis) {
  auto ret =
  ((QStateMachine*)qthis)->defaultAnimations();
  return new QList<QAbstractAnimation *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 129, column 27>
//   // proto:  QState::RestorePolicy QStateMachine::globalRestorePolicy();
// _ZNK13QStateMachine19globalRestorePolicyEv globalRestorePolicy()
extern "C"
QState::RestorePolicy
C_ZNK13QStateMachine19globalRestorePolicyEv(void *qthis) {
  auto ret =
  ((QStateMachine*)qthis)->globalRestorePolicy();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 133, column 9>
//   // proto:  int QStateMachine::postDelayedEvent(QEvent * event, int delay);
// _ZN13QStateMachine16postDelayedEventEP6QEventi postDelayedEvent(class QEvent *, int)
extern "C"
int
C_ZN13QStateMachine16postDelayedEventEP6QEventi(void *qthis,
QEvent * arg1,
int arg2) {
  auto ret =
  ((QStateMachine*)qthis)->postDelayedEvent(arg1,
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 136, column 27>
//   // proto:  QSet<QAbstractState *> QStateMachine::configuration();
// _ZNK13QStateMachine13configurationEv configuration()
extern "C"
QSet<QAbstractState *>*
C_ZNK13QStateMachine13configurationEv(void *qthis) {
  auto ret =
  ((QStateMachine*)qthis)->configuration();
  return new QSet<QAbstractState *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 145, column 10>
//   // proto:  void QStateMachine::setRunning(bool running);
// _ZN13QStateMachine10setRunningEb setRunning(_Bool)
extern "C"
void
C_ZN13QStateMachine10setRunningEb(void *qthis,
bool arg1) {
  ((QStateMachine*)qthis)->setRunning(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 124, column 10>
//   // proto:  void QStateMachine::addDefaultAnimation(QAbstractAnimation * animation);
// _ZN13QStateMachine19addDefaultAnimationEP18QAbstractAnimation addDefaultAnimation(class QAbstractAnimation *)
extern "C"
void
C_ZN13QStateMachine19addDefaultAnimationEP18QAbstractAnimation(void *qthis,
QAbstractAnimation * arg1) {
  ((QStateMachine*)qthis)->addDefaultAnimation(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 126, column 10>
//   // proto:  void QStateMachine::removeDefaultAnimation(QAbstractAnimation * animation);
// _ZN13QStateMachine22removeDefaultAnimationEP18QAbstractAnimation removeDefaultAnimation(class QAbstractAnimation *)
extern "C"
void
C_ZN13QStateMachine22removeDefaultAnimationEP18QAbstractAnimation(void *qthis,
QAbstractAnimation * arg1) {
  ((QStateMachine*)qthis)->removeDefaultAnimation(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 130, column 10>
//   // proto:  void QStateMachine::setGlobalRestorePolicy(QState::RestorePolicy restorePolicy);
// _ZN13QStateMachine22setGlobalRestorePolicyEN6QState13RestorePolicyE setGlobalRestorePolicy(class QState::RestorePolicy)
extern "C"
void
C_ZN13QStateMachine22setGlobalRestorePolicyEN6QState13RestorePolicyE(void *qthis,
QState::RestorePolicy* arg1) {
  ((QStateMachine*)qthis)->setGlobalRestorePolicy(*((QState::RestorePolicy*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 132, column 10>
//   // proto:  void QStateMachine::postEvent(QEvent * event, QStateMachine::EventPriority priority);
// _ZN13QStateMachine9postEventEP6QEventNS_13EventPriorityE postEvent(class QEvent *, enum QStateMachine::EventPriority)
extern "C"
void
C_ZN13QStateMachine9postEventEP6QEventNS_13EventPriorityE(void *qthis,
QEvent * arg1,
QStateMachine::EventPriority arg2) {
  ((QStateMachine*)qthis)->postEvent(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 122, column 10>
//   // proto:  void QStateMachine::setAnimated(bool enabled);
// _ZN13QStateMachine11setAnimatedEb setAnimated(_Bool)
extern "C"
void
C_ZN13QStateMachine11setAnimatedEb(void *qthis,
bool arg1) {
  ((QStateMachine*)qthis)->setAnimated(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 107, column 14>
//   // proto:  void QStateMachine::QStateMachine(QObject * parent);
extern "C"
QStateMachine*
C_ZN13QStateMachineC2EP7QObject(QObject * arg1) {
  auto ret = new QStateMachine(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 115, column 13>
//   // proto:  QString QStateMachine::errorString();
// _ZNK13QStateMachine11errorStringEv errorString()
extern "C"
QString*
C_ZNK13QStateMachine11errorStringEv(void *qthis) {
  auto ret =
  ((QStateMachine*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 118, column 10>
//   // proto:  bool QStateMachine::isRunning();
// _ZNK13QStateMachine9isRunningEv isRunning()
extern "C"
bool
C_ZNK13QStateMachine9isRunningEv(void *qthis) {
  auto ret =
  ((QStateMachine*)qthis)->isRunning();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 134, column 10>
//   // proto:  bool QStateMachine::cancelDelayedEvent(int id);
// _ZN13QStateMachine18cancelDelayedEventEi cancelDelayedEvent(int)
extern "C"
bool
C_ZN13QStateMachine18cancelDelayedEventEi(void *qthis,
int arg1) {
  auto ret =
  ((QStateMachine*)qthis)->cancelDelayedEvent(arg1);
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QStateMachine::~QStateMachine();
extern "C"
void C_ZN13QStateMachineD2Ev(void *qthis) {
  delete (QStateMachine*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 54, column 5>
//   // proto:  const QMetaObject * QStateMachine::metaObject();
// _ZNK13QStateMachine10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QStateMachine10metaObjectEv(void *qthis) {
  auto ret =
  ((QStateMachine*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 150, column 10>
//   // proto:  void QStateMachine::runningChanged(bool running);
// _ZN13QStateMachine14runningChangedEb runningChanged(_Bool)
extern "C"
void
C_ZN13QStateMachine14runningChangedEb(void *qthis,
bool arg1) {
  ((QStateMachine*)qthis)->runningChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 111, column 10>
//   // proto:  void QStateMachine::addState(QAbstractState * state);
// _ZN13QStateMachine8addStateEP14QAbstractState addState(class QAbstractState *)
extern "C"
void
C_ZN13QStateMachine8addStateEP14QAbstractState(void *qthis,
QAbstractState * arg1) {
  ((QStateMachine*)qthis)->addState(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 116, column 10>
//   // proto:  void QStateMachine::clearError();
// _ZN13QStateMachine10clearErrorEv clearError()
extern "C"
void
C_ZN13QStateMachine10clearErrorEv(void *qthis) {
  ((QStateMachine*)qthis)->clearError();
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 112, column 10>
//   // proto:  void QStateMachine::removeState(QAbstractState * state);
// _ZN13QStateMachine11removeStateEP14QAbstractState removeState(class QAbstractState *)
extern "C"
void
C_ZN13QStateMachine11removeStateEP14QAbstractState(void *qthis,
QAbstractState * arg1) {
  ((QStateMachine*)qthis)->removeState(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 144, column 10>
//   // proto:  void QStateMachine::stop();
// _ZN13QStateMachine4stopEv stop()
extern "C"
void
C_ZN13QStateMachine4stopEv(void *qthis) {
  ((QStateMachine*)qthis)->stop();
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 121, column 10>
//   // proto:  bool QStateMachine::isAnimated();
// _ZNK13QStateMachine10isAnimatedEv isAnimated()
extern "C"
bool
C_ZNK13QStateMachine10isAnimatedEv(void *qthis) {
  auto ret =
  ((QStateMachine*)qthis)->isAnimated();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 143, column 10>
//   // proto:  void QStateMachine::start();
// _ZN13QStateMachine5startEv start()
extern "C"
void
C_ZN13QStateMachine5startEv(void *qthis) {
  ((QStateMachine*)qthis)->start();
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 114, column 11>
//   // proto:  QStateMachine::Error QStateMachine::error();
// _ZNK13QStateMachine5errorEv error()
extern "C"
QStateMachine::Error
C_ZNK13QStateMachine5errorEv(void *qthis) {
  auto ret =
  ((QStateMachine*)qthis)->error();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qstatemachine.h', line 139, column 10>
//   // proto:  bool QStateMachine::eventFilter(QObject * watched, QEvent * event);
// _ZN13QStateMachine11eventFilterEP7QObjectP6QEvent eventFilter(class QObject *, class QEvent *)
extern "C"
bool
C_ZN13QStateMachine11eventFilterEP7QObjectP6QEvent(void *qthis,
QObject * arg1,
QEvent * arg2) {
  auto ret =
  ((QStateMachine*)qthis)->eventFilter(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QStateMachine_SlotProxy here
class QStateMachine_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStateMachine_SlotProxy():QObject(){}

public slots:
  // runningChanged(_Bool)
  void slot_proxy_func__ZN13QStateMachine14runningChangedEb(bool arg0);
public:
  void (*slot_func__ZN13QStateMachine14runningChangedEb)(void* rsfptr, bool arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qstatemachine.moc"

extern "C" {
  QStateMachine_SlotProxy* QStateMachine_SlotProxy_new()
  {
    return new QStateMachine_SlotProxy();
  }
};

void QStateMachine_SlotProxy::slot_proxy_func__ZN13QStateMachine14runningChangedEb(bool arg0) {
  if (this->slot_func__ZN13QStateMachine14runningChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN13QStateMachine14runningChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QStateMachine_SlotProxy_connect__ZN13QStateMachine14runningChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStateMachine_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QStateMachine14runningChangedEb = (decltype(that->slot_func__ZN13QStateMachine14runningChangedEb))ffifptr;
  QObject::connect((QStateMachine*)sender, SIGNAL(runningChanged(_Bool)), that, SLOT(slot_proxy_func__ZN13QStateMachine14runningChangedEb(bool arg0)));
  return that;
}
extern "C"
void QStateMachine_SlotProxy_disconnect__ZN13QStateMachine14runningChangedEb(QStateMachine_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

