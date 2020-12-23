//  header block begin

// /usr/include/qt/QtNetwork/qnetworkconfiguration.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkconfiguration.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkConfiguration is pure virtual: false false
// QNetworkConfiguration has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnetworkconfiguration(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:65
// [-2] void QNetworkConfiguration() 
// (11)qm977478551 (30)_ZN21QNetworkConfigurationC2Ev
/*void* qm977478551()*/{
  ;
  this_ =  new QNetworkConfiguration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:66
// [-2] void QNetworkConfiguration(const QNetworkConfiguration &) 
// (12)qm1874593964 (33)_ZN21QNetworkConfigurationC2ERKS_
/*void* qm1874593964(const QNetworkConfiguration & other)*/{
  const QNetworkConfiguration & other = *(const QNetworkConfiguration *)this_;
  this_ =  new QNetworkConfiguration(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:67
// [8] QNetworkConfiguration & operator=(QNetworkConfiguration &&) 
// (12)qm1919951678 (32)_ZN21QNetworkConfigurationaSEOS_
//static
/*void qm1919951678(QNetworkConfiguration && other)*/ {
  QNetworkConfiguration && other =  static_cast<QNetworkConfiguration &&>(*(QNetworkConfiguration *)this_);
  (void) ((QNetworkConfiguration*)this_)->operator=(other);
  // auto xptr = (QNetworkConfiguration & (QNetworkConfiguration::*)(QNetworkConfiguration&&) ) &QNetworkConfiguration::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:71
// [-2] void swap(QNetworkConfiguration &) 
// (12)qm1078918134 (35)_ZN21QNetworkConfiguration4swapERS_
//static
/*void qm1078918134(QNetworkConfiguration & other)*/ {
  QNetworkConfiguration & other = *(QNetworkConfiguration *)this_;
  (void) ((QNetworkConfiguration*)this_)->swap(other);
   auto xptr = (void (QNetworkConfiguration::*)(QNetworkConfiguration&) ) &QNetworkConfiguration::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:74
// [1] bool operator!=(const QNetworkConfiguration &) const
// (12)qm3963721005 (34)_ZNK21QNetworkConfigurationneERKS_
//static
/*void qm3963721005(const QNetworkConfiguration & other)*/ {
  const QNetworkConfiguration & other = *(const QNetworkConfiguration *)this_;
  (void) ((QNetworkConfiguration*)this_)->operator!=(other);
  // auto xptr = (bool (QNetworkConfiguration::*)(QNetworkConfiguration const&) const ) &QNetworkConfiguration::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QNetworkConfigurationD2Ev(void *this_)*/ {
  delete (QNetworkConfiguration*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnetworkconfiguration
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
