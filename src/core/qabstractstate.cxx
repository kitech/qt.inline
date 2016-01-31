// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qabstractstate.h
// dst-file: /src/core/qabstractstate.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstractstate.h>


// <= header block end

// main block begin =>
void __keep_qabstractstate_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAbstractState_Class_Size()
{
  return sizeof(QAbstractState);
}

// <= use block end

// ext block begin =>
//   // proto:  void QAbstractState::~QAbstractState();
extern "C"
void C_ZN14QAbstractStateD2Ev(void *qthis) {
  delete (QAbstractState*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractstate.h', line 50, column 5>
//   // proto:  const QMetaObject * QAbstractState::metaObject();
// _ZNK14QAbstractState10metaObjectEv metaObject()
extern "C"
void*
C_ZNK14QAbstractState10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractState*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractstate.h', line 55, column 13>
//   // proto:  QState * QAbstractState::parentState();
// _ZNK14QAbstractState11parentStateEv parentState()
extern "C"
void*
C_ZNK14QAbstractState11parentStateEv(void *qthis) {
  auto ret =
  ((QAbstractState*)qthis)->parentState();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractstate.h', line 56, column 20>
//   // proto:  QStateMachine * QAbstractState::machine();
// _ZNK14QAbstractState7machineEv machine()
extern "C"
void*
C_ZNK14QAbstractState7machineEv(void *qthis) {
  auto ret =
  ((QAbstractState*)qthis)->machine();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractstate.h', line 63, column 10>
//   // proto:  void QAbstractState::activeChanged(bool active);
// _ZN14QAbstractState13activeChangedEb activeChanged(_Bool)
extern "C"
void
C_ZN14QAbstractState13activeChangedEb(void *qthis,
bool arg1) {
  ((QAbstractState*)qthis)->activeChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractstate.h', line 58, column 10>
//   // proto:  bool QAbstractState::active();
// _ZNK14QAbstractState6activeEv active()
extern "C"
bool
C_ZNK14QAbstractState6activeEv(void *qthis) {
  auto ret =
  ((QAbstractState*)qthis)->active();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QAbstractState_SlotProxy here
class QAbstractState_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractState_SlotProxy():QObject(){}

public slots:
  // activeChanged(_Bool)
  void slot_proxy_func__ZN14QAbstractState13activeChangedEb(bool arg0);
public:
  void (*slot_func__ZN14QAbstractState13activeChangedEb)(void* rsfptr, bool arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qabstractstate.moc"

extern "C" {
  QAbstractState_SlotProxy* QAbstractState_SlotProxy_new()
  {
    return new QAbstractState_SlotProxy();
  }
};

void QAbstractState_SlotProxy::slot_proxy_func__ZN14QAbstractState13activeChangedEb(bool arg0) {
  if (this->slot_func__ZN14QAbstractState13activeChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN14QAbstractState13activeChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractState_SlotProxy_connect__ZN14QAbstractState13activeChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractState_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QAbstractState13activeChangedEb = (decltype(that->slot_func__ZN14QAbstractState13activeChangedEb))ffifptr;
  QObject::connect((QAbstractState*)sender, SIGNAL(activeChanged(_Bool)), that, SLOT(slot_proxy_func__ZN14QAbstractState13activeChangedEb(bool arg0)));
  return that;
}
extern "C"
void QAbstractState_SlotProxy_disconnect__ZN14QAbstractState13activeChangedEb(QAbstractState_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

