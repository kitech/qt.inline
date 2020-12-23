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


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdnshostaddressrecord(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:87
// [-2] void QDnsHostAddressRecord() 
// (12)qm2767704415 (30)_ZN21QDnsHostAddressRecordC2Ev
/*void* qm2767704415()*/{
  ;
  this_ =  new QDnsHostAddressRecord();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:88
// [-2] void QDnsHostAddressRecord(const QDnsHostAddressRecord &) 
// (11)qm445004640 (33)_ZN21QDnsHostAddressRecordC2ERKS_
/*void* qm445004640(const QDnsHostAddressRecord & other)*/{
  const QDnsHostAddressRecord & other = *(const QDnsHostAddressRecord *)this_;
  this_ =  new QDnsHostAddressRecord(other);
}

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
