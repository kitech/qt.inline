//  header block begin

// /usr/include/qt/QtQml/qqmlextensionplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlextensionplugin.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlEngineExtensionPlugin is pure virtual: false false
// QQmlEngineExtensionPlugin has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlengineextensionplugin(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:77
// [8] QString tr(const char *, const char *, int) 
// (12)qm2148465422 (41)_ZN25QQmlEngineExtensionPlugin2trEPKcS1_i
//static
/*void qm2148465422(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQmlEngineExtensionPlugin::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQmlEngineExtensionPlugin::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlextensionplugin.h:81
// [-2] void QQmlEngineExtensionPlugin(QObject *) 
// (12)qm3045639978 (42)_ZN25QQmlEngineExtensionPluginC2EP7QObject
/*void* qm3045639978(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QQmlEngineExtensionPlugin(parent);
}


/*void C_ZN25QQmlEngineExtensionPluginD2Ev(void *this_)*/ {
  delete (QQmlEngineExtensionPlugin*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlengineextensionplugin
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
