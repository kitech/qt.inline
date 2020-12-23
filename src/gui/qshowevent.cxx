//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QShowEvent is pure virtual: false false
// QShowEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qshowevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:535
// [-2] void QShowEvent() 
// (12)qm3126731348 (19)_ZN10QShowEventC2Ev
/*void* qm3126731348()*/{
  ;
  this_ =  new QShowEvent();
}


/*void C_ZN10QShowEventD2Ev(void *this_)*/ {
  delete (QShowEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qshowevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
