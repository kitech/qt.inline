//  header block begin

// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkconfigmanager.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkConfigurationManager is pure virtual: false false
// QNetworkConfigurationManager has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnetworkconfigurationmanager(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:61
// [8] QString tr(const char *, const char *, int) 
// (12)qm4204674464 (44)_ZN28QNetworkConfigurationManager2trEPKcS1_i
//static
/*void qm4204674464(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QNetworkConfigurationManager::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QNetworkConfigurationManager::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:76
// [-2] void QNetworkConfigurationManager(QObject *) 
// (12)qm2224871683 (45)_ZN28QNetworkConfigurationManagerC2EP7QObject
/*void* qm2224871683(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QNetworkConfigurationManager(parent);
}


/*void C_ZN28QNetworkConfigurationManagerD2Ev(void *this_)*/ {
  delete (QNetworkConfigurationManager*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnetworkconfigurationmanager
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
