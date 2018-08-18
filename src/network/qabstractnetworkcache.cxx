//  header block begin
// since 0x040500
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
// void QAbstractNetworkCache(QObject *)
MyQAbstractNetworkCache(QObject * parent) : QAbstractNetworkCache(parent) {}
// void QAbstractNetworkCache(QAbstractNetworkCachePrivate &, QObject *)
MyQAbstractNetworkCache(QAbstractNetworkCachePrivate & dd, QObject * parent) : QAbstractNetworkCache(dd, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:116
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QAbstractNetworkCache10metaObjectEv(void *this_) {
  return (void*)((QAbstractNetworkCache*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:116
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractNetworkCache11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractNetworkCache*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:116
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QAbstractNetworkCache11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractNetworkCache*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:116
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractNetworkCache2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractNetworkCache::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:116
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractNetworkCache6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractNetworkCache::trUtf8(s, c, n);
return new QString(rv);
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
// [8] QNetworkCacheMetaData metaData(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractNetworkCache8metaDataERK4QUrl(void *this_, QUrl* url) {
  auto rv = ((QAbstractNetworkCache*)this_)->metaData(*url);
return new QNetworkCacheMetaData(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:122
// [-2] void updateMetaData(const QNetworkCacheMetaData &)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractNetworkCache14updateMetaDataERK21QNetworkCacheMetaData(void *this_, QNetworkCacheMetaData* metaData) {
  ((QAbstractNetworkCache*)this_)->updateMetaData(*metaData);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:123
// [8] QIODevice * data(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractNetworkCache4dataERK4QUrl(void *this_, QUrl* url) {
  return (void*)((QAbstractNetworkCache*)this_)->data(*url);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:124
// [1] bool remove(const QUrl &)
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
// [8] QIODevice * prepare(const QNetworkCacheMetaData &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QAbstractNetworkCache7prepareERK21QNetworkCacheMetaData(void *this_, QNetworkCacheMetaData* metaData) {
  return (void*)((QAbstractNetworkCache*)this_)->prepare(*metaData);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:128
// [-2] void insert(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractNetworkCache6insertEP9QIODevice(void *this_, QIODevice * device) {
  ((QAbstractNetworkCache*)this_)->insert(device);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:131
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractNetworkCache5clearEv(void *this_) {
  ((QAbstractNetworkCache*)this_)->clear();
}

//  main block end
