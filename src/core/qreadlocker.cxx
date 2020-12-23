//  header block begin

// /usr/include/qt/QtCore/qreadwritelock.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qreadwritelock.h>
#include <QtCore>
#include "callback_inherit.h"

// QReadLocker is pure virtual: false false
// QReadLocker has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qreadlocker(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:87
// [-2] void QReadLocker(QReadWriteLock *) 
// (12)qm2809922547 (36)_ZN11QReadLockerC2EP14QReadWriteLock
/*void* qm2809922547(QReadWriteLock * readWriteLock)*/{
  QReadWriteLock * readWriteLock = *(QReadWriteLock **)this_;
  this_ =  new QReadLocker(readWriteLock);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:89
// [-2] void ~QReadLocker() 
// (12)qm2061356139 (20)_ZN11QReadLockerD2Ev
/*void qm2061356139 (void *this_)*/ {
  delete (QReadLocker*)(this_);
}
// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:92
// [-2] void unlock() 
// (12)qm2486913061 (25)_ZN11QReadLocker6unlockEv
//static
/*void qm2486913061()*/ {
  ;
  (void) ((QReadLocker*)this_)->unlock();
   auto xptr = (void (QReadLocker::*)() ) &QReadLocker::unlock;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:102
// [-2] void relock() 
// (12)qm2633569734 (25)_ZN11QReadLocker6relockEv
//static
/*void qm2633569734()*/ {
  ;
  (void) ((QReadLocker*)this_)->relock();
   auto xptr = (void (QReadLocker::*)() ) &QReadLocker::relock;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:112
// [8] QReadWriteLock * readWriteLock() const
// (12)qm3112616980 (34)_ZNK11QReadLocker13readWriteLockEv
//static
/*void qm3112616980()*/ {
  ;
  (void) ((QReadLocker*)this_)->readWriteLock();
   auto xptr = (QReadWriteLock * (QReadLocker::*)() const ) &QReadLocker::readWriteLock;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qreadlocker
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
