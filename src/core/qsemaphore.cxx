// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qsemaphore.h
// dst-file: /src/core/qsemaphore.cxx
//

// header block begin =>
#include <qsemaphore.h>

extern "C" {

int QSemaphore_Class_Size()
{
  return sizeof(QSemaphore);
}

// QSemaphore(int)
QSemaphore* dector_ZN10QSemaphoreC1Ei(int n)
{
  // static_assert(sizeof(QSemaphore) == 32, "tyszerr");
  QSemaphore* rthis = new QSemaphore(n);
  return rthis;
}

// ~QSemaphore()
void dedtor_ZN10QSemaphoreD0Ev(QSemaphore* that)
{
  QSemaphore* rthis = (QSemaphore*)that;
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

