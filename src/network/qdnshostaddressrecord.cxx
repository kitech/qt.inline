//  header block begin

#ifndef QT_MINIMAL
#include <QtNetwork/qtnetworkglobal.h>
#if QT_CONFIG(dnslookup)
// /usr/include/qt/QtNetwork/qdnslookup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdnslookup.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QDnsHostAddressRecord is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdnshostaddressrecord(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:89
// [8] QDnsHostAddressRecord & operator=(QDnsHostAddressRecord &&) 
// (11)qm585135100 (32)_ZN21QDnsHostAddressRecordaSEOS_
//static
/*void qm585135100(QDnsHostAddressRecord && other)*/ {
  QDnsHostAddressRecord && other =  static_cast<QDnsHostAddressRecord &&>(*(QDnsHostAddressRecord *)this_);
  (void) ((QDnsHostAddressRecord*)this_)->operator=(other);
  // auto xptr = (QDnsHostAddressRecord & (QDnsHostAddressRecord::*)(QDnsHostAddressRecord&&) ) &QDnsHostAddressRecord::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:93
// [-2] void swap(QDnsHostAddressRecord &) 
// (12)qm2563864472 (35)_ZN21QDnsHostAddressRecord4swapERS_
//static
/*void qm2563864472(QDnsHostAddressRecord & other)*/ {
  QDnsHostAddressRecord & other = *(QDnsHostAddressRecord *)this_;
  (void) ((QDnsHostAddressRecord*)this_)->swap(other);
   auto xptr = (void (QDnsHostAddressRecord::*)(QDnsHostAddressRecord&) ) &QDnsHostAddressRecord::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QDnsHostAddressRecordD2Ev(void *this_)*/ {
  delete (QDnsHostAddressRecord*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdnshostaddressrecord
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(dnslookup)
#endif // #ifndef QT_MINIMAL
//  footer block end
