//  header block begin

// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineurlrequestinterceptor.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineUrlRequestInterceptor is pure virtual: true true
// QWebEngineUrlRequestInterceptor has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebengineurlrequestinterceptor(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:54
// [8] QString tr(const char *, const char *, int) 
// (12)qm2936163825 (47)_ZN31QWebEngineUrlRequestInterceptor2trEPKcS1_i
//static
/*void qm2936163825(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QWebEngineUrlRequestInterceptor::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QWebEngineUrlRequestInterceptor::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN31QWebEngineUrlRequestInterceptorD2Ev(void *this_)*/ {
  delete (QWebEngineUrlRequestInterceptor*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebengineurlrequestinterceptor
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
