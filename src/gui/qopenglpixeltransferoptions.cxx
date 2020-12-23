//  header block begin

// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglpixeltransferoptions.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLPixelTransferOptions is pure virtual: false false
// QOpenGLPixelTransferOptions has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglpixeltransferoptions(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:56
// [-2] void QOpenGLPixelTransferOptions() 
// (12)qm1100202295 (36)_ZN27QOpenGLPixelTransferOptionsC2Ev
/*void* qm1100202295()*/{
  ;
  this_ =  new QOpenGLPixelTransferOptions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:57
// [-2] void QOpenGLPixelTransferOptions(const QOpenGLPixelTransferOptions &) 
// (12)qm1549735437 (39)_ZN27QOpenGLPixelTransferOptionsC2ERKS_
/*void* qm1549735437(const QOpenGLPixelTransferOptions & arg0)*/{
  const QOpenGLPixelTransferOptions & arg0 = *(const QOpenGLPixelTransferOptions *)this_;
  this_ =  new QOpenGLPixelTransferOptions(arg0);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:58
// [8] QOpenGLPixelTransferOptions & operator=(QOpenGLPixelTransferOptions &&) 
// (12)qm2457036627 (38)_ZN27QOpenGLPixelTransferOptionsaSEOS_
//static
/*void qm2457036627(QOpenGLPixelTransferOptions && other)*/ {
  QOpenGLPixelTransferOptions && other =  static_cast<QOpenGLPixelTransferOptions &&>(*(QOpenGLPixelTransferOptions *)this_);
  (void) ((QOpenGLPixelTransferOptions*)this_)->operator=(other);
  // auto xptr = (QOpenGLPixelTransferOptions & (QOpenGLPixelTransferOptions::*)(QOpenGLPixelTransferOptions&&) ) &QOpenGLPixelTransferOptions::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:63
// [-2] void swap(QOpenGLPixelTransferOptions &) 
// (11)qm224229598 (41)_ZN27QOpenGLPixelTransferOptions4swapERS_
//static
/*void qm224229598(QOpenGLPixelTransferOptions & other)*/ {
  QOpenGLPixelTransferOptions & other = *(QOpenGLPixelTransferOptions *)this_;
  (void) ((QOpenGLPixelTransferOptions*)this_)->swap(other);
   auto xptr = (void (QOpenGLPixelTransferOptions::*)(QOpenGLPixelTransferOptions&) ) &QOpenGLPixelTransferOptions::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN27QOpenGLPixelTransferOptionsD2Ev(void *this_)*/ {
  delete (QOpenGLPixelTransferOptions*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglpixeltransferoptions
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
