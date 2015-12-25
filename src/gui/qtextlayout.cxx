// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtGui/qtextlayout.h
// dst-file: /src/gui/qtextlayout.cxx
//

// header block begin =>
#include <qtextlayout.h>

extern "C" {

// QTextLayout(const class QString &, const class QFont &, class QPaintDevice *)
QTextLayout* dector_ZN11QTextLayoutC1ERK7QStringRK5QFontP12QPaintDevice(const QString & text, const QFont & font, QPaintDevice * paintdevice)
{
  // static_assert(sizeof(QTextLayout) == 32, "tyszerr");
  QTextLayout* rthis = new QTextLayout(text, font, paintdevice);
  return rthis;
}

// ~QTextLayout()
void dedtor_ZN11QTextLayoutD0Ev(QTextLayout* that)
{
  QTextLayout* rthis = (QTextLayout*)that;
  delete rthis;
}

// QTextLayout(const class QTextBlock &)
QTextLayout* dector_ZN11QTextLayoutC1ERK10QTextBlock(const QTextBlock & b)
{
  // static_assert(sizeof(QTextLayout) == 32, "tyszerr");
  QTextLayout* rthis = new QTextLayout(b);
  return rthis;
}

// QTextLayout(const class QString &)
QTextLayout* dector_ZN11QTextLayoutC1ERK7QString(const QString & text)
{
  // static_assert(sizeof(QTextLayout) == 32, "tyszerr");
  QTextLayout* rthis = new QTextLayout(text);
  return rthis;
}

// QTextLayout()
QTextLayout* dector_ZN11QTextLayoutC1Ev()
{
  // static_assert(sizeof(QTextLayout) == 32, "tyszerr");
  QTextLayout* rthis = new QTextLayout();
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

