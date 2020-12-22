//  header block begin

// /usr/include/qt/QtCore/qmutex.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmutex.h>
#include <QtCore>
#include "callback_inherit.h"

// QMutexLocker is pure virtual: false false
// QMutexLocker has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMutexLocker_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMutexLocker_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMutexLocker_t qt_meta_stringdata_MyQMutexLocker = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQMutexLocker"
  },
  "MyQMutexLocker"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMutexLocker[] = {
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
class Q_DECL_EXPORT MyQMutexLocker : public QMutexLocker {
public:
  virtual ~MyQMutexLocker() {}
// void QMutexLocker(QBasicMutex *)
MyQMutexLocker(QBasicMutex * m) : QMutexLocker(m) {}
// void QMutexLocker(QRecursiveMutex *)
MyQMutexLocker(QRecursiveMutex * m) : QMutexLocker(m) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmutexlocker(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:226
// [-2] void QMutexLocker(QBasicMutex *) 
// (12)qm3182476505 (34)_ZN12QMutexLockerC2EP11QBasicMutex
/*void* qm3182476505(QBasicMutex * m)*/{
  QBasicMutex * m = *(QBasicMutex **)this_;
  this_ =  new QMutexLocker(m);
  this_ =  new MyQMutexLocker(m);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:237
// [-2] void QMutexLocker(QRecursiveMutex *) 
// (12)qm2401233820 (38)_ZN12QMutexLockerC2EP15QRecursiveMutex
/*void* qm2401233820(QRecursiveMutex * m)*/{
  QRecursiveMutex * m = *(QRecursiveMutex **)this_;
  this_ =  new QMutexLocker(m);
  this_ =  new MyQMutexLocker(m);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:243
// [-2] void ~QMutexLocker() 
// (11)qm607499285 (21)_ZN12QMutexLockerD2Ev
/*void qm607499285 (void *this_)*/ {
  delete (QMutexLocker*)(this_);
}
// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:245
// [-2] void unlock() 
// (12)qm4288376634 (26)_ZN12QMutexLocker6unlockEv
//static
/*void qm4288376634()*/ {
  ;
  (void) ((QMutexLocker*)this_)->unlock();
   auto xptr = (void (QMutexLocker::*)() ) &QMutexLocker::unlock;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:253
// [-2] void relock() 
// (12)qm4149818073 (26)_ZN12QMutexLocker6relockEv
//static
/*void qm4149818073()*/ {
  ;
  (void) ((QMutexLocker*)this_)->relock();
   auto xptr = (void (QMutexLocker::*)() ) &QMutexLocker::relock;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:268
// [8] QMutex * mutex() const
// (12)qm3313283003 (26)_ZNK12QMutexLocker5mutexEv
//static
/*void qm3313283003()*/ {
  ;
  (void) ((QMutexLocker*)this_)->mutex();
   auto xptr = (QMutex * (QMutexLocker::*)() const ) &QMutexLocker::mutex;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qmutexlocker
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
