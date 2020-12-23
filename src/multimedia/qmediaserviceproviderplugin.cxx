//  header block begin

// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceProviderPlugin is pure virtual: true true
// QMediaServiceProviderPlugin has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaserviceproviderplugin(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:194
// [8] QString tr(const char *, const char *, int) 
// (12)qm1457445027 (43)_ZN27QMediaServiceProviderPlugin2trEPKcS1_i
//static
/*void qm1457445027(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMediaServiceProviderPlugin::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMediaServiceProviderPlugin::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN27QMediaServiceProviderPluginD2Ev(void *this_)*/ {
  delete (QMediaServiceProviderPlugin*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaserviceproviderplugin
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
