//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginedownloaditem.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineDownloadItem is pure virtual: false false
// QWebEngineDownloadItem has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginedownloaditem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginedownloaditem.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm3945697093 (38)_ZN22QWebEngineDownloadItem2trEPKcS1_i
//static
/*void qm3945697093(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QWebEngineDownloadItem::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QWebEngineDownloadItem::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QWebEngineDownloadItemD2Ev(void *this_)*/ {
  delete (QWebEngineDownloadItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginedownloaditem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
