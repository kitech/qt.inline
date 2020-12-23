//  header block begin

// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginehttprequest.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineHttpRequest is pure virtual: false false
// QWebEngineHttpRequest has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginehttprequest(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:61
// [-2] void QWebEngineHttpRequest(const QUrl &, const QWebEngineHttpRequest::Method &) 
// (12)qm2395567218 (49)_ZN21QWebEngineHttpRequestC2ERK4QUrlRKNS_6MethodE
/*void* qm2395567218(const QUrl & url, const QWebEngineHttpRequest::Method & method)*/{
  const QUrl & url = *(const QUrl *)this_; const QWebEngineHttpRequest::Method & method = *(const QWebEngineHttpRequest::Method *)this_;
  this_ =  new QWebEngineHttpRequest(url, method);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:63
// [-2] void QWebEngineHttpRequest(const QWebEngineHttpRequest &) 
// (11)qm190623355 (33)_ZN21QWebEngineHttpRequestC2ERKS_
/*void* qm190623355(const QWebEngineHttpRequest & other)*/{
  const QWebEngineHttpRequest & other = *(const QWebEngineHttpRequest *)this_;
  this_ =  new QWebEngineHttpRequest(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:66
// [8] QWebEngineHttpRequest & operator=(QWebEngineHttpRequest &&) 
// (12)qm4185797671 (32)_ZN21QWebEngineHttpRequestaSEOS_
//static
/*void qm4185797671(QWebEngineHttpRequest && other)*/ {
  QWebEngineHttpRequest && other =  static_cast<QWebEngineHttpRequest &&>(*(QWebEngineHttpRequest *)this_);
  (void) ((QWebEngineHttpRequest*)this_)->operator=(other);
  // auto xptr = (QWebEngineHttpRequest & (QWebEngineHttpRequest::*)(QWebEngineHttpRequest&&) ) &QWebEngineHttpRequest::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:75
// [-2] void swap(QWebEngineHttpRequest &) 
// (12)qm2978138643 (35)_ZN21QWebEngineHttpRequest4swapERS_
//static
/*void qm2978138643(QWebEngineHttpRequest & other)*/ {
  QWebEngineHttpRequest & other = *(QWebEngineHttpRequest *)this_;
  (void) ((QWebEngineHttpRequest*)this_)->swap(other);
   auto xptr = (void (QWebEngineHttpRequest::*)(QWebEngineHttpRequest&) ) &QWebEngineHttpRequest::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginehttprequest.h:78
// [1] bool operator!=(const QWebEngineHttpRequest &) const
// (12)qm2292265978 (34)_ZNK21QWebEngineHttpRequestneERKS_
//static
/*void qm2292265978(const QWebEngineHttpRequest & other)*/ {
  const QWebEngineHttpRequest & other = *(const QWebEngineHttpRequest *)this_;
  (void) ((QWebEngineHttpRequest*)this_)->operator!=(other);
  // auto xptr = (bool (QWebEngineHttpRequest::*)(QWebEngineHttpRequest const&) const ) &QWebEngineHttpRequest::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QWebEngineHttpRequestD2Ev(void *this_)*/ {
  delete (QWebEngineHttpRequest*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginehttprequest
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
