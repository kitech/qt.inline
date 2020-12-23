//  header block begin

// /usr/include/qt/QtNetwork/qhstspolicy.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhstspolicy.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHstsPolicy is pure virtual: false false
// QHstsPolicy has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qhstspolicy(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:63
// [-2] void QHstsPolicy() 
// (12)qm2260701289 (20)_ZN11QHstsPolicyC2Ev
/*void* qm2260701289()*/{
  ;
  this_ =  new QHstsPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:64
// [-2] void QHstsPolicy(const QDateTime &, QHstsPolicy::PolicyFlags, const QString &, QUrl::ParsingMode) 
// (11)qm367492831 (86)_ZN11QHstsPolicyC2ERK9QDateTime6QFlagsINS_10PolicyFlagEERK7QStringN4QUrl11ParsingModeE
/*void* qm367492831(const QDateTime & expiry, QFlags<QHstsPolicy::PolicyFlag> flags, const QString & host, QUrl::ParsingMode mode)*/{
  const QDateTime & expiry = *(const QDateTime *)this_; QFlags<QHstsPolicy::PolicyFlag> flags = *(QFlags<QHstsPolicy::PolicyFlag>*)this_; const QString & host = *(const QString *)this_; QUrl::ParsingMode mode = *(QUrl::ParsingMode*)this_;
  this_ =  new QHstsPolicy(expiry, flags, host, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:66
// [-2] void QHstsPolicy(const QHstsPolicy &) 
// (12)qm2869237126 (23)_ZN11QHstsPolicyC2ERKS_
/*void* qm2869237126(const QHstsPolicy & rhs)*/{
  const QHstsPolicy & rhs = *(const QHstsPolicy *)this_;
  this_ =  new QHstsPolicy(rhs);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:68
// [8] QHstsPolicy & operator=(QHstsPolicy &&) 
// (12)qm2854728135 (22)_ZN11QHstsPolicyaSEOS_
//static
/*void qm2854728135(QHstsPolicy && other)*/ {
  QHstsPolicy && other =  static_cast<QHstsPolicy &&>(*(QHstsPolicy *)this_);
  (void) ((QHstsPolicy*)this_)->operator=(other);
  // auto xptr = (QHstsPolicy & (QHstsPolicy::*)(QHstsPolicy&&) ) &QHstsPolicy::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:71
// [-2] void swap(QHstsPolicy &) 
// (12)qm1277403070 (25)_ZN11QHstsPolicy4swapERS_
//static
/*void qm1277403070(QHstsPolicy & other)*/ {
  QHstsPolicy & other = *(QHstsPolicy *)this_;
  (void) ((QHstsPolicy*)this_)->swap(other);
   auto xptr = (void (QHstsPolicy::*)(QHstsPolicy&) ) &QHstsPolicy::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QHstsPolicyD2Ev(void *this_)*/ {
  delete (QHstsPolicy*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qhstspolicy
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
