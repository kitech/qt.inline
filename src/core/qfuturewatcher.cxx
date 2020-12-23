//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(future)
// /usr/include/qt/QtCore/qfuturewatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfuturewatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QFutureWatcher is pure virtual: false false
// QFutureWatcher has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfuturewatcher(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:190
// [-2] void ~QFutureWatcher() 
// (12)qm3231647004 (26)_ZN14QFutureWatcherIvED2Ev
/*void qm3231647004 (void *this_)*/ {
  delete (QFutureWatcher<void>*)(this_);
}
// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:193
// [-2] void setFuture(const QFuture<void> &) 
// (12)qm1333636778 (46)_ZN14QFutureWatcherIvE9setFutureERK7QFutureIvE
//static
/*void qm1333636778(const QFuture<void> & future)*/ {
  const QFuture<void> & future = *(const QFuture<void> *)this_;
  (void) ((QFutureWatcher<void>*)this_)->setFuture(future);
   auto xptr = (void (QFutureWatcher<void>::*)(QFuture<void> const&) ) &QFutureWatcher<void>::setFuture;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:194
// [16] QFuture<void> future() const
// (12)qm3397086432 (32)_ZNK14QFutureWatcherIvE6futureEv
//static
/*void qm3397086432()*/ {
  ;
  (void) ((QFutureWatcher<void>*)this_)->future();
   auto xptr = (QFuture<void> (QFutureWatcher<void>::*)() const ) &QFutureWatcher<void>::future;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qfuturewatcher
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
