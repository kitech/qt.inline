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

// QDnsDomainNameRecord is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdnsdomainnamerecord(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:67
// [8] QDnsDomainNameRecord & operator=(QDnsDomainNameRecord &&) 
// (12)qm3453187756 (31)_ZN20QDnsDomainNameRecordaSEOS_
//static
/*void qm3453187756(QDnsDomainNameRecord && other)*/ {
  QDnsDomainNameRecord && other =  static_cast<QDnsDomainNameRecord &&>(*(QDnsDomainNameRecord *)this_);
  (void) ((QDnsDomainNameRecord*)this_)->operator=(other);
  // auto xptr = (QDnsDomainNameRecord & (QDnsDomainNameRecord::*)(QDnsDomainNameRecord&&) ) &QDnsDomainNameRecord::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:71
// [-2] void swap(QDnsDomainNameRecord &) 
// (11)qm919260308 (34)_ZN20QDnsDomainNameRecord4swapERS_
//static
/*void qm919260308(QDnsDomainNameRecord & other)*/ {
  QDnsDomainNameRecord & other = *(QDnsDomainNameRecord *)this_;
  (void) ((QDnsDomainNameRecord*)this_)->swap(other);
   auto xptr = (void (QDnsDomainNameRecord::*)(QDnsDomainNameRecord&) ) &QDnsDomainNameRecord::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QDnsDomainNameRecordD2Ev(void *this_)*/ {
  delete (QDnsDomainNameRecord*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdnsdomainnamerecord
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
