//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(future)
// /usr/include/qt/QtCore/qfutureinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfutureinterface.h>
#include <QtCore>
#include "callback_inherit.h"

// QFutureInterface is pure virtual: false false
// QFutureInterface has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfutureinterface(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:288
// [16] QFutureInterface<void> canceledResult() 
// (12)qm2410503837 (42)_ZN16QFutureInterfaceIvE14canceledResultEv
//static
/*void qm2410503837()*/ {
  ;
  (void) QFutureInterface<void>::canceledResult();
   auto xptr = (QFutureInterface<void> (*)() ) &QFutureInterface<void>::canceledResult;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:292
// [16] QFuture<void> future() 
// (12)qm1537791808 (33)_ZN16QFutureInterfaceIvE6futureEv
//static
/*void qm1537791808()*/ {
  ;
  (void) ((QFutureInterface<void>*)this_)->future();
   auto xptr = (QFuture<void> (QFutureInterface<void>::*)() ) &QFutureInterface<void>::future;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:294
// [-2] void reportResult(const void *, int) 
// (12)qm3591638659 (43)_ZN16QFutureInterfaceIvE12reportResultEPKvi
//static
/*void qm3591638659(const void * arg0, int arg1)*/ {
  const void * arg0 = *(const void **)this_; int arg1 = *(int*)this_;
  (void) ((QFutureInterface<void>*)this_)->reportResult(arg0, arg1);
   auto xptr = (void (QFutureInterface<void>::*)(void const*, int) ) &QFutureInterface<void>::reportResult;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:295
// [-2] void reportResults(const QVector<void> &, int) 
// (12)qm1774100742 (54)_ZN16QFutureInterfaceIvE13reportResultsERK7QVectorIvEi
//static
/*void qm1774100742(const QVector<void> & arg0, int arg1)*/ {
  const QVector<void> & arg0 = *(const QVector<void> *)this_; int arg1 = *(int*)this_;
  (void) ((QFutureInterface<void>*)this_)->reportResults(arg0, arg1);
   auto xptr = (void (QFutureInterface<void>::*)(QVector<void> const&, int) ) &QFutureInterface<void>::reportResults;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfutureinterface.h:296
// [-2] void reportFinished(const void *) 
// (11)qm842714230 (44)_ZN16QFutureInterfaceIvE14reportFinishedEPKv
//static
/*void qm842714230(const void * arg0)*/ {
  const void * arg0 = *(const void **)this_;
  (void) ((QFutureInterface<void>*)this_)->reportFinished(arg0);
   auto xptr = (void (QFutureInterface<void>::*)(void const*) ) &QFutureInterface<void>::reportFinished;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QFutureInterfaceD2Ev(void *this_)*/ {
  delete (QFutureInterface<void>*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfutureinterface
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
