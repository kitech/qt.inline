//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QDragLeaveEvent is pure virtual: false false
// QDragLeaveEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdragleaveevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:713
// [-2] void QDragLeaveEvent() 
// (12)qm3428661095 (24)_ZN15QDragLeaveEventC2Ev
/*void* qm3428661095()*/{
  ;
  this_ =  new QDragLeaveEvent();
}


/*void C_ZN15QDragLeaveEventD2Ev(void *this_)*/ {
  delete (QDragLeaveEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdragleaveevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
