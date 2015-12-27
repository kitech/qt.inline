// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtGui/qstatictext.h
// dst-file: /src/gui/qstatictext.cxx
//

// header block begin =>
#include <qstatictext.h>

extern "C" {

int QStaticText_Class_Size()
{
  return sizeof(QStaticText);
}

// QStaticText(const class QString &)
QStaticText* dector_ZN11QStaticTextC1ERK7QString(const QString & text)
{
  // static_assert(sizeof(QStaticText) == 32, "tyszerr");
  QStaticText* rthis = new QStaticText(text);
  return rthis;
}

// ~QStaticText()
void dedtor_ZN11QStaticTextD0Ev(QStaticText* that)
{
  QStaticText* rthis = (QStaticText*)that;
  delete rthis;
}

// QStaticText()
QStaticText* dector_ZN11QStaticTextC1Ev()
{
  // static_assert(sizeof(QStaticText) == 32, "tyszerr");
  QStaticText* rthis = new QStaticText();
  return rthis;
}

// QStaticText(const class QStaticText &)
QStaticText* dector_ZN11QStaticTextC1ERKS_(const QStaticText & other)
{
  // static_assert(sizeof(QStaticText) == 32, "tyszerr");
  QStaticText* rthis = new QStaticText(other);
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

