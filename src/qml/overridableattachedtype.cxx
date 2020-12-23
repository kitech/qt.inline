//  header block begin

// /usr/include/qt/QtQml/qqmlcomponent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlcomponent.h>
#include <QtQml>
#include "callback_inherit.h"

// OverridableAttachedType is pure virtual: false false
// OverridableAttachedType has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_overridableattachedtype(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN23OverridableAttachedTypeD2Ev(void *this_)*/ {
  delete (QQmlPrivate::OverridableAttachedType<QQmlComponent, QQmlComponentAttached>*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_overridableattachedtype
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
