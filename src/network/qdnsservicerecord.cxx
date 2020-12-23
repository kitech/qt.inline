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


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdnsservicerecord(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:132
// [-2] void QDnsServiceRecord() 
// (11)qm630157524 (26)_ZN17QDnsServiceRecordC2Ev
/*void* qm630157524()*/{
  ;
  this_ =  new QDnsServiceRecord();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:133
// [-2] void QDnsServiceRecord(const QDnsServiceRecord &) 
// (11)qm505723686 (29)_ZN17QDnsServiceRecordC2ERKS_
/*void* qm505723686(const QDnsServiceRecord & other)*/{
  const QDnsServiceRecord & other = *(const QDnsServiceRecord *)this_;
  this_ =  new QDnsServiceRecord(other);
}

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
