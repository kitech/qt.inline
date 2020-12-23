//  header block begin

// /usr/include/qt/QtCore/qlibraryinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlibraryinfo.h>
#include <QtCore>
#include "callback_inherit.h"

// QLibraryInfo is pure virtual: false false
// QLibraryInfo has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlibraryinfo(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN12QLibraryInfoD2Ev(void *this_)*/ {
  delete (QLibraryInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlibraryinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
