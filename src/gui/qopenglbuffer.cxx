//  header block begin

// /usr/include/qt/QtGui/qopenglbuffer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglbuffer.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLBuffer is pure virtual: false false
// QOpenGLBuffer has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglbuffer(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:66
// [-2] void QOpenGLBuffer() 
// (12)qm2924549072 (22)_ZN13QOpenGLBufferC2Ev
/*void* qm2924549072()*/{
  ;
  this_ =  new QOpenGLBuffer();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:67
// [-2] void QOpenGLBuffer(QOpenGLBuffer::Type) 
// (12)qm2828229433 (30)_ZN13QOpenGLBufferC2ENS_4TypeE
/*void* qm2828229433(QOpenGLBuffer::Type type_)*/{
  QOpenGLBuffer::Type type_ = *(QOpenGLBuffer::Type*)this_;
  this_ =  new QOpenGLBuffer(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:68
// [-2] void QOpenGLBuffer(const QOpenGLBuffer &) 
// (11)qm915854534 (25)_ZN13QOpenGLBufferC2ERKS_
/*void* qm915854534(const QOpenGLBuffer & other)*/{
  const QOpenGLBuffer & other = *(const QOpenGLBuffer *)this_;
  this_ =  new QOpenGLBuffer(other);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:127
// [-2] void allocate(int) 
// (11)qm332305949 (29)_ZN13QOpenGLBuffer8allocateEi
//static
/*void qm332305949(int count)*/ {
  int count = *(int*)this_;
  (void) ((QOpenGLBuffer*)this_)->allocate(count);
   auto xptr = (void (QOpenGLBuffer::*)(int) ) &QOpenGLBuffer::allocate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QOpenGLBufferD2Ev(void *this_)*/ {
  delete (QOpenGLBuffer*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglbuffer
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
