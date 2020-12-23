//  header block begin

// /usr/include/qt/QtQml/qqmldebug.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmldebug.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlDebuggingEnabler is pure virtual: false false
// QQmlDebuggingEnabler has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmldebuggingenabler(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmldebug.h:58
// [-2] void QQmlDebuggingEnabler(bool) 
// (11)qm360465325 (29)_ZN20QQmlDebuggingEnablerC2Eb
/*void* qm360465325(bool printWarning)*/{
  bool printWarning = *(bool*)this_;
  this_ =  new QQmlDebuggingEnabler(printWarning);
}


/*void C_ZN20QQmlDebuggingEnablerD2Ev(void *this_)*/ {
  delete (QQmlDebuggingEnabler*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmldebuggingenabler
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
