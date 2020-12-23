//  header block begin

// /usr/include/qt/QtQml/qqmlextensionplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlextensionplugin.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlExtensionPlugin is pure virtual: true true
// QQmlExtensionPlugin has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlextensionplugin(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm3931329097 (35)_ZN19QQmlExtensionPlugin2trEPKcS1_i
//static
/*void qm3931329097(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQmlExtensionPlugin::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQmlExtensionPlugin::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QQmlExtensionPluginD2Ev(void *this_)*/ {
  delete (QQmlExtensionPlugin*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlextensionplugin
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
