//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QApplicationStateChangeEvent is pure virtual: false false
// QApplicationStateChangeEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qapplicationstatechangeevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1111
// [-2] void QApplicationStateChangeEvent(Qt::ApplicationState) 
// (12)qm1768008204 (59)_ZN28QApplicationStateChangeEventC2EN2Qt16ApplicationStateE
/*void* qm1768008204(Qt::ApplicationState state)*/{
  Qt::ApplicationState state = *(Qt::ApplicationState*)this_;
  this_ =  new QApplicationStateChangeEvent(state);
}


/*void C_ZN28QApplicationStateChangeEventD2Ev(void *this_)*/ {
  delete (QApplicationStateChangeEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qapplicationstatechangeevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
