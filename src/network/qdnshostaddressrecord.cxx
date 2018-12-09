//  header block begin

// /usr/include/qt/QtNetwork/qdnslookup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdnslookup.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QDnsHostAddressRecord is pure virtual: false
// QDnsHostAddressRecord has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDnsHostAddressRecord_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDnsHostAddressRecord_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDnsHostAddressRecord_t qt_meta_stringdata_MyQDnsHostAddressRecord = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQDnsHostAddressRecord"
  },
  "MyQDnsHostAddressRecord"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDnsHostAddressRecord[] = {
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
class Q_DECL_EXPORT MyQDnsHostAddressRecord : public QDnsHostAddressRecord {
public:
  virtual ~MyQDnsHostAddressRecord() {}
// void QDnsHostAddressRecord()
MyQDnsHostAddressRecord() : QDnsHostAddressRecord() {}
// void QDnsHostAddressRecord(const QDnsHostAddressRecord &)
MyQDnsHostAddressRecord(const QDnsHostAddressRecord & other) : QDnsHostAddressRecord(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:87
// [-2] void QDnsHostAddressRecord()
extern "C" Q_DECL_EXPORT
void* C_ZN21QDnsHostAddressRecordC2Ev() {
  return  new QDnsHostAddressRecord();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:88
// [-2] void QDnsHostAddressRecord(const QDnsHostAddressRecord &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QDnsHostAddressRecordC2ERKS_(QDnsHostAddressRecord* other) {
  return  new QDnsHostAddressRecord(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:90
// [8] QDnsHostAddressRecord & operator=(QDnsHostAddressRecord &&)
extern "C" Q_DECL_EXPORT
void* C_ZN21QDnsHostAddressRecordaSEOS_(void *this_, QDnsHostAddressRecord && other) {
  auto& rv = ((QDnsHostAddressRecord*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:92
// [8] QDnsHostAddressRecord & operator=(const QDnsHostAddressRecord &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QDnsHostAddressRecordaSERKS_(void *this_, QDnsHostAddressRecord* other) {
  auto& rv = ((QDnsHostAddressRecord*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:93
// [-2] void ~QDnsHostAddressRecord()
extern "C" Q_DECL_EXPORT
void C_ZN21QDnsHostAddressRecordD2Ev(void *this_) {
  delete (QDnsHostAddressRecord*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:95
// [-2] void swap(QDnsHostAddressRecord &)
extern "C" Q_DECL_EXPORT
void C_ZN21QDnsHostAddressRecord4swapERS_(void *this_, QDnsHostAddressRecord* other) {
  ((QDnsHostAddressRecord*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:97
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QDnsHostAddressRecord4nameEv(void *this_) {
  auto rv = ((QDnsHostAddressRecord*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:98
// [4] quint32 timeToLive()
extern "C" Q_DECL_EXPORT
quint32 C_ZNK21QDnsHostAddressRecord10timeToLiveEv(void *this_) {
  return (quint32)((QDnsHostAddressRecord*)this_)->timeToLive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:99
// [8] QHostAddress value()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QDnsHostAddressRecord5valueEv(void *this_) {
  auto rv = ((QDnsHostAddressRecord*)this_)->value();
return new QHostAddress(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
