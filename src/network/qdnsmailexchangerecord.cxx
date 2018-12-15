//  header block begin

#ifndef QT_MINIMAL
// /usr/include/qt/QtNetwork/qdnslookup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdnslookup.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QDnsMailExchangeRecord is pure virtual: false
// QDnsMailExchangeRecord has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDnsMailExchangeRecord_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDnsMailExchangeRecord_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDnsMailExchangeRecord_t qt_meta_stringdata_MyQDnsMailExchangeRecord = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQDnsMailExchangeRecord"
  },
  "MyQDnsMailExchangeRecord"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDnsMailExchangeRecord[] = {
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
class Q_DECL_EXPORT MyQDnsMailExchangeRecord : public QDnsMailExchangeRecord {
public:
  virtual ~MyQDnsMailExchangeRecord() {}
// void QDnsMailExchangeRecord()
MyQDnsMailExchangeRecord() : QDnsMailExchangeRecord() {}
// void QDnsMailExchangeRecord(const QDnsMailExchangeRecord &)
MyQDnsMailExchangeRecord(const QDnsMailExchangeRecord & other) : QDnsMailExchangeRecord(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:113
// [-2] void QDnsMailExchangeRecord()
extern "C" Q_DECL_EXPORT
void* C_ZN22QDnsMailExchangeRecordC2Ev() {
  return  new QDnsMailExchangeRecord();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:114
// [-2] void QDnsMailExchangeRecord(const QDnsMailExchangeRecord &)
extern "C" Q_DECL_EXPORT
void* C_ZN22QDnsMailExchangeRecordC2ERKS_(QDnsMailExchangeRecord* other) {
  return  new QDnsMailExchangeRecord(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:116
// [8] QDnsMailExchangeRecord & operator=(QDnsMailExchangeRecord &&)
extern "C" Q_DECL_EXPORT
void* C_ZN22QDnsMailExchangeRecordaSEOS_(void *this_, QDnsMailExchangeRecord && other) {
  auto& rv = ((QDnsMailExchangeRecord*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:118
// [8] QDnsMailExchangeRecord & operator=(const QDnsMailExchangeRecord &)
extern "C" Q_DECL_EXPORT
void* C_ZN22QDnsMailExchangeRecordaSERKS_(void *this_, QDnsMailExchangeRecord* other) {
  auto& rv = ((QDnsMailExchangeRecord*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:119
// [-2] void ~QDnsMailExchangeRecord()
extern "C" Q_DECL_EXPORT
void C_ZN22QDnsMailExchangeRecordD2Ev(void *this_) {
  delete (QDnsMailExchangeRecord*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:121
// [-2] void swap(QDnsMailExchangeRecord &)
extern "C" Q_DECL_EXPORT
void C_ZN22QDnsMailExchangeRecord4swapERS_(void *this_, QDnsMailExchangeRecord* other) {
  ((QDnsMailExchangeRecord*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:123
// [8] QString exchange()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QDnsMailExchangeRecord8exchangeEv(void *this_) {
  auto rv = ((QDnsMailExchangeRecord*)this_)->exchange();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:124
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QDnsMailExchangeRecord4nameEv(void *this_) {
  auto rv = ((QDnsMailExchangeRecord*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:125
// [2] quint16 preference()
extern "C" Q_DECL_EXPORT
quint16 C_ZNK22QDnsMailExchangeRecord10preferenceEv(void *this_) {
  return (quint16)((QDnsMailExchangeRecord*)this_)->preference();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:126
// [4] quint32 timeToLive()
extern "C" Q_DECL_EXPORT
quint32 C_ZNK22QDnsMailExchangeRecord10timeToLiveEv(void *this_) {
  return (quint32)((QDnsMailExchangeRecord*)this_)->timeToLive();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
