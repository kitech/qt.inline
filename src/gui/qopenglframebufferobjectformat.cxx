//  header block begin

// /usr/include/qt/QtGui/qopenglframebufferobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglframebufferobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLFramebufferObjectFormat is pure virtual: false false
// QOpenGLFramebufferObjectFormat has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglframebufferobjectformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:167
// [-2] void QOpenGLFramebufferObjectFormat() 
// (12)qm2099681631 (39)_ZN30QOpenGLFramebufferObjectFormatC2Ev
/*void* qm2099681631()*/{
  ;
  this_ =  new QOpenGLFramebufferObjectFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglframebufferobject.h:168
// [-2] void QOpenGLFramebufferObjectFormat(const QOpenGLFramebufferObjectFormat &) 
// (12)qm3555859702 (42)_ZN30QOpenGLFramebufferObjectFormatC2ERKS_
/*void* qm3555859702(const QOpenGLFramebufferObjectFormat & other)*/{
  const QOpenGLFramebufferObjectFormat & other = *(const QOpenGLFramebufferObjectFormat *)this_;
  this_ =  new QOpenGLFramebufferObjectFormat(other);
}


/*void C_ZN30QOpenGLFramebufferObjectFormatD2Ev(void *this_)*/ {
  delete (QOpenGLFramebufferObjectFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglframebufferobjectformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
