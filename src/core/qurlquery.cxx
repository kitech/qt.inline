// /usr/include/qt/QtCore/qurlquery.h
#include <qurlquery.h>
#include <QtCore>

// /usr/include/qt/QtCore/qurlquery.h:59
// void QUrlQuery()
extern "C"
void* C_ZN9QUrlQueryC1Ev() {
  return new QUrlQuery();
}
// /usr/include/qt/QtCore/qurlquery.h:60
// void QUrlQuery(const class QUrl &)
extern "C"
void* C_ZN9QUrlQueryC1ERK4QUrl(const QUrl & url) {
  return new QUrlQuery(url);
}
// /usr/include/qt/QtCore/qurlquery.h:61
// void QUrlQuery(const class QString &)
extern "C"
void* C_ZN9QUrlQueryC1ERK7QString(const QString & queryString) {
  return new QUrlQuery(queryString);
}
// /usr/include/qt/QtCore/qurlquery.h:67
// void ~QUrlQuery()
extern "C"
void C_ZN9QUrlQueryD1Ev(void *this_) {
  delete (QUrlQuery*)(this_);
}
// inline
// /usr/include/qt/QtCore/qurlquery.h:73
// void swap(class QUrlQuery &)
extern "C"
void C_ZN9QUrlQuery4swapERS_(void *this_, QUrlQuery & other) {
  ((QUrlQuery*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qurlquery.h:75
// bool isEmpty()
extern "C"
void C_ZNK9QUrlQuery7isEmptyEv(void *this_) {
  /*return*/ ((QUrlQuery*)this_)->isEmpty();
}
// /usr/include/qt/QtCore/qurlquery.h:76
// bool isDetached()
extern "C"
void C_ZNK9QUrlQuery10isDetachedEv(void *this_) {
  /*return*/ ((QUrlQuery*)this_)->isDetached();
}
// /usr/include/qt/QtCore/qurlquery.h:77
// void clear()
extern "C"
void C_ZN9QUrlQuery5clearEv(void *this_) {
  ((QUrlQuery*)this_)->clear();
}
// /usr/include/qt/QtCore/qurlquery.h:80
// void setQuery(const class QString &)
extern "C"
void C_ZN9QUrlQuery8setQueryERK7QString(void *this_, const QString & queryString) {
  ((QUrlQuery*)this_)->setQuery(queryString);
}
// /usr/include/qt/QtCore/qurlquery.h:84
// void setQueryDelimiters(class QChar, class QChar)
extern "C"
void C_ZN9QUrlQuery18setQueryDelimitersE5QCharS0_(void *this_, QChar valueDelimiter, QChar pairDelimiter) {
  ((QUrlQuery*)this_)->setQueryDelimiters(valueDelimiter, pairDelimiter);
}
// /usr/include/qt/QtCore/qurlquery.h:85
// QChar queryValueDelimiter()
extern "C"
void C_ZNK9QUrlQuery19queryValueDelimiterEv(void *this_) {
  /*return*/ ((QUrlQuery*)this_)->queryValueDelimiter();
}
// /usr/include/qt/QtCore/qurlquery.h:86
// QChar queryPairDelimiter()
extern "C"
void C_ZNK9QUrlQuery18queryPairDelimiterEv(void *this_) {
  /*return*/ ((QUrlQuery*)this_)->queryPairDelimiter();
}
// /usr/include/qt/QtCore/qurlquery.h:88
// void setQueryItems(const QList<QPair<class QString, class QString> > &)
extern "C"
void C_ZN9QUrlQuery13setQueryItemsERK5QListI5QPairI7QStringS2_EE(void *this_, const QList<QPair<QString, QString> > & query) {
  ((QUrlQuery*)this_)->setQueryItems(query);
}
// /usr/include/qt/QtCore/qurlquery.h:91
// bool hasQueryItem(const class QString &)
extern "C"
void C_ZNK9QUrlQuery12hasQueryItemERK7QString(void *this_, const QString & key) {
  /*return*/ ((QUrlQuery*)this_)->hasQueryItem(key);
}
// /usr/include/qt/QtCore/qurlquery.h:92
// void addQueryItem(const class QString &, const class QString &)
extern "C"
void C_ZN9QUrlQuery12addQueryItemERK7QStringS2_(void *this_, const QString & key, const QString & value) {
  ((QUrlQuery*)this_)->addQueryItem(key, value);
}
// /usr/include/qt/QtCore/qurlquery.h:93
// void removeQueryItem(const class QString &)
extern "C"
void C_ZN9QUrlQuery15removeQueryItemERK7QString(void *this_, const QString & key) {
  ((QUrlQuery*)this_)->removeQueryItem(key);
}
// /usr/include/qt/QtCore/qurlquery.h:96
// void removeAllQueryItems(const class QString &)
extern "C"
void C_ZN9QUrlQuery19removeAllQueryItemsERK7QString(void *this_, const QString & key) {
  ((QUrlQuery*)this_)->removeAllQueryItems(key);
}
// static inline
// /usr/include/qt/QtCore/qurlquery.h:98
// QChar defaultQueryValueDelimiter()
extern "C"
void C_ZN9QUrlQuery26defaultQueryValueDelimiterEv() {
  /*return*/ QUrlQuery::defaultQueryValueDelimiter();
}
// static inline
// /usr/include/qt/QtCore/qurlquery.h:100
// QChar defaultQueryPairDelimiter()
extern "C"
void C_ZN9QUrlQuery25defaultQueryPairDelimiterEv() {
  /*return*/ QUrlQuery::defaultQueryPairDelimiter();
}