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


struct qt_meta_stringdata_MyQVideoSurfaceFormat_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQVideoSurfaceFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQVideoSurfaceFormat_t qt_meta_stringdata_MyQVideoSurfaceFormat = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQVideoSurfaceFormat"
  },
  "MyQVideoSurfaceFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQVideoSurfaceFormat[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQVideoSurfaceFormat : public QVideoSurfaceFormat {
public:
  virtual ~MyQVideoSurfaceFormat() {}
// void QVideoSurfaceFormat()
MyQVideoSurfaceFormat() : QVideoSurfaceFormat() {}
// void QVideoSurfaceFormat(const QSize &, QVideoFrame::PixelFormat, QAbstractVideoBuffer::HandleType)
MyQVideoSurfaceFormat(const QSize & size, QVideoFrame::PixelFormat pixelFormat, QAbstractVideoBuffer::HandleType handleType) : QVideoSurfaceFormat(size, pixelFormat, handleType) {}
// void QVideoSurfaceFormat(const QVideoSurfaceFormat &)
MyQVideoSurfaceFormat(const QVideoSurfaceFormat & format) : QVideoSurfaceFormat(format) {}
};

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
  this_ =  new MyQVideoSurfaceFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:80
// [-2] void QVideoSurfaceFormat(const QSize &, QVideoFrame::PixelFormat, QAbstractVideoBuffer::HandleType) 
// (12)qm3488110713 (99)_ZN19QVideoSurfaceFormatC2ERK5QSizeN11QVideoFrame11PixelFormatEN20QAbstractVideoBuffer10HandleTypeE
/*void* qm3488110713(const QSize & size, QVideoFrame::PixelFormat pixelFormat, QAbstractVideoBuffer::HandleType handleType)*/{
  const QSize & size = *(const QSize *)this_; QVideoFrame::PixelFormat pixelFormat = *(QVideoFrame::PixelFormat*)this_; QAbstractVideoBuffer::HandleType handleType = *(QAbstractVideoBuffer::HandleType*)this_;
  this_ =  new QVideoSurfaceFormat(size, pixelFormat, handleType);
  this_ =  new MyQVideoSurfaceFormat(size, pixelFormat, handleType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:84
// [-2] void QVideoSurfaceFormat(const QVideoSurfaceFormat &) 
// (12)qm3932998880 (31)_ZN19QVideoSurfaceFormatC2ERKS_
/*void* qm3932998880(const QVideoSurfaceFormat & format)*/{
  const QVideoSurfaceFormat & format = *(const QVideoSurfaceFormat *)this_;
  this_ =  new QVideoSurfaceFormat(format);
  this_ =  new MyQVideoSurfaceFormat(format);
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
