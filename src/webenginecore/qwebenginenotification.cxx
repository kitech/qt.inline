//  header block begin

// /usr/include/qt/QtWebEngineCore/qwebenginenotification.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginenotification.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineNotification is pure virtual: false false
// QWebEngineNotification has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginenotification(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginenotification.h:59
// [8] QString tr(const char *, const char *, int) 
// (12)qm3984063206 (38)_ZN22QWebEngineNotification2trEPKcS1_i
//static
/*void qm3984063206(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QWebEngineNotification::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QWebEngineNotification::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QWebEngineNotificationD2Ev(void *this_)*/ {
  delete (QWebEngineNotification*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginenotification
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
