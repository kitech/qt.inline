//  header block begin

// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginecookiestore.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineCookieStore is pure virtual: false false
// QWebEngineCookieStore has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginecookiestore(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:63
// [8] QString tr(const char *, const char *, int) 
// (12)qm2244981872 (37)_ZN21QWebEngineCookieStore2trEPKcS1_i
//static
/*void qm2244981872(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QWebEngineCookieStore::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QWebEngineCookieStore::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QWebEngineCookieStoreD2Ev(void *this_)*/ {
  delete (QWebEngineCookieStore*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginecookiestore
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
