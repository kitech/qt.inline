//  header block begin
// /usr/include/qt/QtGui/qimage.h
#ifndef protected
#define protected public
#endif
#include <qimage.h>
#include <QtGui>
#include "callback_inherit.h"

// QImage is pure virtual: false
// QImage has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQImage : public QImage {
public:
  virtual ~MyQImage() {}
// void QImage()
MyQImage() : QImage() {}
// void QImage(const class QSize &, enum QImage::Format)
MyQImage(const QSize & size, QImage::Format format) : QImage(size, format) {}
// void QImage(int, int, enum QImage::Format)
MyQImage(int width, int height, QImage::Format format) : QImage(width, height, format) {}
// void QImage(const char *const *)
MyQImage(char** xpm) : QImage(xpm) {}
// void QImage(const class QString &, const char *)
MyQImage(const QString & fileName, const char * format) : QImage(fileName, format) {}
// Protected virtual Visibility=Default Availability=Available
// int metric(enum QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric metric) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"metric", &handled, 1, (uint64_t)metric, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QImage::metric(metric);
  }
  }

// Protected Visibility=Default Availability=Available
// QImage mirrored_helper(_Bool, _Bool)
  virtual QImage mirrored_helper(bool horizontal, bool vertical) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mirrored_helper", &handled, 2, (uint64_t)horizontal, (uint64_t)vertical, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QImage*)(irv);
      // RecordRecordQImage
    } else {
    return QImage::mirrored_helper(horizontal, vertical);
  }
  }

// Protected Visibility=Default Availability=Available
// QImage rgbSwapped_helper()
  virtual QImage rgbSwapped_helper() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rgbSwapped_helper", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QImage*)(irv);
      // RecordRecordQImage
    } else {
    return QImage::rgbSwapped_helper();
  }
  }

// Protected Visibility=Default Availability=Available
// void mirrored_inplace(_Bool, _Bool)
  virtual void mirrored_inplace(bool horizontal, bool vertical) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mirrored_inplace", &handled, 2, (uint64_t)horizontal, (uint64_t)vertical, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QImage::mirrored_inplace(horizontal, vertical);
  }
  }

// Protected Visibility=Default Availability=Available
// void rgbSwapped_inplace()
  virtual void rgbSwapped_inplace() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rgbSwapped_inplace", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QImage::rgbSwapped_inplace();
  }
  }

// Protected Visibility=Default Availability=Available
// QImage convertToFormat_helper(enum QImage::Format, Qt::ImageConversionFlags)
  virtual QImage convertToFormat_helper(QImage::Format format, QFlags<Qt::ImageConversionFlag> flags) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"convertToFormat_helper", &handled, 2, (uint64_t)format, (uint64_t)flags, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QImage*)(irv);
      // RecordRecordQImage
    } else {
    return QImage::convertToFormat_helper(format, flags);
  }
  }

// Protected Visibility=Default Availability=Available
// bool convertToFormat_inplace(enum QImage::Format, Qt::ImageConversionFlags)
  virtual bool convertToFormat_inplace(QImage::Format format, QFlags<Qt::ImageConversionFlag> flags) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"convertToFormat_inplace", &handled, 2, (uint64_t)format, (uint64_t)flags, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QImage::convertToFormat_inplace(format, flags);
  }
  }

