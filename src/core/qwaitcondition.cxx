//  header block begin

// /usr/include/qt/QtCore/qwaitcondition.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwaitcondition.h>
#include <QtCore>
#include "callback_inherit.h"

// QWaitCondition is pure virtual: false false
// QWaitCondition has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwaitcondition(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qwaitcondition.h:56
// [-2] void QWaitCondition() 
// (12)qm3530368176 (23)_ZN14QWaitConditionC2Ev
/*void* qm3530368176()*/{
  ;
  this_ =  new QWaitCondition();
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qwaitcondition.h:70
// [-2] void notify_one() 
// (11)qm901202472 (33)_ZN14QWaitCondition10notify_oneEv
//static
/*void qm901202472()*/ {
  ;
  (void) ((QWaitCondition*)this_)->notify_one();
   auto xptr = (void (QWaitCondition::*)() ) &QWaitCondition::notify_one;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qwaitcondition.h:71
// [-2] void notify_all() 
// (11)qm794758989 (33)_ZN14QWaitCondition10notify_allEv
//static
/*void qm794758989()*/ {
  ;
  (void) ((QWaitCondition*)this_)->notify_all();
   auto xptr = (void (QWaitCondition::*)() ) &QWaitCondition::notify_all;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QWaitConditionD2Ev(void *this_)*/ {
  delete (QWaitCondition*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwaitcondition
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
