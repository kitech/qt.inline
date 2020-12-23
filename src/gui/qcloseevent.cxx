//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QCloseEvent is pure virtual: false false
// QCloseEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcloseevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:519
// [-2] void QCloseEvent() 
// (12)qm3500818464 (20)_ZN11QCloseEventC2Ev
/*void* qm3500818464()*/{
  ;
  this_ =  new QCloseEvent();
}


/*void C_ZN11QCloseEventD2Ev(void *this_)*/ {
  delete (QCloseEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcloseevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
