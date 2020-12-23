//  header block begin

// /usr/include/qt/QtQml/qjsengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsengine.h>
#include <QtQml>
#include "callback_inherit.h"

// QJSEngine is pure virtual: false false
// QJSEngine has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qjsengine(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:62
// [8] QString tr(const char *, const char *, int) 
// (11)qm999539620 (24)_ZN9QJSEngine2trEPKcS1_i
//static
/*void qm999539620(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QJSEngine::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QJSEngine::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:65
// [-2] void QJSEngine() 
// (12)qm1706333984 (17)_ZN9QJSEngineC2Ev
/*void* qm1706333984()*/{
  ;
  this_ =  new QJSEngine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:66
// [-2] void QJSEngine(QObject *) 
// (12)qm2200965348 (25)_ZN9QJSEngineC2EP7QObject
/*void* qm2200965348(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QJSEngine(parent);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:120
// [8] QV4::ExecutionEngine * handle() const
// (12)qm2702517163 (23)_ZNK9QJSEngine6handleEv
//static
/*void qm2702517163()*/ {
  ;
  (void) ((QJSEngine*)this_)->handle();
   auto xptr = (QV4::ExecutionEngine * (QJSEngine::*)() const ) &QJSEngine::handle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QJSEngineD2Ev(void *this_)*/ {
  delete (QJSEngine*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qjsengine
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
