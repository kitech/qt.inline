//  header block begin

// /usr/include/qt/QtGui/qopengltextureblitter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopengltextureblitter.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLTextureBlitter is pure virtual: false false
// QOpenGLTextureBlitter has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopengltextureblitter(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltextureblitter.h:58
// [-2] void QOpenGLTextureBlitter() 
// (12)qm1480619625 (30)_ZN21QOpenGLTextureBlitterC2Ev
/*void* qm1480619625()*/{
  ;
  this_ =  new QOpenGLTextureBlitter();
}


/*void C_ZN21QOpenGLTextureBlitterD2Ev(void *this_)*/ {
  delete (QOpenGLTextureBlitter*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopengltextureblitter
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
