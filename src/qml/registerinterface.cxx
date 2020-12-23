//  header block begin

// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterInterface is pure virtual: false false
// RegisterInterface has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_registerinterface(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN17RegisterInterfaceD2Ev(void *this_)*/ {
  delete (QQmlPrivate::RegisterInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_registerinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
