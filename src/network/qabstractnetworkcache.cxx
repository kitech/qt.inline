// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qabstractnetworkcache.h
// dst-file: /src/network/qabstractnetworkcache.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstractnetworkcache.h>


#include <qdatetime.h>
#include <qurl.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qabstractnetworkcache_inline_symbols() {
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
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QNetworkCacheMetaData_Class_Size()
{
  return sizeof(QNetworkCacheMetaData);
}

extern "C"
int QAbstractNetworkCache_Class_Size()
{
  return sizeof(QAbstractNetworkCache);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 81, column 10>
//   // proto:  void QNetworkCacheMetaData::setLastModified(const QDateTime & dateTime);
// _ZN21QNetworkCacheMetaData15setLastModifiedERK9QDateTime setLastModified(const class QDateTime &)
extern "C"
void
C_ZN21QNetworkCacheMetaData15setLastModifiedERK9QDateTime(void *qthis,
const QDateTime* arg1) {
  ((QNetworkCacheMetaData*)qthis)->setLastModified(*((const QDateTime*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 80, column 15>
//   // proto:  QDateTime QNetworkCacheMetaData::lastModified();
// _ZNK21QNetworkCacheMetaData12lastModifiedEv lastModified()
extern "C"
QDateTime*
C_ZNK21QNetworkCacheMetaData12lastModifiedEv(void *qthis) {
  auto ret =
  ((QNetworkCacheMetaData*)qthis)->lastModified();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 60, column 5>
//   // proto:  void QNetworkCacheMetaData::QNetworkCacheMetaData(const QNetworkCacheMetaData & other);
extern "C"
QNetworkCacheMetaData*
C_ZN21QNetworkCacheMetaDataC2ERKS_(const QNetworkCacheMetaData* arg1) {
  auto ret = new QNetworkCacheMetaData(*((const QNetworkCacheMetaData*)arg1));
  return ret;
}
//   // proto:  void QNetworkCacheMetaData::~QNetworkCacheMetaData();
extern "C"
void C_ZN21QNetworkCacheMetaDataD2Ev(void *qthis) {
  delete (QNetworkCacheMetaData*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 77, column 19>
//   // proto:  RawHeaderList QNetworkCacheMetaData::rawHeaders();
// _ZNK21QNetworkCacheMetaData10rawHeadersEv rawHeaders()
extern "C"
QList<QPair<QByteArray, QByteArray> >*
C_ZNK21QNetworkCacheMetaData10rawHeadersEv(void *qthis) {
  auto ret =
  ((QNetworkCacheMetaData*)qthis)->rawHeaders();
  return new QList<QPair<QByteArray, QByteArray> >(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 65, column 10>
//   // proto:  void QNetworkCacheMetaData::swap(QNetworkCacheMetaData & other);
// _ZN21QNetworkCacheMetaData4swapERS_ swap(class QNetworkCacheMetaData &)
extern "C"
void
C_ZN21QNetworkCacheMetaData4swapERS_(void *qthis,
QNetworkCacheMetaData* arg1) {
  ((QNetworkCacheMetaData*)qthis)->swap(*((QNetworkCacheMetaData*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 74, column 10>
//   // proto:  QUrl QNetworkCacheMetaData::url();
// _ZNK21QNetworkCacheMetaData3urlEv url()
extern "C"
QUrl*
C_ZNK21QNetworkCacheMetaData3urlEv(void *qthis) {
  auto ret =
  ((QNetworkCacheMetaData*)qthis)->url();
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 83, column 15>
//   // proto:  QDateTime QNetworkCacheMetaData::expirationDate();
// _ZNK21QNetworkCacheMetaData14expirationDateEv expirationDate()
extern "C"
QDateTime*
C_ZNK21QNetworkCacheMetaData14expirationDateEv(void *qthis) {
  auto ret =
  ((QNetworkCacheMetaData*)qthis)->expirationDate();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 89, column 19>
//   // proto:  AttributesMap QNetworkCacheMetaData::attributes();
// _ZNK21QNetworkCacheMetaData10attributesEv attributes()
extern "C"
QHash<QNetworkRequest::Attribute, QVariant>*
C_ZNK21QNetworkCacheMetaData10attributesEv(void *qthis) {
  auto ret =
  ((QNetworkCacheMetaData*)qthis)->attributes();
  return new QHash<QNetworkRequest::Attribute, QVariant>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 84, column 10>
//   // proto:  void QNetworkCacheMetaData::setExpirationDate(const QDateTime & dateTime);
// _ZN21QNetworkCacheMetaData17setExpirationDateERK9QDateTime setExpirationDate(const class QDateTime &)
extern "C"
void
C_ZN21QNetworkCacheMetaData17setExpirationDateERK9QDateTime(void *qthis,
const QDateTime* arg1) {
  ((QNetworkCacheMetaData*)qthis)->setExpirationDate(*((const QDateTime*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 90, column 10>
//   // proto:  void QNetworkCacheMetaData::setAttributes(const AttributesMap & attributes);
// _ZN21QNetworkCacheMetaData13setAttributesERK5QHashIN15QNetworkRequest9AttributeE8QVariantE setAttributes(const AttributesMap &)
extern "C"
void
C_ZN21QNetworkCacheMetaData13setAttributesERK5QHashIN15QNetworkRequest9AttributeE8QVariantE(void *qthis,
const QNetworkCacheMetaData::AttributesMap* arg1) {
  ((QNetworkCacheMetaData*)qthis)->setAttributes(*((const QNetworkCacheMetaData::AttributesMap*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 86, column 10>
//   // proto:  bool QNetworkCacheMetaData::saveToDisk();
// _ZNK21QNetworkCacheMetaData10saveToDiskEv saveToDisk()
extern "C"
bool
C_ZNK21QNetworkCacheMetaData10saveToDiskEv(void *qthis) {
  auto ret =
  ((QNetworkCacheMetaData*)qthis)->saveToDisk();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 59, column 5>
//   // proto:  void QNetworkCacheMetaData::QNetworkCacheMetaData();
extern "C"
QNetworkCacheMetaData*
C_ZN21QNetworkCacheMetaDataC2Ev() {
  auto ret = new QNetworkCacheMetaData();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 75, column 10>
//   // proto:  void QNetworkCacheMetaData::setUrl(const QUrl & url);
// _ZN21QNetworkCacheMetaData6setUrlERK4QUrl setUrl(const class QUrl &)
extern "C"
void
C_ZN21QNetworkCacheMetaData6setUrlERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QNetworkCacheMetaData*)qthis)->setUrl(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 87, column 10>
//   // proto:  void QNetworkCacheMetaData::setSaveToDisk(bool allow);
// _ZN21QNetworkCacheMetaData13setSaveToDiskEb setSaveToDisk(_Bool)
extern "C"
void
C_ZN21QNetworkCacheMetaData13setSaveToDiskEb(void *qthis,
bool arg1) {
  ((QNetworkCacheMetaData*)qthis)->setSaveToDisk(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 78, column 10>
//   // proto:  void QNetworkCacheMetaData::setRawHeaders(const RawHeaderList & headers);
// _ZN21QNetworkCacheMetaData13setRawHeadersERK5QListI5QPairI10QByteArrayS2_EE setRawHeaders(const RawHeaderList &)
extern "C"
void
C_ZN21QNetworkCacheMetaData13setRawHeadersERK5QListI5QPairI10QByteArrayS2_EE(void *qthis,
const QNetworkCacheMetaData::RawHeaderList* arg1) {
  ((QNetworkCacheMetaData*)qthis)->setRawHeaders(*((const QNetworkCacheMetaData::RawHeaderList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 72, column 10>
//   // proto:  bool QNetworkCacheMetaData::isValid();
// _ZNK21QNetworkCacheMetaData7isValidEv isValid()
extern "C"
bool
C_ZNK21QNetworkCacheMetaData7isValidEv(void *qthis) {
  auto ret =
  ((QNetworkCacheMetaData*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QAbstractNetworkCache::~QAbstractNetworkCache();
extern "C"
void C_ZN21QAbstractNetworkCacheD2Ev(void *qthis) {
  delete (QAbstractNetworkCache*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 111, column 35>
//   // proto:  QNetworkCacheMetaData QAbstractNetworkCache::metaData(const QUrl & url);
// _ZN21QAbstractNetworkCache8metaDataERK4QUrl metaData(const class QUrl &)
extern "C"
QNetworkCacheMetaData*
C_ZN21QAbstractNetworkCache8metaDataERK4QUrl(void *qthis,
const QUrl* arg1) {
  auto ret =
  ((QAbstractNetworkCache*)qthis)->metaData(*((const QUrl*)arg1));
  return new QNetworkCacheMetaData(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 106, column 5>
//   // proto:  const QMetaObject * QAbstractNetworkCache::metaObject();
// _ZNK21QAbstractNetworkCache10metaObjectEv metaObject()
extern "C"
void*
C_ZNK21QAbstractNetworkCache10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractNetworkCache*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 113, column 24>
//   // proto:  QIODevice * QAbstractNetworkCache::data(const QUrl & url);
// _ZN21QAbstractNetworkCache4dataERK4QUrl data(const class QUrl &)
extern "C"
void*
C_ZN21QAbstractNetworkCache4dataERK4QUrl(void *qthis,
const QUrl* arg1) {
  auto ret =
  ((QAbstractNetworkCache*)qthis)->data(*((const QUrl*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 118, column 18>
//   // proto:  void QAbstractNetworkCache::insert(QIODevice * device);
// _ZN21QAbstractNetworkCache6insertEP9QIODevice insert(class QIODevice *)
extern "C"
void
C_ZN21QAbstractNetworkCache6insertEP9QIODevice(void *qthis,
QIODevice * arg1) {
  ((QAbstractNetworkCache*)qthis)->insert(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 114, column 18>
//   // proto:  bool QAbstractNetworkCache::remove(const QUrl & url);
// _ZN21QAbstractNetworkCache6removeERK4QUrl remove(const class QUrl &)
extern "C"
bool
C_ZN21QAbstractNetworkCache6removeERK4QUrl(void *qthis,
const QUrl* arg1) {
  auto ret =
  ((QAbstractNetworkCache*)qthis)->remove(*((const QUrl*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 117, column 24>
//   // proto:  QIODevice * QAbstractNetworkCache::prepare(const QNetworkCacheMetaData & metaData);
// _ZN21QAbstractNetworkCache7prepareERK21QNetworkCacheMetaData prepare(const class QNetworkCacheMetaData &)
extern "C"
void*
C_ZN21QAbstractNetworkCache7prepareERK21QNetworkCacheMetaData(void *qthis,
const QNetworkCacheMetaData* arg1) {
  auto ret =
  ((QAbstractNetworkCache*)qthis)->prepare(*((const QNetworkCacheMetaData*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 121, column 18>
//   // proto:  void QAbstractNetworkCache::clear();
// _ZN21QAbstractNetworkCache5clearEv clear()
extern "C"
void
C_ZN21QAbstractNetworkCache5clearEv(void *qthis) {
  ((QAbstractNetworkCache*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 115, column 20>
//   // proto:  qint64 QAbstractNetworkCache::cacheSize();
// _ZNK21QAbstractNetworkCache9cacheSizeEv cacheSize()
extern "C"
long long
C_ZNK21QAbstractNetworkCache9cacheSizeEv(void *qthis) {
  auto ret =
  ((QAbstractNetworkCache*)qthis)->cacheSize();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qabstractnetworkcache.h', line 112, column 18>
//   // proto:  void QAbstractNetworkCache::updateMetaData(const QNetworkCacheMetaData & metaData);
// _ZN21QAbstractNetworkCache14updateMetaDataERK21QNetworkCacheMetaData updateMetaData(const class QNetworkCacheMetaData &)
extern "C"
void
C_ZN21QAbstractNetworkCache14updateMetaDataERK21QNetworkCacheMetaData(void *qthis,
const QNetworkCacheMetaData* arg1) {
  ((QAbstractNetworkCache*)qthis)->updateMetaData(*((const QNetworkCacheMetaData*)arg1));
}
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

