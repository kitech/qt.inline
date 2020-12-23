//  header block begin

// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterCompositeType is pure virtual: false false
// RegisterCompositeType has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_registercompositetype(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN21RegisterCompositeTypeD2Ev(void *this_)*/ {
  delete (QQmlPrivate::RegisterCompositeType*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_registercompositetype
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
