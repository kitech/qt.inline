//  header block begin

// /usr/include/qt/QtWidgets/qtooltip.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtooltip.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QToolTip is pure virtual: false false
// QToolTip has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtooltip(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtooltip.h:59
// [-2] void hideText() 
// (11)qm377475201 (23)_ZN8QToolTip8hideTextEv
//static
/*void qm377475201()*/ {
  ;
  (void) QToolTip::hideText();
   auto xptr = (void (*)() ) &QToolTip::hideText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QToolTipD2Ev(void *this_)*/ {
  delete (QToolTip*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtooltip
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
