//  header block begin

// /usr/include/qt/QtCore/qcborcommon.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcborcommon.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborError is pure virtual: false false
// QCborError has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcborerror(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN10QCborErrorD2Ev(void *this_)*/ {
  delete (QCborError*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcborerror
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
