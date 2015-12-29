// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qeventtransition.h
// dst-file: /src/core/qeventtransition.cxx
//

// header block begin =>
#include <qeventtransition.h>

extern "C" {

int QEventTransition_Class_Size()
{
  return sizeof(QEventTransition);
}

// ~QEventTransition()
void dedtor_ZN16QEventTransitionD0Ev(QEventTransition* that)
{
  QEventTransition* rthis = (QEventTransition*)that;
  delete rthis;
}

// QEventTransition(class QObject *, class QEvent::Type, class QState *)
QEventTransition* dector_ZN16QEventTransitionC1EP7QObjectN6QEvent4TypeEP6QState(QObject * object, QEvent::Type type, QState * sourceState)
{
  // static_assert(sizeof(QEventTransition) == 32, "tyszerr");
  QEventTransition* rthis = new QEventTransition(object, type, sourceState);
  return rthis;
}

// QEventTransition(class QState *)
QEventTransition* dector_ZN16QEventTransitionC1EP6QState(QState * sourceState)
{
  // static_assert(sizeof(QEventTransition) == 32, "tyszerr");
  QEventTransition* rthis = new QEventTransition(sourceState);
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
// QEventTransition_SlotProxy here
class QEventTransition_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QEventTransition_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qeventtransition.moc"

extern "C" {
  QEventTransition_SlotProxy* QEventTransition_SlotProxy_new()
  {
    return new QEventTransition_SlotProxy();
  }
};

// <= body block end

