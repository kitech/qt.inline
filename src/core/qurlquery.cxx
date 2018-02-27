//  header block begin
// /usr/include/qt/QtCore/qurlquery.h
#ifndef protected
#define protected public
#endif
#include <qurlquery.h>
#include <QtCore>
#include "callback_inherit.h"

// QUrlQuery is pure virtual: false
// QUrlQuery has virtual projected: false
//  header block end

//  main block begin

class MyQUrlQuery : public QUrlQuery {
public:
  virtual ~MyQUrlQuery() {}
// void QUrlQuery()
MyQUrlQuery() : QUrlQuery() {}
// void QUrlQuery(const class QUrl &)
MyQUrlQuery(const QUrl & url) : QUrlQuery(url) {}
// void QUrlQuery(const class QString &)
MyQUrlQuery(const QString & queryString) : QUrlQuery(queryString) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:59
// [-2] void QUrlQuery()
extern "C"
void* C_ZN9QUrlQueryC2Ev() {
  return  new QUrlQuery();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:60
// [-2] void QUrlQuery(const class QUrl &)
extern "C"
void* C_ZN9QUrlQueryC2ERK4QUrl(QUrl* url) {
  return  new QUrlQuery(*url);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:61
// [-2] void QUrlQuery(const class QString &)
extern "C"
void* C_ZN9QUrlQueryC2ERK7QString(QString* queryString) {
  return  new QUrlQuery(*queryString);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:63
// [8] QUrlQuery & operator=(const class QUrlQuery &)
extern "C"
void* C_ZN9QUrlQueryaSERKS_(void *this_, QUrlQuery* other) {
  auto& rv = ((QUrlQuery*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:65
// [8] QUrlQuery & operator=(class QUrlQuery &&)
extern "C"
void* C_ZN9QUrlQueryaSEOS_(void *this_, QUrlQuery && other) {
  auto& rv = ((QUrlQuery*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:67
// [-2] void ~QUrlQuery()
extern "C"
void C_ZN9QUrlQueryD2Ev(void *this_) {
  delete (QUrlQuery*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:69
// [1] bool operator==(const class QUrlQuery &)
extern "C"
bool C_ZNK9QUrlQueryeqERKS_(void *this_, QUrlQuery* other) {
  return (bool)((QUrlQuery*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:70
// [1] bool operator!=(const class QUrlQuery &)
extern "C"
bool C_ZNK9QUrlQueryneERKS_(void *this_, QUrlQuery* other) {
  return (bool)((QUrlQuery*)this_)->operator!=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:73
// [-2] void swap(class QUrlQuery &)
extern "C"
void C_ZN9QUrlQuery4swapERS_(void *this_, QUrlQuery* other) {
  ((QUrlQuery*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:75
// [1] bool isEmpty()
extern "C"
bool C_ZNK9QUrlQuery7isEmptyEv(void *this_) {
  return (bool)((QUrlQuery*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:76
// [1] bool isDetached()
extern "C"
bool C_ZNK9QUrlQuery10isDetachedEv(void *this_) {
  return (bool)((QUrlQuery*)this_)->isDetached();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:77
// [-2] void clear()
extern "C"
void C_ZN9QUrlQuery5clearEv(void *this_) {
  ((QUrlQuery*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:80
// [-2] void setQuery(const class QString &)
extern "C"
void C_ZN9QUrlQuery8setQueryERK7QString(void *this_, QString* queryString) {
  ((QUrlQuery*)this_)->setQuery(*queryString);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:84
// [-2] void setQueryDelimiters(class QChar, class QChar)
extern "C"
void C_ZN9QUrlQuery18setQueryDelimitersE5QCharS0_(void *this_, QChar* valueDelimiter, QChar* pairDelimiter) {
  ((QUrlQuery*)this_)->setQueryDelimiters(*valueDelimiter, *pairDelimiter);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:85
// [2] QChar queryValueDelimiter()
extern "C"
void* C_ZNK9QUrlQuery19queryValueDelimiterEv(void *this_) {
  auto rv = ((QUrlQuery*)this_)->queryValueDelimiter();
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:86
// [2] QChar queryPairDelimiter()
extern "C"
void* C_ZNK9QUrlQuery18queryPairDelimiterEv(void *this_) {
  auto rv = ((QUrlQuery*)this_)->queryPairDelimiter();
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:91
// [1] bool hasQueryItem(const class QString &)
extern "C"
bool C_ZNK9QUrlQuery12hasQueryItemERK7QString(void *this_, QString* key) {
  return (bool)((QUrlQuery*)this_)->hasQueryItem(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:92
// [-2] void addQueryItem(const class QString &, const class QString &)
extern "C"
void C_ZN9QUrlQuery12addQueryItemERK7QStringS2_(void *this_, QString* key, QString* value) {
  ((QUrlQuery*)this_)->addQueryItem(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:93
// [-2] void removeQueryItem(const class QString &)
extern "C"
void C_ZN9QUrlQuery15removeQueryItemERK7QString(void *this_, QString* key) {
  ((QUrlQuery*)this_)->removeQueryItem(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:96
// [-2] void removeAllQueryItems(const class QString &)
extern "C"
void C_ZN9QUrlQuery19removeAllQueryItemsERK7QString(void *this_, QString* key) {
  ((QUrlQuery*)this_)->removeAllQueryItems(*key);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:98
// [2] QChar defaultQueryValueDelimiter()
extern "C"
void* C_ZN9QUrlQuery26defaultQueryValueDelimiterEv() {
  auto rv = QUrlQuery::defaultQueryValueDelimiter();
return new QChar(rv);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:100
// [2] QChar defaultQueryPairDelimiter()
extern "C"
void* C_ZN9QUrlQuery25defaultQueryPairDelimiterEv() {
  auto rv = QUrlQuery::defaultQueryPairDelimiter();
return new QChar(rv);
}
//  main block end
