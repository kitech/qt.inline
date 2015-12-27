// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtGui/qfontmetrics.h
// dst-file: /src/gui/qfontmetrics.cxx
//

// header block begin =>
#include <qfontmetrics.h>

extern "C" {

int QFontMetrics_Class_Size()
{
  return sizeof(QFontMetrics);
}

// ~QFontMetrics()
void dedtor_ZN12QFontMetricsD0Ev(QFontMetrics* that)
{
  QFontMetrics* rthis = (QFontMetrics*)that;
  delete rthis;
}

// QFontMetrics(const class QFontMetrics &)
QFontMetrics* dector_ZN12QFontMetricsC1ERKS_(const QFontMetrics & arg1)
{
  // static_assert(sizeof(QFontMetrics) == 32, "tyszerr");
  QFontMetrics* rthis = new QFontMetrics(arg1);
  return rthis;
}

// QFontMetrics(const class QFont &, class QPaintDevice *)
QFontMetrics* dector_ZN12QFontMetricsC1ERK5QFontP12QPaintDevice(const QFont & arg1, QPaintDevice * pd)
{
  // static_assert(sizeof(QFontMetrics) == 32, "tyszerr");
  QFontMetrics* rthis = new QFontMetrics(arg1, pd);
  return rthis;
}

// QFontMetrics(const class QFont &)
QFontMetrics* dector_ZN12QFontMetricsC1ERK5QFont(const QFont & arg1)
{
  // static_assert(sizeof(QFontMetrics) == 32, "tyszerr");
  QFontMetrics* rthis = new QFontMetrics(arg1);
  return rthis;
}

  // proto:  QRect QFontMetrics::boundingRect(int x, int y, int w, int h, int flags, const QString & text, int tabstops, int * tabarray);
QRect* demth_ZNK12QFontMetrics12boundingRectEiiiiiRK7QStringiPi(void *that, int x, int y, int w, int h, int flags, const QString & text, int tabstops, int * tabarray)
{
  QFontMetrics *cthat = (QFontMetrics *)that;
  auto recret = cthat->boundingRect(x, y, w, h, flags, text, tabstops, tabarray);
  return new QRect(recret);
}

int QFontMetricsF_Class_Size()
{
  return sizeof(QFontMetricsF);
}

// QFontMetricsF(const class QFontMetricsF &)
QFontMetricsF* dector_ZN13QFontMetricsFC1ERKS_(const QFontMetricsF & arg1)
{
  // static_assert(sizeof(QFontMetricsF) == 32, "tyszerr");
  QFontMetricsF* rthis = new QFontMetricsF(arg1);
  return rthis;
}

// ~QFontMetricsF()
void dedtor_ZN13QFontMetricsFD0Ev(QFontMetricsF* that)
{
  QFontMetricsF* rthis = (QFontMetricsF*)that;
  delete rthis;
}

// QFontMetricsF(const class QFontMetrics &)
QFontMetricsF* dector_ZN13QFontMetricsFC1ERK12QFontMetrics(const QFontMetrics & arg1)
{
  // static_assert(sizeof(QFontMetricsF) == 32, "tyszerr");
  QFontMetricsF* rthis = new QFontMetricsF(arg1);
  return rthis;
}

// QFontMetricsF(const class QFont &, class QPaintDevice *)
QFontMetricsF* dector_ZN13QFontMetricsFC1ERK5QFontP12QPaintDevice(const QFont & arg1, QPaintDevice * pd)
{
  // static_assert(sizeof(QFontMetricsF) == 32, "tyszerr");
  QFontMetricsF* rthis = new QFontMetricsF(arg1, pd);
  return rthis;
}

// QFontMetricsF(const class QFont &)
QFontMetricsF* dector_ZN13QFontMetricsFC1ERK5QFont(const QFont & arg1)
{
  // static_assert(sizeof(QFontMetricsF) == 32, "tyszerr");
  QFontMetricsF* rthis = new QFontMetricsF(arg1);
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

