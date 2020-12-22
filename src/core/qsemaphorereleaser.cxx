//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(thread)
// /usr/include/qt/QtCore/qsemaphore.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsemaphore.h>
#include <QtCore>
#include "callback_inherit.h"

// QSemaphoreReleaser is pure virtual: false false
// QSemaphoreReleaser has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSemaphoreReleaser_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSemaphoreReleaser_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSemaphoreReleaser_t qt_meta_stringdata_MyQSemaphoreReleaser = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQSemaphoreReleaser"
  },
  "MyQSemaphoreReleaser"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSemaphoreReleaser[] = {
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
class Q_DECL_EXPORT MyQSemaphoreReleaser : public QSemaphoreReleaser {
public:
  virtual ~MyQSemaphoreReleaser() {}
// void QSemaphoreReleaser()
MyQSemaphoreReleaser() : QSemaphoreReleaser() {}
// void QSemaphoreReleaser(QSemaphore &, int)
MyQSemaphoreReleaser(QSemaphore & sem, int n) : QSemaphoreReleaser(sem, n) {}
// void QSemaphoreReleaser(QSemaphore *, int)
MyQSemaphoreReleaser(QSemaphore * sem, int n) : QSemaphoreReleaser(sem, n) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsemaphorereleaser(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:77
// [-2] void QSemaphoreReleaser() 
// (12)qm1271734568 (27)_ZN18QSemaphoreReleaserC2Ev
/*void* qm1271734568()*/{
  ;
  this_ =  new QSemaphoreReleaser();
  this_ =  new MyQSemaphoreReleaser();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:78
// [-2] void QSemaphoreReleaser(QSemaphore &, int) 
// (12)qm1384645767 (40)_ZN18QSemaphoreReleaserC2ER10QSemaphorei
/*void* qm1384645767(QSemaphore & sem, int n)*/{
  QSemaphore & sem = *(QSemaphore *)this_; int n = *(int*)this_;
  this_ =  new QSemaphoreReleaser(sem, n);
  this_ =  new MyQSemaphoreReleaser(sem, n);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:80
// [-2] void QSemaphoreReleaser(QSemaphore *, int) 
// (12)qm3018244138 (40)_ZN18QSemaphoreReleaserC2EP10QSemaphorei
/*void* qm3018244138(QSemaphore * sem, int n)*/{
  QSemaphore * sem = *(QSemaphore **)this_; int n = *(int*)this_;
  this_ =  new QSemaphoreReleaser(sem, n);
  this_ =  new MyQSemaphoreReleaser(sem, n);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:87
// [-2] void ~QSemaphoreReleaser() 
// (12)qm3592034705 (27)_ZN18QSemaphoreReleaserD2Ev
/*void qm3592034705 (void *this_)*/ {
  delete (QSemaphoreReleaser*)(this_);
}
// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:93
// [-2] void swap(QSemaphoreReleaser &) 
// (12)qm2774520453 (32)_ZN18QSemaphoreReleaser4swapERS_
//static
/*void qm2774520453(QSemaphoreReleaser & other)*/ {
  QSemaphoreReleaser & other = *(QSemaphoreReleaser *)this_;
  (void) ((QSemaphoreReleaser*)this_)->swap(other);
   auto xptr = (void (QSemaphoreReleaser::*)(QSemaphoreReleaser&) ) &QSemaphoreReleaser::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:99
// [8] QSemaphore * semaphore() const
// (11)qm680053059 (36)_ZNK18QSemaphoreReleaser9semaphoreEv
//static
/*void qm680053059()*/ {
  ;
  (void) ((QSemaphoreReleaser*)this_)->semaphore();
   auto xptr = (QSemaphore * (QSemaphoreReleaser::*)() const ) &QSemaphoreReleaser::semaphore;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:102
// [8] QSemaphore * cancel() 
// (12)qm4125587268 (32)_ZN18QSemaphoreReleaser6cancelEv
//static
/*void qm4125587268()*/ {
  ;
  (void) ((QSemaphoreReleaser*)this_)->cancel();
   auto xptr = (QSemaphore * (QSemaphoreReleaser::*)() ) &QSemaphoreReleaser::cancel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qsemaphorereleaser
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(thread)
#endif // #ifndef QT_MINIMAL
//  footer block end
