//  header block begin

// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineregisterprotocolhandlerrequest.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineRegisterProtocolHandlerRequest is pure virtual: false false
// QWebEngineRegisterProtocolHandlerRequest has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebengineregisterprotocolhandlerrequest(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h:59
// [-2] void QWebEngineRegisterProtocolHandlerRequest() 
// (12)qm3563761021 (49)_ZN40QWebEngineRegisterProtocolHandlerRequestC2Ev
/*void* qm3563761021()*/{
  ;
  this_ =  new QWebEngineRegisterProtocolHandlerRequest();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h:64
// [1] bool operator==(const QWebEngineRegisterProtocolHandlerRequest &) const
// (12)qm3034987383 (53)_ZNK40QWebEngineRegisterProtocolHandlerRequesteqERKS_
//static
/*void qm3034987383(const QWebEngineRegisterProtocolHandlerRequest & that)*/ {
  const QWebEngineRegisterProtocolHandlerRequest & that = *(const QWebEngineRegisterProtocolHandlerRequest *)this_;
  (void) ((QWebEngineRegisterProtocolHandlerRequest*)this_)->operator==(that);
  // auto xptr = (bool (QWebEngineRegisterProtocolHandlerRequest::*)(QWebEngineRegisterProtocolHandlerRequest const&) const ) &QWebEngineRegisterProtocolHandlerRequest::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineregisterprotocolhandlerrequest.h:65
// [1] bool operator!=(const QWebEngineRegisterProtocolHandlerRequest &) const
// (11)qm782642944 (53)_ZNK40QWebEngineRegisterProtocolHandlerRequestneERKS_
//static
/*void qm782642944(const QWebEngineRegisterProtocolHandlerRequest & that)*/ {
  const QWebEngineRegisterProtocolHandlerRequest & that = *(const QWebEngineRegisterProtocolHandlerRequest *)this_;
  (void) ((QWebEngineRegisterProtocolHandlerRequest*)this_)->operator!=(that);
  // auto xptr = (bool (QWebEngineRegisterProtocolHandlerRequest::*)(QWebEngineRegisterProtocolHandlerRequest const&) const ) &QWebEngineRegisterProtocolHandlerRequest::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN40QWebEngineRegisterProtocolHandlerRequestD2Ev(void *this_)*/ {
  delete (QWebEngineRegisterProtocolHandlerRequest*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebengineregisterprotocolhandlerrequest
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
