// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qurlquery.h
// dst-file: /src/core/qurlquery.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qurlquery.h>


#include <qstring.h>
#include <qchar.h>
#include <qstringlist.h>
#include <qlist.h>
#include <qdatastream.h>
// <= header block end

// main block begin =>
void __keep_qurlquery_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 98, column 18>
//   // proto: static QChar QUrlQuery::defaultQueryValueDelimiter();
if (true) {
  auto f = [](QUrlQuery flythis) {
    ((QUrlQuery*)0)->defaultQueryValueDelimiter();
    flythis.defaultQueryValueDelimiter();
  };
  if (f == nullptr){}
}
// _ZN9QUrlQuery26defaultQueryValueDelimiterEv defaultQueryValueDelimiter()
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 73, column 10>
//   // proto:  void QUrlQuery::swap(QUrlQuery & other);
if (true) {
  auto f = [](QUrlQuery flythis, QUrlQuery & arg1) {
    ((QUrlQuery*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QUrlQuery4swapERS_ swap(class QUrlQuery &)
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 81, column 13>
//   // proto:  QString QUrlQuery::toString(QUrl::ComponentFormattingOptions encoding);
if (true) {
  auto f = [](QUrlQuery flythis, QUrl::ComponentFormattingOptions arg1) {
    ((QUrlQuery*)0)->toString(arg1);
    flythis.toString(arg1);
  };
  if (f == nullptr){}
}
// _ZNK9QUrlQuery8toStringE6QFlagsIN4QUrl25ComponentFormattingOptionEE toString(class QUrl::ComponentFormattingOptions)
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 100, column 18>
//   // proto: static QChar QUrlQuery::defaultQueryPairDelimiter();
if (true) {
  auto f = [](QUrlQuery flythis) {
    ((QUrlQuery*)0)->defaultQueryPairDelimiter();
    flythis.defaultQueryPairDelimiter();
  };
  if (f == nullptr){}
}
// _ZN9QUrlQuery25defaultQueryPairDelimiterEv defaultQueryPairDelimiter()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QUrlQuery_Class_Size()
{
  return sizeof(QUrlQuery);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 61, column 14>
//   // proto:  void QUrlQuery::QUrlQuery(const QString & queryString);
extern "C"
QUrlQuery*
C_ZN9QUrlQueryC2ERK7QString(const QString* arg1) {
  auto ret = new QUrlQuery(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 77, column 10>
//   // proto:  void QUrlQuery::clear();
// _ZN9QUrlQuery5clearEv clear()
extern "C"
void
C_ZN9QUrlQuery5clearEv(void *qthis) {
  ((QUrlQuery*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 80, column 10>
//   // proto:  void QUrlQuery::setQuery(const QString & queryString);
// _ZN9QUrlQuery8setQueryERK7QString setQuery(const class QString &)
extern "C"
void
C_ZN9QUrlQuery8setQueryERK7QString(void *qthis,
const QString* arg1) {
  ((QUrlQuery*)qthis)->setQuery(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 94, column 13>
//   // proto:  QString QUrlQuery::queryItemValue(const QString & key, QUrl::ComponentFormattingOptions encoding);
// _ZNK9QUrlQuery14queryItemValueERK7QString6QFlagsIN4QUrl25ComponentFormattingOptionEE queryItemValue(const class QString &, class QUrl::ComponentFormattingOptions)
extern "C"
QString*
C_ZNK9QUrlQuery14queryItemValueERK7QString6QFlagsIN4QUrl25ComponentFormattingOptionEE(void *qthis,
const QString* arg1,
QUrl::ComponentFormattingOptions* arg2) {
  auto ret =
  ((QUrlQuery*)qthis)->queryItemValue(*((const QString*)arg1),
*((QUrl::ComponentFormattingOptions*)arg2));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 85, column 11>
//   // proto:  QChar QUrlQuery::queryValueDelimiter();
// _ZNK9QUrlQuery19queryValueDelimiterEv queryValueDelimiter()
extern "C"
QChar*
C_ZNK9QUrlQuery19queryValueDelimiterEv(void *qthis) {
  auto ret =
  ((QUrlQuery*)qthis)->queryValueDelimiter();
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 86, column 11>
//   // proto:  QChar QUrlQuery::queryPairDelimiter();
// _ZNK9QUrlQuery18queryPairDelimiterEv queryPairDelimiter()
extern "C"
QChar*
C_ZNK9QUrlQuery18queryPairDelimiterEv(void *qthis) {
  auto ret =
  ((QUrlQuery*)qthis)->queryPairDelimiter();
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 98, column 18>
//   // proto: static QChar QUrlQuery::defaultQueryValueDelimiter();
// _ZN9QUrlQuery26defaultQueryValueDelimiterEv defaultQueryValueDelimiter()
extern "C"
QChar*
C_ZN9QUrlQuery26defaultQueryValueDelimiterEv() {
  auto ret =
  QUrlQuery::defaultQueryValueDelimiter();
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 73, column 10>
//   // proto:  void QUrlQuery::swap(QUrlQuery & other);
// _ZN9QUrlQuery4swapERS_ swap(class QUrlQuery &)
extern "C"
void
C_ZN9QUrlQuery4swapERS_(void *qthis,
QUrlQuery* arg1) {
  ((QUrlQuery*)qthis)->swap(*((QUrlQuery*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 76, column 10>
//   // proto:  bool QUrlQuery::isDetached();
// _ZNK9QUrlQuery10isDetachedEv isDetached()
extern "C"
bool
C_ZNK9QUrlQuery10isDetachedEv(void *qthis) {
  auto ret =
  ((QUrlQuery*)qthis)->isDetached();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 95, column 17>
//   // proto:  QStringList QUrlQuery::allQueryItemValues(const QString & key, QUrl::ComponentFormattingOptions encoding);
// _ZNK9QUrlQuery18allQueryItemValuesERK7QString6QFlagsIN4QUrl25ComponentFormattingOptionEE allQueryItemValues(const class QString &, class QUrl::ComponentFormattingOptions)
extern "C"
QStringList*
C_ZNK9QUrlQuery18allQueryItemValuesERK7QString6QFlagsIN4QUrl25ComponentFormattingOptionEE(void *qthis,
const QString* arg1,
QUrl::ComponentFormattingOptions* arg2) {
  auto ret =
  ((QUrlQuery*)qthis)->allQueryItemValues(*((const QString*)arg1),
*((QUrl::ComponentFormattingOptions*)arg2));
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 59, column 5>
//   // proto:  void QUrlQuery::QUrlQuery();
extern "C"
QUrlQuery*
C_ZN9QUrlQueryC2Ev() {
  auto ret = new QUrlQuery();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 88, column 10>
//   // proto:  void QUrlQuery::setQueryItems(const QList<QPair<QString, QString> > & query);
// _ZN9QUrlQuery13setQueryItemsERK5QListI5QPairI7QStringS2_EE setQueryItems(const QList<QPair<class QString, class QString> > &)
extern "C"
void
C_ZN9QUrlQuery13setQueryItemsERK5QListI5QPairI7QStringS2_EE(void *qthis,
const QList<QPair<QString, QString> >* arg1) {
  ((QUrlQuery*)qthis)->setQueryItems(*((const QList<QPair<QString, QString> >*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 81, column 13>
//   // proto:  QString QUrlQuery::toString(QUrl::ComponentFormattingOptions encoding);
// _ZNK9QUrlQuery8toStringE6QFlagsIN4QUrl25ComponentFormattingOptionEE toString(class QUrl::ComponentFormattingOptions)
extern "C"
QString*
C_ZNK9QUrlQuery8toStringE6QFlagsIN4QUrl25ComponentFormattingOptionEE(void *qthis,
QUrl::ComponentFormattingOptions* arg1) {
  auto ret =
  ((QUrlQuery*)qthis)->toString(*((QUrl::ComponentFormattingOptions*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 84, column 10>
//   // proto:  void QUrlQuery::setQueryDelimiters(QChar valueDelimiter, QChar pairDelimiter);
// _ZN9QUrlQuery18setQueryDelimitersE5QCharS0_ setQueryDelimiters(class QChar, class QChar)
extern "C"
void
C_ZN9QUrlQuery18setQueryDelimitersE5QCharS0_(void *qthis,
QChar* arg1,
QChar* arg2) {
  ((QUrlQuery*)qthis)->setQueryDelimiters(*((QChar*)arg1),
*((QChar*)arg2));
}
//   // proto:  void QUrlQuery::~QUrlQuery();
extern "C"
void C_ZN9QUrlQueryD2Ev(void *qthis) {
  delete (QUrlQuery*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 96, column 10>
//   // proto:  void QUrlQuery::removeAllQueryItems(const QString & key);
// _ZN9QUrlQuery19removeAllQueryItemsERK7QString removeAllQueryItems(const class QString &)
extern "C"
void
C_ZN9QUrlQuery19removeAllQueryItemsERK7QString(void *qthis,
const QString* arg1) {
  ((QUrlQuery*)qthis)->removeAllQueryItems(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 89, column 37>
//   // proto:  QList<QPair<QString, QString> > QUrlQuery::queryItems(QUrl::ComponentFormattingOptions encoding);
// _ZNK9QUrlQuery10queryItemsE6QFlagsIN4QUrl25ComponentFormattingOptionEE queryItems(class QUrl::ComponentFormattingOptions)
extern "C"
QList<QPair<QString, QString> >*
C_ZNK9QUrlQuery10queryItemsE6QFlagsIN4QUrl25ComponentFormattingOptionEE(void *qthis,
QUrl::ComponentFormattingOptions* arg1) {
  auto ret =
  ((QUrlQuery*)qthis)->queryItems(*((QUrl::ComponentFormattingOptions*)arg1));
  return new QList<QPair<QString, QString> >(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 75, column 10>
//   // proto:  bool QUrlQuery::isEmpty();
// _ZNK9QUrlQuery7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK9QUrlQuery7isEmptyEv(void *qthis) {
  auto ret =
  ((QUrlQuery*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 93, column 10>
//   // proto:  void QUrlQuery::removeQueryItem(const QString & key);
// _ZN9QUrlQuery15removeQueryItemERK7QString removeQueryItem(const class QString &)
extern "C"
void
C_ZN9QUrlQuery15removeQueryItemERK7QString(void *qthis,
const QString* arg1) {
  ((QUrlQuery*)qthis)->removeQueryItem(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 100, column 18>
//   // proto: static QChar QUrlQuery::defaultQueryPairDelimiter();
// _ZN9QUrlQuery25defaultQueryPairDelimiterEv defaultQueryPairDelimiter()
extern "C"
QChar*
C_ZN9QUrlQuery25defaultQueryPairDelimiterEv() {
  auto ret =
  QUrlQuery::defaultQueryPairDelimiter();
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 60, column 14>
//   // proto:  void QUrlQuery::QUrlQuery(const QUrl & url);
extern "C"
QUrlQuery*
C_ZN9QUrlQueryC2ERK4QUrl(const QUrl* arg1) {
  auto ret = new QUrlQuery(*((const QUrl*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 79, column 13>
//   // proto:  QString QUrlQuery::query(QUrl::ComponentFormattingOptions encoding);
// _ZNK9QUrlQuery5queryE6QFlagsIN4QUrl25ComponentFormattingOptionEE query(class QUrl::ComponentFormattingOptions)
extern "C"
QString*
C_ZNK9QUrlQuery5queryE6QFlagsIN4QUrl25ComponentFormattingOptionEE(void *qthis,
QUrl::ComponentFormattingOptions* arg1) {
  auto ret =
  ((QUrlQuery*)qthis)->query(*((QUrl::ComponentFormattingOptions*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 92, column 10>
//   // proto:  void QUrlQuery::addQueryItem(const QString & key, const QString & value);
// _ZN9QUrlQuery12addQueryItemERK7QStringS2_ addQueryItem(const class QString &, const class QString &)
extern "C"
void
C_ZN9QUrlQuery12addQueryItemERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  ((QUrlQuery*)qthis)->addQueryItem(*((const QString*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 62, column 5>
//   // proto:  void QUrlQuery::QUrlQuery(const QUrlQuery & other);
extern "C"
QUrlQuery*
C_ZN9QUrlQueryC2ERKS_(const QUrlQuery* arg1) {
  auto ret = new QUrlQuery(*((const QUrlQuery*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qurlquery.h', line 91, column 10>
//   // proto:  bool QUrlQuery::hasQueryItem(const QString & key);
// _ZNK9QUrlQuery12hasQueryItemERK7QString hasQueryItem(const class QString &)
extern "C"
bool
C_ZNK9QUrlQuery12hasQueryItemERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QUrlQuery*)qthis)->hasQueryItem(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

