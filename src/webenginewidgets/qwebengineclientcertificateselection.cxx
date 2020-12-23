//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebengineclientcertificateselection.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineclientcertificateselection.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineClientCertificateSelection is pure virtual: false false
// QWebEngineClientCertificateSelection has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebengineclientcertificateselection(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineclientcertificateselection.h:57
// [-2] void QWebEngineClientCertificateSelection(const QWebEngineClientCertificateSelection &) 
// (11)qm767051356 (48)_ZN36QWebEngineClientCertificateSelectionC2ERKS_
/*void* qm767051356(const QWebEngineClientCertificateSelection & arg0)*/{
  const QWebEngineClientCertificateSelection & arg0 = *(const QWebEngineClientCertificateSelection *)this_;
  this_ =  new QWebEngineClientCertificateSelection(arg0);
}


/*void C_ZN36QWebEngineClientCertificateSelectionD2Ev(void *this_)*/ {
  delete (QWebEngineClientCertificateSelection*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebengineclientcertificateselection
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
