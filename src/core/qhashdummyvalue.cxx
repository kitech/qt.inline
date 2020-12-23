//  header block begin

// /usr/include/qt/QtCore/qhash.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhash.h>
#include <QtCore>
#include "callback_inherit.h"

// QHashDummyValue is pure virtual: false false
// QHashDummyValue has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qhashdummyvalue(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN15QHashDummyValueD2Ev(void *this_)*/ {
  delete (QHashDummyValue*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qhashdummyvalue
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
