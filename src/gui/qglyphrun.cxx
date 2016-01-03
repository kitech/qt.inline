// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qglyphrun.h
// dst-file: /src/gui/qglyphrun.cxx
//

// header block begin =>
#include <qglyphrun.h>

extern "C" {

int QGlyphRun_Class_Size()
{
  return sizeof(QGlyphRun);
}

// ~QGlyphRun()
void dedtor_ZN9QGlyphRunD0Ev(QGlyphRun* that)
{
  QGlyphRun* rthis = (QGlyphRun*)that;
  delete rthis;
}

// QGlyphRun()
QGlyphRun* dector_ZN9QGlyphRunC1Ev()
{
  // static_assert(sizeof(QGlyphRun) == 32, "tyszerr");
  QGlyphRun* rthis = new QGlyphRun();
  return rthis;
}

// QGlyphRun(const class QGlyphRun &)
QGlyphRun* dector_ZN9QGlyphRunC1ERKS_(const QGlyphRun & other)
{
  // static_assert(sizeof(QGlyphRun) == 32, "tyszerr");
  QGlyphRun* rthis = new QGlyphRun(other);
  return rthis;
}

  // proto:  void QGlyphRun::swap(QGlyphRun & other);
void demth_ZN9QGlyphRun4swapERS_(void *that, QGlyphRun & other)
{
  QGlyphRun *cthat = (QGlyphRun *)that;
   cthat->swap(other);
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

