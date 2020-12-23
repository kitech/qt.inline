//  header block begin

// /usr/include/qt/QtGui/qaccessibleplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessibleplugin.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessiblePlugin is pure virtual: true true
// QAccessiblePlugin has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibleplugin(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:61
// [8] QString tr(const char *, const char *, int) 
// (12)qm2064614526 (33)_ZN17QAccessiblePlugin2trEPKcS1_i
//static
/*void qm2064614526(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAccessiblePlugin::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAccessiblePlugin::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QAccessiblePluginD2Ev(void *this_)*/ {
  delete (QAccessiblePlugin*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibleplugin
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
