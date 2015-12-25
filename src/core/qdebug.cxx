// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qdebug.h
// dst-file: /src/core/qdebug.cxx
//

// header block begin =>
#include <qdebug.h>

extern "C" {

// QDebugStateSaver(class QDebug &)
QDebugStateSaver* dector_ZN16QDebugStateSaverC1ER6QDebug(QDebug & dbg)
{
  // static_assert(sizeof(QDebugStateSaver) == 32, "tyszerr");
  QDebugStateSaver* rthis = new QDebugStateSaver(dbg);
  return rthis;
}

// ~QDebugStateSaver()
void dedtor_ZN16QDebugStateSaverD0Ev(QDebugStateSaver* that)
{
  QDebugStateSaver* rthis = (QDebugStateSaver*)that;
  delete rthis;
}

// ~QDebug()
void dedtor_ZN6QDebugD0Ev(QDebug* that)
{
  QDebug* rthis = (QDebug*)that;
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

