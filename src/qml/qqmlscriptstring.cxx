//  header block begin

// /usr/include/qt/QtQml/qqmlscriptstring.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlscriptstring.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlScriptString is pure virtual: false false
// QQmlScriptString has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlscriptstring(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:61
// [-2] void QQmlScriptString() 
// (12)qm1397905796 (25)_ZN16QQmlScriptStringC2Ev
/*void* qm1397905796()*/{
  ;
  this_ =  new QQmlScriptString();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlscriptstring.h:62
// [-2] void QQmlScriptString(const QQmlScriptString &) 
// (12)qm3468469346 (28)_ZN16QQmlScriptStringC2ERKS_
/*void* qm3468469346(const QQmlScriptString & arg0)*/{
  const QQmlScriptString & arg0 = *(const QQmlScriptString *)this_;
  this_ =  new QQmlScriptString(arg0);
}


/*void C_ZN16QQmlScriptStringD2Ev(void *this_)*/ {
  delete (QQmlScriptString*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlscriptstring
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
