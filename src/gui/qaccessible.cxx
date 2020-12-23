//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessible is pure virtual: false false
// QAccessible has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessible(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN11QAccessibleD2Ev(void *this_)*/ {
  delete (QAccessible*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessible
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
