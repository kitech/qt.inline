// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qstatemachine.h
// dst-file: /src/core/qstatemachine.cxx
//

// header block begin =>
#include <qstatemachine.h>

extern "C" {

// QStateMachine(class QState::ChildMode, class QObject *)
QStateMachine* dector_ZN13QStateMachineC1EN6QState9ChildModeEP7QObject(QState::ChildMode childMode, QObject * parent)
{
  // static_assert(sizeof(QStateMachine) == 32, "tyszerr");
  QStateMachine* rthis = new QStateMachine(childMode, parent);
  return rthis;
}

// QStateMachine(class QObject *)
QStateMachine* dector_ZN13QStateMachineC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QStateMachine) == 32, "tyszerr");
  QStateMachine* rthis = new QStateMachine(parent);
  return rthis;
}

// ~QStateMachine()
void dedtor_ZN13QStateMachineD0Ev(QStateMachine* that)
{
  QStateMachine* rthis = (QStateMachine*)that;
  delete rthis;
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
// <= body block end

