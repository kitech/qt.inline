// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtCore/qthread.h
// dst-file: /src/core/qthread.cxx
//

// header block begin =>
#include <qthread.h>

extern "C" {

int QThread_Class_Size()
{
  return sizeof(QThread);
}

// QThread(class QObject *)
QThread* dector_ZN7QThreadC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QThread) == 32, "tyszerr");
  QThread* rthis = new QThread(parent);
  return rthis;
}

// ~QThread()
void dedtor_ZN7QThreadD0Ev(QThread* that)
{
  QThread* rthis = (QThread*)that;
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

