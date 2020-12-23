//  header block begin

// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qssldiffiehellmanparameters.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslDiffieHellmanParameters is pure virtual: false false
// QSslDiffieHellmanParameters has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qssldiffiehellmanparameters(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:84
// [-2] void QSslDiffieHellmanParameters() 
// (11)qm127126037 (36)_ZN27QSslDiffieHellmanParametersC2Ev
/*void* qm127126037()*/{
  ;
  this_ =  new QSslDiffieHellmanParameters();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:85
// [-2] void QSslDiffieHellmanParameters(const QSslDiffieHellmanParameters &) 
// (12)qm2221038862 (39)_ZN27QSslDiffieHellmanParametersC2ERKS_
/*void* qm2221038862(const QSslDiffieHellmanParameters & other)*/{
  const QSslDiffieHellmanParameters & other = *(const QSslDiffieHellmanParameters *)this_;
  this_ =  new QSslDiffieHellmanParameters(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:86
// [-2] void QSslDiffieHellmanParameters(QSslDiffieHellmanParameters &&) 
// (12)qm1277510715 (38)_ZN27QSslDiffieHellmanParametersC2EOS_
/*void* qm1277510715(QSslDiffieHellmanParameters && other)*/{
  QSslDiffieHellmanParameters && other =  static_cast<QSslDiffieHellmanParameters &&>(*(QSslDiffieHellmanParameters *)this_);
  this_ =  new QSslDiffieHellmanParameters(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:90
// [8] QSslDiffieHellmanParameters & operator=(QSslDiffieHellmanParameters &&) 
// (12)qm2719203067 (38)_ZN27QSslDiffieHellmanParametersaSEOS_
//static
/*void qm2719203067(QSslDiffieHellmanParameters && other)*/ {
  QSslDiffieHellmanParameters && other =  static_cast<QSslDiffieHellmanParameters &&>(*(QSslDiffieHellmanParameters *)this_);
  (void) ((QSslDiffieHellmanParameters*)this_)->operator=(other);
  // auto xptr = (QSslDiffieHellmanParameters & (QSslDiffieHellmanParameters::*)(QSslDiffieHellmanParameters&&) ) &QSslDiffieHellmanParameters::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:92
// [-2] void swap(QSslDiffieHellmanParameters &) 
// (12)qm3346950968 (41)_ZN27QSslDiffieHellmanParameters4swapERS_
//static
/*void qm3346950968(QSslDiffieHellmanParameters & other)*/ {
  QSslDiffieHellmanParameters & other = *(QSslDiffieHellmanParameters *)this_;
  (void) ((QSslDiffieHellmanParameters*)this_)->swap(other);
   auto xptr = (void (QSslDiffieHellmanParameters::*)(QSslDiffieHellmanParameters&) ) &QSslDiffieHellmanParameters::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN27QSslDiffieHellmanParametersD2Ev(void *this_)*/ {
  delete (QSslDiffieHellmanParameters*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qssldiffiehellmanparameters
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
