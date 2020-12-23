//  header block begin

// /usr/include/qt/QtNetwork/qnetworkproxy.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkproxy.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkProxy is pure virtual: false false
// QNetworkProxy has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnetworkproxy(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:164
// [-2] void QNetworkProxy() 
// (10)qm84781585 (22)_ZN13QNetworkProxyC2Ev
/*void* qm84781585()*/{
  ;
  this_ =  new QNetworkProxy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:165
// [-2] void QNetworkProxy(QNetworkProxy::ProxyType, const QString &, quint16, const QString &, const QString &) 
// (12)qm2450004126 (52)_ZN13QNetworkProxyC2ENS_9ProxyTypeERK7QStringtS3_S3_
/*void* qm2450004126(QNetworkProxy::ProxyType type_, const QString & hostName, unsigned short port, const QString & user, const QString & password)*/{
  QNetworkProxy::ProxyType type_ = *(QNetworkProxy::ProxyType*)this_; const QString & hostName = *(const QString *)this_; unsigned short port = *(unsigned short*)this_; const QString & user = *(const QString *)this_; const QString & password = *(const QString *)this_;
  this_ =  new QNetworkProxy(type_, hostName, port, user, password);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:167
// [-2] void QNetworkProxy(const QNetworkProxy &) 
// (12)qm4045479988 (25)_ZN13QNetworkProxyC2ERKS_
/*void* qm4045479988(const QNetworkProxy & other)*/{
  const QNetworkProxy & other = *(const QNetworkProxy *)this_;
  this_ =  new QNetworkProxy(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:168
// [8] QNetworkProxy & operator=(QNetworkProxy &&) 
// (12)qm2345474105 (24)_ZN13QNetworkProxyaSEOS_
//static
/*void qm2345474105(QNetworkProxy && other)*/ {
  QNetworkProxy && other =  static_cast<QNetworkProxy &&>(*(QNetworkProxy *)this_);
  (void) ((QNetworkProxy*)this_)->operator=(other);
  // auto xptr = (QNetworkProxy & (QNetworkProxy::*)(QNetworkProxy&&) ) &QNetworkProxy::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:172
// [-2] void swap(QNetworkProxy &) 
// (12)qm3429092739 (27)_ZN13QNetworkProxy4swapERS_
//static
/*void qm3429092739(QNetworkProxy & other)*/ {
  QNetworkProxy & other = *(QNetworkProxy *)this_;
  (void) ((QNetworkProxy*)this_)->swap(other);
   auto xptr = (void (QNetworkProxy::*)(QNetworkProxy&) ) &QNetworkProxy::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:175
// [1] bool operator!=(const QNetworkProxy &) const
// (11)qm955640459 (26)_ZNK13QNetworkProxyneERKS_
//static
/*void qm955640459(const QNetworkProxy & other)*/ {
  const QNetworkProxy & other = *(const QNetworkProxy *)this_;
  (void) ((QNetworkProxy*)this_)->operator!=(other);
  // auto xptr = (bool (QNetworkProxy::*)(QNetworkProxy const&) const ) &QNetworkProxy::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QNetworkProxyD2Ev(void *this_)*/ {
  delete (QNetworkProxy*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnetworkproxy
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
