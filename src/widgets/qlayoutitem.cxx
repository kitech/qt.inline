//  header block begin

// /usr/include/qt/QtWidgets/qlayoutitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlayoutitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QLayoutItem is pure virtual: true true
// QLayoutItem has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlayoutitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:85
// [4] Qt::Alignment alignment() const
// (10)qm23188746 (29)_ZNK11QLayoutItem9alignmentEv
//static
/*void qm23188746()*/ {
  ;
  (void) ((QLayoutItem*)this_)->alignment();
   auto xptr = (QFlags<Qt::AlignmentFlag> (QLayoutItem::*)() const ) &QLayoutItem::alignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QLayoutItemD2Ev(void *this_)*/ {
  delete (QLayoutItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlayoutitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
