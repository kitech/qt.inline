//  header block begin

// /usr/include/qt/QtNetwork/qabstractnetworkcache.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractnetworkcache.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QAbstractNetworkCache is pure virtual: true true
// QAbstractNetworkCache has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractnetworkcache(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:114
// [8] QString tr(const char *, const char *, int) 
// (12)qm2476017176 (37)_ZN21QAbstractNetworkCache2trEPKcS1_i
//static
/*void qm2476017176(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAbstractNetworkCache::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAbstractNetworkCache::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QAbstractNetworkCacheD2Ev(void *this_)*/ {
  delete (QAbstractNetworkCache*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractnetworkcache
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
