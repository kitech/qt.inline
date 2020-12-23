//  header block begin

// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineurlrequestjob.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineUrlRequestJob is pure virtual: false false
// QWebEngineUrlRequestJob has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebengineurlrequestjob(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:59
// [8] QString tr(const char *, const char *, int) 
// (12)qm2921924596 (39)_ZN23QWebEngineUrlRequestJob2trEPKcS1_i
//static
/*void qm2921924596(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QWebEngineUrlRequestJob::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QWebEngineUrlRequestJob::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN23QWebEngineUrlRequestJobD2Ev(void *this_)*/ {
  delete (QWebEngineUrlRequestJob*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebengineurlrequestjob
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
