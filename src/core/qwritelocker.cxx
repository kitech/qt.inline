//  header block begin

// /usr/include/qt/QtCore/qreadwritelock.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qreadwritelock.h>
#include <QtCore>
#include "callback_inherit.h"

// QWriteLocker is pure virtual: false false
// QWriteLocker has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWriteLocker_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWriteLocker_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWriteLocker_t qt_meta_stringdata_MyQWriteLocker = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQWriteLocker"
  },
  "MyQWriteLocker"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWriteLocker[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQWriteLocker : public QWriteLocker {
public:
  virtual ~MyQWriteLocker() {}
// void QWriteLocker(QReadWriteLock *)
MyQWriteLocker(QReadWriteLock * readWriteLock) : QWriteLocker(readWriteLock) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwritelocker(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:131
// [-2] void QWriteLocker(QReadWriteLock *) 
// (12)qm4208358416 (37)_ZN12QWriteLockerC2EP14QReadWriteLock
/*void* qm4208358416(QReadWriteLock * readWriteLock)*/{
  QReadWriteLock * readWriteLock = *(QReadWriteLock **)this_;
  this_ =  new QWriteLocker(readWriteLock);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:133
// [-2] void ~QWriteLocker() 
// (12)qm1667306103 (21)_ZN12QWriteLockerD2Ev
/*void qm1667306103 (void *this_)*/ {
  delete (QWriteLocker*)(this_);
}
// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:136
// [-2] void unlock() 
// (12)qm2699317856 (26)_ZN12QWriteLocker6unlockEv
//static
/*void qm2699317856()*/ {
  ;
  (void) ((QWriteLocker*)this_)->unlock();
   auto xptr = (void (QWriteLocker::*)() ) &QWriteLocker::unlock;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:146
// [-2] void relock() 
// (12)qm2821066627 (26)_ZN12QWriteLocker6relockEv
//static
/*void qm2821066627()*/ {
  ;
  (void) ((QWriteLocker*)this_)->relock();
   auto xptr = (void (QWriteLocker::*)() ) &QWriteLocker::relock;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:156
// [8] QReadWriteLock * readWriteLock() const
// (12)qm2394777766 (35)_ZNK12QWriteLocker13readWriteLockEv
//static
/*void qm2394777766()*/ {
  ;
  (void) ((QWriteLocker*)this_)->readWriteLock();
   auto xptr = (QReadWriteLock * (QWriteLocker::*)() const ) &QWriteLocker::readWriteLock;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qwritelocker
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
