//  header block begin

// /usr/include/qt/QtGui/qgenericplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgenericplugin.h>
#include <QtGui>
#include "callback_inherit.h"

// QGenericPlugin is pure virtual: true true
// QGenericPlugin has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgenericplugin(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:53
// [8] QString tr(const char *, const char *, int) 
// (12)qm2442775215 (30)_ZN14QGenericPlugin2trEPKcS1_i
//static
/*void qm2442775215(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGenericPlugin::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGenericPlugin::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QGenericPluginD2Ev(void *this_)*/ {
  delete (QGenericPlugin*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgenericplugin
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
