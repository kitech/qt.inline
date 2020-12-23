//  header block begin

// /usr/include/qt/QtGui/qbackingstore.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbackingstore.h>
#include <QtGui>
#include "callback_inherit.h"

// QBackingStore is pure virtual: false false
// QBackingStore has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qbackingstore(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:62
// [-2] void QBackingStore(QWindow *) 
// (11)qm404467822 (30)_ZN13QBackingStoreC2EP7QWindow
/*void* qm404467822(QWindow * window)*/{
  QWindow * window = *(QWindow **)this_;
  this_ =  new QBackingStore(window);
}


/*void C_ZN13QBackingStoreD2Ev(void *this_)*/ {
  delete (QBackingStore*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qbackingstore
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
