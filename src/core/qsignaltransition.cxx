// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qsignaltransition.h
// dst-file: /src/core/qsignaltransition.cxx
//

// header block begin =>
#include <qsignaltransition.h>

extern "C" {

int QSignalTransition_Class_Size()
{
  return sizeof(QSignalTransition);
}

// QSignalTransition(const class QObject *, const char *, class QState *)
QSignalTransition* dector_ZN17QSignalTransitionC1EPK7QObjectPKcP6QState(const QObject * sender, const char * signal, QState * sourceState)
{
  // static_assert(sizeof(QSignalTransition) == 32, "tyszerr");
  QSignalTransition* rthis = new QSignalTransition(sender, signal, sourceState);
  return rthis;
}

// QSignalTransition(class QState *)
QSignalTransition* dector_ZN17QSignalTransitionC1EP6QState(QState * sourceState)
{
  // static_assert(sizeof(QSignalTransition) == 32, "tyszerr");
  QSignalTransition* rthis = new QSignalTransition(sourceState);
  return rthis;
}

// ~QSignalTransition()
void dedtor_ZN17QSignalTransitionD0Ev(QSignalTransition* that)
{
  QSignalTransition* rthis = (QSignalTransition*)that;
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

