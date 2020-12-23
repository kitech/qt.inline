//  header block begin

// /usr/include/qt/QtCore/qnamespace.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnamespace.h>
#include <QtCore>
#include "callback_inherit.h"

// QInternal is pure virtual: false false
// QInternal has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qinternal(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN9QInternalD2Ev(void *this_)*/ {
  delete (QInternal*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qinternal
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
