//  header block begin

// /usr/include/qt/QtNetwork/qnetworkcookie.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkcookie.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkCookie is pure virtual: false false
// QNetworkCookie has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnetworkcookie(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:66
// [-2] void QNetworkCookie(const QByteArray &, const QByteArray &) 
// (11)qm325702650 (39)_ZN14QNetworkCookieC2ERK10QByteArrayS2_
/*void* qm325702650(const QByteArray & name, const QByteArray & value)*/{
  const QByteArray & name = *(const QByteArray *)this_; const QByteArray & value = *(const QByteArray *)this_;
  this_ =  new QNetworkCookie(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:67
// [-2] void QNetworkCookie(const QNetworkCookie &) 
// (12)qm3021567445 (26)_ZN14QNetworkCookieC2ERKS_
/*void* qm3021567445(const QNetworkCookie & other)*/{
  const QNetworkCookie & other = *(const QNetworkCookie *)this_;
  this_ =  new QNetworkCookie(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:69
// [8] QNetworkCookie & operator=(QNetworkCookie &&) 
// (12)qm1824820244 (25)_ZN14QNetworkCookieaSEOS_
//static
/*void qm1824820244(QNetworkCookie && other)*/ {
  QNetworkCookie && other =  static_cast<QNetworkCookie &&>(*(QNetworkCookie *)this_);
  (void) ((QNetworkCookie*)this_)->operator=(other);
  // auto xptr = (QNetworkCookie & (QNetworkCookie::*)(QNetworkCookie&&) ) &QNetworkCookie::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:72
// [-2] void swap(QNetworkCookie &) 
// (12)qm2416439149 (28)_ZN14QNetworkCookie4swapERS_
//static
/*void qm2416439149(QNetworkCookie & other)*/ {
  QNetworkCookie & other = *(QNetworkCookie *)this_;
  (void) ((QNetworkCookie*)this_)->swap(other);
   auto xptr = (void (QNetworkCookie::*)(QNetworkCookie&) ) &QNetworkCookie::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:75
// [1] bool operator!=(const QNetworkCookie &) const
// (12)qm3572420527 (27)_ZNK14QNetworkCookieneERKS_
//static
/*void qm3572420527(const QNetworkCookie & other)*/ {
  const QNetworkCookie & other = *(const QNetworkCookie *)this_;
  (void) ((QNetworkCookie*)this_)->operator!=(other);
  // auto xptr = (bool (QNetworkCookie::*)(QNetworkCookie const&) const ) &QNetworkCookie::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QNetworkCookieD2Ev(void *this_)*/ {
  delete (QNetworkCookie*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnetworkcookie
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
