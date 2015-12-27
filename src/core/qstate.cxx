// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qstate.h
// dst-file: /src/core/qstate.cxx
//

// header block begin =>
#include <qstate.h>

extern "C" {

int QState_Class_Size()
{
  return sizeof(QState);
}

// ~QState()
void dedtor_ZN6QStateD0Ev(QState* that)
{
  QState* rthis = (QState*)that;
  delete rthis;
}

// QState(enum QState::ChildMode, class QState *)
QState* dector_ZN6QStateC1ENS_9ChildModeEPS_(QState::ChildMode childMode, QState * parent)
{
  // static_assert(sizeof(QState) == 32, "tyszerr");
  QState* rthis = new QState(childMode, parent);
  return rthis;
}

// QState(class QState *)
QState* dector_ZN6QStateC1EPS_(QState * parent)
{
  // static_assert(sizeof(QState) == 32, "tyszerr");
  QState* rthis = new QState(parent);
  return rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QState_SlotProxy here
class QState_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QState_SlotProxy():QObject(){}

};
#include "src/core/qstate.moc"

extern "C" {
  QState_SlotProxy* QState_SlotProxy_new()
  {
    return new QState_SlotProxy();
  }
};

// <= body block end

