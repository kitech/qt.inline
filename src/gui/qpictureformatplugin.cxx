//  header block begin

// /usr/include/qt/QtGui/qpictureformatplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpictureformatplugin.h>
#include <QtGui>
#include "callback_inherit.h"

// QPictureFormatPlugin is pure virtual: true true
// QPictureFormatPlugin has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpictureformatplugin(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:61
// [8] QString tr(const char *, const char *, int) 
// (12)qm4114456605 (36)_ZN20QPictureFormatPlugin2trEPKcS1_i
//static
/*void qm4114456605(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QPictureFormatPlugin::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QPictureFormatPlugin::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QPictureFormatPluginD2Ev(void *this_)*/ {
  delete (QPictureFormatPlugin*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpictureformatplugin
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
