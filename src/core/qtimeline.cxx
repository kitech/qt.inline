// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qtimeline.h
// dst-file: /src/core/qtimeline.cxx
//

// header block begin =>
#include <qtimeline.h>

extern "C" {

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

