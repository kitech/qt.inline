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

// QDnsTextRecord is pure virtual: false false
// QDnsTextRecord has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDnsTextRecord_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDnsTextRecord_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDnsTextRecord_t qt_meta_stringdata_MyQDnsTextRecord = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQDnsTextRecord"
  },
  "MyQDnsTextRecord"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDnsTextRecord[] = {
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
class Q_DECL_EXPORT MyQDnsTextRecord : public QDnsTextRecord {
public:
  virtual ~MyQDnsTextRecord() {}
// void QDnsTextRecord()
MyQDnsTextRecord() : QDnsTextRecord() {}
// void QDnsTextRecord(const QDnsTextRecord &)
MyQDnsTextRecord(const QDnsTextRecord & other) : QDnsTextRecord(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdnstextrecord(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:157
// [-2] void QDnsTextRecord() 
// (12)qm2995262049 (23)_ZN14QDnsTextRecordC2Ev
/*void* qm2995262049()*/{
  ;
  this_ =  new QDnsTextRecord();
  this_ =  new MyQDnsTextRecord();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:158
// [-2] void QDnsTextRecord(const QDnsTextRecord &) 
// (11)qm337517516 (26)_ZN14QDnsTextRecordC2ERKS_
/*void* qm337517516(const QDnsTextRecord & other)*/{
  const QDnsTextRecord & other = *(const QDnsTextRecord *)this_;
  this_ =  new QDnsTextRecord(other);
  this_ =  new MyQDnsTextRecord(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:159
// [8] QDnsTextRecord & operator=(QDnsTextRecord &&) 
// (12)qm1632169460 (25)_ZN14QDnsTextRecordaSEOS_
//static
/*void qm1632169460(QDnsTextRecord && other)*/ {
  QDnsTextRecord && other =  static_cast<QDnsTextRecord &&>(*(QDnsTextRecord *)this_);
  (void) ((QDnsTextRecord*)this_)->operator=(other);
  // auto xptr = (QDnsTextRecord & (QDnsTextRecord::*)(QDnsTextRecord&&) ) &QDnsTextRecord::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:163
// [-2] void swap(QDnsTextRecord &) 
// (12)qm2702027309 (28)_ZN14QDnsTextRecord4swapERS_
//static
/*void qm2702027309(QDnsTextRecord & other)*/ {
  QDnsTextRecord & other = *(QDnsTextRecord *)this_;
  (void) ((QDnsTextRecord*)this_)->swap(other);
   auto xptr = (void (QDnsTextRecord::*)(QDnsTextRecord&) ) &QDnsTextRecord::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QDnsTextRecordD2Ev(void *this_)*/ {
  delete (QDnsTextRecord*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdnstextrecord
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
