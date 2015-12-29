// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qfinalstate.h
// dst-file: /src/core/qfinalstate.cxx
//

// header block begin =>
#include <qfinalstate.h>

extern "C" {

int QFinalState_Class_Size()
{
  return sizeof(QFinalState);
}

// QFinalState(class QState *)
QFinalState* dector_ZN11QFinalStateC1EP6QState(QState * parent)
{
  // static_assert(sizeof(QFinalState) == 32, "tyszerr");
  QFinalState* rthis = new QFinalState(parent);
  return rthis;
}

// ~QFinalState()
void dedtor_ZN11QFinalStateD0Ev(QFinalState* that)
{
  QFinalState* rthis = (QFinalState*)that;
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

