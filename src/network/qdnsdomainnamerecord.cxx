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


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdnsdomainnamerecord(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:65
// [-2] void QDnsDomainNameRecord() 
// (12)qm3536950032 (29)_ZN20QDnsDomainNameRecordC2Ev
/*void* qm3536950032()*/{
  ;
  this_ =  new QDnsDomainNameRecord();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:66
// [-2] void QDnsDomainNameRecord(const QDnsDomainNameRecord &) 
// (12)qm1895979409 (32)_ZN20QDnsDomainNameRecordC2ERKS_
/*void* qm1895979409(const QDnsDomainNameRecord & other)*/{
  const QDnsDomainNameRecord & other = *(const QDnsDomainNameRecord *)this_;
  this_ =  new QDnsDomainNameRecord(other);
}

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
