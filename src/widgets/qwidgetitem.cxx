//  header block begin

// /usr/include/qt/QtWidgets/qlayoutitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlayoutitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWidgetItem is pure virtual: false false
// QWidgetItem has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwidgetitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:130
// [-2] void QWidgetItem(QWidget *) 
// (12)qm3510836749 (28)_ZN11QWidgetItemC2EP7QWidget
/*void* qm3510836749(QWidget * w)*/{
  QWidget * w = *(QWidget **)this_;
  this_ =  new QWidgetItem(w);
}


/*void C_ZN11QWidgetItemD2Ev(void *this_)*/ {
  delete (QWidgetItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwidgetitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
