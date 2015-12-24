// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtGui/qfontmetrics.h
// dst-file: /src/gui/qfontmetrics.cxx
//

// header block begin =>
#include <qfontmetrics.h>

extern "C" {

  // proto:  QRect QFontMetrics::boundingRect(int x, int y, int w, int h, int flags, const QString & text, int tabstops, int * tabarray);
QRect* _ZNK12QFontMetrics12boundingRectEiiiiiRK7QStringiPi(void *that, int x, int y, int w, int h, int flags, const QString & text, int tabstops, int * tabarray)

{
  QFontMetrics *cthat = (QFontMetrics *)that;
  auto recret = cthat->boundingRect(x, y, w, h, flags, text, tabstops, tabarray);
  return new QRect(recret);
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

