// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qthreadpool.h
// dst-file: /src/core/qthreadpool.cxx
//

// header block begin =>
#include <qthreadpool.h>

extern "C" {

// ~QThreadPool()
void dedtor_ZN11QThreadPoolD0Ev(QThreadPool* that)
{
  QThreadPool* rthis = (QThreadPool*)that;
  delete rthis;
}

// QThreadPool(class QObject *)
QThreadPool* dector_ZN11QThreadPoolC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QThreadPool) == 32, "tyszerr");
  QThreadPool* rthis = new QThreadPool(parent);
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

