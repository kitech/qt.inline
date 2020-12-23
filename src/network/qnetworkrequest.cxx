//  header block begin

// /usr/include/qt/QtNetwork/qnetworkrequest.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkrequest.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkRequest is pure virtual: false false
// QNetworkRequest has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnetworkrequest(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:141
// [-2] void QNetworkRequest() 
// (12)qm3609069012 (24)_ZN15QNetworkRequestC2Ev
/*void* qm3609069012()*/{
  ;
  this_ =  new QNetworkRequest();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:142
// [-2] void QNetworkRequest(const QUrl &) 
// (12)qm2190096398 (30)_ZN15QNetworkRequestC2ERK4QUrl
/*void* qm2190096398(const QUrl & url)*/{
  const QUrl & url = *(const QUrl *)this_;
  this_ =  new QNetworkRequest(url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:143
// [-2] void QNetworkRequest(const QNetworkRequest &) 
// (12)qm3412366773 (27)_ZN15QNetworkRequestC2ERKS_
/*void* qm3412366773(const QNetworkRequest & other)*/{
  const QNetworkRequest & other = *(const QNetworkRequest *)this_;
  this_ =  new QNetworkRequest(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:145
// [8] QNetworkRequest & operator=(QNetworkRequest &&) 
// (12)qm2066306904 (26)_ZN15QNetworkRequestaSEOS_
//static
/*void qm2066306904(QNetworkRequest && other)*/ {
  QNetworkRequest && other =  static_cast<QNetworkRequest &&>(*(QNetworkRequest *)this_);
  (void) ((QNetworkRequest*)this_)->operator=(other);
  // auto xptr = (QNetworkRequest & (QNetworkRequest::*)(QNetworkRequest&&) ) &QNetworkRequest::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:148
// [-2] void swap(QNetworkRequest &) 
// (12)qm1441798607 (29)_ZN15QNetworkRequest4swapERS_
//static
/*void qm1441798607(QNetworkRequest & other)*/ {
  QNetworkRequest & other = *(QNetworkRequest *)this_;
  (void) ((QNetworkRequest*)this_)->swap(other);
   auto xptr = (void (QNetworkRequest::*)(QNetworkRequest&) ) &QNetworkRequest::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:151
// [1] bool operator!=(const QNetworkRequest &) const
// (12)qm1077164672 (28)_ZNK15QNetworkRequestneERKS_
//static
/*void qm1077164672(const QNetworkRequest & other)*/ {
  const QNetworkRequest & other = *(const QNetworkRequest *)this_;
  (void) ((QNetworkRequest*)this_)->operator!=(other);
  // auto xptr = (bool (QNetworkRequest::*)(QNetworkRequest const&) const ) &QNetworkRequest::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QNetworkRequestD2Ev(void *this_)*/ {
  delete (QNetworkRequest*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnetworkrequest
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
