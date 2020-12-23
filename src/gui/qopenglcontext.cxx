//  header block begin

// /usr/include/qt/QtGui/qopenglcontext.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglcontext.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLContext is pure virtual: false false
// QOpenGLContext has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglcontext(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:151
// [8] QString tr(const char *, const char *, int) 
// (12)qm1008569302 (30)_ZN14QOpenGLContext2trEPKcS1_i
//static
/*void qm1008569302(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QOpenGLContext::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QOpenGLContext::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:154
// [-2] void QOpenGLContext(QObject *) 
// (12)qm1027378876 (31)_ZN14QOpenGLContextC2EP7QObject
/*void* qm1027378876(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QOpenGLContext(parent);
}


/*void C_ZN14QOpenGLContextD2Ev(void *this_)*/ {
  delete (QOpenGLContext*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglcontext
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
