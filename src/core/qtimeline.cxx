// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qtimeline.h
// dst-file: /src/core/qtimeline.cxx
//

// header block begin =>
#include <qtimeline.h>

extern "C" {

int QTimeLine_Class_Size()
{
  return sizeof(QTimeLine);
}

// ~QTimeLine()
void dedtor_ZN9QTimeLineD0Ev(QTimeLine* that)
{
  QTimeLine* rthis = (QTimeLine*)that;
  delete rthis;
}

// QTimeLine(int, class QObject *)
QTimeLine* dector_ZN9QTimeLineC1EiP7QObject(int duration, QObject * parent)
{
  // static_assert(sizeof(QTimeLine) == 32, "tyszerr");
  QTimeLine* rthis = new QTimeLine(duration, parent);
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

