//  header block begin

// /usr/include/qt/QtQml/qqmlextensioninterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlextensioninterface.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlExtensionInterface is pure virtual: true true
// QQmlExtensionInterface has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlextensioninterface(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensioninterface.h:61
// [-2] void ~QQmlExtensionInterface() 
// (11)qm377190100 (31)_ZN22QQmlExtensionInterfaceD2Ev
/*void qm377190100 (void *this_)*/ {
  delete (QQmlExtensionInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlextensioninterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
