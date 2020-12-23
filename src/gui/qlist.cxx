//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QList is pure virtual: false false
// QList has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlist(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN5QListD2Ev(void *this_)*/ {
  delete (QList<QPointingDeviceUniqueId>*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlist
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
