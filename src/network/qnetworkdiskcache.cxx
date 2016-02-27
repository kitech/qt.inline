// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qnetworkdiskcache.h
// dst-file: /src/network/qnetworkdiskcache.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qnetworkdiskcache.h>


#include <qglobal.h>
#include <qabstractnetworkcache.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qnetworkdiskcache_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QNetworkDiskCache_Class_Size()
{
  return sizeof(QNetworkDiskCache);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 59, column 12>
//   // proto:  qint64 QNetworkDiskCache::cacheSize();
// _ZNK17QNetworkDiskCache9cacheSizeEv cacheSize()
extern "C"
long long
C_ZNK17QNetworkDiskCache9cacheSizeEv(void *qthis) {
  auto ret =
  ((QNetworkDiskCache*)qthis)->cacheSize();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 60, column 27>
//   // proto:  QNetworkCacheMetaData QNetworkDiskCache::metaData(const QUrl & url);
// _ZN17QNetworkDiskCache8metaDataERK4QUrl metaData(const class QUrl &)
extern "C"
QNetworkCacheMetaData*
C_ZN17QNetworkDiskCache8metaDataERK4QUrl(void *qthis,
const QUrl* arg1) {
  auto ret =
  ((QNetworkDiskCache*)qthis)->metaData(*((const QUrl*)arg1));
  return new QNetworkCacheMetaData(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 53, column 13>
//   // proto:  QString QNetworkDiskCache::cacheDirectory();
// _ZNK17QNetworkDiskCache14cacheDirectoryEv cacheDirectory()
extern "C"
QString*
C_ZNK17QNetworkDiskCache14cacheDirectoryEv(void *qthis) {
  auto ret =
  ((QNetworkDiskCache*)qthis)->cacheDirectory();
  return new QString(ret); // 5
}
//   // proto:  void QNetworkDiskCache::~QNetworkDiskCache();
extern "C"
void C_ZN17QNetworkDiskCacheD2Ev(void *qthis) {
  delete (QNetworkDiskCache*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 63, column 10>
//   // proto:  bool QNetworkDiskCache::remove(const QUrl & url);
// _ZN17QNetworkDiskCache6removeERK4QUrl remove(const class QUrl &)
extern "C"
bool
C_ZN17QNetworkDiskCache6removeERK4QUrl(void *qthis,
const QUrl* arg1) {
  auto ret =
  ((QNetworkDiskCache*)qthis)->remove(*((const QUrl*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 62, column 16>
//   // proto:  QIODevice * QNetworkDiskCache::data(const QUrl & url);
// _ZN17QNetworkDiskCache4dataERK4QUrl data(const class QUrl &)
extern "C"
void*
C_ZN17QNetworkDiskCache4dataERK4QUrl(void *qthis,
const QUrl* arg1) {
  auto ret =
  ((QNetworkDiskCache*)qthis)->data(*((const QUrl*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 47, column 5>
//   // proto:  const QMetaObject * QNetworkDiskCache::metaObject();
// _ZNK17QNetworkDiskCache10metaObjectEv metaObject()
extern "C"
void*
C_ZNK17QNetworkDiskCache10metaObjectEv(void *qthis) {
  auto ret =
  ((QNetworkDiskCache*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 50, column 14>
//   // proto:  void QNetworkDiskCache::QNetworkDiskCache(QObject * parent);
extern "C"
QNetworkDiskCache*
C_ZN17QNetworkDiskCacheC2EP7QObject(QObject * arg1) {
  auto ret = new QNetworkDiskCache(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 61, column 10>
//   // proto:  void QNetworkDiskCache::updateMetaData(const QNetworkCacheMetaData & metaData);
// _ZN17QNetworkDiskCache14updateMetaDataERK21QNetworkCacheMetaData updateMetaData(const class QNetworkCacheMetaData &)
extern "C"
void
C_ZN17QNetworkDiskCache14updateMetaDataERK21QNetworkCacheMetaData(void *qthis,
const QNetworkCacheMetaData* arg1) {
  ((QNetworkDiskCache*)qthis)->updateMetaData(*((const QNetworkCacheMetaData*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 64, column 16>
//   // proto:  QIODevice * QNetworkDiskCache::prepare(const QNetworkCacheMetaData & metaData);
// _ZN17QNetworkDiskCache7prepareERK21QNetworkCacheMetaData prepare(const class QNetworkCacheMetaData &)
extern "C"
void*
C_ZN17QNetworkDiskCache7prepareERK21QNetworkCacheMetaData(void *qthis,
const QNetworkCacheMetaData* arg1) {
  auto ret =
  ((QNetworkDiskCache*)qthis)->prepare(*((const QNetworkCacheMetaData*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 54, column 10>
//   // proto:  void QNetworkDiskCache::setCacheDirectory(const QString & cacheDir);
// _ZN17QNetworkDiskCache17setCacheDirectoryERK7QString setCacheDirectory(const class QString &)
extern "C"
void
C_ZN17QNetworkDiskCache17setCacheDirectoryERK7QString(void *qthis,
const QString* arg1) {
  ((QNetworkDiskCache*)qthis)->setCacheDirectory(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 57, column 10>
//   // proto:  void QNetworkDiskCache::setMaximumCacheSize(qint64 size);
// _ZN17QNetworkDiskCache19setMaximumCacheSizeEx setMaximumCacheSize(qint64)
extern "C"
void
C_ZN17QNetworkDiskCache19setMaximumCacheSizeEx(void *qthis,
qint64 arg1) {
  ((QNetworkDiskCache*)qthis)->setMaximumCacheSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 65, column 10>
//   // proto:  void QNetworkDiskCache::insert(QIODevice * device);
// _ZN17QNetworkDiskCache6insertEP9QIODevice insert(class QIODevice *)
extern "C"
void
C_ZN17QNetworkDiskCache6insertEP9QIODevice(void *qthis,
QIODevice * arg1) {
  ((QNetworkDiskCache*)qthis)->insert(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 67, column 27>
//   // proto:  QNetworkCacheMetaData QNetworkDiskCache::fileMetaData(const QString & fileName);
// _ZNK17QNetworkDiskCache12fileMetaDataERK7QString fileMetaData(const class QString &)
extern "C"
QNetworkCacheMetaData*
C_ZNK17QNetworkDiskCache12fileMetaDataERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QNetworkDiskCache*)qthis)->fileMetaData(*((const QString*)arg1));
  return new QNetworkCacheMetaData(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 70, column 10>
//   // proto:  void QNetworkDiskCache::clear();
// _ZN17QNetworkDiskCache5clearEv clear()
extern "C"
void
C_ZN17QNetworkDiskCache5clearEv(void *qthis) {
  ((QNetworkDiskCache*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 56, column 12>
//   // proto:  qint64 QNetworkDiskCache::maximumCacheSize();
// _ZNK17QNetworkDiskCache16maximumCacheSizeEv maximumCacheSize()
extern "C"
long long
C_ZNK17QNetworkDiskCache16maximumCacheSizeEv(void *qthis) {
  auto ret =
  ((QNetworkDiskCache*)qthis)->maximumCacheSize();
  return ret; // 0 TypeKind.LONGLONG
}
// <= ext block end

// body block begin =>
// QNetworkDiskCache_SlotProxy here
class QNetworkDiskCache_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QNetworkDiskCache_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/network/qnetworkdiskcache.moc"

extern "C" {
  QNetworkDiskCache_SlotProxy* QNetworkDiskCache_SlotProxy_new()
  {
    return new QNetworkDiskCache_SlotProxy();
  }
};

// <= body block end

