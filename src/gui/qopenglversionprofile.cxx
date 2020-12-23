//  header block begin

// /usr/include/qt/QtGui/qopenglcontext.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglcontext.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLVersionProfile is pure virtual: false false
// QOpenGLVersionProfile has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglversionprofile(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:87
// [-2] void QOpenGLVersionProfile() 
// (12)qm2372338670 (30)_ZN21QOpenGLVersionProfileC2Ev
/*void* qm2372338670()*/{
  ;
  this_ =  new QOpenGLVersionProfile();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:88
// [-2] void QOpenGLVersionProfile(const QSurfaceFormat &) 
// (12)qm1315530085 (47)_ZN21QOpenGLVersionProfileC2ERK14QSurfaceFormat
/*void* qm1315530085(const QSurfaceFormat & format)*/{
  const QSurfaceFormat & format = *(const QSurfaceFormat *)this_;
  this_ =  new QOpenGLVersionProfile(format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:89
// [-2] void QOpenGLVersionProfile(const QOpenGLVersionProfile &) 
// (12)qm2635832247 (33)_ZN21QOpenGLVersionProfileC2ERKS_
/*void* qm2635832247(const QOpenGLVersionProfile & other)*/{
  const QOpenGLVersionProfile & other = *(const QOpenGLVersionProfile *)this_;
  this_ =  new QOpenGLVersionProfile(other);
}


/*void C_ZN21QOpenGLVersionProfileD2Ev(void *this_)*/ {
  delete (QOpenGLVersionProfile*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglversionprofile
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
