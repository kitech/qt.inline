// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qprocess.h
// dst-file: /src/core/qprocess.cxx
//

// header block begin =>
#include <qprocess.h>

extern "C" {

// ~QProcess()
void dedtor_ZN8QProcessD0Ev(QProcess* that)
{
  QProcess* rthis = (QProcess*)that;
  delete rthis;
}

// QProcess(class QObject *)
QProcess* dector_ZN8QProcessC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QProcess) == 32, "tyszerr");
  QProcess* rthis = new QProcess(parent);
  return rthis;
}

// ~QProcessEnvironment()
void dedtor_ZN19QProcessEnvironmentD0Ev(QProcessEnvironment* that)
{
  QProcessEnvironment* rthis = (QProcessEnvironment*)that;
  delete rthis;
}

// QProcessEnvironment(const class QProcessEnvironment &)
QProcessEnvironment* dector_ZN19QProcessEnvironmentC1ERKS_(const QProcessEnvironment & other)
{
  // static_assert(sizeof(QProcessEnvironment) == 32, "tyszerr");
  QProcessEnvironment* rthis = new QProcessEnvironment(other);
  return rthis;
}

// QProcessEnvironment()
QProcessEnvironment* dector_ZN19QProcessEnvironmentC1Ev()
{
  // static_assert(sizeof(QProcessEnvironment) == 32, "tyszerr");
  QProcessEnvironment* rthis = new QProcessEnvironment();
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

