//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebenginefullscreenrequest.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginefullscreenrequest.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineFullScreenRequest is pure virtual: false false
// QWebEngineFullScreenRequest has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginefullscreenrequest(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginefullscreenrequest.h:57
// [1] bool toggleOn() const
// (12)qm2475517459 (44)_ZNK27QWebEngineFullScreenRequest8toggleOnEv
//static
/*void qm2475517459()*/ {
  ;
  (void) ((QWebEngineFullScreenRequest*)this_)->toggleOn();
   auto xptr = (bool (QWebEngineFullScreenRequest::*)() const ) &QWebEngineFullScreenRequest::toggleOn;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginefullscreenrequest.h:58
// [8] const QUrl & origin() const
// (12)qm1161052839 (42)_ZNK27QWebEngineFullScreenRequest6originEv
//static
/*void qm1161052839()*/ {
  ;
  (void) ((QWebEngineFullScreenRequest*)this_)->origin();
   auto xptr = (const QUrl & (QWebEngineFullScreenRequest::*)() const ) &QWebEngineFullScreenRequest::origin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN27QWebEngineFullScreenRequestD2Ev(void *this_)*/ {
  delete (QWebEngineFullScreenRequest*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginefullscreenrequest
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
