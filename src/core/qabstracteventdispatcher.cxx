//  header block begin

// /usr/include/qt/QtCore/qabstracteventdispatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstracteventdispatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractEventDispatcher is pure virtual: true true
// QAbstractEventDispatcher has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstracteventdispatcher(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm1317368131 (40)_ZN24QAbstractEventDispatcher2trEPKcS1_i
//static
/*void qm1317368131(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAbstractEventDispatcher::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAbstractEventDispatcher::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN24QAbstractEventDispatcherD2Ev(void *this_)*/ {
  delete (QAbstractEventDispatcher*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstracteventdispatcher
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
