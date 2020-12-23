//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebenginecertificateerror.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginecertificateerror.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineCertificateError is pure virtual: false false
// QWebEngineCertificateError has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginecertificateerror(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecertificateerror.h:56
// [-2] void QWebEngineCertificateError(int, QUrl, bool, QString) 
// (11)qm944167415 (49)_ZN26QWebEngineCertificateErrorC2Ei4QUrlb7QString
/*void* qm944167415(int error, QUrl url, bool overridable, QString errorDescription)*/{
  int error = *(int*)this_; QUrl url = *(QUrl*)this_; bool overridable = *(bool*)this_; QString errorDescription = *(QString*)this_;
  this_ =  new QWebEngineCertificateError(error, url, overridable, errorDescription);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecertificateerror.h:84
// [-2] void QWebEngineCertificateError(const QWebEngineCertificateError &) 
// (12)qm2582809420 (38)_ZN26QWebEngineCertificateErrorC2ERKS_
/*void* qm2582809420(const QWebEngineCertificateError & other)*/{
  const QWebEngineCertificateError & other = *(const QWebEngineCertificateError *)this_;
  this_ =  new QWebEngineCertificateError(other);
}


/*void C_ZN26QWebEngineCertificateErrorD2Ev(void *this_)*/ {
  delete (QWebEngineCertificateError*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginecertificateerror
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
