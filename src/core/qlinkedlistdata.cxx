//  header block begin

// /usr/include/qt/QtCore/qlinkedlist.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlinkedlist.h>
#include <QtCore>
#include "callback_inherit.h"

// QLinkedListData is pure virtual: false false
// QLinkedListData has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlinkedlistdata(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN15QLinkedListDataD2Ev(void *this_)*/ {
  delete (QLinkedListData*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlinkedlistdata
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
