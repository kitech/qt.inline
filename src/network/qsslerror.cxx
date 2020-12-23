//  header block begin

// /usr/include/qt/QtNetwork/qsslerror.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslerror.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslError is pure virtual: false false
// QSslError has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsslerror(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:102
// [-2] void QSslError() 
// (12)qm2305529010 (17)_ZN9QSslErrorC2Ev
/*void* qm2305529010()*/{
  ;
  this_ =  new QSslError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:103
// [-2] void QSslError(QSslError::SslError) 
// (12)qm2404464769 (29)_ZN9QSslErrorC2ENS_8SslErrorE
/*void* qm2404464769(QSslError::SslError error)*/{
  QSslError::SslError error = *(QSslError::SslError*)this_;
  this_ =  new QSslError(error);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:104
// [-2] void QSslError(QSslError::SslError, const QSslCertificate &) 
// (12)qm1051805829 (48)_ZN9QSslErrorC2ENS_8SslErrorERK15QSslCertificate
/*void* qm1051805829(QSslError::SslError error, const QSslCertificate & certificate)*/{
  QSslError::SslError error = *(QSslError::SslError*)this_; const QSslCertificate & certificate = *(const QSslCertificate *)this_;
  this_ =  new QSslError(error, certificate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:106
// [-2] void QSslError(const QSslError &) 
// (12)qm3473611921 (20)_ZN9QSslErrorC2ERKS_
/*void* qm3473611921(const QSslError & other)*/{
  const QSslError & other = *(const QSslError *)this_;
  this_ =  new QSslError(other);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:108
// [-2] void swap(QSslError &) 
// (11)qm813483906 (22)_ZN9QSslError4swapERS_
//static
/*void qm813483906(QSslError & other)*/ {
  QSslError & other = *(QSslError *)this_;
  (void) ((QSslError*)this_)->swap(other);
   auto xptr = (void (QSslError::*)(QSslError&) ) &QSslError::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:112
// [8] QSslError & operator=(QSslError &&) 
// (12)qm3481691870 (19)_ZN9QSslErroraSEOS_
//static
/*void qm3481691870(QSslError && other)*/ {
  QSslError && other =  static_cast<QSslError &&>(*(QSslError *)this_);
  (void) ((QSslError*)this_)->operator=(other);
  // auto xptr = (QSslError & (QSslError::*)(QSslError&&) ) &QSslError::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:115
// [1] bool operator!=(const QSslError &) const
// (12)qm4168185255 (21)_ZNK9QSslErrorneERKS_
//static
/*void qm4168185255(const QSslError & other)*/ {
  const QSslError & other = *(const QSslError *)this_;
  (void) ((QSslError*)this_)->operator!=(other);
  // auto xptr = (bool (QSslError::*)(QSslError const&) const ) &QSslError::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QSslErrorD2Ev(void *this_)*/ {
  delete (QSslError*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsslerror
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
