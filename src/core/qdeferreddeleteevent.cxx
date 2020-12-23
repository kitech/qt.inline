//  header block begin

// /usr/include/qt/QtCore/qcoreevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcoreevent.h>
#include <QtCore>
#include "callback_inherit.h"

// QDeferredDeleteEvent is pure virtual: false false
// QDeferredDeleteEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdeferreddeleteevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:377
// [-2] void QDeferredDeleteEvent() 
// (12)qm2727277488 (29)_ZN20QDeferredDeleteEventC2Ev
/*void* qm2727277488()*/{
  ;
  this_ =  new QDeferredDeleteEvent();
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:379
// [4] int loopLevel() const
// (12)qm1878449921 (38)_ZNK20QDeferredDeleteEvent9loopLevelEv
//static
/*void qm1878449921()*/ {
  ;
  (void) ((QDeferredDeleteEvent*)this_)->loopLevel();
   auto xptr = (int (QDeferredDeleteEvent::*)() const ) &QDeferredDeleteEvent::loopLevel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QDeferredDeleteEventD2Ev(void *this_)*/ {
  delete (QDeferredDeleteEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdeferreddeleteevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