// Protected Visibility=Default Availability=Available
// QImage smoothScaled(int, int)
  virtual QImage smoothScaled(int w, int h) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"smoothScaled", &handled, 2, (uint64_t)w, (uint64_t)h, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QImage*)(irv);
      // RecordRecordQImage
    } else {
    return QImage::smoothScaled(w, h);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:352
// [4] int metric(enum QPaintDevice::PaintDeviceMetric)
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage6metricEN12QPaintDevice17PaintDeviceMetricE(void *this_, QPaintDevice::PaintDeviceMetric metric) {
  return (int)((QImage*)this_)->QImage::metric(metric);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:353
// [32] QImage mirrored_helper(_Bool, _Bool)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage15mirrored_helperEbb(void *this_, bool horizontal, bool vertical) {
  auto rv = ((QImage*)this_)->QImage::mirrored_helper(horizontal, vertical);
return new QImage(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:354
// [32] QImage rgbSwapped_helper()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage17rgbSwapped_helperEv(void *this_) {
  auto rv = ((QImage*)this_)->QImage::rgbSwapped_helper();
return new QImage(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:355
// [-2] void mirrored_inplace(_Bool, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage16mirrored_inplaceEbb(void *this_, bool horizontal, bool vertical) {
  ((QImage*)this_)->QImage::mirrored_inplace(horizontal, vertical);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:356
// [-2] void rgbSwapped_inplace()
extern "C" Q_DECL_EXPORT
void C_ZN6QImage18rgbSwapped_inplaceEv(void *this_) {
  ((QImage*)this_)->QImage::rgbSwapped_inplace();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:357
// [32] QImage convertToFormat_helper(enum QImage::Format, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage22convertToFormat_helperENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QImage::Format format, QFlags<Qt::ImageConversionFlag> flags) {
  auto rv = ((QImage*)this_)->QImage::convertToFormat_helper(format, flags);
return new QImage(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:358
// [1] bool convertToFormat_inplace(enum QImage::Format, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
bool C_ZN6QImage23convertToFormat_inplaceENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QImage::Format format, QFlags<Qt::ImageConversionFlag> flags) {
  return (bool)((QImage*)this_)->QImage::convertToFormat_inplace(format, flags);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:359
// [32] QImage smoothScaled(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage12smoothScaledEii(void *this_, int w, int h) {
  auto rv = ((QImage*)this_)->QImage::smoothScaled(w, h);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:136
// [-2] void QImage()
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageC2Ev() {
  auto _nilp = (MyQImage*)(0);
  return  new MyQImage();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:137
// [-2] void QImage(const class QSize &, enum QImage::Format)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageC2ERK5QSizeNS_6FormatE(QSize* size, QImage::Format format) {
  auto _nilp = (MyQImage*)(0);
  return  new MyQImage(*size, format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:138
// [-2] void QImage(int, int, enum QImage::Format)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageC2EiiNS_6FormatE(int width, int height, QImage::Format format) {
  auto _nilp = (MyQImage*)(0);
  return  new MyQImage(width, height, format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:145
// [-2] void QImage(const char *const *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageC2EPKPKc(char** xpm) {
  auto _nilp = (MyQImage*)(0);
  return  new MyQImage(xpm);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:147
// [-2] void QImage(const class QString &, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageC2ERK7QStringPKc(QString* fileName, const char * format) {
  auto _nilp = (MyQImage*)(0);
  return  new MyQImage(*fileName, format);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:155
// [-2] void ~QImage()
extern "C" Q_DECL_EXPORT
void C_ZN6QImageD2Ev(void *this_) {
  delete (QImage*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:157
// [32] QImage & operator=(const class QImage &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageaSERKS_(void *this_, QImage* arg0) {
  auto& rv = ((QImage*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:159
// [32] QImage & operator=(class QImage &&)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageaSEOS_(void *this_, QImage && other) {
  auto& rv = ((QImage*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:162
// [-2] void swap(class QImage &)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage4swapERS_(void *this_, QImage* other) {
  ((QImage*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:165
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImage6isNullEv(void *this_) {
  return (bool)((QImage*)this_)->isNull();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:167
// [4] int devType()
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage7devTypeEv(void *this_) {
  return (int)((QImage*)this_)->devType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:169
// [1] bool operator==(const class QImage &)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImageeqERKS_(void *this_, QImage* arg0) {
  return (bool)((QImage*)this_)->operator==(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:170
// [1] bool operator!=(const class QImage &)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImageneERKS_(void *this_, QImage* arg0) {
  return (bool)((QImage*)this_)->operator!=(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:172
// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_ZN6QImage6detachEv(void *this_) {
  ((QImage*)this_)->detach();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:173
// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImage10isDetachedEv(void *this_) {
  return (bool)((QImage*)this_)->isDetached();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:175
// [32] QImage copy(const class QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage4copyERK5QRect(void *this_, QRect* rect) {
  auto rv = ((QImage*)this_)->copy(*rect);
return new QImage(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:176
// [32] QImage copy(int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage4copyEiiii(void *this_, int x, int y, int w, int h) {
  auto rv = ((QImage*)this_)->copy(x, y, w, h);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:179
// [4] QImage::Format format()
extern "C" Q_DECL_EXPORT
QImage::Format C_ZNK6QImage6formatEv(void *this_) {
  return (QImage::Format)((QImage*)this_)->format();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:182
// [32] QImage convertToFormat(enum QImage::Format, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNKR6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QImage::Format f, QFlags<Qt::ImageConversionFlag> flags) {
  auto rv = ((QImage*)this_)->convertToFormat(f, flags);
return new QImage(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:184
// [32] QImage convertToFormat(enum QImage::Format, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNO6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QImage::Format f, QFlags<Qt::ImageConversionFlag> flags) {
  auto rv = ((QImage*)this_)->convertToFormat(f, flags);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:195
// [1] bool reinterpretAsFormat(enum QImage::Format)
extern "C" Q_DECL_EXPORT
bool C_ZN6QImage19reinterpretAsFormatENS_6FormatE(void *this_, QImage::Format f) {
  return (bool)((QImage*)this_)->reinterpretAsFormat(f);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:197
// [4] int width()
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage5widthEv(void *this_) {
  return (int)((QImage*)this_)->width();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:198
// [4] int height()
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage6heightEv(void *this_) {
  return (int)((QImage*)this_)->height();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:199
// [8] QSize size()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage4sizeEv(void *this_) {
  auto rv = ((QImage*)this_)->size();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:200
// [16] QRect rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage4rectEv(void *this_) {
  auto rv = ((QImage*)this_)->rect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:202
// [4] int depth()
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage5depthEv(void *this_) {
  return (int)((QImage*)this_)->depth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:203
// [4] int colorCount()
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage10colorCountEv(void *this_) {
  return (int)((QImage*)this_)->colorCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:204
// [4] int bitPlaneCount()
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage13bitPlaneCountEv(void *this_) {
  return (int)((QImage*)this_)->bitPlaneCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:206
// [4] QRgb color(int)
extern "C" Q_DECL_EXPORT
QRgb C_ZNK6QImage5colorEi(void *this_, int i) {
  return (QRgb)((QImage*)this_)->color(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:207
// [-2] void setColor(int, QRgb)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage8setColorEij(void *this_, int i, QRgb c) {
  ((QImage*)this_)->setColor(i, c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:208
// [-2] void setColorCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage13setColorCountEi(void *this_, int arg0) {
  ((QImage*)this_)->setColorCount(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:210
// [1] bool allGray()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImage7allGrayEv(void *this_) {
  return (bool)((QImage*)this_)->allGray();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:211
// [1] bool isGrayscale()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImage11isGrayscaleEv(void *this_) {
  return (bool)((QImage*)this_)->isGrayscale();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:213
// [8] uchar * bits()
extern "C" Q_DECL_EXPORT
void* C_ZN6QImage4bitsEv(void *this_) {
  return (void*)((QImage*)this_)->bits();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:214
// [8] const uchar * bits()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage4bitsEv(void *this_) {
  return (void*)((QImage*)this_)->bits();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:215
// [8] const uchar * constBits()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage9constBitsEv(void *this_) {
  return (void*)((QImage*)this_)->constBits();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:218
// [4] int byteCount()
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage9byteCountEv(void *this_) {
  return (int)((QImage*)this_)->byteCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:220
// [8] qsizetype sizeInBytes()
extern "C" Q_DECL_EXPORT
qsizetype C_ZNK6QImage11sizeInBytesEv(void *this_) {
  return (qsizetype)((QImage*)this_)->sizeInBytes();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:222
// [8] uchar * scanLine(int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImage8scanLineEi(void *this_, int arg0) {
  return (void*)((QImage*)this_)->scanLine(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:223
// [8] const uchar * scanLine(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage8scanLineEi(void *this_, int arg0) {
  return (void*)((QImage*)this_)->scanLine(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:224
// [8] const uchar * constScanLine(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage13constScanLineEi(void *this_, int arg0) {
  return (void*)((QImage*)this_)->constScanLine(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:225
// [4] int bytesPerLine()
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage12bytesPerLineEv(void *this_) {
  return (int)((QImage*)this_)->bytesPerLine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:227
// [1] bool valid(int, int)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImage5validEii(void *this_, int x, int y) {
  return (bool)((QImage*)this_)->valid(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:228
// [1] bool valid(const class QPoint &)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImage5validERK6QPoint(void *this_, QPoint* pt) {
  return (bool)((QImage*)this_)->valid(*pt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:230
// [4] int pixelIndex(int, int)
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage10pixelIndexEii(void *this_, int x, int y) {
  return (int)((QImage*)this_)->pixelIndex(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:231
// [4] int pixelIndex(const class QPoint &)
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage10pixelIndexERK6QPoint(void *this_, QPoint* pt) {
  return (int)((QImage*)this_)->pixelIndex(*pt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:233
// [4] QRgb pixel(int, int)
extern "C" Q_DECL_EXPORT
QRgb C_ZNK6QImage5pixelEii(void *this_, int x, int y) {
  return (QRgb)((QImage*)this_)->pixel(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:234
// [4] QRgb pixel(const class QPoint &)
extern "C" Q_DECL_EXPORT
QRgb C_ZNK6QImage5pixelERK6QPoint(void *this_, QPoint* pt) {
  return (QRgb)((QImage*)this_)->pixel(*pt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:236
// [-2] void setPixel(int, int, uint)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage8setPixelEiij(void *this_, int x, int y, uint index_or_rgb) {
  ((QImage*)this_)->setPixel(x, y, index_or_rgb);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:237
// [-2] void setPixel(const class QPoint &, uint)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage8setPixelERK6QPointj(void *this_, QPoint* pt, uint index_or_rgb) {
  ((QImage*)this_)->setPixel(*pt, index_or_rgb);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:239
// [16] QColor pixelColor(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage10pixelColorEii(void *this_, int x, int y) {
  auto rv = ((QImage*)this_)->pixelColor(x, y);
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:240
// [16] QColor pixelColor(const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage10pixelColorERK6QPoint(void *this_, QPoint* pt) {
  auto rv = ((QImage*)this_)->pixelColor(*pt);
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:242
// [-2] void setPixelColor(int, int, const class QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage13setPixelColorEiiRK6QColor(void *this_, int x, int y, QColor* c) {
  ((QImage*)this_)->setPixelColor(x, y, *c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:243
// [-2] void setPixelColor(const class QPoint &, const class QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage13setPixelColorERK6QPointRK6QColor(void *this_, QPoint* pt, QColor* c) {
  ((QImage*)this_)->setPixelColor(*pt, *c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:252
// [8] qreal devicePixelRatio()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QImage16devicePixelRatioEv(void *this_) {
  return (qreal)((QImage*)this_)->devicePixelRatio();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:253
// [-2] void setDevicePixelRatio(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage19setDevicePixelRatioEd(void *this_, qreal scaleFactor) {
  ((QImage*)this_)->setDevicePixelRatio(scaleFactor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:255
// [-2] void fill(uint)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage4fillEj(void *this_, uint pixel) {
  ((QImage*)this_)->fill(pixel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:256
// [-2] void fill(const class QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage4fillERK6QColor(void *this_, QColor* color) {
  ((QImage*)this_)->fill(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:257
// [-2] void fill(Qt::GlobalColor)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage4fillEN2Qt11GlobalColorE(void *this_, Qt::GlobalColor color) {
  ((QImage*)this_)->fill(color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:260
// [1] bool hasAlphaChannel()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImage15hasAlphaChannelEv(void *this_) {
  return (bool)((QImage*)this_)->hasAlphaChannel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:261
// [-2] void setAlphaChannel(const class QImage &)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage15setAlphaChannelERKS_(void *this_, QImage* alphaChannel) {
  ((QImage*)this_)->setAlphaChannel(*alphaChannel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:262
// [32] QImage alphaChannel()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage12alphaChannelEv(void *this_) {
  auto rv = ((QImage*)this_)->alphaChannel();
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:263
// [32] QImage createAlphaMask(Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage15createAlphaMaskE6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QFlags<Qt::ImageConversionFlag> flags) {
  auto rv = ((QImage*)this_)->createAlphaMask(flags);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:265
// [32] QImage createHeuristicMask(_Bool)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage19createHeuristicMaskEb(void *this_, bool clipTight) {
  auto rv = ((QImage*)this_)->createHeuristicMask(clipTight);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:267
// [32] QImage createMaskFromColor(QRgb, Qt::MaskMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage19createMaskFromColorEjN2Qt8MaskModeE(void *this_, QRgb color, Qt::MaskMode mode) {
  auto rv = ((QImage*)this_)->createMaskFromColor(color, mode);
return new QImage(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:269
// [32] QImage scaled(int, int, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE(void *this_, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  auto rv = ((QImage*)this_)->scaled(w, h, aspectMode, mode);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:272
// [32] QImage scaled(const class QSize &, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage6scaledERK5QSizeN2Qt15AspectRatioModeENS3_18TransformationModeE(void *this_, QSize* s, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  auto rv = ((QImage*)this_)->scaled(*s, aspectMode, mode);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:274
// [32] QImage scaledToWidth(int, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage13scaledToWidthEiN2Qt18TransformationModeE(void *this_, int w, Qt::TransformationMode mode) {
  auto rv = ((QImage*)this_)->scaledToWidth(w, mode);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:275
// [32] QImage scaledToHeight(int, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage14scaledToHeightEiN2Qt18TransformationModeE(void *this_, int h, Qt::TransformationMode mode) {
  auto rv = ((QImage*)this_)->scaledToHeight(h, mode);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:276
// [32] QImage transformed(const class QMatrix &, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage11transformedERK7QMatrixN2Qt18TransformationModeE(void *this_, QMatrix* matrix, Qt::TransformationMode mode) {
  auto rv = ((QImage*)this_)->transformed(*matrix, mode);
return new QImage(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:277
// [48] QMatrix trueMatrix(const class QMatrix &, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImage10trueMatrixERK7QMatrixii(QMatrix* arg0, int w, int h) {
  auto rv = QImage::trueMatrix(*arg0, w, h);
return new QMatrix(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:278
// [32] QImage transformed(const class QTransform &, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage11transformedERK10QTransformN2Qt18TransformationModeE(void *this_, QTransform* matrix, Qt::TransformationMode mode) {
  auto rv = ((QImage*)this_)->transformed(*matrix, mode);
return new QImage(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:279
// [88] QTransform trueMatrix(const class QTransform &, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImage10trueMatrixERK10QTransformii(QTransform* arg0, int w, int h) {
  auto rv = QImage::trueMatrix(*arg0, w, h);
return new QTransform(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:281
// [32] QImage mirrored(_Bool, _Bool)
extern "C" Q_DECL_EXPORT
void* C_ZNKR6QImage8mirroredEbb(void *this_, bool horizontally, bool vertically) {
  auto rv = ((QImage*)this_)->mirrored(horizontally, vertically);
return new QImage(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:283
// [32] QImage && mirrored(_Bool, _Bool)
extern "C" Q_DECL_EXPORT
void C_ZNO6QImage8mirroredEbb(void *this_, bool horizontally, bool vertically) {
  auto rv = ((QImage*)this_)->mirrored(horizontally, vertically);
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:285
// [32] QImage rgbSwapped()
extern "C" Q_DECL_EXPORT
void* C_ZNKR6QImage10rgbSwappedEv(void *this_) {
  auto rv = ((QImage*)this_)->rgbSwapped();
return new QImage(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:287
// [32] QImage && rgbSwapped()
extern "C" Q_DECL_EXPORT
void C_ZNO6QImage10rgbSwappedEv(void *this_) {
  auto rv = ((QImage*)this_)->rgbSwapped();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:293
// [-2] void invertPixels(enum QImage::InvertMode)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage12invertPixelsENS_10InvertModeE(void *this_, QImage::InvertMode arg0) {
  ((QImage*)this_)->invertPixels(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:296
// [1] bool load(class QIODevice *, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN6QImage4loadEP9QIODevicePKc(void *this_, QIODevice * device, const char * format) {
  return (bool)((QImage*)this_)->load(device, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:297
// [1] bool load(const class QString &, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN6QImage4loadERK7QStringPKc(void *this_, QString* fileName, const char * format) {
  return (bool)((QImage*)this_)->load(*fileName, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:298
// [1] bool loadFromData(const uchar *, int, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN6QImage12loadFromDataEPKhiPKc(void *this_, const uchar * buf, int len_, const char * format) {
  return (bool)((QImage*)this_)->loadFromData(buf, len_, format);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:299
// [1] bool loadFromData(const class QByteArray &, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN6QImage12loadFromDataERK10QByteArrayPKc(void *this_, QByteArray* data, const char * aformat) {
  return (bool)((QImage*)this_)->loadFromData(*data, aformat);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:302
// [1] bool save(const class QString &, const char *, int)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImage4saveERK7QStringPKci(void *this_, QString* fileName, const char * format, int quality) {
  return (bool)((QImage*)this_)->save(*fileName, format, quality);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:303
// [1] bool save(class QIODevice *, const char *, int)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImage4saveEP9QIODevicePKci(void *this_, QIODevice * device, const char * format, int quality) {
  return (bool)((QImage*)this_)->save(device, format, quality);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:305
// [32] QImage fromData(const uchar *, int, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImage8fromDataEPKhiPKc(const uchar * data, int size, const char * format) {
  auto rv = QImage::fromData(data, size, format);
return new QImage(rv);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:306
// [32] QImage fromData(const class QByteArray &, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImage8fromDataERK10QByteArrayPKc(QByteArray* data, const char * format) {
  auto rv = QImage::fromData(*data, format);
return new QImage(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:312
// [8] qint64 cacheKey()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK6QImage8cacheKeyEv(void *this_) {
  return (qint64)((QImage*)this_)->cacheKey();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:314
// [8] QPaintEngine * paintEngine()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage11paintEngineEv(void *this_) {
  return (void*)((QImage*)this_)->paintEngine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:317
// [4] int dotsPerMeterX()
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage13dotsPerMeterXEv(void *this_) {
  return (int)((QImage*)this_)->dotsPerMeterX();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:318
// [4] int dotsPerMeterY()
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage13dotsPerMeterYEv(void *this_) {
  return (int)((QImage*)this_)->dotsPerMeterY();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:319
// [-2] void setDotsPerMeterX(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage16setDotsPerMeterXEi(void *this_, int arg0) {
  ((QImage*)this_)->setDotsPerMeterX(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:320
// [-2] void setDotsPerMeterY(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage16setDotsPerMeterYEi(void *this_, int arg0) {
  ((QImage*)this_)->setDotsPerMeterY(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:321
// [8] QPoint offset()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage6offsetEv(void *this_) {
  auto rv = ((QImage*)this_)->offset();
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:322
// [-2] void setOffset(const class QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage9setOffsetERK6QPoint(void *this_, QPoint* arg0) {
  ((QImage*)this_)->setOffset(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:324
// [8] QStringList textKeys()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage8textKeysEv(void *this_) {
  auto rv = ((QImage*)this_)->textKeys();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:325
// [8] QString text(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage4textERK7QString(void *this_, QString* key) {
  auto rv = ((QImage*)this_)->text(*key);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:326
// [-2] void setText(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage7setTextERK7QStringS2_(void *this_, QString* key, QString* value) {
  ((QImage*)this_)->setText(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:328
// [8] QPixelFormat pixelFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage11pixelFormatEv(void *this_) {
  auto rv = ((QImage*)this_)->pixelFormat();
return new QPixelFormat(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:329
// [8] QPixelFormat toPixelFormat(class QImage::Format)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImage13toPixelFormatENS_6FormatE(QImage::Format format) {
  auto rv = QImage::toPixelFormat(format);
return new QPixelFormat(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:330
// [4] QImage::Format toImageFormat(class QPixelFormat)
extern "C" Q_DECL_EXPORT
QImage::Format C_ZN6QImage13toImageFormatE12QPixelFormat(QPixelFormat* format) {
  return (QImage::Format)QImage::toImageFormat(*format);
}
//  main block end
