//  header block begin

// /usr/include/qt/QtGui/qtextdocument.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextdocument.h>
#include <QtGui>
#include "callback_inherit.h"

// QAbstractUndoItem is pure virtual: true true
// QAbstractUndoItem has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractundoitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:86
// [-2] void ~QAbstractUndoItem() 
// (11)qm344714085 (26)_ZN17QAbstractUndoItemD2Ev
/*void qm344714085 (void *this_)*/ {
  delete (QAbstractUndoItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractundoitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
