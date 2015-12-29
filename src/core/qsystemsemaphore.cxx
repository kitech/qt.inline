// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qsystemsemaphore.h
// dst-file: /src/core/qsystemsemaphore.cxx
//

// header block begin =>
#include <qsystemsemaphore.h>

extern "C" {

int QSystemSemaphore_Class_Size()
{
  return sizeof(QSystemSemaphore);
}

// QSystemSemaphore(const class QString &, int, enum QSystemSemaphore::AccessMode)
QSystemSemaphore* dector_ZN16QSystemSemaphoreC1ERK7QStringiNS_10AccessModeE(const QString & key, int initialValue, QSystemSemaphore::AccessMode mode)
{
  // static_assert(sizeof(QSystemSemaphore) == 32, "tyszerr");
  QSystemSemaphore* rthis = new QSystemSemaphore(key, initialValue, mode);
  return rthis;
}

// ~QSystemSemaphore()
void dedtor_ZN16QSystemSemaphoreD0Ev(QSystemSemaphore* that)
{
  QSystemSemaphore* rthis = (QSystemSemaphore*)that;
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

