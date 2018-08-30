//  header block begin
// since 0x040500
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractnetworkcache.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkCacheMetaData is pure virtual: false
// QNetworkCacheMetaData has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQNetworkCacheMetaData_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkCacheMetaData_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkCacheMetaData_t qt_meta_stringdata_MyQNetworkCacheMetaData = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQNetworkCacheMetaData"
  },
  "MyQNetworkCacheMetaData"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkCacheMetaData[] = {
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
class Q_DECL_EXPORT MyQNetworkCacheMetaData : public QNetworkCacheMetaData {
public:
  virtual ~MyQNetworkCacheMetaData() {}
// void QNetworkCacheMetaData()
MyQNetworkCacheMetaData() : QNetworkCacheMetaData() {}
// void QNetworkCacheMetaData(const QNetworkCacheMetaData &)
MyQNetworkCacheMetaData(const QNetworkCacheMetaData & other) : QNetworkCacheMetaData(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:66
// [-2] void QNetworkCacheMetaData()
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkCacheMetaDataC2Ev() {
  return  new QNetworkCacheMetaData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:67
// [-2] void QNetworkCacheMetaData(const QNetworkCacheMetaData &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkCacheMetaDataC2ERKS_(QNetworkCacheMetaData* other) {
  return  new QNetworkCacheMetaData(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:68
// [-2] void ~QNetworkCacheMetaData()
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkCacheMetaDataD2Ev(void *this_) {
  delete (QNetworkCacheMetaData*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:71
// [8] QNetworkCacheMetaData & operator=(QNetworkCacheMetaData &&)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkCacheMetaDataaSEOS_(void *this_, QNetworkCacheMetaData && other) {
  auto& rv = ((QNetworkCacheMetaData*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:73
// [8] QNetworkCacheMetaData & operator=(const QNetworkCacheMetaData &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QNetworkCacheMetaDataaSERKS_(void *this_, QNetworkCacheMetaData* other) {
  auto& rv = ((QNetworkCacheMetaData*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:75
// [-2] void swap(QNetworkCacheMetaData &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkCacheMetaData4swapERS_(void *this_, QNetworkCacheMetaData* other) {
  ((QNetworkCacheMetaData*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:78
// [1] bool operator==(const QNetworkCacheMetaData &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QNetworkCacheMetaDataeqERKS_(void *this_, QNetworkCacheMetaData* other) {
  return (bool)((QNetworkCacheMetaData*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:79
// [1] bool operator!=(const QNetworkCacheMetaData &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QNetworkCacheMetaDataneERKS_(void *this_, QNetworkCacheMetaData* other) {
  return (bool)((QNetworkCacheMetaData*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:82
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QNetworkCacheMetaData7isValidEv(void *this_) {
  return (bool)((QNetworkCacheMetaData*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:84
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkCacheMetaData3urlEv(void *this_) {
  auto rv = ((QNetworkCacheMetaData*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:85
// [-2] void setUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkCacheMetaData6setUrlERK4QUrl(void *this_, QUrl* url) {
  ((QNetworkCacheMetaData*)this_)->setUrl(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:87
// [-2] QNetworkCacheMetaData::RawHeaderList rawHeaders()
extern "C" Q_DECL_EXPORT
QNetworkCacheMetaData::RawHeaderList* C_ZNK21QNetworkCacheMetaData10rawHeadersEv(void *this_) {
  auto rv = ((QNetworkCacheMetaData*)this_)->rawHeaders();
return new QNetworkCacheMetaData::RawHeaderList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:88
// [-2] void setRawHeaders(const QNetworkCacheMetaData::RawHeaderList &)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkCacheMetaData13setRawHeadersERK5QListI5QPairI10QByteArrayS2_EE(void *this_, const QNetworkCacheMetaData::RawHeaderList & headers) {
  ((QNetworkCacheMetaData*)this_)->setRawHeaders(headers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:90
// [8] QDateTime lastModified()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkCacheMetaData12lastModifiedEv(void *this_) {
  auto rv = ((QNetworkCacheMetaData*)this_)->lastModified();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:91
// [-2] void setLastModified(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkCacheMetaData15setLastModifiedERK9QDateTime(void *this_, QDateTime* dateTime) {
  ((QNetworkCacheMetaData*)this_)->setLastModified(*dateTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:93
// [8] QDateTime expirationDate()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QNetworkCacheMetaData14expirationDateEv(void *this_) {
  auto rv = ((QNetworkCacheMetaData*)this_)->expirationDate();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:94
// [-2] void setExpirationDate(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkCacheMetaData17setExpirationDateERK9QDateTime(void *this_, QDateTime* dateTime) {
  ((QNetworkCacheMetaData*)this_)->setExpirationDate(*dateTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:96
// [1] bool saveToDisk()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QNetworkCacheMetaData10saveToDiskEv(void *this_) {
  return (bool)((QNetworkCacheMetaData*)this_)->saveToDisk();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:97
// [-2] void setSaveToDisk(bool)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkCacheMetaData13setSaveToDiskEb(void *this_, bool allow) {
  ((QNetworkCacheMetaData*)this_)->setSaveToDisk(allow);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:99
// [-2] QNetworkCacheMetaData::AttributesMap attributes()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
QNetworkCacheMetaData::AttributesMap* C_ZNK21QNetworkCacheMetaData10attributesEv(void *this_) {
  auto rv = ((QNetworkCacheMetaData*)this_)->attributes();
return new QNetworkCacheMetaData::AttributesMap(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:100
// [-2] void setAttributes(const QNetworkCacheMetaData::AttributesMap &)
extern "C" Q_DECL_EXPORT
void C_ZN21QNetworkCacheMetaData13setAttributesERK5QHashIN15QNetworkRequest9AttributeE8QVariantE(void *this_, const QNetworkCacheMetaData::AttributesMap & attributes) {
  ((QNetworkCacheMetaData*)this_)->setAttributes(attributes);
}

//  main block end
