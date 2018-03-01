//  header block begin
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h
#ifndef protected
#define protected public
#endif
#include <qabstractnetworkcache.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QAbstractNetworkCache is pure virtual: true
// QAbstractNetworkCache has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractNetworkCache : public QAbstractNetworkCache {
public:
  virtual ~MyQAbstractNetworkCache() {}
// void QAbstractNetworkCache(class QObject *)
MyQAbstractNetworkCache(QObject * parent) : QAbstractNetworkCache(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:116
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAbstractNetworkCache10metaObjectEv(void *this_) {
  return (void*)((QAbstractNetworkCache*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:119
// [-2] void ~QAbstractNetworkCache()
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractNetworkCacheD2Ev(void *this_) {
  delete (QAbstractNetworkCache*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:121
// [8] QNetworkCacheMetaData metaData(const class QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractNetworkCache8metaDataERK4QUrl(void *this_, QUrl* url) {
  auto rv = ((QAbstractNetworkCache*)this_)->metaData(*url);
return new QNetworkCacheMetaData(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:122
// [-2] void updateMetaData(const class QNetworkCacheMetaData &)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractNetworkCache14updateMetaDataERK21QNetworkCacheMetaData(void *this_, QNetworkCacheMetaData* metaData) {
  ((QAbstractNetworkCache*)this_)->updateMetaData(*metaData);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:123
// [8] QIODevice * data(const class QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractNetworkCache4dataERK4QUrl(void *this_, QUrl* url) {
  return (void*)((QAbstractNetworkCache*)this_)->data(*url);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:124
// [1] bool remove(const class QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QAbstractNetworkCache6removeERK4QUrl(void *this_, QUrl* url) {
  return (bool)((QAbstractNetworkCache*)this_)->remove(*url);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:125
// [8] qint64 cacheSize()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK21QAbstractNetworkCache9cacheSizeEv(void *this_) {
  return (qint64)((QAbstractNetworkCache*)this_)->cacheSize();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:127
// [8] QIODevice * prepare(const class QNetworkCacheMetaData &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractNetworkCache7prepareERK21QNetworkCacheMetaData(void *this_, QNetworkCacheMetaData* metaData) {
  return (void*)((QAbstractNetworkCache*)this_)->prepare(*metaData);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:131
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractNetworkCache5clearEv(void *this_) {
  ((QAbstractNetworkCache*)this_)->clear();
}

//  main block end
