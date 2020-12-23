//  header block begin

// /usr/include/qt/QtNetwork/qsslcertificateextension.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslcertificateextension.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslCertificateExtension is pure virtual: false false
// QSslCertificateExtension has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsslcertificateextension(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:56
// [-2] void QSslCertificateExtension() 
// (12)qm1823376079 (33)_ZN24QSslCertificateExtensionC2Ev
/*void* qm1823376079()*/{
  ;
  this_ =  new QSslCertificateExtension();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:57
// [-2] void QSslCertificateExtension(const QSslCertificateExtension &) 
// (12)qm1689543839 (36)_ZN24QSslCertificateExtensionC2ERKS_
/*void* qm1689543839(const QSslCertificateExtension & other)*/{
  const QSslCertificateExtension & other = *(const QSslCertificateExtension *)this_;
  this_ =  new QSslCertificateExtension(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:58
// [8] QSslCertificateExtension & operator=(QSslCertificateExtension &&) 
// (12)qm2713924081 (35)_ZN24QSslCertificateExtensionaSEOS_
//static
/*void qm2713924081(QSslCertificateExtension && other)*/ {
  QSslCertificateExtension && other =  static_cast<QSslCertificateExtension &&>(*(QSslCertificateExtension *)this_);
  (void) ((QSslCertificateExtension*)this_)->operator=(other);
  // auto xptr = (QSslCertificateExtension & (QSslCertificateExtension::*)(QSslCertificateExtension&&) ) &QSslCertificateExtension::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:62
// [-2] void swap(QSslCertificateExtension &) 
// (12)qm4028741821 (38)_ZN24QSslCertificateExtension4swapERS_
//static
/*void qm4028741821(QSslCertificateExtension & other)*/ {
  QSslCertificateExtension & other = *(QSslCertificateExtension *)this_;
  (void) ((QSslCertificateExtension*)this_)->swap(other);
   auto xptr = (void (QSslCertificateExtension::*)(QSslCertificateExtension&) ) &QSslCertificateExtension::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN24QSslCertificateExtensionD2Ev(void *this_)*/ {
  delete (QSslCertificateExtension*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsslcertificateextension
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
