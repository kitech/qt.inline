//  header block begin

// /usr/include/qt/QtMultimedia/qvideoframe.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideoframe.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoFrame is pure virtual: false false
// QVideoFrame has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvideoframe(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:113
// [-2] void QVideoFrame() 
// (12)qm2650489293 (20)_ZN11QVideoFrameC2Ev
/*void* qm2650489293()*/{
  ;
  this_ =  new QVideoFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:114
// [-2] void QVideoFrame(QAbstractVideoBuffer *, const QSize &, QVideoFrame::PixelFormat) 
// (12)qm3059824892 (67)_ZN11QVideoFrameC2EP20QAbstractVideoBufferRK5QSizeNS_11PixelFormatE
/*void* qm3059824892(QAbstractVideoBuffer * buffer, const QSize & size, QVideoFrame::PixelFormat format)*/{
  QAbstractVideoBuffer * buffer = *(QAbstractVideoBuffer **)this_; const QSize & size = *(const QSize *)this_; QVideoFrame::PixelFormat format = *(QVideoFrame::PixelFormat*)this_;
  this_ =  new QVideoFrame(buffer, size, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:115
// [-2] void QVideoFrame(int, const QSize &, int, QVideoFrame::PixelFormat) 
// (12)qm1177001788 (46)_ZN11QVideoFrameC2EiRK5QSizeiNS_11PixelFormatE
/*void* qm1177001788(int bytes, const QSize & size, int bytesPerLine, QVideoFrame::PixelFormat format)*/{
  int bytes = *(int*)this_; const QSize & size = *(const QSize *)this_; int bytesPerLine = *(int*)this_; QVideoFrame::PixelFormat format = *(QVideoFrame::PixelFormat*)this_;
  this_ =  new QVideoFrame(bytes, size, bytesPerLine, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:116
// [-2] void QVideoFrame(const QImage &) 
// (12)qm1433101137 (28)_ZN11QVideoFrameC2ERK6QImage
/*void* qm1433101137(const QImage & image)*/{
  const QImage & image = *(const QImage *)this_;
  this_ =  new QVideoFrame(image);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:117
// [-2] void QVideoFrame(const QVideoFrame &) 
// (12)qm2632356342 (23)_ZN11QVideoFrameC2ERKS_
/*void* qm2632356342(const QVideoFrame & other)*/{
  const QVideoFrame & other = *(const QVideoFrame *)this_;
  this_ =  new QVideoFrame(other);
}


/*void C_ZN11QVideoFrameD2Ev(void *this_)*/ {
  delete (QVideoFrame*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvideoframe
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
