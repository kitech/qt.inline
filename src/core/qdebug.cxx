// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qdebug.h
// dst-file: /src/core/qdebug.cxx
//

// header block begin =>
#include <qdebug.h>

extern "C" {

int QNoDebug_Class_Size()
{
  return sizeof(QNoDebug);
}

int QDebugStateSaver_Class_Size()
{
  return sizeof(QDebugStateSaver);
}

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

int QDebug_Class_Size()
{
  return sizeof(QDebug);
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

