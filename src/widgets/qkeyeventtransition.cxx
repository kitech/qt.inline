// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
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
// <= body block end

