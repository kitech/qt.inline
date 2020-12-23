//  header block begin

// /usr/include/qt/QtCore/qmutex.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmutex.h>
#include <QtCore>
#include "callback_inherit.h"

// QRecursiveMutex is pure virtual: false false
// QRecursiveMutex has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qrecursivemutex(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:209
// [-2] void QRecursiveMutex() 
// (12)qm2574190847 (24)_ZN15QRecursiveMutexC2Ev
/*void* qm2574190847()*/{
  ;
  this_ =  new QRecursiveMutex();
}


/*void C_ZN15QRecursiveMutexD2Ev(void *this_)*/ {
  delete (QRecursiveMutex*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qrecursivemutex
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
