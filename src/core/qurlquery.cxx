// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qurlquery.h
// dst-file: /src/core/qurlquery.cxx
//

// header block begin =>
#include <qurlquery.h>

extern "C" {

int QUrlQuery_Class_Size()
{
  return sizeof(QUrlQuery);
}

// QUrlQuery(const class QString &)
QUrlQuery* dector_ZN9QUrlQueryC1ERK7QString(const QString & queryString)
{
  // static_assert(sizeof(QUrlQuery) == 32, "tyszerr");
  QUrlQuery* rthis = new QUrlQuery(queryString);
  return rthis;
}

// QUrlQuery()
QUrlQuery* dector_ZN9QUrlQueryC1Ev()
{
  // static_assert(sizeof(QUrlQuery) == 32, "tyszerr");
  QUrlQuery* rthis = new QUrlQuery();
  return rthis;
}

// ~QUrlQuery()
void dedtor_ZN9QUrlQueryD0Ev(QUrlQuery* that)
{
  QUrlQuery* rthis = (QUrlQuery*)that;
  delete rthis;
}

// QUrlQuery(const class QUrl &)
QUrlQuery* dector_ZN9QUrlQueryC1ERK4QUrl(const QUrl & url)
{
  // static_assert(sizeof(QUrlQuery) == 32, "tyszerr");
  QUrlQuery* rthis = new QUrlQuery(url);
  return rthis;
}

// QUrlQuery(const class QUrlQuery &)
QUrlQuery* dector_ZN9QUrlQueryC1ERKS_(const QUrlQuery & other)
{
  // static_assert(sizeof(QUrlQuery) == 32, "tyszerr");
  QUrlQuery* rthis = new QUrlQuery(other);
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

