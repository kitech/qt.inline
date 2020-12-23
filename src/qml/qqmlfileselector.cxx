//  header block begin

// /usr/include/qt/QtQml/qqmlfileselector.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlfileselector.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlFileSelector is pure virtual: false false
// QQmlFileSelector has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlfileselector(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:54
// [8] QString tr(const char *, const char *, int) 
// (10)qm32684483 (32)_ZN16QQmlFileSelector2trEPKcS1_i
//static
/*void qm32684483(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQmlFileSelector::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQmlFileSelector::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:57
// [-2] void QQmlFileSelector(QQmlEngine *, QObject *) 
// (12)qm2363515315 (46)_ZN16QQmlFileSelectorC2EP10QQmlEngineP7QObject
/*void* qm2363515315(QQmlEngine * engine, QObject * parent)*/{
  QQmlEngine * engine = *(QQmlEngine **)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QQmlFileSelector(engine, parent);
}


/*void C_ZN16QQmlFileSelectorD2Ev(void *this_)*/ {
  delete (QQmlFileSelector*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlfileselector
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
