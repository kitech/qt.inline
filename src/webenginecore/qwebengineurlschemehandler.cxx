//  header block begin

// /usr/include/qt/QtWebEngineCore/qwebengineurlschemehandler.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineurlschemehandler.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineUrlSchemeHandler is pure virtual: true true
// QWebEngineUrlSchemeHandler has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebengineurlschemehandler(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlschemehandler.h:56
// [8] QString tr(const char *, const char *, int) 
// (11)qm954560496 (42)_ZN26QWebEngineUrlSchemeHandler2trEPKcS1_i
//static
/*void qm954560496(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QWebEngineUrlSchemeHandler::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QWebEngineUrlSchemeHandler::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QWebEngineUrlSchemeHandlerD2Ev(void *this_)*/ {
  delete (QWebEngineUrlSchemeHandler*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebengineurlschemehandler
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
