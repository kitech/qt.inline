#include <qglobal.h>
#include <qurl.h>
#include <qdatetime.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qabstractnetworkcache.h
// dst-file: /src/network/qabstractnetworkcache.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qabstractnetworkcache.h>

extern "C" {

int QNetworkCacheMetaData_Class_Size()
{
  return sizeof(QNetworkCacheMetaData);
}

int QAbstractNetworkCache_Class_Size()
{
  return sizeof(QAbstractNetworkCache);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qabstractnetworkcache_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 81, column 10>
//   // proto:  void QNetworkCacheMetaData::setLastModified(const QDateTime & dateTime);
if (true) {
  auto f = [](QNetworkCacheMetaData flythis, const QDateTime & arg1) {
    ((QNetworkCacheMetaData*)0)->setLastModified(arg1);
    flythis.setLastModified(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkCacheMetaData15setLastModifiedERK9QDateTime setLastModified(const class QDateTime &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 80, column 15>
//   // proto:  QDateTime QNetworkCacheMetaData::lastModified();
if (true) {
  auto f = [](QNetworkCacheMetaData flythis) {
    ((QNetworkCacheMetaData*)0)->lastModified();
    flythis.lastModified();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkCacheMetaData12lastModifiedEv lastModified()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 60, column 5>
//   // proto:  void QNetworkCacheMetaData::QNetworkCacheMetaData(const QNetworkCacheMetaData & other);
if (true) {
  auto f = [](const QNetworkCacheMetaData & arg1) {
    new QNetworkCacheMetaData(arg1);
  };
  if (f == nullptr){}
}
//   // proto:  void QNetworkCacheMetaData::~QNetworkCacheMetaData();
if (true) {
  delete ((QNetworkCacheMetaData*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 77, column 19>
//   // proto:  RawHeaderList QNetworkCacheMetaData::rawHeaders();
if (true) {
  auto f = [](QNetworkCacheMetaData flythis) {
    ((QNetworkCacheMetaData*)0)->rawHeaders();
    flythis.rawHeaders();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkCacheMetaData10rawHeadersEv rawHeaders()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 65, column 10>
//   // proto:  void QNetworkCacheMetaData::swap(QNetworkCacheMetaData & other);
if (true) {
  auto f = [](QNetworkCacheMetaData flythis, QNetworkCacheMetaData & arg1) {
    ((QNetworkCacheMetaData*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkCacheMetaData4swapERS_ swap(class QNetworkCacheMetaData &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 74, column 10>
//   // proto:  QUrl QNetworkCacheMetaData::url();
if (true) {
  auto f = [](QNetworkCacheMetaData flythis) {
    ((QNetworkCacheMetaData*)0)->url();
    flythis.url();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkCacheMetaData3urlEv url()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 83, column 15>
//   // proto:  QDateTime QNetworkCacheMetaData::expirationDate();
if (true) {
  auto f = [](QNetworkCacheMetaData flythis) {
    ((QNetworkCacheMetaData*)0)->expirationDate();
    flythis.expirationDate();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkCacheMetaData14expirationDateEv expirationDate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 89, column 19>
//   // proto:  AttributesMap QNetworkCacheMetaData::attributes();
if (true) {
  auto f = [](QNetworkCacheMetaData flythis) {
    ((QNetworkCacheMetaData*)0)->attributes();
    flythis.attributes();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkCacheMetaData10attributesEv attributes()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 84, column 10>
//   // proto:  void QNetworkCacheMetaData::setExpirationDate(const QDateTime & dateTime);
if (true) {
  auto f = [](QNetworkCacheMetaData flythis, const QDateTime & arg1) {
    ((QNetworkCacheMetaData*)0)->setExpirationDate(arg1);
    flythis.setExpirationDate(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkCacheMetaData17setExpirationDateERK9QDateTime setExpirationDate(const class QDateTime &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 90, column 10>
//   // proto:  void QNetworkCacheMetaData::setAttributes(const AttributesMap & attributes);
if (true) {
  auto f = [](QNetworkCacheMetaData flythis, const AttributesMap & arg1) {
    ((QNetworkCacheMetaData*)0)->setAttributes(arg1);
    flythis.setAttributes(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkCacheMetaData13setAttributesERK5QHashIN15QNetworkRequest9AttributeE8QVariantE setAttributes(const AttributesMap &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 86, column 10>
//   // proto:  bool QNetworkCacheMetaData::saveToDisk();
if (true) {
  auto f = [](QNetworkCacheMetaData flythis) {
    ((QNetworkCacheMetaData*)0)->saveToDisk();
    flythis.saveToDisk();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkCacheMetaData10saveToDiskEv saveToDisk()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 59, column 5>
//   // proto:  void QNetworkCacheMetaData::QNetworkCacheMetaData();
if (true) {
  auto f = []() {
    new QNetworkCacheMetaData();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 75, column 10>
//   // proto:  void QNetworkCacheMetaData::setUrl(const QUrl & url);
if (true) {
  auto f = [](QNetworkCacheMetaData flythis, const QUrl & arg1) {
    ((QNetworkCacheMetaData*)0)->setUrl(arg1);
    flythis.setUrl(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkCacheMetaData6setUrlERK4QUrl setUrl(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 87, column 10>
//   // proto:  void QNetworkCacheMetaData::setSaveToDisk(bool allow);
if (true) {
  auto f = [](QNetworkCacheMetaData flythis, bool arg1) {
    ((QNetworkCacheMetaData*)0)->setSaveToDisk(arg1);
    flythis.setSaveToDisk(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkCacheMetaData13setSaveToDiskEb setSaveToDisk(_Bool)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 78, column 10>
//   // proto:  void QNetworkCacheMetaData::setRawHeaders(const RawHeaderList & headers);
if (true) {
  auto f = [](QNetworkCacheMetaData flythis, const RawHeaderList & arg1) {
    ((QNetworkCacheMetaData*)0)->setRawHeaders(arg1);
    flythis.setRawHeaders(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QNetworkCacheMetaData13setRawHeadersERK5QListI5QPairI10QByteArrayS2_EE setRawHeaders(const RawHeaderList &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 72, column 10>
//   // proto:  bool QNetworkCacheMetaData::isValid();
if (true) {
  auto f = [](QNetworkCacheMetaData flythis) {
    ((QNetworkCacheMetaData*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK21QNetworkCacheMetaData7isValidEv isValid()
//   // proto:  void QAbstractNetworkCache::~QAbstractNetworkCache();
if (true) {
  delete ((QAbstractNetworkCache*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 111, column 35>
//   // proto:  QNetworkCacheMetaData QAbstractNetworkCache::metaData(const QUrl & url);
if (true) {
  auto f = [](const QUrl & arg1) {
    ((QAbstractNetworkCache*)0)->metaData(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QAbstractNetworkCache8metaDataERK4QUrl metaData(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 106, column 5>
//   // proto:  const QMetaObject * QAbstractNetworkCache::metaObject();
if (true) {
  auto f = []() {
    ((QAbstractNetworkCache*)0)->metaObject();
  };
  if (f == nullptr){}
}
// _ZNK21QAbstractNetworkCache10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 113, column 24>
//   // proto:  QIODevice * QAbstractNetworkCache::data(const QUrl & url);
if (true) {
  auto f = [](const QUrl & arg1) {
    ((QAbstractNetworkCache*)0)->data(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QAbstractNetworkCache4dataERK4QUrl data(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 118, column 18>
//   // proto:  void QAbstractNetworkCache::insert(QIODevice * device);
if (true) {
  auto f = [](QIODevice * arg1) {
    ((QAbstractNetworkCache*)0)->insert(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QAbstractNetworkCache6insertEP9QIODevice insert(class QIODevice *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 114, column 18>
//   // proto:  bool QAbstractNetworkCache::remove(const QUrl & url);
if (true) {
  auto f = [](const QUrl & arg1) {
    ((QAbstractNetworkCache*)0)->remove(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QAbstractNetworkCache6removeERK4QUrl remove(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 117, column 24>
//   // proto:  QIODevice * QAbstractNetworkCache::prepare(const QNetworkCacheMetaData & metaData);
if (true) {
  auto f = [](const QNetworkCacheMetaData & arg1) {
    ((QAbstractNetworkCache*)0)->prepare(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QAbstractNetworkCache7prepareERK21QNetworkCacheMetaData prepare(const class QNetworkCacheMetaData &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 121, column 18>
//   // proto:  void QAbstractNetworkCache::clear();
if (true) {
  auto f = []() {
    ((QAbstractNetworkCache*)0)->clear();
  };
  if (f == nullptr){}
}
// _ZN21QAbstractNetworkCache5clearEv clear()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 115, column 20>
//   // proto:  qint64 QAbstractNetworkCache::cacheSize();
if (true) {
  auto f = []() {
    ((QAbstractNetworkCache*)0)->cacheSize();
  };
  if (f == nullptr){}
}
// _ZNK21QAbstractNetworkCache9cacheSizeEv cacheSize()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 112, column 18>
//   // proto:  void QAbstractNetworkCache::updateMetaData(const QNetworkCacheMetaData & metaData);
if (true) {
  auto f = [](const QNetworkCacheMetaData & arg1) {
    ((QAbstractNetworkCache*)0)->updateMetaData(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QAbstractNetworkCache14updateMetaDataERK21QNetworkCacheMetaData updateMetaData(const class QNetworkCacheMetaData &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 81, column 10>
//   // proto:  void QNetworkCacheMetaData::setLastModified(const QDateTime & dateTime);
extern "C"
void C_ZN21QNetworkCacheMetaData15setLastModifiedERK9QDateTime(void *qthis, const QDateTime & arg1) {
  ((QNetworkCacheMetaData*)qthis)->setLastModified(arg1);
}
// _ZN21QNetworkCacheMetaData15setLastModifiedERK9QDateTime setLastModified(const class QDateTime &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 80, column 15>
//   // proto:  QDateTime QNetworkCacheMetaData::lastModified();
extern "C"
void C_ZNK21QNetworkCacheMetaData12lastModifiedEv(void *qthis) {
  ((QNetworkCacheMetaData*)qthis)->lastModified();
}
// _ZNK21QNetworkCacheMetaData12lastModifiedEv lastModified()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 60, column 5>
//   // proto:  void QNetworkCacheMetaData::QNetworkCacheMetaData(const QNetworkCacheMetaData & other);
extern "C"
void C_ZN21QNetworkCacheMetaDataC2ERKS_(const QNetworkCacheMetaData & arg1) {
  new QNetworkCacheMetaData(arg1);
}
//   // proto:  void QNetworkCacheMetaData::~QNetworkCacheMetaData();
extern "C"
void C_ZN21QNetworkCacheMetaDataD2Ev(void *qthis) {
  delete (QNetworkCacheMetaData*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 77, column 19>
//   // proto:  RawHeaderList QNetworkCacheMetaData::rawHeaders();
extern "C"
void C_ZNK21QNetworkCacheMetaData10rawHeadersEv(void *qthis) {
  ((QNetworkCacheMetaData*)qthis)->rawHeaders();
}
// _ZNK21QNetworkCacheMetaData10rawHeadersEv rawHeaders()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 65, column 10>
//   // proto:  void QNetworkCacheMetaData::swap(QNetworkCacheMetaData & other);
extern "C"
void C_ZN21QNetworkCacheMetaData4swapERS_(void *qthis, QNetworkCacheMetaData & arg1) {
  ((QNetworkCacheMetaData*)qthis)->swap(arg1);
}
// _ZN21QNetworkCacheMetaData4swapERS_ swap(class QNetworkCacheMetaData &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 74, column 10>
//   // proto:  QUrl QNetworkCacheMetaData::url();
extern "C"
void C_ZNK21QNetworkCacheMetaData3urlEv(void *qthis) {
  ((QNetworkCacheMetaData*)qthis)->url();
}
// _ZNK21QNetworkCacheMetaData3urlEv url()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 83, column 15>
//   // proto:  QDateTime QNetworkCacheMetaData::expirationDate();
extern "C"
void C_ZNK21QNetworkCacheMetaData14expirationDateEv(void *qthis) {
  ((QNetworkCacheMetaData*)qthis)->expirationDate();
}
// _ZNK21QNetworkCacheMetaData14expirationDateEv expirationDate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 89, column 19>
//   // proto:  AttributesMap QNetworkCacheMetaData::attributes();
extern "C"
void C_ZNK21QNetworkCacheMetaData10attributesEv(void *qthis) {
  ((QNetworkCacheMetaData*)qthis)->attributes();
}
// _ZNK21QNetworkCacheMetaData10attributesEv attributes()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 84, column 10>
//   // proto:  void QNetworkCacheMetaData::setExpirationDate(const QDateTime & dateTime);
extern "C"
void C_ZN21QNetworkCacheMetaData17setExpirationDateERK9QDateTime(void *qthis, const QDateTime & arg1) {
  ((QNetworkCacheMetaData*)qthis)->setExpirationDate(arg1);
}
// _ZN21QNetworkCacheMetaData17setExpirationDateERK9QDateTime setExpirationDate(const class QDateTime &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 90, column 10>
//   // proto:  void QNetworkCacheMetaData::setAttributes(const AttributesMap & attributes);
extern "C"
void C_ZN21QNetworkCacheMetaData13setAttributesERK5QHashIN15QNetworkRequest9AttributeE8QVariantE(void *qthis, const AttributesMap & arg1) {
  ((QNetworkCacheMetaData*)qthis)->setAttributes(arg1);
}
// _ZN21QNetworkCacheMetaData13setAttributesERK5QHashIN15QNetworkRequest9AttributeE8QVariantE setAttributes(const AttributesMap &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 86, column 10>
//   // proto:  bool QNetworkCacheMetaData::saveToDisk();
extern "C"
void C_ZNK21QNetworkCacheMetaData10saveToDiskEv(void *qthis) {
  ((QNetworkCacheMetaData*)qthis)->saveToDisk();
}
// _ZNK21QNetworkCacheMetaData10saveToDiskEv saveToDisk()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 59, column 5>
//   // proto:  void QNetworkCacheMetaData::QNetworkCacheMetaData();
extern "C"
void C_ZN21QNetworkCacheMetaDataC2Ev() {
  new QNetworkCacheMetaData();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 75, column 10>
//   // proto:  void QNetworkCacheMetaData::setUrl(const QUrl & url);
extern "C"
void C_ZN21QNetworkCacheMetaData6setUrlERK4QUrl(void *qthis, const QUrl & arg1) {
  ((QNetworkCacheMetaData*)qthis)->setUrl(arg1);
}
// _ZN21QNetworkCacheMetaData6setUrlERK4QUrl setUrl(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 87, column 10>
//   // proto:  void QNetworkCacheMetaData::setSaveToDisk(bool allow);
extern "C"
void C_ZN21QNetworkCacheMetaData13setSaveToDiskEb(void *qthis, bool arg1) {
  ((QNetworkCacheMetaData*)qthis)->setSaveToDisk(arg1);
}
// _ZN21QNetworkCacheMetaData13setSaveToDiskEb setSaveToDisk(_Bool)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 78, column 10>
//   // proto:  void QNetworkCacheMetaData::setRawHeaders(const RawHeaderList & headers);
extern "C"
void C_ZN21QNetworkCacheMetaData13setRawHeadersERK5QListI5QPairI10QByteArrayS2_EE(void *qthis, const RawHeaderList & arg1) {
  ((QNetworkCacheMetaData*)qthis)->setRawHeaders(arg1);
}
// _ZN21QNetworkCacheMetaData13setRawHeadersERK5QListI5QPairI10QByteArrayS2_EE setRawHeaders(const RawHeaderList &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 72, column 10>
//   // proto:  bool QNetworkCacheMetaData::isValid();
extern "C"
void C_ZNK21QNetworkCacheMetaData7isValidEv(void *qthis) {
  ((QNetworkCacheMetaData*)qthis)->isValid();
}
// _ZNK21QNetworkCacheMetaData7isValidEv isValid()
//   // proto:  void QAbstractNetworkCache::~QAbstractNetworkCache();
extern "C"
void C_ZN21QAbstractNetworkCacheD2Ev(void *qthis) {
  delete (QAbstractNetworkCache*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 111, column 35>
//   // proto:  QNetworkCacheMetaData QAbstractNetworkCache::metaData(const QUrl & url);
extern "C"
void C_ZN21QAbstractNetworkCache8metaDataERK4QUrl(void *qthis, const QUrl & arg1) {
  ((QAbstractNetworkCache*)qthis)->metaData(arg1);
}
// _ZN21QAbstractNetworkCache8metaDataERK4QUrl metaData(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 106, column 5>
//   // proto:  const QMetaObject * QAbstractNetworkCache::metaObject();
extern "C"
void C_ZNK21QAbstractNetworkCache10metaObjectEv(void *qthis) {
  ((QAbstractNetworkCache*)qthis)->metaObject();
}
// _ZNK21QAbstractNetworkCache10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 113, column 24>
//   // proto:  QIODevice * QAbstractNetworkCache::data(const QUrl & url);
extern "C"
void C_ZN21QAbstractNetworkCache4dataERK4QUrl(void *qthis, const QUrl & arg1) {
  ((QAbstractNetworkCache*)qthis)->data(arg1);
}
// _ZN21QAbstractNetworkCache4dataERK4QUrl data(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 118, column 18>
//   // proto:  void QAbstractNetworkCache::insert(QIODevice * device);
extern "C"
void C_ZN21QAbstractNetworkCache6insertEP9QIODevice(void *qthis, QIODevice * arg1) {
  ((QAbstractNetworkCache*)qthis)->insert(arg1);
}
// _ZN21QAbstractNetworkCache6insertEP9QIODevice insert(class QIODevice *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 114, column 18>
//   // proto:  bool QAbstractNetworkCache::remove(const QUrl & url);
extern "C"
void C_ZN21QAbstractNetworkCache6removeERK4QUrl(void *qthis, const QUrl & arg1) {
  ((QAbstractNetworkCache*)qthis)->remove(arg1);
}
// _ZN21QAbstractNetworkCache6removeERK4QUrl remove(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 117, column 24>
//   // proto:  QIODevice * QAbstractNetworkCache::prepare(const QNetworkCacheMetaData & metaData);
extern "C"
void C_ZN21QAbstractNetworkCache7prepareERK21QNetworkCacheMetaData(void *qthis, const QNetworkCacheMetaData & arg1) {
  ((QAbstractNetworkCache*)qthis)->prepare(arg1);
}
// _ZN21QAbstractNetworkCache7prepareERK21QNetworkCacheMetaData prepare(const class QNetworkCacheMetaData &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 121, column 18>
//   // proto:  void QAbstractNetworkCache::clear();
extern "C"
void C_ZN21QAbstractNetworkCache5clearEv(void *qthis) {
  ((QAbstractNetworkCache*)qthis)->clear();
}
// _ZN21QAbstractNetworkCache5clearEv clear()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 115, column 20>
//   // proto:  qint64 QAbstractNetworkCache::cacheSize();
extern "C"
void C_ZNK21QAbstractNetworkCache9cacheSizeEv(void *qthis) {
  ((QAbstractNetworkCache*)qthis)->cacheSize();
}
// _ZNK21QAbstractNetworkCache9cacheSizeEv cacheSize()
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 112, column 18>
//   // proto:  void QAbstractNetworkCache::updateMetaData(const QNetworkCacheMetaData & metaData);
extern "C"
void C_ZN21QAbstractNetworkCache14updateMetaDataERK21QNetworkCacheMetaData(void *qthis, const QNetworkCacheMetaData & arg1) {
  ((QAbstractNetworkCache*)qthis)->updateMetaData(arg1);
}
// _ZN21QAbstractNetworkCache14updateMetaDataERK21QNetworkCacheMetaData updateMetaData(const class QNetworkCacheMetaData &)
// <= ext block end

// body block begin =>
// QAbstractNetworkCache_SlotProxy here
class QAbstractNetworkCache_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractNetworkCache_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/network/qabstractnetworkcache.moc"

extern "C" {
  QAbstractNetworkCache_SlotProxy* QAbstractNetworkCache_SlotProxy_new()
  {
    return new QAbstractNetworkCache_SlotProxy();
  }
};

// <= body block end

