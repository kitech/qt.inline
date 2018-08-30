//  header block begin
// since 0x050000
// /usr/include/qt/QtCore/qurlquery.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qurlquery.h>
#include <QtCore>
#include "callback_inherit.h"

// QUrlQuery is pure virtual: false
// QUrlQuery has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQUrlQuery_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQUrlQuery_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQUrlQuery_t qt_meta_stringdata_MyQUrlQuery = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQUrlQuery"
  },
  "MyQUrlQuery"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQUrlQuery[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQUrlQuery : public QUrlQuery {
public:
  virtual ~MyQUrlQuery() {}
// void QUrlQuery()
MyQUrlQuery() : QUrlQuery() {}
// void QUrlQuery(const QUrl &)
MyQUrlQuery(const QUrl & url) : QUrlQuery(url) {}
// void QUrlQuery(const QString &)
MyQUrlQuery(const QString & queryString) : QUrlQuery(queryString) {}
// void QUrlQuery(const QUrlQuery &)
MyQUrlQuery(const QUrlQuery & other) : QUrlQuery(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:59
// [-2] void QUrlQuery()
extern "C" Q_DECL_EXPORT
void* C_ZN9QUrlQueryC2Ev() {
  return  new QUrlQuery();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:60
// [-2] void QUrlQuery(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QUrlQueryC2ERK4QUrl(QUrl* url) {
  return  new QUrlQuery(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:61
// [-2] void QUrlQuery(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QUrlQueryC2ERK7QString(QString* queryString) {
  return  new QUrlQuery(*queryString);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:62
// [-2] void QUrlQuery(const QUrlQuery &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QUrlQueryC2ERKS_(QUrlQuery* other) {
  return  new QUrlQuery(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:63
// [8] QUrlQuery & operator=(const QUrlQuery &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QUrlQueryaSERKS_(void *this_, QUrlQuery* other) {
  auto& rv = ((QUrlQuery*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:65
// [8] QUrlQuery & operator=(QUrlQuery &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QUrlQueryaSEOS_(void *this_, QUrlQuery && other) {
  auto& rv = ((QUrlQuery*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:67
// [-2] void ~QUrlQuery()
extern "C" Q_DECL_EXPORT
void C_ZN9QUrlQueryD2Ev(void *this_) {
  delete (QUrlQuery*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:69
// [1] bool operator==(const QUrlQuery &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QUrlQueryeqERKS_(void *this_, QUrlQuery* other) {
  return (bool)((QUrlQuery*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:70
// [1] bool operator!=(const QUrlQuery &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QUrlQueryneERKS_(void *this_, QUrlQuery* other) {
  return (bool)((QUrlQuery*)this_)->operator!=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:73
// [-2] void swap(QUrlQuery &)
extern "C" Q_DECL_EXPORT
void C_ZN9QUrlQuery4swapERS_(void *this_, QUrlQuery* other) {
  ((QUrlQuery*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:75
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QUrlQuery7isEmptyEv(void *this_) {
  return (bool)((QUrlQuery*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:76
// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QUrlQuery10isDetachedEv(void *this_) {
  return (bool)((QUrlQuery*)this_)->isDetached();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:77
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN9QUrlQuery5clearEv(void *this_) {
  ((QUrlQuery*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:79
// [8] QString query(QUrl::ComponentFormattingOptions)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QUrlQuery5queryE6QFlagsIN4QUrl25ComponentFormattingOptionEE(void *this_, QFlags<QUrl::ComponentFormattingOption> encoding) {
  auto rv = ((QUrlQuery*)this_)->query(encoding);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:80
// [-2] void setQuery(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QUrlQuery8setQueryERK7QString(void *this_, QString* queryString) {
  ((QUrlQuery*)this_)->setQuery(*queryString);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:81
// [8] QString toString(QUrl::ComponentFormattingOptions)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QUrlQuery8toStringE6QFlagsIN4QUrl25ComponentFormattingOptionEE(void *this_, QFlags<QUrl::ComponentFormattingOption> encoding) {
  auto rv = ((QUrlQuery*)this_)->toString(encoding);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:84
// [-2] void setQueryDelimiters(QChar, QChar)
extern "C" Q_DECL_EXPORT
void C_ZN9QUrlQuery18setQueryDelimitersE5QCharS0_(void *this_, QChar* valueDelimiter, QChar* pairDelimiter) {
  ((QUrlQuery*)this_)->setQueryDelimiters(*valueDelimiter, *pairDelimiter);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:85
// [2] QChar queryValueDelimiter()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QUrlQuery19queryValueDelimiterEv(void *this_) {
  auto rv = ((QUrlQuery*)this_)->queryValueDelimiter();
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:86
// [2] QChar queryPairDelimiter()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QUrlQuery18queryPairDelimiterEv(void *this_) {
  auto rv = ((QUrlQuery*)this_)->queryPairDelimiter();
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:88
// [-2] void setQueryItems(const QList<QPair<QString, QString> > &)
extern "C" Q_DECL_EXPORT
void C_ZN9QUrlQuery13setQueryItemsERK5QListI5QPairI7QStringS2_EE(void *this_, QList<QPair<QString, QString> >* query) {
  ((QUrlQuery*)this_)->setQueryItems(*query);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:89
// [-2] QList<QPair<QString, QString> > queryItems(QUrl::ComponentFormattingOptions)
extern "C" Q_DECL_EXPORT
QList<QPair<QString, QString> >* C_ZNK9QUrlQuery10queryItemsE6QFlagsIN4QUrl25ComponentFormattingOptionEE(void *this_, QFlags<QUrl::ComponentFormattingOption> encoding) {
  auto rv = ((QUrlQuery*)this_)->queryItems(encoding);
return new QList<QPair<QString, QString> >(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:91
// [1] bool hasQueryItem(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QUrlQuery12hasQueryItemERK7QString(void *this_, QString* key) {
  return (bool)((QUrlQuery*)this_)->hasQueryItem(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:92
// [-2] void addQueryItem(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QUrlQuery12addQueryItemERK7QStringS2_(void *this_, QString* key, QString* value) {
  ((QUrlQuery*)this_)->addQueryItem(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:93
// [-2] void removeQueryItem(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QUrlQuery15removeQueryItemERK7QString(void *this_, QString* key) {
  ((QUrlQuery*)this_)->removeQueryItem(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:94
// [8] QString queryItemValue(const QString &, QUrl::ComponentFormattingOptions)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QUrlQuery14queryItemValueERK7QString6QFlagsIN4QUrl25ComponentFormattingOptionEE(void *this_, QString* key, QFlags<QUrl::ComponentFormattingOption> encoding) {
  auto rv = ((QUrlQuery*)this_)->queryItemValue(*key, encoding);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:95
// [8] QStringList allQueryItemValues(const QString &, QUrl::ComponentFormattingOptions)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QUrlQuery18allQueryItemValuesERK7QString6QFlagsIN4QUrl25ComponentFormattingOptionEE(void *this_, QString* key, QFlags<QUrl::ComponentFormattingOption> encoding) {
  auto rv = ((QUrlQuery*)this_)->allQueryItemValues(*key, encoding);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:96
// [-2] void removeAllQueryItems(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QUrlQuery19removeAllQueryItemsERK7QString(void *this_, QString* key) {
  ((QUrlQuery*)this_)->removeAllQueryItems(*key);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:98
// [2] QChar defaultQueryValueDelimiter()
extern "C" Q_DECL_EXPORT
void* C_ZN9QUrlQuery26defaultQueryValueDelimiterEv() {
  auto rv = QUrlQuery::defaultQueryValueDelimiter();
return new QChar(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:100
// [2] QChar defaultQueryPairDelimiter()
extern "C" Q_DECL_EXPORT
void* C_ZN9QUrlQuery25defaultQueryPairDelimiterEv() {
  auto rv = QUrlQuery::defaultQueryPairDelimiter();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:109
// [8] QUrlQuery::DataPtr & data_ptr()
extern "C" Q_DECL_EXPORT
void* C_ZN9QUrlQuery8data_ptrEv(void *this_) {
  auto& rv = ((QUrlQuery*)this_)->data_ptr();
return &rv;
}

//  main block end
