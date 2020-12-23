//  header block begin

// /usr/include/qt/QtQml/qqmlcontext.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlcontext.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlContext is pure virtual: false false
// QQmlContext has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlcontext(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:63
// [8] QString tr(const char *, const char *, int) 
// (11)qm411858209 (27)_ZN11QQmlContext2trEPKcS1_i
//static
/*void qm411858209(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQmlContext::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQmlContext::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:69
// [-2] void QQmlContext(QQmlEngine *, QObject *) 
// (12)qm4257046582 (41)_ZN11QQmlContextC2EP10QQmlEngineP7QObject
/*void* qm4257046582(QQmlEngine * parent, QObject * objParent)*/{
  QQmlEngine * parent = *(QQmlEngine **)this_; QObject * objParent = *(QObject **)this_;
  this_ =  new QQmlContext(parent, objParent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:70
// [-2] void QQmlContext(QQmlContext *, QObject *) 
// (11)qm267568946 (31)_ZN11QQmlContextC2EPS_P7QObject
/*void* qm267568946(QQmlContext * parent, QObject * objParent)*/{
  QQmlContext * parent = *(QQmlContext **)this_; QObject * objParent = *(QObject **)this_;
  this_ =  new QQmlContext(parent, objParent);
}


/*void C_ZN11QQmlContextD2Ev(void *this_)*/ {
  delete (QQmlContext*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlcontext
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
