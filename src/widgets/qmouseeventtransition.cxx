// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtWidgets/qmouseeventtransition.h
// dst-file: /src/widgets/qmouseeventtransition.cxx
//

// header block begin =>
#include <qmouseeventtransition.h>

extern "C" {

int QMouseEventTransition_Class_Size()
{
  return sizeof(QMouseEventTransition);
}

// QMouseEventTransition(class QState *)
QMouseEventTransition* dector_ZN21QMouseEventTransitionC1EP6QState(QState * sourceState)
{
  // static_assert(sizeof(QMouseEventTransition) == 32, "tyszerr");
  QMouseEventTransition* rthis = new QMouseEventTransition(sourceState);
  return rthis;
}

// QMouseEventTransition(class QObject *, class QEvent::Type, Qt::MouseButton, class QState *)
QMouseEventTransition* dector_ZN21QMouseEventTransitionC1EP7QObjectN6QEvent4TypeEN2Qt11MouseButtonEP6QState(QObject * object, QEvent::Type type, Qt::MouseButton button, QState * sourceState)
{
  // static_assert(sizeof(QMouseEventTransition) == 32, "tyszerr");
  QMouseEventTransition* rthis = new QMouseEventTransition(object, type, button, sourceState);
  return rthis;
}

// ~QMouseEventTransition()
void dedtor_ZN21QMouseEventTransitionD0Ev(QMouseEventTransition* that)
{
  QMouseEventTransition* rthis = (QMouseEventTransition*)that;
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

