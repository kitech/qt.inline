// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qmutex.h
// dst-file: /src/core/qmutex.cxx
//

// header block begin =>
#include <qmutex.h>

extern "C" {

int QMutexLocker_Class_Size()
{
  return sizeof(QMutexLocker);
}

int QBasicMutex_Class_Size()
{
  return sizeof(QBasicMutex);
}

int QMutex_Class_Size()
{
  return sizeof(QMutex);
}

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

