//  header block begin

// /usr/include/qt/QtGui/qopenglshaderprogram.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglshaderprogram.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLShader is pure virtual: false false
// QOpenGLShader has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglshader(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:62
// [8] QString tr(const char *, const char *, int) 
// (12)qm2655087445 (29)_ZN13QOpenGLShader2trEPKcS1_i
//static
/*void qm2655087445(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QOpenGLShader::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QOpenGLShader::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:75
// [-2] void QOpenGLShader(QOpenGLShader::ShaderType, QObject *) 
// (12)qm4014145414 (58)_ZN13QOpenGLShaderC2E6QFlagsINS_13ShaderTypeBitEEP7QObject
/*void* qm4014145414(QFlags<QOpenGLShader::ShaderTypeBit> type_, QObject * parent)*/{
  QFlags<QOpenGLShader::ShaderTypeBit> type_ = *(QFlags<QOpenGLShader::ShaderTypeBit>*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QOpenGLShader(type_, parent);
}


/*void C_ZN13QOpenGLShaderD2Ev(void *this_)*/ {
  delete (QOpenGLShader*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglshader
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
