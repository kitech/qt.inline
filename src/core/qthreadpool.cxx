//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(thread)
// /usr/include/qt/QtCore/qthreadpool.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qthreadpool.h>
#include <QtCore>
#include "callback_inherit.h"

// QThreadPool is pure virtual: false false
// QThreadPool has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qthreadpool(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm3428447086 (27)_ZN11QThreadPool2trEPKcS1_i
//static
/*void qm3428447086(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QThreadPool::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QThreadPool::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthreadpool.h:67
// [-2] void QThreadPool(QObject *) 
// (12)qm4168544634 (28)_ZN11QThreadPoolC2EP7QObject
/*void* qm4168544634(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QThreadPool(parent);
}


/*void C_ZN11QThreadPoolD2Ev(void *this_)*/ {
  delete (QThreadPool*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qthreadpool
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
