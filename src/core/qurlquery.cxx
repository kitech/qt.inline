// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
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

  // proto: static QChar QUrlQuery::defaultQueryValueDelimiter();
QChar* demth_ZN9QUrlQuery26defaultQueryValueDelimiterEv(void *that)
{
  QUrlQuery *cthat = (QUrlQuery *)that;
  auto recret = cthat->defaultQueryValueDelimiter();
  return new QChar(recret);
}

  // proto:  void QUrlQuery::swap(QUrlQuery & other);
void demth_ZN9QUrlQuery4swapERS_(void *that, QUrlQuery & other)
{
  QUrlQuery *cthat = (QUrlQuery *)that;
   cthat->swap(other);
}

  // proto:  QString QUrlQuery::toString(QUrl::ComponentFormattingOptions encoding);
QString* demth_ZNK9QUrlQuery8toStringE6QFlagsIN4QUrl25ComponentFormattingOptionEE(void *that, QUrl::ComponentFormattingOptions encoding)
{
  QUrlQuery *cthat = (QUrlQuery *)that;
  auto recret = cthat->toString(encoding);
  return new QString(recret);
}

  // proto: static QChar QUrlQuery::defaultQueryPairDelimiter();
QChar* demth_ZN9QUrlQuery25defaultQueryPairDelimiterEv(void *that)
{
  QUrlQuery *cthat = (QUrlQuery *)that;
  auto recret = cthat->defaultQueryPairDelimiter();
  return new QChar(recret);
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

