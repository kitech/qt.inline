// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qstate.h
// dst-file: /src/core/qstate.cxx
//

// header block begin =>
#include <qstate.h>

extern "C" {

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
// <= body block end

