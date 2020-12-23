//  header block begin

// /usr/include/qt/QtGui/qopenglcontext.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglcontext.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLContextGroup is pure virtual: false false
// QOpenGLContextGroup has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglcontextgroup(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:128
// [8] QString tr(const char *, const char *, int) 
// (12)qm4230961578 (35)_ZN19QOpenGLContextGroup2trEPKcS1_i
//static
/*void qm4230961578(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QOpenGLContextGroup::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QOpenGLContextGroup::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QOpenGLContextGroupD2Ev(void *this_)*/ {
  delete (QOpenGLContextGroup*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglcontextgroup
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
