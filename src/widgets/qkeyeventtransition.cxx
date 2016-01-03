// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtWidgets/qkeyeventtransition.h
// dst-file: /src/widgets/qkeyeventtransition.cxx
//

// header block begin =>
#include <qkeyeventtransition.h>

extern "C" {

int QKeyEventTransition_Class_Size()
{
  return sizeof(QKeyEventTransition);
}

// ~QKeyEventTransition()
void dedtor_ZN19QKeyEventTransitionD0Ev(QKeyEventTransition* that)
{
  QKeyEventTransition* rthis = (QKeyEventTransition*)that;
  delete rthis;
}

// QKeyEventTransition(class QObject *, class QEvent::Type, int, class QState *)
QKeyEventTransition* dector_ZN19QKeyEventTransitionC1EP7QObjectN6QEvent4TypeEiP6QState(QObject * object, QEvent::Type type, int key, QState * sourceState)
{
  // static_assert(sizeof(QKeyEventTransition) == 32, "tyszerr");
  QKeyEventTransition* rthis = new QKeyEventTransition(object, type, key, sourceState);
  return rthis;
}

// QKeyEventTransition(class QState *)
QKeyEventTransition* dector_ZN19QKeyEventTransitionC1EP6QState(QState * sourceState)
{
  // static_assert(sizeof(QKeyEventTransition) == 32, "tyszerr");
  QKeyEventTransition* rthis = new QKeyEventTransition(sourceState);
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
// QKeyEventTransition_SlotProxy here
class QKeyEventTransition_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QKeyEventTransition_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qkeyeventtransition.moc"

extern "C" {
  QKeyEventTransition_SlotProxy* QKeyEventTransition_SlotProxy_new()
  {
    return new QKeyEventTransition_SlotProxy();
  }
};

// <= body block end

