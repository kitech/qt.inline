//  header block begin

// /usr/include/qt/QtCore/qbytearray.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbytearray.h>
#include <QtCore>
#include "callback_inherit.h"

// QByteArrayDataPtr is pure virtual: false false
// QByteArrayDataPtr has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qbytearraydataptr(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN17QByteArrayDataPtrD2Ev(void *this_)*/ {
  delete (QByteArrayDataPtr*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qbytearraydataptr
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
