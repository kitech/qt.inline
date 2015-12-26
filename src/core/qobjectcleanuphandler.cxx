// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtCore/qobjectcleanuphandler.h
// dst-file: /src/core/qobjectcleanuphandler.cxx
//

// header block begin =>
#include <qobjectcleanuphandler.h>

extern "C" {

int QObjectCleanupHandler_Class_Size()
{
  return sizeof(QObjectCleanupHandler);
}

// ~QObjectCleanupHandler()
void dedtor_ZN21QObjectCleanupHandlerD0Ev(QObjectCleanupHandler* that)
{
  QObjectCleanupHandler* rthis = (QObjectCleanupHandler*)that;
  delete rthis;
}

// QObjectCleanupHandler()
QObjectCleanupHandler* dector_ZN21QObjectCleanupHandlerC1Ev()
{
  // static_assert(sizeof(QObjectCleanupHandler) == 32, "tyszerr");
  QObjectCleanupHandler* rthis = new QObjectCleanupHandler();
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

