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

// QDnsMailExchangeRecord is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdnsmailexchangerecord(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:111
// [8] QDnsMailExchangeRecord & operator=(QDnsMailExchangeRecord &&) 
// (11)qm710205852 (33)_ZN22QDnsMailExchangeRecordaSEOS_
//static
/*void qm710205852(QDnsMailExchangeRecord && other)*/ {
  QDnsMailExchangeRecord && other =  static_cast<QDnsMailExchangeRecord &&>(*(QDnsMailExchangeRecord *)this_);
  (void) ((QDnsMailExchangeRecord*)this_)->operator=(other);
  // auto xptr = (QDnsMailExchangeRecord & (QDnsMailExchangeRecord::*)(QDnsMailExchangeRecord&&) ) &QDnsMailExchangeRecord::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:115
// [-2] void swap(QDnsMailExchangeRecord &) 
// (12)qm1602036669 (36)_ZN22QDnsMailExchangeRecord4swapERS_
//static
/*void qm1602036669(QDnsMailExchangeRecord & other)*/ {
  QDnsMailExchangeRecord & other = *(QDnsMailExchangeRecord *)this_;
  (void) ((QDnsMailExchangeRecord*)this_)->swap(other);
   auto xptr = (void (QDnsMailExchangeRecord::*)(QDnsMailExchangeRecord&) ) &QDnsMailExchangeRecord::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QDnsMailExchangeRecordD2Ev(void *this_)*/ {
  delete (QDnsMailExchangeRecord*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdnsmailexchangerecord
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
