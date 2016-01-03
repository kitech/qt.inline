// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qstringmatcher.h
// dst-file: /src/core/qstringmatcher.cxx
//

// header block begin =>
#include <qstringmatcher.h>

extern "C" {

int QStringMatcher_Class_Size()
{
  return sizeof(QStringMatcher);
}

// QStringMatcher()
QStringMatcher* dector_ZN14QStringMatcherC1Ev()
{
  // static_assert(sizeof(QStringMatcher) == 1048, "tyszerr");
  QStringMatcher* rthis = new QStringMatcher();
  return rthis;
}

// QStringMatcher(const class QStringMatcher &)
QStringMatcher* dector_ZN14QStringMatcherC1ERKS_(const QStringMatcher & other)
{
  // static_assert(sizeof(QStringMatcher) == 1048, "tyszerr");
  QStringMatcher* rthis = new QStringMatcher(other);
  return rthis;
}

// QStringMatcher(const class QString &, Qt::CaseSensitivity)
QStringMatcher* dector_ZN14QStringMatcherC1ERK7QStringN2Qt15CaseSensitivityE(const QString & pattern, Qt::CaseSensitivity cs)
{
  // static_assert(sizeof(QStringMatcher) == 1048, "tyszerr");
  QStringMatcher* rthis = new QStringMatcher(pattern, cs);
  return rthis;
}

// ~QStringMatcher()
void dedtor_ZN14QStringMatcherD0Ev(QStringMatcher* that)
{
  QStringMatcher* rthis = (QStringMatcher*)that;
  delete rthis;
}

// QStringMatcher(const class QChar *, int, Qt::CaseSensitivity)
QStringMatcher* dector_ZN14QStringMatcherC1EPK5QChariN2Qt15CaseSensitivityE(const QChar * uc, int len, Qt::CaseSensitivity cs)
{
  // static_assert(sizeof(QStringMatcher) == 1048, "tyszerr");
  QStringMatcher* rthis = new QStringMatcher(uc, len, cs);
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

