//  header block begin

// /usr/include/qt/QtCore/qobjectcleanuphandler.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qobjectcleanuphandler.h>
#include <QtCore>
#include "callback_inherit.h"

// QObjectCleanupHandler is pure virtual: false false
// QObjectCleanupHandler has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qobjectcleanuphandler(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:50
// [8] QString tr(const char *, const char *, int) 
// (12)qm4130854084 (37)_ZN21QObjectCleanupHandler2trEPKcS1_i
//static
/*void qm4130854084(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QObjectCleanupHandler::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QObjectCleanupHandler::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectcleanuphandler.h:53
// [-2] void QObjectCleanupHandler() 
// (12)qm4092531256 (30)_ZN21QObjectCleanupHandlerC2Ev
/*void* qm4092531256()*/{
  ;
  this_ =  new QObjectCleanupHandler();
}


/*void C_ZN21QObjectCleanupHandlerD2Ev(void *this_)*/ {
  delete (QObjectCleanupHandler*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qobjectcleanuphandler
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
