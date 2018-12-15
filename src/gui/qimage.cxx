//  header block begin

// /usr/include/qt/QtGui/qimage.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qimage.h>
#include <QtGui>
#include "callback_inherit.h"

// QImage is pure virtual: false
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
// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:349
// [4] int metric(QPaintDevice::PaintDeviceMetric)
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage6metricEN12QPaintDevice17PaintDeviceMetricE(void *this_, QPaintDevice::PaintDeviceMetric metric) {
  return (int)((QImage*)this_)->QImage::metric(metric);
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
// [-2] void QImage(const QSize &, QImage::Format)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageC2ERK5QSizeNS_6FormatE(QSize* size, QImage::Format format) {
  auto _nilp = (MyQImage*)(0);
  return  new MyQImage(*size, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:138
// [-2] void QImage(int, int, QImage::Format)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageC2EiiNS_6FormatE(int width, int height, QImage::Format format) {
  auto _nilp = (MyQImage*)(0);
  return  new MyQImage(width, height, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:139
// [-2] void QImage(uchar *, int, int, QImage::Format, QImageCleanupFunction, void *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageC2EPhiiNS_6FormatEPFvPvES2_(uchar * data, int width, int height, QImage::Format format, QImageCleanupFunction cleanupFunction, void * cleanupInfo) {
  auto _nilp = (MyQImage*)(0);
  return  new MyQImage(data, width, height, format, cleanupFunction, cleanupInfo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:140
// [-2] void QImage(const uchar *, int, int, QImage::Format, QImageCleanupFunction, void *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageC2EPKhiiNS_6FormatEPFvPvES3_(const uchar * data, int width, int height, QImage::Format format, QImageCleanupFunction cleanupFunction, void * cleanupInfo) {
  auto _nilp = (MyQImage*)(0);
  return  new MyQImage(data, width, height, format, cleanupFunction, cleanupInfo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:141
// [-2] void QImage(uchar *, int, int, int, QImage::Format, QImageCleanupFunction, void *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageC2EPhiiiNS_6FormatEPFvPvES2_(uchar * data, int width, int height, int bytesPerLine, QImage::Format format, QImageCleanupFunction cleanupFunction, void * cleanupInfo) {
  auto _nilp = (MyQImage*)(0);
  return  new MyQImage(data, width, height, bytesPerLine, format, cleanupFunction, cleanupInfo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:142
// [-2] void QImage(const uchar *, int, int, int, QImage::Format, QImageCleanupFunction, void *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageC2EPKhiiiNS_6FormatEPFvPvES3_(const uchar * data, int width, int height, int bytesPerLine, QImage::Format format, QImageCleanupFunction cleanupFunction, void * cleanupInfo) {
  auto _nilp = (MyQImage*)(0);
  return  new MyQImage(data, width, height, bytesPerLine, format, cleanupFunction, cleanupInfo);
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
// [-2] void QImage(const QString &, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageC2ERK7QStringPKc(QString* fileName, const char * format) {
  auto _nilp = (MyQImage*)(0);
  return  new MyQImage(*fileName, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:149
// [-2] void QImage(const QImage &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageC2ERKS_(QImage* arg0) {
  auto _nilp = (MyQImage*)(0);
  return  new MyQImage(*arg0);
}

// Public inline Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qimage.h:151
// [-2] void QImage(QImage &&)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageC2EOS_(QImage && other) {
  auto _nilp = (MyQImage*)(0);
  return  new MyQImage(other);
}
#endif // QT_VERSION >= 0x050200

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:155
// [-2] void ~QImage()
extern "C" Q_DECL_EXPORT
void C_ZN6QImageD2Ev(void *this_) {
  delete (QImage*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:157
// [32] QImage & operator=(const QImage &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageaSERKS_(void *this_, QImage* arg0) {
  auto& rv = ((QImage*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:159
// [32] QImage & operator=(QImage &&)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImageaSEOS_(void *this_, QImage && other) {
  auto& rv = ((QImage*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qimage.h:162
// [-2] void swap(QImage &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN6QImage4swapERS_(void *this_, QImage* other) {
  ((QImage*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

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
// [1] bool operator==(const QImage &)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImageeqERKS_(void *this_, QImage* arg0) {
  return (bool)((QImage*)this_)->operator==(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:170
// [1] bool operator!=(const QImage &)
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
// [32] QImage copy(const QRect &)
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
// [32] QImage convertToFormat(QImage::Format, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNKR6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QImage::Format f, QFlags<Qt::ImageConversionFlag> flags) {
  auto rv = ((QImage*)this_)->convertToFormat(f, flags);
return new QImage(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:184
// [32] QImage convertToFormat(QImage::Format, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNO6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QImage::Format f, QFlags<Qt::ImageConversionFlag> flags) {
  auto rv = ((QImage*)this_)->convertToFormat(f, flags);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:194
// [32] QImage convertToFormat(QImage::Format, const QVector<QRgb> &, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage15convertToFormatENS_6FormatERK7QVectorIjE6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QImage::Format f, QVector<unsigned int>* colorTable, QFlags<Qt::ImageConversionFlag> flags) {
  auto rv = ((QImage*)this_)->convertToFormat(f, *colorTable, flags);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:195
// [1] bool reinterpretAsFormat(QImage::Format)
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
// since 4.6
// /usr/include/qt/QtGui/qimage.h:203
// [4] int colorCount()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage10colorCountEv(void *this_) {
  return (int)((QImage*)this_)->colorCount();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qimage.h:204
// [4] int bitPlaneCount()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage13bitPlaneCountEv(void *this_) {
  return (int)((QImage*)this_)->bitPlaneCount();
}
#endif // QT_VERSION >= 0x040700

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
// since 4.6
// /usr/include/qt/QtGui/qimage.h:208
// [-2] void setColorCount(int)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN6QImage13setColorCountEi(void *this_, int arg0) {
  ((QImage*)this_)->setColorCount(arg0);
}
#endif // QT_VERSION >= 0x040600

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
// since 4.7
// /usr/include/qt/QtGui/qimage.h:215
// [8] const uchar * constBits()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage9constBitsEv(void *this_) {
  return (void*)((QImage*)this_)->constBits();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qimage.h:217
// [4] int byteCount()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage9byteCountEv(void *this_) {
  return (int)((QImage*)this_)->byteCount();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:219
// [8] uchar * scanLine(int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImage8scanLineEi(void *this_, int arg0) {
  return (void*)((QImage*)this_)->scanLine(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:220
// [8] const uchar * scanLine(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage8scanLineEi(void *this_, int arg0) {
  return (void*)((QImage*)this_)->scanLine(arg0);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qimage.h:221
// [8] const uchar * constScanLine(int)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage13constScanLineEi(void *this_, int arg0) {
  return (void*)((QImage*)this_)->constScanLine(arg0);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:222
// [4] int bytesPerLine()
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage12bytesPerLineEv(void *this_) {
  return (int)((QImage*)this_)->bytesPerLine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:224
// [1] bool valid(int, int)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImage5validEii(void *this_, int x, int y) {
  return (bool)((QImage*)this_)->valid(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:225
// [1] bool valid(const QPoint &)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImage5validERK6QPoint(void *this_, QPoint* pt) {
  return (bool)((QImage*)this_)->valid(*pt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:227
// [4] int pixelIndex(int, int)
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage10pixelIndexEii(void *this_, int x, int y) {
  return (int)((QImage*)this_)->pixelIndex(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:228
// [4] int pixelIndex(const QPoint &)
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage10pixelIndexERK6QPoint(void *this_, QPoint* pt) {
  return (int)((QImage*)this_)->pixelIndex(*pt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:230
// [4] QRgb pixel(int, int)
extern "C" Q_DECL_EXPORT
QRgb C_ZNK6QImage5pixelEii(void *this_, int x, int y) {
  return (QRgb)((QImage*)this_)->pixel(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:231
// [4] QRgb pixel(const QPoint &)
extern "C" Q_DECL_EXPORT
QRgb C_ZNK6QImage5pixelERK6QPoint(void *this_, QPoint* pt) {
  return (QRgb)((QImage*)this_)->pixel(*pt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:233
// [-2] void setPixel(int, int, uint)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage8setPixelEiij(void *this_, int x, int y, uint index_or_rgb) {
  ((QImage*)this_)->setPixel(x, y, index_or_rgb);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:234
// [-2] void setPixel(const QPoint &, uint)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage8setPixelERK6QPointj(void *this_, QPoint* pt, uint index_or_rgb) {
  ((QImage*)this_)->setPixel(*pt, index_or_rgb);
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qimage.h:236
// [16] QColor pixelColor(int, int)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage10pixelColorEii(void *this_, int x, int y) {
  auto rv = ((QImage*)this_)->pixelColor(x, y);
return new QColor(rv);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qimage.h:237
// [16] QColor pixelColor(const QPoint &)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage10pixelColorERK6QPoint(void *this_, QPoint* pt) {
  auto rv = ((QImage*)this_)->pixelColor(*pt);
return new QColor(rv);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qimage.h:239
// [-2] void setPixelColor(int, int, const QColor &)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN6QImage13setPixelColorEiiRK6QColor(void *this_, int x, int y, QColor* c) {
  ((QImage*)this_)->setPixelColor(x, y, *c);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qimage.h:240
// [-2] void setPixelColor(const QPoint &, const QColor &)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN6QImage13setPixelColorERK6QPointRK6QColor(void *this_, QPoint* pt, QColor* c) {
  ((QImage*)this_)->setPixelColor(*pt, *c);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:242
// [8] QVector<QRgb> colorTable()
extern "C" Q_DECL_EXPORT
void C_ZNK6QImage10colorTableEv(void *this_) {
  auto rv = ((QImage*)this_)->colorTable();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:246
// [-2] void setColorTable(const QVector<QRgb>)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage13setColorTableE7QVectorIjE(void *this_, const QVector<QRgb> colors) {
  ((QImage*)this_)->setColorTable(colors);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:249
// [8] qreal devicePixelRatio()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QImage16devicePixelRatioEv(void *this_) {
  return (qreal)((QImage*)this_)->devicePixelRatio();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:250
// [-2] void setDevicePixelRatio(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage19setDevicePixelRatioEd(void *this_, qreal scaleFactor) {
  ((QImage*)this_)->setDevicePixelRatio(scaleFactor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:252
// [-2] void fill(uint)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage4fillEj(void *this_, uint pixel) {
  ((QImage*)this_)->fill(pixel);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qimage.h:253
// [-2] void fill(const QColor &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN6QImage4fillERK6QColor(void *this_, QColor* color) {
  ((QImage*)this_)->fill(*color);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qimage.h:254
// [-2] void fill(Qt::GlobalColor)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN6QImage4fillEN2Qt11GlobalColorE(void *this_, Qt::GlobalColor color) {
  ((QImage*)this_)->fill(color);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:257
// [1] bool hasAlphaChannel()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImage15hasAlphaChannelEv(void *this_) {
  return (bool)((QImage*)this_)->hasAlphaChannel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:258
// [-2] void setAlphaChannel(const QImage &)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage15setAlphaChannelERKS_(void *this_, QImage* alphaChannel) {
  ((QImage*)this_)->setAlphaChannel(*alphaChannel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:259
// [32] QImage alphaChannel()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage12alphaChannelEv(void *this_) {
  auto rv = ((QImage*)this_)->alphaChannel();
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:260
// [32] QImage createAlphaMask(Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage15createAlphaMaskE6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QFlags<Qt::ImageConversionFlag> flags) {
  auto rv = ((QImage*)this_)->createAlphaMask(flags);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:262
// [32] QImage createHeuristicMask(bool)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage19createHeuristicMaskEb(void *this_, bool clipTight) {
  auto rv = ((QImage*)this_)->createHeuristicMask(clipTight);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:264
// [32] QImage createMaskFromColor(QRgb, Qt::MaskMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage19createMaskFromColorEjN2Qt8MaskModeE(void *this_, QRgb color, Qt::MaskMode mode) {
  auto rv = ((QImage*)this_)->createMaskFromColor(color, mode);
return new QImage(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:266
// [32] QImage scaled(int, int, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE(void *this_, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  auto rv = ((QImage*)this_)->scaled(w, h, aspectMode, mode);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:269
// [32] QImage scaled(const QSize &, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage6scaledERK5QSizeN2Qt15AspectRatioModeENS3_18TransformationModeE(void *this_, QSize* s, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  auto rv = ((QImage*)this_)->scaled(*s, aspectMode, mode);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:271
// [32] QImage scaledToWidth(int, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage13scaledToWidthEiN2Qt18TransformationModeE(void *this_, int w, Qt::TransformationMode mode) {
  auto rv = ((QImage*)this_)->scaledToWidth(w, mode);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:272
// [32] QImage scaledToHeight(int, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage14scaledToHeightEiN2Qt18TransformationModeE(void *this_, int h, Qt::TransformationMode mode) {
  auto rv = ((QImage*)this_)->scaledToHeight(h, mode);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:273
// [32] QImage transformed(const QMatrix &, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage11transformedERK7QMatrixN2Qt18TransformationModeE(void *this_, QMatrix* matrix, Qt::TransformationMode mode) {
  auto rv = ((QImage*)this_)->transformed(*matrix, mode);
return new QImage(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:274
// [48] QMatrix trueMatrix(const QMatrix &, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImage10trueMatrixERK7QMatrixii(QMatrix* arg0, int w, int h) {
  auto rv = QImage::trueMatrix(*arg0, w, h);
return new QMatrix(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:275
// [32] QImage transformed(const QTransform &, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage11transformedERK10QTransformN2Qt18TransformationModeE(void *this_, QTransform* matrix, Qt::TransformationMode mode) {
  auto rv = ((QImage*)this_)->transformed(*matrix, mode);
return new QImage(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:276
// [88] QTransform trueMatrix(const QTransform &, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImage10trueMatrixERK10QTransformii(QTransform* arg0, int w, int h) {
  auto rv = QImage::trueMatrix(*arg0, w, h);
return new QTransform(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:278
// [32] QImage mirrored(bool, bool)
extern "C" Q_DECL_EXPORT
void* C_ZNKR6QImage8mirroredEbb(void *this_, bool horizontally, bool vertically) {
  auto rv = ((QImage*)this_)->mirrored(horizontally, vertically);
return new QImage(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:280
// [32] QImage && mirrored(bool, bool)
extern "C" Q_DECL_EXPORT
void C_ZNO6QImage8mirroredEbb(void *this_, bool horizontally, bool vertically) {
  auto rv = ((QImage*)this_)->mirrored(horizontally, vertically);
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:282
// [32] QImage rgbSwapped()
extern "C" Q_DECL_EXPORT
void* C_ZNKR6QImage10rgbSwappedEv(void *this_) {
  auto rv = ((QImage*)this_)->rgbSwapped();
return new QImage(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:284
// [32] QImage && rgbSwapped()
extern "C" Q_DECL_EXPORT
void C_ZNO6QImage10rgbSwappedEv(void *this_) {
  auto rv = ((QImage*)this_)->rgbSwapped();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:290
// [-2] void invertPixels(QImage::InvertMode)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage12invertPixelsENS_10InvertModeE(void *this_, QImage::InvertMode arg0) {
  ((QImage*)this_)->invertPixels(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:293
// [1] bool load(QIODevice *, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN6QImage4loadEP9QIODevicePKc(void *this_, QIODevice * device, const char * format) {
  return (bool)((QImage*)this_)->load(device, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:294
// [1] bool load(const QString &, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN6QImage4loadERK7QStringPKc(void *this_, QString* fileName, const char * format) {
  return (bool)((QImage*)this_)->load(*fileName, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:295
// [1] bool loadFromData(const uchar *, int, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN6QImage12loadFromDataEPKhiPKc(void *this_, const uchar * buf, int len_, const char * format) {
  return (bool)((QImage*)this_)->loadFromData(buf, len_, format);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:296
// [1] bool loadFromData(const QByteArray &, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN6QImage12loadFromDataERK10QByteArrayPKc(void *this_, QByteArray* data, const char * aformat) {
  return (bool)((QImage*)this_)->loadFromData(*data, aformat);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:299
// [1] bool save(const QString &, const char *, int)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImage4saveERK7QStringPKci(void *this_, QString* fileName, const char * format, int quality) {
  return (bool)((QImage*)this_)->save(*fileName, format, quality);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:300
// [1] bool save(QIODevice *, const char *, int)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QImage4saveEP9QIODevicePKci(void *this_, QIODevice * device, const char * format, int quality) {
  return (bool)((QImage*)this_)->save(device, format, quality);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:302
// [32] QImage fromData(const uchar *, int, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImage8fromDataEPKhiPKc(const uchar * data, int size, const char * format) {
  auto rv = QImage::fromData(data, size, format);
return new QImage(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:303
// [32] QImage fromData(const QByteArray &, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImage8fromDataERK10QByteArrayPKc(QByteArray* data, const char * format) {
  auto rv = QImage::fromData(*data, format);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:309
// [8] qint64 cacheKey()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK6QImage8cacheKeyEv(void *this_) {
  return (qint64)((QImage*)this_)->cacheKey();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:311
// [8] QPaintEngine * paintEngine()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage11paintEngineEv(void *this_) {
  return (void*)((QImage*)this_)->paintEngine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:314
// [4] int dotsPerMeterX()
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage13dotsPerMeterXEv(void *this_) {
  return (int)((QImage*)this_)->dotsPerMeterX();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:315
// [4] int dotsPerMeterY()
extern "C" Q_DECL_EXPORT
int C_ZNK6QImage13dotsPerMeterYEv(void *this_) {
  return (int)((QImage*)this_)->dotsPerMeterY();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:316
// [-2] void setDotsPerMeterX(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage16setDotsPerMeterXEi(void *this_, int arg0) {
  ((QImage*)this_)->setDotsPerMeterX(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:317
// [-2] void setDotsPerMeterY(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage16setDotsPerMeterYEi(void *this_, int arg0) {
  ((QImage*)this_)->setDotsPerMeterY(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:318
// [8] QPoint offset()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage6offsetEv(void *this_) {
  auto rv = ((QImage*)this_)->offset();
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:319
// [-2] void setOffset(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage9setOffsetERK6QPoint(void *this_, QPoint* arg0) {
  ((QImage*)this_)->setOffset(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:321
// [8] QStringList textKeys()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage8textKeysEv(void *this_) {
  auto rv = ((QImage*)this_)->textKeys();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:322
// [8] QString text(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage4textERK7QString(void *this_, QString* key) {
  auto rv = ((QImage*)this_)->text(*key);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:323
// [-2] void setText(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN6QImage7setTextERK7QStringS2_(void *this_, QString* key, QString* value) {
  ((QImage*)this_)->setText(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:325
// [8] QPixelFormat pixelFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QImage11pixelFormatEv(void *this_) {
  auto rv = ((QImage*)this_)->pixelFormat();
return new QPixelFormat(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:326
// [8] QPixelFormat toPixelFormat(QImage::Format)
extern "C" Q_DECL_EXPORT
void* C_ZN6QImage13toPixelFormatENS_6FormatE(QImage::Format format) {
  auto rv = QImage::toPixelFormat(format);
return new QPixelFormat(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:327
// [4] QImage::Format toImageFormat(QPixelFormat)
extern "C" Q_DECL_EXPORT
QImage::Format C_ZN6QImage13toImageFormatE12QPixelFormat(QPixelFormat* format) {
  return (QImage::Format)QImage::toImageFormat(*format);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:368
// [8] QImage::DataPtr & data_ptr()
extern "C" Q_DECL_EXPORT
void* C_ZN6QImage8data_ptrEv(void *this_) {
  auto& rv = ((QImage*)this_)->data_ptr();
return &rv;
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
