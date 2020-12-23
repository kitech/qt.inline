//  header block begin

// /usr/include/qt/QtCore/qmutex.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmutex.h>
#include <QtCore>
#include "callback_inherit.h"

// QBasicMutex is pure virtual: false false
// QBasicMutex has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qbasicmutex(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:73
// [-2] void QBasicMutex() 
// (11)qm420848158 (20)_ZN11QBasicMutexC2Ev
/*void* qm420848158()*/{
  ;
  this_ =  new QBasicMutex();
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:79
// [-2] void lock() 
// (12)qm2600612179 (23)_ZN11QBasicMutex4lockEv
//static
/*void qm2600612179()*/ {
  ;
  (void) ((QBasicMutex*)this_)->lock();
   auto xptr = (void (QBasicMutex::*)() ) &QBasicMutex::lock;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:85
// [-2] void unlock() 
// (12)qm3422369279 (25)_ZN11QBasicMutex6unlockEv
//static
/*void qm3422369279()*/ {
  ;
  (void) ((QBasicMutex*)this_)->unlock();
   auto xptr = (void (QBasicMutex::*)() ) &QBasicMutex::unlock;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:91
// [1] bool tryLock() 
// (12)qm3877797344 (26)_ZN11QBasicMutex7tryLockEv
//static
/*void qm3877797344()*/ {
  ;
  (void) ((QBasicMutex*)this_)->tryLock();
   auto xptr = (bool (QBasicMutex::*)() ) &QBasicMutex::tryLock;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:96
// [1] bool try_lock() 
// (12)qm1311715470 (27)_ZN11QBasicMutex8try_lockEv
//static
/*void qm1311715470()*/ {
  ;
  (void) ((QBasicMutex*)this_)->try_lock();
   auto xptr = (bool (QBasicMutex::*)() ) &QBasicMutex::try_lock;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QBasicMutexD2Ev(void *this_)*/ {
  delete (QBasicMutex*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qbasicmutex
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
