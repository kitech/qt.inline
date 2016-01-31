#include <qstring.h>
#include <qabstractnetworkcache.h>
#include <qglobal.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qnetworkdiskcache.h
// dst-file: /src/network/qnetworkdiskcache.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qnetworkdiskcache.h>

extern "C" {

int QNetworkDiskCache_Class_Size()
{
  return sizeof(QNetworkDiskCache);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qnetworkdiskcache_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 59, column 12>
//   // proto:  qint64 QNetworkDiskCache::cacheSize();
if (true) {
  auto f = [](QNetworkDiskCache flythis) {
    ((QNetworkDiskCache*)0)->cacheSize();
    flythis.cacheSize();
  };
  if (f == nullptr){}
}
// _ZNK17QNetworkDiskCache9cacheSizeEv cacheSize()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 60, column 27>
//   // proto:  QNetworkCacheMetaData QNetworkDiskCache::metaData(const QUrl & url);
if (true) {
  auto f = [](QNetworkDiskCache flythis, const QUrl & arg1) {
    ((QNetworkDiskCache*)0)->metaData(arg1);
    flythis.metaData(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QNetworkDiskCache8metaDataERK4QUrl metaData(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 53, column 13>
//   // proto:  QString QNetworkDiskCache::cacheDirectory();
if (true) {
  auto f = [](QNetworkDiskCache flythis) {
    ((QNetworkDiskCache*)0)->cacheDirectory();
    flythis.cacheDirectory();
  };
  if (f == nullptr){}
}
// _ZNK17QNetworkDiskCache14cacheDirectoryEv cacheDirectory()
//   // proto:  void QNetworkDiskCache::~QNetworkDiskCache();
if (true) {
  delete ((QNetworkDiskCache*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 63, column 10>
//   // proto:  bool QNetworkDiskCache::remove(const QUrl & url);
if (true) {
  auto f = [](QNetworkDiskCache flythis, const QUrl & arg1) {
    ((QNetworkDiskCache*)0)->remove(arg1);
    flythis.remove(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QNetworkDiskCache6removeERK4QUrl remove(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 62, column 16>
//   // proto:  QIODevice * QNetworkDiskCache::data(const QUrl & url);
if (true) {
  auto f = [](QNetworkDiskCache flythis, const QUrl & arg1) {
    ((QNetworkDiskCache*)0)->data(arg1);
    flythis.data(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QNetworkDiskCache4dataERK4QUrl data(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 47, column 5>
//   // proto:  const QMetaObject * QNetworkDiskCache::metaObject();
if (true) {
  auto f = [](QNetworkDiskCache flythis) {
    ((QNetworkDiskCache*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK17QNetworkDiskCache10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 50, column 14>
//   // proto:  void QNetworkDiskCache::QNetworkDiskCache(QObject * parent);
if (true) {
  auto f = [](QObject * arg1) {
    new QNetworkDiskCache(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 61, column 10>
//   // proto:  void QNetworkDiskCache::updateMetaData(const QNetworkCacheMetaData & metaData);
if (true) {
  auto f = [](QNetworkDiskCache flythis, const QNetworkCacheMetaData & arg1) {
    ((QNetworkDiskCache*)0)->updateMetaData(arg1);
    flythis.updateMetaData(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QNetworkDiskCache14updateMetaDataERK21QNetworkCacheMetaData updateMetaData(const class QNetworkCacheMetaData &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 64, column 16>
//   // proto:  QIODevice * QNetworkDiskCache::prepare(const QNetworkCacheMetaData & metaData);
if (true) {
  auto f = [](QNetworkDiskCache flythis, const QNetworkCacheMetaData & arg1) {
    ((QNetworkDiskCache*)0)->prepare(arg1);
    flythis.prepare(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QNetworkDiskCache7prepareERK21QNetworkCacheMetaData prepare(const class QNetworkCacheMetaData &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 54, column 10>
//   // proto:  void QNetworkDiskCache::setCacheDirectory(const QString & cacheDir);
if (true) {
  auto f = [](QNetworkDiskCache flythis, const QString & arg1) {
    ((QNetworkDiskCache*)0)->setCacheDirectory(arg1);
    flythis.setCacheDirectory(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QNetworkDiskCache17setCacheDirectoryERK7QString setCacheDirectory(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 57, column 10>
//   // proto:  void QNetworkDiskCache::setMaximumCacheSize(qint64 size);
if (true) {
  auto f = [](QNetworkDiskCache flythis, qint64 arg1) {
    ((QNetworkDiskCache*)0)->setMaximumCacheSize(arg1);
    flythis.setMaximumCacheSize(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QNetworkDiskCache19setMaximumCacheSizeEx setMaximumCacheSize(qint64)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 65, column 10>
//   // proto:  void QNetworkDiskCache::insert(QIODevice * device);
if (true) {
  auto f = [](QNetworkDiskCache flythis, QIODevice * arg1) {
    ((QNetworkDiskCache*)0)->insert(arg1);
    flythis.insert(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QNetworkDiskCache6insertEP9QIODevice insert(class QIODevice *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 67, column 27>
//   // proto:  QNetworkCacheMetaData QNetworkDiskCache::fileMetaData(const QString & fileName);
if (true) {
  auto f = [](QNetworkDiskCache flythis, const QString & arg1) {
    ((QNetworkDiskCache*)0)->fileMetaData(arg1);
    flythis.fileMetaData(arg1);
  };
  if (f == nullptr){}
}
// _ZNK17QNetworkDiskCache12fileMetaDataERK7QString fileMetaData(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 70, column 10>
//   // proto:  void QNetworkDiskCache::clear();
if (true) {
  auto f = [](QNetworkDiskCache flythis) {
    ((QNetworkDiskCache*)0)->clear();
    flythis.clear();
  };
  if (f == nullptr){}
}
// _ZN17QNetworkDiskCache5clearEv clear()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 56, column 12>
//   // proto:  qint64 QNetworkDiskCache::maximumCacheSize();
if (true) {
  auto f = [](QNetworkDiskCache flythis) {
    ((QNetworkDiskCache*)0)->maximumCacheSize();
    flythis.maximumCacheSize();
  };
  if (f == nullptr){}
}
// _ZNK17QNetworkDiskCache16maximumCacheSizeEv maximumCacheSize()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 59, column 12>
//   // proto:  qint64 QNetworkDiskCache::cacheSize();
extern "C"
void C_ZNK17QNetworkDiskCache9cacheSizeEv(void *qthis) {
  ((QNetworkDiskCache*)qthis)->cacheSize();
}
// _ZNK17QNetworkDiskCache9cacheSizeEv cacheSize()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 60, column 27>
//   // proto:  QNetworkCacheMetaData QNetworkDiskCache::metaData(const QUrl & url);
extern "C"
void C_ZN17QNetworkDiskCache8metaDataERK4QUrl(void *qthis, const QUrl & arg1) {
  ((QNetworkDiskCache*)qthis)->metaData(arg1);
}
// _ZN17QNetworkDiskCache8metaDataERK4QUrl metaData(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 53, column 13>
//   // proto:  QString QNetworkDiskCache::cacheDirectory();
extern "C"
void C_ZNK17QNetworkDiskCache14cacheDirectoryEv(void *qthis) {
  ((QNetworkDiskCache*)qthis)->cacheDirectory();
}
// _ZNK17QNetworkDiskCache14cacheDirectoryEv cacheDirectory()
//   // proto:  void QNetworkDiskCache::~QNetworkDiskCache();
extern "C"
void C_ZN17QNetworkDiskCacheD2Ev(void *qthis) {
  delete (QNetworkDiskCache*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 63, column 10>
//   // proto:  bool QNetworkDiskCache::remove(const QUrl & url);
extern "C"
void C_ZN17QNetworkDiskCache6removeERK4QUrl(void *qthis, const QUrl & arg1) {
  ((QNetworkDiskCache*)qthis)->remove(arg1);
}
// _ZN17QNetworkDiskCache6removeERK4QUrl remove(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 62, column 16>
//   // proto:  QIODevice * QNetworkDiskCache::data(const QUrl & url);
extern "C"
void C_ZN17QNetworkDiskCache4dataERK4QUrl(void *qthis, const QUrl & arg1) {
  ((QNetworkDiskCache*)qthis)->data(arg1);
}
// _ZN17QNetworkDiskCache4dataERK4QUrl data(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 47, column 5>
//   // proto:  const QMetaObject * QNetworkDiskCache::metaObject();
extern "C"
void C_ZNK17QNetworkDiskCache10metaObjectEv(void *qthis) {
  ((QNetworkDiskCache*)qthis)->metaObject();
}
// _ZNK17QNetworkDiskCache10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 50, column 14>
//   // proto:  void QNetworkDiskCache::QNetworkDiskCache(QObject * parent);
extern "C"
void C_ZN17QNetworkDiskCacheC2EP7QObject(QObject * arg1) {
  new QNetworkDiskCache(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 61, column 10>
//   // proto:  void QNetworkDiskCache::updateMetaData(const QNetworkCacheMetaData & metaData);
extern "C"
void C_ZN17QNetworkDiskCache14updateMetaDataERK21QNetworkCacheMetaData(void *qthis, const QNetworkCacheMetaData & arg1) {
  ((QNetworkDiskCache*)qthis)->updateMetaData(arg1);
}
// _ZN17QNetworkDiskCache14updateMetaDataERK21QNetworkCacheMetaData updateMetaData(const class QNetworkCacheMetaData &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 64, column 16>
//   // proto:  QIODevice * QNetworkDiskCache::prepare(const QNetworkCacheMetaData & metaData);
extern "C"
void C_ZN17QNetworkDiskCache7prepareERK21QNetworkCacheMetaData(void *qthis, const QNetworkCacheMetaData & arg1) {
  ((QNetworkDiskCache*)qthis)->prepare(arg1);
}
// _ZN17QNetworkDiskCache7prepareERK21QNetworkCacheMetaData prepare(const class QNetworkCacheMetaData &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 54, column 10>
//   // proto:  void QNetworkDiskCache::setCacheDirectory(const QString & cacheDir);
extern "C"
void C_ZN17QNetworkDiskCache17setCacheDirectoryERK7QString(void *qthis, const QString & arg1) {
  ((QNetworkDiskCache*)qthis)->setCacheDirectory(arg1);
}
// _ZN17QNetworkDiskCache17setCacheDirectoryERK7QString setCacheDirectory(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 57, column 10>
//   // proto:  void QNetworkDiskCache::setMaximumCacheSize(qint64 size);
extern "C"
void C_ZN17QNetworkDiskCache19setMaximumCacheSizeEx(void *qthis, qint64 arg1) {
  ((QNetworkDiskCache*)qthis)->setMaximumCacheSize(arg1);
}
// _ZN17QNetworkDiskCache19setMaximumCacheSizeEx setMaximumCacheSize(qint64)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 65, column 10>
//   // proto:  void QNetworkDiskCache::insert(QIODevice * device);
extern "C"
void C_ZN17QNetworkDiskCache6insertEP9QIODevice(void *qthis, QIODevice * arg1) {
  ((QNetworkDiskCache*)qthis)->insert(arg1);
}
// _ZN17QNetworkDiskCache6insertEP9QIODevice insert(class QIODevice *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 67, column 27>
//   // proto:  QNetworkCacheMetaData QNetworkDiskCache::fileMetaData(const QString & fileName);
extern "C"
void C_ZNK17QNetworkDiskCache12fileMetaDataERK7QString(void *qthis, const QString & arg1) {
  ((QNetworkDiskCache*)qthis)->fileMetaData(arg1);
}
// _ZNK17QNetworkDiskCache12fileMetaDataERK7QString fileMetaData(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 70, column 10>
//   // proto:  void QNetworkDiskCache::clear();
extern "C"
void C_ZN17QNetworkDiskCache5clearEv(void *qthis) {
  ((QNetworkDiskCache*)qthis)->clear();
}
// _ZN17QNetworkDiskCache5clearEv clear()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkdiskcache.h', line 56, column 12>
//   // proto:  qint64 QNetworkDiskCache::maximumCacheSize();
extern "C"
void C_ZNK17QNetworkDiskCache16maximumCacheSizeEv(void *qthis) {
  ((QNetworkDiskCache*)qthis)->maximumCacheSize();
}
// _ZNK17QNetworkDiskCache16maximumCacheSizeEv maximumCacheSize()
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

