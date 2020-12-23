//  header block begin

// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideosurfaceformat.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoSurfaceFormat is pure virtual: false false
// QVideoSurfaceFormat has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvideosurfaceformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:79
// [-2] void QVideoSurfaceFormat() 
// (12)qm3582146660 (28)_ZN19QVideoSurfaceFormatC2Ev
/*void* qm3582146660()*/{
  ;
  this_ =  new QVideoSurfaceFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:80
// [-2] void QVideoSurfaceFormat(const QSize &, QVideoFrame::PixelFormat, QAbstractVideoBuffer::HandleType) 
// (12)qm3488110713 (99)_ZN19QVideoSurfaceFormatC2ERK5QSizeN11QVideoFrame11PixelFormatEN20QAbstractVideoBuffer10HandleTypeE
/*void* qm3488110713(const QSize & size, QVideoFrame::PixelFormat pixelFormat, QAbstractVideoBuffer::HandleType handleType)*/{
  const QSize & size = *(const QSize *)this_; QVideoFrame::PixelFormat pixelFormat = *(QVideoFrame::PixelFormat*)this_; QAbstractVideoBuffer::HandleType handleType = *(QAbstractVideoBuffer::HandleType*)this_;
  this_ =  new QVideoSurfaceFormat(size, pixelFormat, handleType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:84
// [-2] void QVideoSurfaceFormat(const QVideoSurfaceFormat &) 
// (12)qm3932998880 (31)_ZN19QVideoSurfaceFormatC2ERKS_
/*void* qm3932998880(const QVideoSurfaceFormat & format)*/{
  const QVideoSurfaceFormat & format = *(const QVideoSurfaceFormat *)this_;
  this_ =  new QVideoSurfaceFormat(format);
}


/*void C_ZN19QVideoSurfaceFormatD2Ev(void *this_)*/ {
  delete (QVideoSurfaceFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvideosurfaceformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
