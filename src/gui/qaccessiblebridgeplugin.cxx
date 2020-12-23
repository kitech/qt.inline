//  header block begin

// /usr/include/qt/QtGui/qaccessiblebridge.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessiblebridge.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleBridgePlugin is pure virtual: true true
// QAccessibleBridgePlugin has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessiblebridgeplugin(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:67
// [8] QString tr(const char *, const char *, int) 
// (12)qm4103800455 (39)_ZN23QAccessibleBridgePlugin2trEPKcS1_i
//static
/*void qm4103800455(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAccessibleBridgePlugin::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAccessibleBridgePlugin::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN23QAccessibleBridgePluginD2Ev(void *this_)*/ {
  delete (QAccessibleBridgePlugin*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessiblebridgeplugin
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
