//  header block begin

// /usr/include/qt/QtWidgets/qstyleplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleplugin.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStylePlugin is pure virtual: true true
// QStylePlugin has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleplugin(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm4196709924 (28)_ZN12QStylePlugin2trEPKcS1_i
//static
/*void qm4196709924(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QStylePlugin::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QStylePlugin::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QStylePluginD2Ev(void *this_)*/ {
  delete (QStylePlugin*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleplugin
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
