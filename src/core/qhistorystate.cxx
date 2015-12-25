// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qhistorystate.h
// dst-file: /src/core/qhistorystate.cxx
//

// header block begin =>
#include <qhistorystate.h>

extern "C" {

// ~QHistoryState()
void dedtor_ZN13QHistoryStateD0Ev(QHistoryState* that)
{
  QHistoryState* rthis = (QHistoryState*)that;
  delete rthis;
}

// QHistoryState(enum QHistoryState::HistoryType, class QState *)
QHistoryState* dector_ZN13QHistoryStateC1ENS_11HistoryTypeEP6QState(QHistoryState::HistoryType type, QState * parent)
{
  // static_assert(sizeof(QHistoryState) == 32, "tyszerr");
  QHistoryState* rthis = new QHistoryState(type, parent);
  return rthis;
}

// QHistoryState(class QState *)
QHistoryState* dector_ZN13QHistoryStateC1EP6QState(QState * parent)
{
  // static_assert(sizeof(QHistoryState) == 32, "tyszerr");
  QHistoryState* rthis = new QHistoryState(parent);
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

