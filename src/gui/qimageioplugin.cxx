//  header block begin

// /usr/include/qt/QtGui/qimageiohandler.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qimageiohandler.h>
#include <QtGui>
#include "callback_inherit.h"

// QImageIOPlugin is pure virtual: true true
// QImageIOPlugin has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qimageioplugin(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:142
// [8] QString tr(const char *, const char *, int) 
// (12)qm2918663362 (30)_ZN14QImageIOPlugin2trEPKcS1_i
//static
/*void qm2918663362(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QImageIOPlugin::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QImageIOPlugin::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QImageIOPluginD2Ev(void *this_)*/ {
  delete (QImageIOPlugin*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qimageioplugin
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
