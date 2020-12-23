//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QToolBarChangeEvent is pure virtual: false false
// QToolBarChangeEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtoolbarchangeevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:796
// [-2] void QToolBarChangeEvent(bool) 
// (12)qm3365750564 (28)_ZN19QToolBarChangeEventC2Eb
/*void* qm3365750564(bool t)*/{
  bool t = *(bool*)this_;
  this_ =  new QToolBarChangeEvent(t);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:799
// [1] bool toggle() const
// (12)qm1879354079 (34)_ZNK19QToolBarChangeEvent6toggleEv
//static
/*void qm1879354079()*/ {
  ;
  (void) ((QToolBarChangeEvent*)this_)->toggle();
   auto xptr = (bool (QToolBarChangeEvent::*)() const ) &QToolBarChangeEvent::toggle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QToolBarChangeEventD2Ev(void *this_)*/ {
  delete (QToolBarChangeEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtoolbarchangeevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
