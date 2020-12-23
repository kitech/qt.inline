//  header block begin

// /usr/include/qt/QtGui/qdesktopservices.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdesktopservices.h>
#include <QtGui>
#include "callback_inherit.h"

// QDesktopServices is pure virtual: false false
// QDesktopServices has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdesktopservices(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN16QDesktopServicesD2Ev(void *this_)*/ {
  delete (QDesktopServices*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdesktopservices
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
