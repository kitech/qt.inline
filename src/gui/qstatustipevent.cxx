//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QStatusTipEvent is pure virtual: false false
// QStatusTipEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstatustipevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:742
// [-2] void QStatusTipEvent(const QString &) 
// (12)qm2062511105 (33)_ZN15QStatusTipEventC2ERK7QString
/*void* qm2062511105(const QString & tip)*/{
  const QString & tip = *(const QString *)this_;
  this_ =  new QStatusTipEvent(tip);
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:745
// [8] QString tip() const
// (12)qm2961832183 (27)_ZNK15QStatusTipEvent3tipEv
//static
/*void qm2961832183()*/ {
  ;
  (void) ((QStatusTipEvent*)this_)->tip();
   auto xptr = (QString (QStatusTipEvent::*)() const ) &QStatusTipEvent::tip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QStatusTipEventD2Ev(void *this_)*/ {
  delete (QStatusTipEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstatustipevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
