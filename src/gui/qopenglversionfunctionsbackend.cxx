//  header block begin

// /usr/include/qt/QtGui/qopenglversionfunctions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglversionfunctions.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLVersionFunctionsBackend is pure virtual: false false
// QOpenGLVersionFunctionsBackend has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglversionfunctionsbackend(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:177
// [-2] void QOpenGLVersionFunctionsBackend(QOpenGLContext *) 
// (11)qm384815462 (55)_ZN30QOpenGLVersionFunctionsBackendC2EP14QOpenGLContext
/*void* qm384815462(QOpenGLContext * ctx)*/{
  QOpenGLContext * ctx = *(QOpenGLContext **)this_;
  this_ =  new QOpenGLVersionFunctionsBackend(ctx);
}


/*void C_ZN30QOpenGLVersionFunctionsBackendD2Ev(void *this_)*/ {
  delete (QOpenGLVersionFunctionsBackend*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglversionfunctionsbackend
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
