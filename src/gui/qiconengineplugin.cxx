//  header block begin

// /usr/include/qt/QtGui/qiconengineplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qiconengineplugin.h>
#include <QtGui>
#include "callback_inherit.h"

// QIconEnginePlugin is pure virtual: true true
// QIconEnginePlugin has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qiconengineplugin(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm3292654648 (33)_ZN17QIconEnginePlugin2trEPKcS1_i
//static
/*void qm3292654648(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QIconEnginePlugin::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QIconEnginePlugin::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QIconEnginePluginD2Ev(void *this_)*/ {
  delete (QIconEnginePlugin*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qiconengineplugin
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
