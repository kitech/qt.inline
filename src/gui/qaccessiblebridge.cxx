//  header block begin

// /usr/include/qt/QtGui/qaccessiblebridge.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessiblebridge.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleBridge is pure virtual: true true
// QAccessibleBridge has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessiblebridge(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:58
// [-2] void ~QAccessibleBridge() 
// (12)qm2937663738 (26)_ZN17QAccessibleBridgeD2Ev
/*void qm2937663738 (void *this_)*/ {
  delete (QAccessibleBridge*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessiblebridge
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
