//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QHideEvent is pure virtual: false false
// QHideEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qhideevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:543
// [-2] void QHideEvent() 
// (12)qm1917821395 (19)_ZN10QHideEventC2Ev
/*void* qm1917821395()*/{
  ;
  this_ =  new QHideEvent();
}


/*void C_ZN10QHideEventD2Ev(void *this_)*/ {
  delete (QHideEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qhideevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
