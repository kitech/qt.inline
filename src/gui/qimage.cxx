//  header block begin

// /usr/include/qt/QtGui/qimage.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qimage.h>
#include <QtGui>
#include "callback_inherit.h"

// QImage is pure virtual: false false
// QImage has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQImage_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQImage_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQImage_t qt_meta_stringdata_MyQImage = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQImage"
  },
  "MyQImage"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQImage[] = {
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
class Q_DECL_EXPORT MyQImage : public QImage {
public:
  virtual ~MyQImage() {}
// void QImage()
MyQImage() : QImage() {}
// void QImage(const QSize &, QImage::Format)
MyQImage(const QSize & size, QImage::Format format) : QImage(size, format) {}
// void QImage(int, int, QImage::Format)
MyQImage(int width, int height, QImage::Format format) : QImage(width, height, format) {}
// void QImage(uchar *, int, int, QImage::Format, QImageCleanupFunction, void *)
MyQImage(uchar * data, int width, int height, QImage::Format format, QImageCleanupFunction cleanupFunction, void * cleanupInfo) : QImage(data, width, height, format, cleanupFunction, cleanupInfo) {}
// void QImage(const uchar *, int, int, QImage::Format, QImageCleanupFunction, void *)
MyQImage(const uchar * data, int width, int height, QImage::Format format, QImageCleanupFunction cleanupFunction, void * cleanupInfo) : QImage(data, width, height, format, cleanupFunction, cleanupInfo) {}
// void QImage(uchar *, int, int, int, QImage::Format, QImageCleanupFunction, void *)
MyQImage(uchar * data, int width, int height, int bytesPerLine, QImage::Format format, QImageCleanupFunction cleanupFunction, void * cleanupInfo) : QImage(data, width, height, bytesPerLine, format, cleanupFunction, cleanupInfo) {}
// void QImage(const uchar *, int, int, int, QImage::Format, QImageCleanupFunction, void *)
MyQImage(const uchar * data, int width, int height, int bytesPerLine, QImage::Format format, QImageCleanupFunction cleanupFunction, void * cleanupInfo) : QImage(data, width, height, bytesPerLine, format, cleanupFunction, cleanupInfo) {}
// void QImage(const char *const *)
MyQImage(char** xpm) : QImage(xpm) {}
// void QImage(const QString &, const char *)
MyQImage(const QString & fileName, const char * format) : QImage(fileName, format) {}
// void QImage(const QImage &)
MyQImage(const QImage & arg0) : QImage(arg0) {}
// void QImage(QImage &&)
MyQImage(QImage && other) : QImage(other) {}
// Protected virtual Direct Visibility=Default Availability=Available
// [4] int metric(QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metric", &handled, 1, (uint64_t)metric, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QImage::metric(metric);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qimage(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:155
// [-2] void QImage(QImage &&) 
// (12)qm3879321414 (16)_ZN6QImageC2EOS_
/*void* qm3879321414(QImage && other)*/{
  auto _nilp = (MyQImage*)(0);
  QImage && other =  static_cast<QImage &&>(*(QImage *)this_);
  this_ =  new MyQImage(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:161
// [32] QImage & operator=(QImage &&) 
// (11)qm151995782 (16)_ZN6QImageaSEOS_
//static
/*void qm151995782(QImage && other)*/ {
  QImage && other =  static_cast<QImage &&>(*(QImage *)this_);
  (void) ((QImage*)this_)->operator=(other);
  // auto xptr = (QImage & (QImage::*)(QImage&&) ) &QImage::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:163
// [-2] void swap(QImage &) 
// (12)qm2015294633 (19)_ZN6QImage4swapERS_
//static
/*void qm2015294633(QImage & other)*/ {
  QImage & other = *(QImage *)this_;
  (void) ((QImage*)this_)->swap(other);
   auto xptr = (void (QImage::*)(QImage&) ) &QImage::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:177
// [32] QImage copy(int, int, int, int) const
// (12)qm2742491682 (21)_ZNK6QImage4copyEiiii
//static
/*void qm2742491682(int x, int y, int w, int h)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_;
  (void) ((QImage*)this_)->copy(x, y, w, h);
   auto xptr = (QImage (QImage::*)(int, int, int, int) const ) &QImage::copy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:183
// [32] QImage convertToFormat(QImage::Format, Qt::ImageConversionFlags) const
// (11)qm947497938 (76)_ZNKR6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE
//static
/*void qm947497938(QImage::Format f, QFlags<Qt::ImageConversionFlag> flags)*/ {
  QImage::Format f = *(QImage::Format*)this_; QFlags<Qt::ImageConversionFlag> flags = *(QFlags<Qt::ImageConversionFlag>*)this_;
  (void) ((QImage*)this_)->convertToFormat(f, flags);
   auto xptr = (QImage (QImage::*)(QImage::Format, QFlags<Qt::ImageConversionFlag>) const & ) &QImage::convertToFormat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:185
// [32] QImage convertToFormat(QImage::Format, Qt::ImageConversionFlags) 
// (10)qm74607060 (75)_ZNO6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE
//static
/*void qm74607060(QImage::Format f, QFlags<Qt::ImageConversionFlag> flags)*/ {
  QImage::Format f = *(QImage::Format*)this_; QFlags<Qt::ImageConversionFlag> flags = *(QFlags<Qt::ImageConversionFlag>*)this_;
  (void) ((QImage*)this_)->convertToFormat(f, flags);
  (void) (QImage{}).convertToFormat(f, flags);
   auto xptr = (QImage (QImage::*)(QImage::Format, QFlags<Qt::ImageConversionFlag>) && ) &QImage::convertToFormat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:235
// [1] bool valid(const QPoint &) const
// (12)qm1809713141 (27)_ZNK6QImage5validERK6QPoint
//static
/*void qm1809713141(const QPoint & pt)*/ {
  const QPoint & pt = *(const QPoint *)this_;
  (void) ((QImage*)this_)->valid(pt);
   auto xptr = (bool (QImage::*)(QPoint const&) const ) &QImage::valid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:238
// [4] int pixelIndex(const QPoint &) const
// (12)qm3716904521 (33)_ZNK6QImage10pixelIndexERK6QPoint
//static
/*void qm3716904521(const QPoint & pt)*/ {
  const QPoint & pt = *(const QPoint *)this_;
  (void) ((QImage*)this_)->pixelIndex(pt);
   auto xptr = (int (QImage::*)(QPoint const&) const ) &QImage::pixelIndex;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:241
// [4] QRgb pixel(const QPoint &) const
// (12)qm2970267065 (27)_ZNK6QImage5pixelERK6QPoint
//static
/*void qm2970267065(const QPoint & pt)*/ {
  const QPoint & pt = *(const QPoint *)this_;
  (void) ((QImage*)this_)->pixel(pt);
   auto xptr = (unsigned int (QImage::*)(QPoint const&) const ) &QImage::pixel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:244
// [-2] void setPixel(const QPoint &, uint) 
// (12)qm2364057920 (30)_ZN6QImage8setPixelERK6QPointj
//static
/*void qm2364057920(const QPoint & pt, unsigned int index_or_rgb)*/ {
  const QPoint & pt = *(const QPoint *)this_; unsigned int index_or_rgb = *(unsigned int*)this_;
  (void) ((QImage*)this_)->setPixel(pt, index_or_rgb);
   auto xptr = (void (QImage::*)(QPoint const&, unsigned int) ) &QImage::setPixel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:247
// [16] QColor pixelColor(const QPoint &) const
// (12)qm1964018081 (33)_ZNK6QImage10pixelColorERK6QPoint
//static
/*void qm1964018081(const QPoint & pt)*/ {
  const QPoint & pt = *(const QPoint *)this_;
  (void) ((QImage*)this_)->pixelColor(pt);
   auto xptr = (QColor (QImage::*)(QPoint const&) const ) &QImage::pixelColor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:250
// [-2] void setPixelColor(const QPoint &, const QColor &) 
// (12)qm1727650972 (44)_ZN6QImage13setPixelColorERK6QPointRK6QColor
//static
/*void qm1727650972(const QPoint & pt, const QColor & c)*/ {
  const QPoint & pt = *(const QPoint *)this_; const QColor & c = *(const QColor *)this_;
  (void) ((QImage*)this_)->setPixelColor(pt, c);
   auto xptr = (void (QImage::*)(QPoint const&, QColor const&) ) &QImage::setPixelColor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:279
// [32] QImage scaled(int, int, Qt::AspectRatioMode, Qt::TransformationMode) const
// (12)qm3866894240 (68)_ZNK6QImage6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE
//static
/*void qm3866894240(int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode)*/ {
  int w = *(int*)this_; int h = *(int*)this_; Qt::AspectRatioMode aspectMode = *(Qt::AspectRatioMode*)this_; Qt::TransformationMode mode = *(Qt::TransformationMode*)this_;
  (void) ((QImage*)this_)->scaled(w, h, aspectMode, mode);
   auto xptr = (QImage (QImage::*)(int, int, Qt::AspectRatioMode, Qt::TransformationMode) const ) &QImage::scaled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:295
// [32] QImage mirrored(bool, bool) const
// (12)qm1383205014 (24)_ZNKR6QImage8mirroredEbb
//static
/*void qm1383205014(bool horizontally, bool vertically)*/ {
  bool horizontally = *(bool*)this_; bool vertically = *(bool*)this_;
  (void) ((QImage*)this_)->mirrored(horizontally, vertically);
   auto xptr = (QImage (QImage::*)(bool, bool) const & ) &QImage::mirrored;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:297
// [32] QImage && mirrored(bool, bool) 
// (12)qm2356989976 (23)_ZNO6QImage8mirroredEbb
//static
/*void qm2356989976(bool horizontally, bool vertically)*/ {
  bool horizontally = *(bool*)this_; bool vertically = *(bool*)this_;
  (void) ((QImage*)this_)->mirrored(horizontally, vertically);
  (void) (QImage{}).mirrored(horizontally, vertically);
   auto xptr = (QImage && (QImage::*)(bool, bool) && ) &QImage::mirrored;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:299
// [32] QImage rgbSwapped() const
// (11)qm628271223 (26)_ZNKR6QImage10rgbSwappedEv
//static
/*void qm628271223()*/ {
  ;
  (void) ((QImage*)this_)->rgbSwapped();
   auto xptr = (QImage (QImage::*)() const & ) &QImage::rgbSwapped;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:301
// [32] QImage && rgbSwapped() 
// (11)qm142252378 (25)_ZNO6QImage10rgbSwappedEv
//static
/*void qm142252378()*/ {
  ;
  (void) ((QImage*)this_)->rgbSwapped();
  (void) (QImage{}).rgbSwapped();
   auto xptr = (QImage && (QImage::*)() && ) &QImage::rgbSwapped;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:319
// [1] bool loadFromData(const QByteArray &, const char *) 
// (12)qm3088353571 (42)_ZN6QImage12loadFromDataERK10QByteArrayPKc
//static
/*void qm3088353571(const QByteArray & data, const char * aformat)*/ {
  const QByteArray & data = *(const QByteArray *)this_; const char * aformat = *(const char **)this_;
  (void) ((QImage*)this_)->loadFromData(data, aformat);
   auto xptr = (bool (QImage::*)(QByteArray const&, char const*) ) &QImage::loadFromData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:326
// [32] QImage fromData(const QByteArray &, const char *) 
// (12)qm2304616383 (37)_ZN6QImage8fromDataERK10QByteArrayPKc
//static
/*void qm2304616383(const QByteArray & data, const char * format)*/ {
  const QByteArray & data = *(const QByteArray *)this_; const char * format = *(const char **)this_;
  (void) QImage::fromData(data, format);
   auto xptr = (QImage (*)(QByteArray const&, char const*) ) &QImage::fromData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:392
// [8] QImage::DataPtr & data_ptr() 
// (12)qm1104719928 (21)_ZN6QImage8data_ptrEv
//static
/*void qm1104719928()*/ {
  ;
  (void) ((QImage*)this_)->data_ptr();
   auto xptr = (QImageData *& (QImage::*)() ) &QImage::data_ptr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN6QImageD2Ev(void *this_)*/ {
  delete (QImage*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qimage
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
