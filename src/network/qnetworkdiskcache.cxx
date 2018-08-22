//  header block begin
// since 0x040500
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkdiskcache.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkDiskCache is pure virtual: false
// QNetworkDiskCache has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQNetworkDiskCache : public QNetworkDiskCache {
public:
  virtual ~MyQNetworkDiskCache() {}
// void QNetworkDiskCache(QObject *)
MyQNetworkDiskCache(QObject * parent) : QNetworkDiskCache(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [8] qint64 expire()
  virtual qint64 expire()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"expire", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QNetworkDiskCache::expire();
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:79
// [8] qint64 expire()
extern "C" Q_DECL_EXPORT
qint64 C_ZN17QNetworkDiskCache6expireEv(void *this_) {
  return (qint64)((QNetworkDiskCache*)this_)->QNetworkDiskCache::expire();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QNetworkDiskCache10metaObjectEv(void *this_) {
  return (void*)((QNetworkDiskCache*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QNetworkDiskCache11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QNetworkDiskCache*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QNetworkDiskCache11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QNetworkDiskCache*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QNetworkDiskCache2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNetworkDiskCache::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QNetworkDiskCache6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNetworkDiskCache::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:56
// [-2] void QNetworkDiskCache(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QNetworkDiskCacheC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQNetworkDiskCache*)(0);
  return  new MyQNetworkDiskCache(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:57
// [-2] void ~QNetworkDiskCache()
extern "C" Q_DECL_EXPORT
void C_ZN17QNetworkDiskCacheD2Ev(void *this_) {
  delete (QNetworkDiskCache*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:59
// [8] QString cacheDirectory()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QNetworkDiskCache14cacheDirectoryEv(void *this_) {
  auto rv = ((QNetworkDiskCache*)this_)->cacheDirectory();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:60
// [-2] void setCacheDirectory(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN17QNetworkDiskCache17setCacheDirectoryERK7QString(void *this_, QString* cacheDir) {
  ((QNetworkDiskCache*)this_)->setCacheDirectory(*cacheDir);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:62
// [8] qint64 maximumCacheSize()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK17QNetworkDiskCache16maximumCacheSizeEv(void *this_) {
  return (qint64)((QNetworkDiskCache*)this_)->maximumCacheSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:63
// [-2] void setMaximumCacheSize(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN17QNetworkDiskCache19setMaximumCacheSizeEx(void *this_, qint64 size) {
  ((QNetworkDiskCache*)this_)->setMaximumCacheSize(size);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:65
// [8] qint64 cacheSize()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK17QNetworkDiskCache9cacheSizeEv(void *this_) {
  return (qint64)((QNetworkDiskCache*)this_)->cacheSize();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:66
// [8] QNetworkCacheMetaData metaData(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QNetworkDiskCache8metaDataERK4QUrl(void *this_, QUrl* url) {
  auto rv = ((QNetworkDiskCache*)this_)->metaData(*url);
return new QNetworkCacheMetaData(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:67
// [-2] void updateMetaData(const QNetworkCacheMetaData &)
extern "C" Q_DECL_EXPORT
void C_ZN17QNetworkDiskCache14updateMetaDataERK21QNetworkCacheMetaData(void *this_, QNetworkCacheMetaData* metaData) {
  ((QNetworkDiskCache*)this_)->updateMetaData(*metaData);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:68
// [8] QIODevice * data(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QNetworkDiskCache4dataERK4QUrl(void *this_, QUrl* url) {
  return (void*)((QNetworkDiskCache*)this_)->data(*url);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:69
// [1] bool remove(const QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZN17QNetworkDiskCache6removeERK4QUrl(void *this_, QUrl* url) {
  return (bool)((QNetworkDiskCache*)this_)->remove(*url);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:70
// [8] QIODevice * prepare(const QNetworkCacheMetaData &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QNetworkDiskCache7prepareERK21QNetworkCacheMetaData(void *this_, QNetworkCacheMetaData* metaData) {
  return (void*)((QNetworkDiskCache*)this_)->prepare(*metaData);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:71
// [-2] void insert(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN17QNetworkDiskCache6insertEP9QIODevice(void *this_, QIODevice * device) {
  ((QNetworkDiskCache*)this_)->insert(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:73
// [8] QNetworkCacheMetaData fileMetaData(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QNetworkDiskCache12fileMetaDataERK7QString(void *this_, QString* fileName) {
  auto rv = ((QNetworkDiskCache*)this_)->fileMetaData(*fileName);
return new QNetworkCacheMetaData(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdiskcache.h:76
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN17QNetworkDiskCache5clearEv(void *this_) {
  ((QNetworkDiskCache*)this_)->clear();
}

//  main block end
