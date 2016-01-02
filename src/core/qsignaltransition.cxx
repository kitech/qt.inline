// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
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

// ~QSignalTransition()
void dedtor_ZN17QSignalTransitionD0Ev(QSignalTransition* that)
{
  QSignalTransition* rthis = (QSignalTransition*)that;
  delete rthis;
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

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QSignalTransition_SlotProxy here
class QSignalTransition_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSignalTransition_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qsignaltransition.moc"

extern "C" {
  QSignalTransition_SlotProxy* QSignalTransition_SlotProxy_new()
  {
    return new QSignalTransition_SlotProxy();
  }
};

// <= body block end

