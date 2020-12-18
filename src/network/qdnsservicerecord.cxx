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

// QDnsServiceRecord is pure virtual: false false
// QDnsServiceRecord has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDnsServiceRecord_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDnsServiceRecord_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDnsServiceRecord_t qt_meta_stringdata_MyQDnsServiceRecord = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQDnsServiceRecord"
  },
  "MyQDnsServiceRecord"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDnsServiceRecord[] = {
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
class Q_DECL_EXPORT MyQDnsServiceRecord : public QDnsServiceRecord {
public:
  virtual ~MyQDnsServiceRecord() {}
// void QDnsServiceRecord()
MyQDnsServiceRecord() : QDnsServiceRecord() {}
// void QDnsServiceRecord(const QDnsServiceRecord &)
MyQDnsServiceRecord(const QDnsServiceRecord & other) : QDnsServiceRecord(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdnsservicerecord(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:134
// [8] QDnsServiceRecord & operator=(QDnsServiceRecord &&) 
// (12)qm1531322490 (28)_ZN17QDnsServiceRecordaSEOS_
//static
/*void qm1531322490(QDnsServiceRecord && other)*/ {
  QDnsServiceRecord && other =  static_cast<QDnsServiceRecord &&>(*(QDnsServiceRecord *)this_);
  (void) ((QDnsServiceRecord*)this_)->operator=(other);
  // auto xptr = (QDnsServiceRecord & (QDnsServiceRecord::*)(QDnsServiceRecord&&) ) &QDnsServiceRecord::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:138
// [-2] void swap(QDnsServiceRecord &) 
// (12)qm3544848537 (31)_ZN17QDnsServiceRecord4swapERS_
//static
/*void qm3544848537(QDnsServiceRecord & other)*/ {
  QDnsServiceRecord & other = *(QDnsServiceRecord *)this_;
  (void) ((QDnsServiceRecord*)this_)->swap(other);
   auto xptr = (void (QDnsServiceRecord::*)(QDnsServiceRecord&) ) &QDnsServiceRecord::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QDnsServiceRecordD2Ev(void *this_)*/ {
  delete (QDnsServiceRecord*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdnsservicerecord
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
