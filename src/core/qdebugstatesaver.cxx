//  header block begin

// /usr/include/qt/QtCore/qdebug.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdebug.h>
#include <QtCore>
#include "callback_inherit.h"

// QDebugStateSaver is pure virtual: false false
// QDebugStateSaver has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdebugstatesaver(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:184
// [-2] void QDebugStateSaver(QDebug &) 
// (11)qm700760093 (32)_ZN16QDebugStateSaverC2ER6QDebug
/*void* qm700760093(QDebug & dbg)*/{
  QDebug & dbg = *(QDebug *)this_;
  this_ =  new QDebugStateSaver(dbg);
}


/*void C_ZN16QDebugStateSaverD2Ev(void *this_)*/ {
  delete (QDebugStateSaver*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdebugstatesaver
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
