//  header block begin

// /usr/include/qt/QtWidgets/qlayoutitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlayoutitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWidgetItemV2 is pure virtual: false false
// QWidgetItemV2 has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwidgetitemv2(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:156
// [-2] void QWidgetItemV2(QWidget *) 
// (12)qm1692828260 (30)_ZN13QWidgetItemV2C2EP7QWidget
/*void* qm1692828260(QWidget * widget)*/{
  QWidget * widget = *(QWidget **)this_;
  this_ =  new QWidgetItemV2(widget);
}


/*void C_ZN13QWidgetItemV2D2Ev(void *this_)*/ {
  delete (QWidgetItemV2*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwidgetitemv2
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
