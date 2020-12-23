//  header block begin

// /usr/include/qt/QtNetwork/qabstractnetworkcache.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractnetworkcache.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkCacheMetaData is pure virtual: false false
// QNetworkCacheMetaData has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnetworkcachemetadata(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:66
// [-2] void QNetworkCacheMetaData() 
// (12)qm3143873741 (30)_ZN21QNetworkCacheMetaDataC2Ev
/*void* qm3143873741()*/{
  ;
  this_ =  new QNetworkCacheMetaData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:67
// [-2] void QNetworkCacheMetaData(const QNetworkCacheMetaData &) 
// (11)qm200908638 (33)_ZN21QNetworkCacheMetaDataC2ERKS_
/*void* qm200908638(const QNetworkCacheMetaData & other)*/{
  const QNetworkCacheMetaData & other = *(const QNetworkCacheMetaData *)this_;
  this_ =  new QNetworkCacheMetaData(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:70
// [8] QNetworkCacheMetaData & operator=(QNetworkCacheMetaData &&) 
// (12)qm1548685607 (32)_ZN21QNetworkCacheMetaDataaSEOS_
//static
/*void qm1548685607(QNetworkCacheMetaData && other)*/ {
  QNetworkCacheMetaData && other =  static_cast<QNetworkCacheMetaData &&>(*(QNetworkCacheMetaData *)this_);
  (void) ((QNetworkCacheMetaData*)this_)->operator=(other);
  // auto xptr = (QNetworkCacheMetaData & (QNetworkCacheMetaData::*)(QNetworkCacheMetaData&&) ) &QNetworkCacheMetaData::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:73
// [-2] void swap(QNetworkCacheMetaData &) 
// (11)qm145693291 (35)_ZN21QNetworkCacheMetaData4swapERS_
//static
/*void qm145693291(QNetworkCacheMetaData & other)*/ {
  QNetworkCacheMetaData & other = *(QNetworkCacheMetaData *)this_;
  (void) ((QNetworkCacheMetaData*)this_)->swap(other);
   auto xptr = (void (QNetworkCacheMetaData::*)(QNetworkCacheMetaData&) ) &QNetworkCacheMetaData::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:77
// [1] bool operator!=(const QNetworkCacheMetaData &) const
// (12)qm2281964255 (34)_ZNK21QNetworkCacheMetaDataneERKS_
//static
/*void qm2281964255(const QNetworkCacheMetaData & other)*/ {
  const QNetworkCacheMetaData & other = *(const QNetworkCacheMetaData *)this_;
  (void) ((QNetworkCacheMetaData*)this_)->operator!=(other);
  // auto xptr = (bool (QNetworkCacheMetaData::*)(QNetworkCacheMetaData const&) const ) &QNetworkCacheMetaData::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QNetworkCacheMetaDataD2Ev(void *this_)*/ {
  delete (QNetworkCacheMetaData*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnetworkcachemetadata
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
