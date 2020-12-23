//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginescript.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineScript is pure virtual: false false
// QWebEngineScript has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginescript(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:68
// [-2] void QWebEngineScript() 
// (12)qm1866397586 (25)_ZN16QWebEngineScriptC2Ev
/*void* qm1866397586()*/{
  ;
  this_ =  new QWebEngineScript();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:69
// [-2] void QWebEngineScript(const QWebEngineScript &) 
// (12)qm2727856008 (28)_ZN16QWebEngineScriptC2ERKS_
/*void* qm2727856008(const QWebEngineScript & other)*/{
  const QWebEngineScript & other = *(const QWebEngineScript *)this_;
  this_ =  new QWebEngineScript(other);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:92
// [1] bool operator!=(const QWebEngineScript &) const
// (12)qm3478098857 (29)_ZNK16QWebEngineScriptneERKS_
//static
/*void qm3478098857(const QWebEngineScript & other)*/ {
  const QWebEngineScript & other = *(const QWebEngineScript *)this_;
  (void) ((QWebEngineScript*)this_)->operator!=(other);
  // auto xptr = (bool (QWebEngineScript::*)(QWebEngineScript const&) const ) &QWebEngineScript::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:94
// [-2] void swap(QWebEngineScript &) 
// (12)qm3128756314 (30)_ZN16QWebEngineScript4swapERS_
//static
/*void qm3128756314(QWebEngineScript & other)*/ {
  QWebEngineScript & other = *(QWebEngineScript *)this_;
  (void) ((QWebEngineScript*)this_)->swap(other);
   auto xptr = (void (QWebEngineScript::*)(QWebEngineScript&) ) &QWebEngineScript::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QWebEngineScriptD2Ev(void *this_)*/ {
  delete (QWebEngineScript*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginescript
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
