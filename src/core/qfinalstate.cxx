// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qfinalstate.h
// dst-file: /src/core/qfinalstate.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfinalstate.h>


// <= header block end

// main block begin =>
void __keep_qfinalstate_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFinalState_Class_Size()
{
  return sizeof(QFinalState);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qfinalstate.h', line 49, column 5>
//   // proto:  void QFinalState::QFinalState(QState * parent);
extern "C"
QFinalState*
C_ZN11QFinalStateC2EP6QState(QState * arg1) {
  auto ret = new QFinalState(arg1);
  return ret;
}
//   // proto:  void QFinalState::~QFinalState();
extern "C"
void C_ZN11QFinalStateD2Ev(void *qthis) {
  delete (QFinalState*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfinalstate.h', line 47, column 5>
//   // proto:  const QMetaObject * QFinalState::metaObject();
// _ZNK11QFinalState10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QFinalState10metaObjectEv(void *qthis) {
  auto ret =
  ((QFinalState*)qthis)->metaObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QFinalState_SlotProxy here
class QFinalState_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFinalState_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qfinalstate.moc"

extern "C" {
  QFinalState_SlotProxy* QFinalState_SlotProxy_new()
  {
    return new QFinalState_SlotProxy();
  }
};

// <= body block end

