// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qmutex.h
// dst-file: /src/core/qmutex.cxx
//

// header block begin =>
#include <qmutex.h>

extern "C" {

// QMutex(enum QMutex::RecursionMode)
QMutex* dector_ZN6QMutexC1ENS_13RecursionModeE(QMutex::RecursionMode mode)
{
  // static_assert(sizeof(QMutex) == 32, "tyszerr");
  QMutex* rthis = new QMutex(mode);
  return rthis;
}

// ~QMutex()
void dedtor_ZN6QMutexD0Ev(QMutex* that)
{
  QMutex* rthis = (QMutex*)that;
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

