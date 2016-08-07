// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qhistorystate.h
// dst-file: /src/core/qhistorystate.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qhistorystate.h>


// <= header block end

// main block begin =>
void __keep_qhistorystate_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QHistoryState_Class_Size()
{
  return sizeof(QHistoryState);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qhistorystate.h', line 54, column 5>
//   // proto:  const QMetaObject * QHistoryState::metaObject();
// _ZNK13QHistoryState10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QHistoryState10metaObjectEv(void *qthis) {
  auto ret =
  ((QHistoryState*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qhistorystate.h', line 75, column 17>
//   // proto:  QHistoryState::HistoryType QHistoryState::historyType();
// _ZNK13QHistoryState11historyTypeEv historyType()
extern "C"
QHistoryState::HistoryType
C_ZNK13QHistoryState11historyTypeEv(void *qthis) {
  auto ret =
  ((QHistoryState*)qthis)->historyType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qhistorystate.h', line 76, column 10>
//   // proto:  void QHistoryState::setHistoryType(QHistoryState::HistoryType type);
// _ZN13QHistoryState14setHistoryTypeENS_11HistoryTypeE setHistoryType(enum QHistoryState::HistoryType)
extern "C"
void
C_ZN13QHistoryState14setHistoryTypeENS_11HistoryTypeE(void *qthis,
QHistoryState::HistoryType arg1) {
  ((QHistoryState*)qthis)->setHistoryType(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qhistorystate.h', line 69, column 26>
//   // proto:  QAbstractTransition * QHistoryState::defaultTransition();
// _ZNK13QHistoryState17defaultTransitionEv defaultTransition()
extern "C"
void*
C_ZNK13QHistoryState17defaultTransitionEv(void *qthis) {
  auto ret =
  ((QHistoryState*)qthis)->defaultTransition();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qhistorystate.h', line 73, column 10>
//   // proto:  void QHistoryState::setDefaultState(QAbstractState * state);
// _ZN13QHistoryState15setDefaultStateEP14QAbstractState setDefaultState(class QAbstractState *)
extern "C"
void
C_ZN13QHistoryState15setDefaultStateEP14QAbstractState(void *qthis,
QAbstractState * arg1) {
  ((QHistoryState*)qthis)->setDefaultState(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qhistorystate.h', line 66, column 5>
//   // proto:  void QHistoryState::QHistoryState(QHistoryState::HistoryType type, QState * parent);
extern "C"
QHistoryState*
C_ZN13QHistoryStateC2ENS_11HistoryTypeEP6QState(QHistoryState::HistoryType arg1,
QState * arg2) {
  auto ret = new QHistoryState(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qhistorystate.h', line 65, column 5>
//   // proto:  void QHistoryState::QHistoryState(QState * parent);
extern "C"
QHistoryState*
C_ZN13QHistoryStateC2EP6QState(QState * arg1) {
  auto ret = new QHistoryState(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qhistorystate.h', line 72, column 21>
//   // proto:  QAbstractState * QHistoryState::defaultState();
// _ZNK13QHistoryState12defaultStateEv defaultState()
extern "C"
void*
C_ZNK13QHistoryState12defaultStateEv(void *qthis) {
  auto ret =
  ((QHistoryState*)qthis)->defaultState();
  return (void*)ret;
}
//   // proto:  void QHistoryState::~QHistoryState();
extern "C"
void C_ZN13QHistoryStateD2Ev(void *qthis) {
  delete (QHistoryState*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qhistorystate.h', line 70, column 10>
//   // proto:  void QHistoryState::setDefaultTransition(QAbstractTransition * transition);
// _ZN13QHistoryState20setDefaultTransitionEP19QAbstractTransition setDefaultTransition(class QAbstractTransition *)
extern "C"
void
C_ZN13QHistoryState20setDefaultTransitionEP19QAbstractTransition(void *qthis,
QAbstractTransition * arg1) {
  ((QHistoryState*)qthis)->setDefaultTransition(arg1);
}
// <= ext block end

// body block begin =>
// QHistoryState_SlotProxy here
class QHistoryState_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QHistoryState_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qhistorystate.moc"

extern "C" {
  QHistoryState_SlotProxy* QHistoryState_SlotProxy_new()
  {
    return new QHistoryState_SlotProxy();
  }
};

// <= body block end

