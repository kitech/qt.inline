//  header block begin

// /usr/include/qt/QtGui/qopenglshaderprogram.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglshaderprogram.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLShaderProgram is pure virtual: false false
// QOpenGLShaderProgram has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglshaderprogram(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:108
// [8] QString tr(const char *, const char *, int) 
// (12)qm3145933664 (36)_ZN20QOpenGLShaderProgram2trEPKcS1_i
//static
/*void qm3145933664(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QOpenGLShaderProgram::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QOpenGLShaderProgram::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:110
// [-2] void QOpenGLShaderProgram(QObject *) 
// (11)qm532219565 (37)_ZN20QOpenGLShaderProgramC2EP7QObject
/*void* qm532219565(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QOpenGLShaderProgram(parent);
}


/*void C_ZN20QOpenGLShaderProgramD2Ev(void *this_)*/ {
  delete (QOpenGLShaderProgram*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglshaderprogram
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
