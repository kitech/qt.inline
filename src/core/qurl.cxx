// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qurl.h
// dst-file: /src/core/qurl.cxx
//

// header block begin =>
#include <qurl.h>

extern "C" {

// ~QUrl()
void dedtor_ZN4QUrlD0Ev(QUrl* that)
{
  QUrl* rthis = (QUrl*)that;
  delete rthis;
}

// QUrl(const class QUrl &)
QUrl* dector_ZN4QUrlC1ERKS_(const QUrl & copy)
{
  // static_assert(sizeof(QUrl) == 32, "tyszerr");
  QUrl* rthis = new QUrl(copy);
  return rthis;
}

// QUrl()
QUrl* dector_ZN4QUrlC1Ev()
{
  // static_assert(sizeof(QUrl) == 32, "tyszerr");
  QUrl* rthis = new QUrl();
  return rthis;
}

// QUrl(const class QString &, enum QUrl::ParsingMode)
QUrl* dector_ZN4QUrlC1ERK7QStringNS_11ParsingModeE(const QString & url, QUrl::ParsingMode mode)
{
  // static_assert(sizeof(QUrl) == 32, "tyszerr");
  QUrl* rthis = new QUrl(url, mode);
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

