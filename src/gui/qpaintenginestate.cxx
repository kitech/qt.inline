//  header block begin

// /usr/include/qt/QtGui/qpaintengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpaintengine.h>
#include <QtGui>
#include "callback_inherit.h"

// QPaintEngineState is pure virtual: false false
// QPaintEngineState has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpaintenginestate(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:268
// [4] QPaintEngine::DirtyFlags state() const
// (11)qm930898536 (31)_ZNK17QPaintEngineState5stateEv
//static
/*void qm930898536()*/ {
  ;
  (void) ((QPaintEngineState*)this_)->state();
   auto xptr = (QFlags<QPaintEngine::DirtyFlag> (QPaintEngineState::*)() const ) &QPaintEngineState::state;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QPaintEngineStateD2Ev(void *this_)*/ {
  delete (QPaintEngineState*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpaintenginestate
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
