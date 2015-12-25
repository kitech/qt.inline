// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qsharedmemory.h
// dst-file: /src/core/qsharedmemory.cxx
//

// header block begin =>
#include <qsharedmemory.h>

extern "C" {

// QSharedMemory(const class QString &, class QObject *)
QSharedMemory* dector_ZN13QSharedMemoryC1ERK7QStringP7QObject(const QString & key, QObject * parent)
{
  // static_assert(sizeof(QSharedMemory) == 32, "tyszerr");
  QSharedMemory* rthis = new QSharedMemory(key, parent);
  return rthis;
}

// ~QSharedMemory()
void dedtor_ZN13QSharedMemoryD0Ev(QSharedMemory* that)
{
  QSharedMemory* rthis = (QSharedMemory*)that;
  delete rthis;
}

// QSharedMemory(class QObject *)
QSharedMemory* dector_ZN13QSharedMemoryC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QSharedMemory) == 32, "tyszerr");
  QSharedMemory* rthis = new QSharedMemory(parent);
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

