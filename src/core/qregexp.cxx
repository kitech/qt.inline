// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qregexp.h
// dst-file: /src/core/qregexp.cxx
//

// header block begin =>
#include <qregexp.h>

extern "C" {

int QRegExp_Class_Size()
{
  return sizeof(QRegExp);
}

// QRegExp(const class QRegExp &)
QRegExp* dector_ZN7QRegExpC1ERKS_(const QRegExp & rx)
{
  // static_assert(sizeof(QRegExp) == 32, "tyszerr");
  QRegExp* rthis = new QRegExp(rx);
  return rthis;
}

// ~QRegExp()
void dedtor_ZN7QRegExpD0Ev(QRegExp* that)
{
  QRegExp* rthis = (QRegExp*)that;
  delete rthis;
}

// QRegExp()
QRegExp* dector_ZN7QRegExpC1Ev()
{
  // static_assert(sizeof(QRegExp) == 32, "tyszerr");
  QRegExp* rthis = new QRegExp();
  return rthis;
}

// QRegExp(const class QString &, Qt::CaseSensitivity, enum QRegExp::PatternSyntax)
QRegExp* dector_ZN7QRegExpC1ERK7QStringN2Qt15CaseSensitivityENS_13PatternSyntaxE(const QString & pattern, Qt::CaseSensitivity cs, QRegExp::PatternSyntax syntax)
{
  // static_assert(sizeof(QRegExp) == 32, "tyszerr");
  QRegExp* rthis = new QRegExp(pattern, cs, syntax);
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

