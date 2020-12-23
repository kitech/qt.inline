//  header block begin

// /usr/include/qt/QtCore/qreadwritelock.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qreadwritelock.h>
#include <QtCore>
#include "callback_inherit.h"

// QReadWriteLock is pure virtual: false false
// QReadWriteLock has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qreadwritelock(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:57
// [-2] void QReadWriteLock(QReadWriteLock::RecursionMode) 
// (12)qm1512914593 (41)_ZN14QReadWriteLockC2ENS_13RecursionModeE
/*void* qm1512914593(QReadWriteLock::RecursionMode recursionMode)*/{
  QReadWriteLock::RecursionMode recursionMode = *(QReadWriteLock::RecursionMode*)this_;
  this_ =  new QReadWriteLock(recursionMode);
}


/*void C_ZN14QReadWriteLockD2Ev(void *this_)*/ {
  delete (QReadWriteLock*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qreadwritelock
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
