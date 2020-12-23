//  header block begin

// /usr/include/qt/QtCore/qfactoryinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfactoryinterface.h>
#include <QtCore>
#include "callback_inherit.h"

// QFactoryInterface is pure virtual: true true
// QFactoryInterface has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfactoryinterface(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN17QFactoryInterfaceD2Ev(void *this_)*/ {
  delete (QFactoryInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfactoryinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
