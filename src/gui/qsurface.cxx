//  header block begin

// /usr/include/qt/QtGui/qsurface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsurface.h>
#include <QtGui>
#include "callback_inherit.h"

// QSurface is pure virtual: true true
// QSurface has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsurface(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN8QSurfaceD2Ev(void *this_)*/ {
  delete (QSurface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsurface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
