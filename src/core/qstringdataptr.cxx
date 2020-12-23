//  header block begin

// /usr/include/qt/QtCore/qstringliteral.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringliteral.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringDataPtr is pure virtual: false false
// QStringDataPtr has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstringdataptr(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN14QStringDataPtrD2Ev(void *this_)*/ {
  delete (QStringDataPtr*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstringdataptr
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
