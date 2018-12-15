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

// QDnsDomainNameRecord is pure virtual: false
// QDnsDomainNameRecord has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDnsDomainNameRecord_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDnsDomainNameRecord_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDnsDomainNameRecord_t qt_meta_stringdata_MyQDnsDomainNameRecord = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQDnsDomainNameRecord"
  },
  "MyQDnsDomainNameRecord"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDnsDomainNameRecord[] = {
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
class Q_DECL_EXPORT MyQDnsDomainNameRecord : public QDnsDomainNameRecord {
public:
  virtual ~MyQDnsDomainNameRecord() {}
// void QDnsDomainNameRecord()
MyQDnsDomainNameRecord() : QDnsDomainNameRecord() {}
// void QDnsDomainNameRecord(const QDnsDomainNameRecord &)
MyQDnsDomainNameRecord(const QDnsDomainNameRecord & other) : QDnsDomainNameRecord(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:65
// [-2] void QDnsDomainNameRecord()
extern "C" Q_DECL_EXPORT
void* C_ZN20QDnsDomainNameRecordC2Ev() {
  return  new QDnsDomainNameRecord();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:66
// [-2] void QDnsDomainNameRecord(const QDnsDomainNameRecord &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QDnsDomainNameRecordC2ERKS_(QDnsDomainNameRecord* other) {
  return  new QDnsDomainNameRecord(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:68
// [8] QDnsDomainNameRecord & operator=(QDnsDomainNameRecord &&)
extern "C" Q_DECL_EXPORT
void* C_ZN20QDnsDomainNameRecordaSEOS_(void *this_, QDnsDomainNameRecord && other) {
  auto& rv = ((QDnsDomainNameRecord*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:70
// [8] QDnsDomainNameRecord & operator=(const QDnsDomainNameRecord &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QDnsDomainNameRecordaSERKS_(void *this_, QDnsDomainNameRecord* other) {
  auto& rv = ((QDnsDomainNameRecord*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:71
// [-2] void ~QDnsDomainNameRecord()
extern "C" Q_DECL_EXPORT
void C_ZN20QDnsDomainNameRecordD2Ev(void *this_) {
  delete (QDnsDomainNameRecord*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:73
// [-2] void swap(QDnsDomainNameRecord &)
extern "C" Q_DECL_EXPORT
void C_ZN20QDnsDomainNameRecord4swapERS_(void *this_, QDnsDomainNameRecord* other) {
  ((QDnsDomainNameRecord*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:75
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QDnsDomainNameRecord4nameEv(void *this_) {
  auto rv = ((QDnsDomainNameRecord*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:76
// [4] quint32 timeToLive()
extern "C" Q_DECL_EXPORT
quint32 C_ZNK20QDnsDomainNameRecord10timeToLiveEv(void *this_) {
  return (quint32)((QDnsDomainNameRecord*)this_)->timeToLive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:77
// [8] QString value()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QDnsDomainNameRecord5valueEv(void *this_) {
  auto rv = ((QDnsDomainNameRecord*)this_)->value();
return new QString(rv);
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
