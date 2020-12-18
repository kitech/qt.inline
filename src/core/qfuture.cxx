//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(future)
// /usr/include/qt/QtCore/qfuture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfuture.h>
#include <QtCore>
#include "callback_inherit.h"

// QFuture is pure virtual: false false
// QFuture has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFuture_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFuture_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFuture_t qt_meta_stringdata_MyQFuture = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQFuture"
  },
  "MyQFuture"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFuture[] = {
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
class Q_DECL_EXPORT MyQFuture : public QFuture<void> {
public:
  virtual ~MyQFuture() {}
// void QFuture()
MyQFuture() : QFuture<void>() {}
// void QFuture(QFutureInterfaceBase *)
MyQFuture(QFutureInterfaceBase * p) : QFuture<void>(p) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfuture(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:231
// [-2] void QFuture() 
// (11)qm565629540 (18)_ZN7QFutureIvEC2Ev
/*void* qm565629540()*/{
  ;
  this_ =  new QFuture<void>();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:234
// [-2] void QFuture(QFutureInterfaceBase *) 
// (12)qm2810721255 (40)_ZN7QFutureIvEC2EP20QFutureInterfaceBase
/*void* qm2810721255(QFutureInterfaceBase * p)*/{
  QFutureInterfaceBase * p = *(QFutureInterfaceBase **)this_;
  this_ =  new QFuture<void>(p);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:238
// [1] bool operator==(const QFuture<void> &) const
// (11)qm202514204 (23)_ZNK7QFutureIvEeqERKS0_
//static
/*void qm202514204(const QFuture<void> & other)*/ {
  const QFuture<void> & other = *(const QFuture<void> *)this_;
  (void) ((QFuture<void>*)this_)->operator==(other);
  // auto xptr = (bool (QFuture<void>::*)(QFuture<void> const&) const ) &QFuture<void>::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:239
// [1] bool operator!=(const QFuture<void> &) const
// (12)qm3270097815 (23)_ZNK7QFutureIvEneERKS0_
//static
/*void qm3270097815(const QFuture<void> & other)*/ {
  const QFuture<void> & other = *(const QFuture<void> *)this_;
  (void) ((QFuture<void>*)this_)->operator!=(other);
  // auto xptr = (bool (QFuture<void>::*)(QFuture<void> const&) const ) &QFuture<void>::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:255
// [-2] void cancel() 
// (11)qm998342617 (23)_ZN7QFutureIvE6cancelEv
//static
/*void qm998342617()*/ {
  ;
  (void) ((QFuture<void>*)this_)->cancel();
   auto xptr = (void (QFuture<void>::*)() ) &QFuture<void>::cancel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:256
// [1] bool isCanceled() const
// (12)qm2670937845 (29)_ZNK7QFutureIvE10isCanceledEv
//static
/*void qm2670937845()*/ {
  ;
  (void) ((QFuture<void>*)this_)->isCanceled();
   auto xptr = (bool (QFuture<void>::*)() const ) &QFuture<void>::isCanceled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:258
// [-2] void setPaused(bool) 
// (12)qm1964211319 (26)_ZN7QFutureIvE9setPausedEb
//static
/*void qm1964211319(bool paused)*/ {
  bool paused = *(bool*)this_;
  (void) ((QFuture<void>*)this_)->setPaused(paused);
   auto xptr = (void (QFuture<void>::*)(bool) ) &QFuture<void>::setPaused;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:259
// [1] bool isPaused() const
// (11)qm227059158 (26)_ZNK7QFutureIvE8isPausedEv
//static
/*void qm227059158()*/ {
  ;
  (void) ((QFuture<void>*)this_)->isPaused();
   auto xptr = (bool (QFuture<void>::*)() const ) &QFuture<void>::isPaused;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:260
// [-2] void pause() 
// (12)qm2217996081 (22)_ZN7QFutureIvE5pauseEv
//static
/*void qm2217996081()*/ {
  ;
  (void) ((QFuture<void>*)this_)->pause();
   auto xptr = (void (QFuture<void>::*)() ) &QFuture<void>::pause;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:261
// [-2] void resume() 
// (12)qm3847359096 (23)_ZN7QFutureIvE6resumeEv
//static
/*void qm3847359096()*/ {
  ;
  (void) ((QFuture<void>*)this_)->resume();
   auto xptr = (void (QFuture<void>::*)() ) &QFuture<void>::resume;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:262
// [-2] void togglePaused() 
// (12)qm1583590689 (30)_ZN7QFutureIvE12togglePausedEv
//static
/*void qm1583590689()*/ {
  ;
  (void) ((QFuture<void>*)this_)->togglePaused();
   auto xptr = (void (QFuture<void>::*)() ) &QFuture<void>::togglePaused;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:264
// [1] bool isStarted() const
// (12)qm3804197101 (27)_ZNK7QFutureIvE9isStartedEv
//static
/*void qm3804197101()*/ {
  ;
  (void) ((QFuture<void>*)this_)->isStarted();
   auto xptr = (bool (QFuture<void>::*)() const ) &QFuture<void>::isStarted;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:265
// [1] bool isFinished() const
// (12)qm1186805665 (29)_ZNK7QFutureIvE10isFinishedEv
//static
/*void qm1186805665()*/ {
  ;
  (void) ((QFuture<void>*)this_)->isFinished();
   auto xptr = (bool (QFuture<void>::*)() const ) &QFuture<void>::isFinished;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:266
// [1] bool isRunning() const
// (12)qm4127571026 (27)_ZNK7QFutureIvE9isRunningEv
//static
/*void qm4127571026()*/ {
  ;
  (void) ((QFuture<void>*)this_)->isRunning();
   auto xptr = (bool (QFuture<void>::*)() const ) &QFuture<void>::isRunning;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:268
// [4] int resultCount() const
// (11)qm554247937 (30)_ZNK7QFutureIvE11resultCountEv
//static
/*void qm554247937()*/ {
  ;
  (void) ((QFuture<void>*)this_)->resultCount();
   auto xptr = (int (QFuture<void>::*)() const ) &QFuture<void>::resultCount;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:269
// [4] int progressValue() const
// (12)qm2876702523 (32)_ZNK7QFutureIvE13progressValueEv
//static
/*void qm2876702523()*/ {
  ;
  (void) ((QFuture<void>*)this_)->progressValue();
   auto xptr = (int (QFuture<void>::*)() const ) &QFuture<void>::progressValue;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:270
// [4] int progressMinimum() const
// (12)qm2762899921 (34)_ZNK7QFutureIvE15progressMinimumEv
//static
/*void qm2762899921()*/ {
  ;
  (void) ((QFuture<void>*)this_)->progressMinimum();
   auto xptr = (int (QFuture<void>::*)() const ) &QFuture<void>::progressMinimum;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:271
// [4] int progressMaximum() const
// (12)qm1933915024 (34)_ZNK7QFutureIvE15progressMaximumEv
//static
/*void qm1933915024()*/ {
  ;
  (void) ((QFuture<void>*)this_)->progressMaximum();
   auto xptr = (int (QFuture<void>::*)() const ) &QFuture<void>::progressMaximum;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:272
// [8] QString progressText() const
// (12)qm1576411415 (31)_ZNK7QFutureIvE12progressTextEv
//static
/*void qm1576411415()*/ {
  ;
  (void) ((QFuture<void>*)this_)->progressText();
   auto xptr = (QString (QFuture<void>::*)() const ) &QFuture<void>::progressText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuture.h:273
// [-2] void waitForFinished() 
// (11)qm140482784 (33)_ZN7QFutureIvE15waitForFinishedEv
//static
/*void qm140482784()*/ {
  ;
  (void) ((QFuture<void>*)this_)->waitForFinished();
   auto xptr = (void (QFuture<void>::*)() ) &QFuture<void>::waitForFinished;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QFutureD2Ev(void *this_)*/ {
  delete (QFuture<void>*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfuture
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(future)
#endif // #ifndef QT_MINIMAL
//  footer block end
