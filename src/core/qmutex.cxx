//  header block begin

// /usr/include/qt/QtCore/qmutex.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmutex.h>
#include <QtCore>
#include "callback_inherit.h"

// QMutex is pure virtual: false false
// QMutex has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmutex(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:133
// [-2] void QMutex() 
// (10)qm73223203 (14)_ZN6QMutexC2Ev
/*void* qm73223203()*/{
  ;
  this_ =  new QMutex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:138
// [-2] void QMutex(QMutex::RecursionMode) 
// (11)qm870870648 (32)_ZN6QMutexC2ENS_13RecursionModeE
/*void* qm870870648(QMutex::RecursionMode mode)*/{
  QMutex::RecursionMode mode = *(QMutex::RecursionMode*)this_;
  this_ =  new QMutex(mode);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:148
// [1] bool try_lock() 
// (12)qm1629819428 (21)_ZN6QMutex8try_lockEv
//static
/*void qm1629819428()*/ {
  ;
  (void) ((QMutex*)this_)->try_lock();
   auto xptr = (bool (QMutex::*)() ) &QMutex::try_lock;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:169
// [1] bool isRecursive() const
// (11)qm583060812 (26)_ZNK6QMutex11isRecursiveEv
//static
/*void qm583060812()*/ {
  ;
  (void) ((QMutex*)this_)->isRecursive();
   auto xptr = (bool (QMutex::*)() const ) &QMutex::isRecursive;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN6QMutexD2Ev(void *this_)*/ {
  delete (QMutex*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmutex
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
