// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qhistorystate.h
// dst-file: /src/core/qhistorystate.cxx
//

// header block begin =>
#include <qhistorystate.h>

extern "C" {

int QHistoryState_Class_Size()
{
  return sizeof(QHistoryState);
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

// ~QHistoryState()
void dedtor_ZN13QHistoryStateD0Ev(QHistoryState* that)
{
  QHistoryState* rthis = (QHistoryState*)that;
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

