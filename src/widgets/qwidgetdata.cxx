//  header block begin

// /usr/include/qt/QtWidgets/qwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWidgetData is pure virtual: false false
// QWidgetData has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwidgetdata(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN11QWidgetDataD2Ev(void *this_)*/ {
  delete (QWidgetData*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwidgetdata
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
