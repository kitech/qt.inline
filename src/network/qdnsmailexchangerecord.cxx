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


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdnsmailexchangerecord(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:109
// [-2] void QDnsMailExchangeRecord() 
// (12)qm3722461366 (31)_ZN22QDnsMailExchangeRecordC2Ev
/*void* qm3722461366()*/{
  ;
  this_ =  new QDnsMailExchangeRecord();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:110
// [-2] void QDnsMailExchangeRecord(const QDnsMailExchangeRecord &) 
// (12)qm1463611050 (34)_ZN22QDnsMailExchangeRecordC2ERKS_
/*void* qm1463611050(const QDnsMailExchangeRecord & other)*/{
  const QDnsMailExchangeRecord & other = *(const QDnsMailExchangeRecord *)this_;
  this_ =  new QDnsMailExchangeRecord(other);
}

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
