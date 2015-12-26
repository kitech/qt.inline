// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtGui/qpen.h
// dst-file: /src/gui/qpen.cxx
//

// header block begin =>
#include <qpen.h>

extern "C" {

int QPen_Class_Size()
{
  return sizeof(QPen);
}

// ~QPen()
void dedtor_ZN4QPenD0Ev(QPen* that)
{
  QPen* rthis = (QPen*)that;
  delete rthis;
}

// QPen(const class QColor &)
QPen* dector_ZN4QPenC1ERK6QColor(const QColor & color)
{
  // static_assert(sizeof(QPen) == 32, "tyszerr");
  QPen* rthis = new QPen(color);
  return rthis;
}

// QPen(Qt::PenStyle)
QPen* dector_ZN4QPenC1EN2Qt8PenStyleE(Qt::PenStyle arg1)
{
  // static_assert(sizeof(QPen) == 32, "tyszerr");
  QPen* rthis = new QPen(arg1);
  return rthis;
}

// QPen(const class QPen &)
QPen* dector_ZN4QPenC1ERKS_(const QPen & pen)
{
  // static_assert(sizeof(QPen) == 32, "tyszerr");
  QPen* rthis = new QPen(pen);
  return rthis;
}

// QPen()
QPen* dector_ZN4QPenC1Ev()
{
  // static_assert(sizeof(QPen) == 32, "tyszerr");
  QPen* rthis = new QPen();
  return rthis;
}

// QPen(class QPen &&)
QPen* dector_ZN4QPenC1EOS_(QPen && other)
{
  // static_assert(sizeof(QPen) == 32, "tyszerr");
  QPen* rthis = new QPen(other);
  return rthis;
}

// QPen(const class QBrush &, qreal, Qt::PenStyle, Qt::PenCapStyle, Qt::PenJoinStyle)
QPen* dector_ZN4QPenC1ERK6QBrushdN2Qt8PenStyleENS3_11PenCapStyleENS3_12PenJoinStyleE(const QBrush & brush, double width, Qt::PenStyle s, Qt::PenCapStyle c, Qt::PenJoinStyle j)
{
  // static_assert(sizeof(QPen) == 32, "tyszerr");
  QPen* rthis = new QPen(brush, width, s, c, j);
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

