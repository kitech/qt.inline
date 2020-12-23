//  header block begin

// /usr/include/qt/QtQml/qqmlextensioninterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlextensioninterface.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlEngineExtensionInterface is pure virtual: true true
// QQmlEngineExtensionInterface has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlengineextensioninterface(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensioninterface.h:68
// [-2] void ~QQmlEngineExtensionInterface() 
// (11)qm860710753 (37)_ZN28QQmlEngineExtensionInterfaceD2Ev
/*void qm860710753 (void *this_)*/ {
  delete (QQmlEngineExtensionInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlengineextensioninterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
