//  header block begin
// /usr/include/qt/QtGui/qpixmap.h
#include <qpixmap.h>
#include <QtGui>

// QPixmap is pure virtual: false
// QPixmap has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:175
// [4] int metric(enum QPaintDevice::PaintDeviceMetric)
extern "C"
void* callback_ZNK7QPixmap6metricEN12QPaintDevice17PaintDeviceMetricE = 0;
extern "C" void set_callback_ZNK7QPixmap6metricEN12QPaintDevice17PaintDeviceMetricE(void*cbfn)
{ callback_ZNK7QPixmap6metricEN12QPaintDevice17PaintDeviceMetricE = cbfn; }
// Protected static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:176
// [32] QPixmap fromImageInPlace(class QImage &, Qt::ImageConversionFlags)
extern "C"
void* callback_ZN7QPixmap16fromImageInPlaceER6QImage6QFlagsIN2Qt19ImageConversionFlagEE = 0;
extern "C" void set_callback_ZN7QPixmap16fromImageInPlaceER6QImage6QFlagsIN2Qt19ImageConversionFlagEE(void*cbfn)
{ callback_ZN7QPixmap16fromImageInPlaceER6QImage6QFlagsIN2Qt19ImageConversionFlagEE = cbfn; }

class MyQPixmap : public QPixmap {
public:
  virtual ~MyQPixmap() {}
// void QPixmap()
MyQPixmap() : QPixmap() {}
// void QPixmap(int, int)
MyQPixmap(int w, int h) : QPixmap(w, h) {}
// void QPixmap(const class QSize &)
MyQPixmap(const QSize & arg0) : QPixmap(arg0) {}
// void QPixmap(const class QString &, const char *, Qt::ImageConversionFlags)
MyQPixmap(const QString & fileName, const char * format, QFlags<Qt::ImageConversionFlag> flags) : QPixmap(fileName, format, flags) {}
// void QPixmap(const char *const *)
MyQPixmap(char** xpm) : QPixmap(xpm) {}
// int metric(enum QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric arg0) {
    if (callback_ZNK7QPixmap6metricEN12QPaintDevice17PaintDeviceMetricE != 0) {
      // callback_ZNK7QPixmap6metricEN12QPaintDevice17PaintDeviceMetricE(arg0);
    }
    return QPixmap::metric(arg0);
  }
// QPixmap fromImageInPlace(class QImage &, Qt::ImageConversionFlags)
  virtual QPixmap fromImageInPlace(QImage & image, QFlags<Qt::ImageConversionFlag> flags) {
    if (callback_ZN7QPixmap16fromImageInPlaceER6QImage6QFlagsIN2Qt19ImageConversionFlagEE != 0) {
      // callback_ZN7QPixmap16fromImageInPlaceER6QImage6QFlagsIN2Qt19ImageConversionFlagEE(image, flags);
    }
    return QPixmap::fromImageInPlace(image, flags);
  }
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:64
// [-2] void QPixmap()
extern "C"
void* C_ZN7QPixmapC2Ev() {
  auto _nilp = (MyQPixmap*)(0);
  return  new MyQPixmap();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:66
// [-2] void QPixmap(int, int)
extern "C"
void* C_ZN7QPixmapC2Eii(int w, int h) {
  auto _nilp = (MyQPixmap*)(0);
  return  new MyQPixmap(w, h);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:67
// [-2] void QPixmap(const class QSize &)
extern "C"
void* C_ZN7QPixmapC2ERK5QSize(const QSize & arg0) {
  auto _nilp = (MyQPixmap*)(0);
  return  new MyQPixmap(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:68
// [-2] void QPixmap(const class QString &, const char *, Qt::ImageConversionFlags)
extern "C"
void* C_ZN7QPixmapC2ERK7QStringPKc6QFlagsIN2Qt19ImageConversionFlagEE(const QString & fileName, const char * format, QFlags<Qt::ImageConversionFlag> flags) {
  auto _nilp = (MyQPixmap*)(0);
  return  new MyQPixmap(fileName, format, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:70
// [-2] void QPixmap(const char *const *)
extern "C"
void* C_ZN7QPixmapC2EPKPKc(char** xpm) {
  auto _nilp = (MyQPixmap*)(0);
  return  new MyQPixmap(xpm);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:73
// [-2] void ~QPixmap()
extern "C"
void C_ZN7QPixmapD2Ev(void *this_) {
  delete (QPixmap*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:80
// [-2] void swap(class QPixmap &)
extern "C"
void C_ZN7QPixmap4swapERS_(void *this_, QPixmap & other) {
  ((QPixmap*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:85
// [1] bool isNull()
extern "C"
bool C_ZNK7QPixmap6isNullEv(void *this_) {
  return (bool)((QPixmap*)this_)->isNull();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:86
// [4] int devType()
extern "C"
int C_ZNK7QPixmap7devTypeEv(void *this_) {
  return (int)((QPixmap*)this_)->devType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:88
// [4] int width()
extern "C"
int C_ZNK7QPixmap5widthEv(void *this_) {
  return (int)((QPixmap*)this_)->width();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:89
// [4] int height()
extern "C"
int C_ZNK7QPixmap6heightEv(void *this_) {
  return (int)((QPixmap*)this_)->height();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:90
// [8] QSize size()
extern "C"
void* C_ZNK7QPixmap4sizeEv(void *this_) {
  auto rv = ((QPixmap*)this_)->size();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:91
// [16] QRect rect()
extern "C"
void* C_ZNK7QPixmap4rectEv(void *this_) {
  auto rv = ((QPixmap*)this_)->rect();
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:92
// [4] int depth()
extern "C"
int C_ZNK7QPixmap5depthEv(void *this_) {
  return (int)((QPixmap*)this_)->depth();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:94
// [4] int defaultDepth()
extern "C"
int C_ZN7QPixmap12defaultDepthEv() {
  return (int)QPixmap::defaultDepth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:96
// [-2] void fill(const class QColor &)
extern "C"
void C_ZN7QPixmap4fillERK6QColor(void *this_, const QColor & fillColor) {
  ((QPixmap*)this_)->fill(fillColor);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:97
// [-2] void fill(const class QPaintDevice *, const class QPoint &)
extern "C"
void C_ZN7QPixmap4fillEPK12QPaintDeviceRK6QPoint(void *this_, const QPaintDevice * device, const QPoint & ofs) {
  ((QPixmap*)this_)->fill(device, ofs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:98
// [-2] void fill(const class QPaintDevice *, int, int)
extern "C"
void C_ZN7QPixmap4fillEPK12QPaintDeviceii(void *this_, const QPaintDevice * device, int xofs, int yofs) {
  ((QPixmap*)this_)->fill(device, xofs, yofs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:100
// [32] QBitmap mask()
extern "C"
void* C_ZNK7QPixmap4maskEv(void *this_) {
  auto rv = ((QPixmap*)this_)->mask();
return new QBitmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:101
// [-2] void setMask(const class QBitmap &)
extern "C"
void C_ZN7QPixmap7setMaskERK7QBitmap(void *this_, const QBitmap & arg0) {
  ((QPixmap*)this_)->setMask(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:103
// [8] qreal devicePixelRatio()
extern "C"
qreal C_ZNK7QPixmap16devicePixelRatioEv(void *this_) {
  return (qreal)((QPixmap*)this_)->devicePixelRatio();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:104
// [-2] void setDevicePixelRatio(qreal)
extern "C"
void C_ZN7QPixmap19setDevicePixelRatioEd(void *this_, qreal scaleFactor) {
  ((QPixmap*)this_)->setDevicePixelRatio(scaleFactor);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:106
// [1] bool hasAlpha()
extern "C"
bool C_ZNK7QPixmap8hasAlphaEv(void *this_) {
  return (bool)((QPixmap*)this_)->hasAlpha();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:107
// [1] bool hasAlphaChannel()
extern "C"
bool C_ZNK7QPixmap15hasAlphaChannelEv(void *this_) {
  return (bool)((QPixmap*)this_)->hasAlphaChannel();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:110
// [32] QBitmap createHeuristicMask(_Bool)
extern "C"
void* C_ZNK7QPixmap19createHeuristicMaskEb(void *this_, bool clipTight) {
  auto rv = ((QPixmap*)this_)->createHeuristicMask(clipTight);
return new QBitmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:112
// [32] QBitmap createMaskFromColor(const class QColor &, Qt::MaskMode)
extern "C"
void* C_ZNK7QPixmap19createMaskFromColorERK6QColorN2Qt8MaskModeE(void *this_, const QColor & maskColor, Qt::MaskMode mode) {
  auto rv = ((QPixmap*)this_)->createMaskFromColor(maskColor, mode);
return new QBitmap(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:114
// [32] QPixmap grabWindow(WId, int, int, int, int)
extern "C"
void* C_ZN7QPixmap10grabWindowEyiiii(WId arg0, int x, int y, int w, int h) {
  auto rv = QPixmap::grabWindow(arg0, x, y, w, h);
return new QPixmap(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:115
// [32] QPixmap grabWidget(class QObject *, const class QRect &)
extern "C"
void* C_ZN7QPixmap10grabWidgetEP7QObjectRK5QRect(QObject * widget, const QRect & rect) {
  auto rv = QPixmap::grabWidget(widget, rect);
return new QPixmap(rv);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:116
// [32] QPixmap grabWidget(class QObject *, int, int, int, int)
extern "C"
void* C_ZN7QPixmap10grabWidgetEP7QObjectiiii(QObject * widget, int x, int y, int w, int h) {
  auto rv = QPixmap::grabWidget(widget, x, y, w, h);
return new QPixmap(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:119
// [32] QPixmap scaled(int, int, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C"
void* C_ZNK7QPixmap6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE(void *this_, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  auto rv = ((QPixmap*)this_)->scaled(w, h, aspectMode, mode);
return new QPixmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:122
// [32] QPixmap scaled(const class QSize &, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C"
void* C_ZNK7QPixmap6scaledERK5QSizeN2Qt15AspectRatioModeENS3_18TransformationModeE(void *this_, const QSize & s, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  auto rv = ((QPixmap*)this_)->scaled(s, aspectMode, mode);
return new QPixmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:124
// [32] QPixmap scaledToWidth(int, Qt::TransformationMode)
extern "C"
void* C_ZNK7QPixmap13scaledToWidthEiN2Qt18TransformationModeE(void *this_, int w, Qt::TransformationMode mode) {
  auto rv = ((QPixmap*)this_)->scaledToWidth(w, mode);
return new QPixmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:125
// [32] QPixmap scaledToHeight(int, Qt::TransformationMode)
extern "C"
void* C_ZNK7QPixmap14scaledToHeightEiN2Qt18TransformationModeE(void *this_, int h, Qt::TransformationMode mode) {
  auto rv = ((QPixmap*)this_)->scaledToHeight(h, mode);
return new QPixmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:126
// [32] QPixmap transformed(const class QMatrix &, Qt::TransformationMode)
extern "C"
void* C_ZNK7QPixmap11transformedERK7QMatrixN2Qt18TransformationModeE(void *this_, const QMatrix & arg0, Qt::TransformationMode mode) {
  auto rv = ((QPixmap*)this_)->transformed(arg0, mode);
return new QPixmap(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:127
// [48] QMatrix trueMatrix(const class QMatrix &, int, int)
extern "C"
void* C_ZN7QPixmap10trueMatrixERK7QMatrixii(const QMatrix & m, int w, int h) {
  auto rv = QPixmap::trueMatrix(m, w, h);
return new QMatrix(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:128
// [32] QPixmap transformed(const class QTransform &, Qt::TransformationMode)
extern "C"
void* C_ZNK7QPixmap11transformedERK10QTransformN2Qt18TransformationModeE(void *this_, const QTransform & arg0, Qt::TransformationMode mode) {
  auto rv = ((QPixmap*)this_)->transformed(arg0, mode);
return new QPixmap(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:129
// [88] QTransform trueMatrix(const class QTransform &, int, int)
extern "C"
void* C_ZN7QPixmap10trueMatrixERK10QTransformii(const QTransform & m, int w, int h) {
  auto rv = QPixmap::trueMatrix(m, w, h);
return new QTransform(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:131
// [32] QImage toImage()
extern "C"
void* C_ZNK7QPixmap7toImageEv(void *this_) {
  auto rv = ((QPixmap*)this_)->toImage();
return new QImage(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:132
// [32] QPixmap fromImage(const class QImage &, Qt::ImageConversionFlags)
extern "C"
void* C_ZN7QPixmap9fromImageERK6QImage6QFlagsIN2Qt19ImageConversionFlagEE(const QImage & image, QFlags<Qt::ImageConversionFlag> flags) {
  auto rv = QPixmap::fromImage(image, flags);
return new QPixmap(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:133
// [32] QPixmap fromImageReader(class QImageReader *, Qt::ImageConversionFlags)
extern "C"
void* C_ZN7QPixmap15fromImageReaderEP12QImageReader6QFlagsIN2Qt19ImageConversionFlagEE(QImageReader * imageReader, QFlags<Qt::ImageConversionFlag> flags) {
  auto rv = QPixmap::fromImageReader(imageReader, flags);
return new QPixmap(rv);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:135
// [32] QPixmap fromImage(class QImage &&, Qt::ImageConversionFlags)
extern "C"
void* C_ZN7QPixmap9fromImageEO6QImage6QFlagsIN2Qt19ImageConversionFlagEE(QImage && image, QFlags<Qt::ImageConversionFlag> flags) {
  auto rv = QPixmap::fromImage(image, flags);
return new QPixmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:141
// [1] bool load(const class QString &, const char *, Qt::ImageConversionFlags)
extern "C"
bool C_ZN7QPixmap4loadERK7QStringPKc6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const QString & fileName, const char * format, QFlags<Qt::ImageConversionFlag> flags) {
  return (bool)((QPixmap*)this_)->load(fileName, format, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:142
// [1] bool loadFromData(const uchar *, uint, const char *, Qt::ImageConversionFlags)
extern "C"
bool C_ZN7QPixmap12loadFromDataEPKhjPKc6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const uchar * buf, uint len, const char * format, QFlags<Qt::ImageConversionFlag> flags) {
  return (bool)((QPixmap*)this_)->loadFromData(buf, len, format, flags);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:143
// [1] bool loadFromData(const class QByteArray &, const char *, Qt::ImageConversionFlags)
extern "C"
bool C_ZN7QPixmap12loadFromDataERK10QByteArrayPKc6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const QByteArray & data, const char * format, QFlags<Qt::ImageConversionFlag> flags) {
  return (bool)((QPixmap*)this_)->loadFromData(data, format, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:144
// [1] bool save(const class QString &, const char *, int)
extern "C"
bool C_ZNK7QPixmap4saveERK7QStringPKci(void *this_, const QString & fileName, const char * format, int quality) {
  return (bool)((QPixmap*)this_)->save(fileName, format, quality);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:145
// [1] bool save(class QIODevice *, const char *, int)
extern "C"
bool C_ZNK7QPixmap4saveEP9QIODevicePKci(void *this_, QIODevice * device, const char * format, int quality) {
  return (bool)((QPixmap*)this_)->save(device, format, quality);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:147
// [1] bool convertFromImage(const class QImage &, Qt::ImageConversionFlags)
extern "C"
bool C_ZN7QPixmap16convertFromImageERK6QImage6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const QImage & img, QFlags<Qt::ImageConversionFlag> flags) {
  return (bool)((QPixmap*)this_)->convertFromImage(img, flags);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:149
// [32] QPixmap copy(int, int, int, int)
extern "C"
void* C_ZNK7QPixmap4copyEiiii(void *this_, int x, int y, int width, int height) {
  auto rv = ((QPixmap*)this_)->copy(x, y, width, height);
return new QPixmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:150
// [32] QPixmap copy(const class QRect &)
extern "C"
void* C_ZNK7QPixmap4copyERK5QRect(void *this_, const QRect & rect) {
  auto rv = ((QPixmap*)this_)->copy(rect);
return new QPixmap(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:152
// [-2] void scroll(int, int, int, int, int, int, class QRegion *)
extern "C"
void C_ZN7QPixmap6scrollEiiiiiiP7QRegion(void *this_, int dx, int dy, int x, int y, int width, int height, QRegion * exposed) {
  ((QPixmap*)this_)->scroll(dx, dy, x, y, width, height, exposed);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:153
// [-2] void scroll(int, int, const class QRect &, class QRegion *)
extern "C"
void C_ZN7QPixmap6scrollEiiRK5QRectP7QRegion(void *this_, int dx, int dy, const QRect & rect, QRegion * exposed) {
  ((QPixmap*)this_)->scroll(dx, dy, rect, exposed);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:158
// [8] qint64 cacheKey()
extern "C"
qint64 C_ZNK7QPixmap8cacheKeyEv(void *this_) {
  return (qint64)((QPixmap*)this_)->cacheKey();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:160
// [1] bool isDetached()
extern "C"
bool C_ZNK7QPixmap10isDetachedEv(void *this_) {
  return (bool)((QPixmap*)this_)->isDetached();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:161
// [-2] void detach()
extern "C"
void C_ZN7QPixmap6detachEv(void *this_) {
  ((QPixmap*)this_)->detach();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:163
// [1] bool isQBitmap()
extern "C"
bool C_ZNK7QPixmap9isQBitmapEv(void *this_) {
  return (bool)((QPixmap*)this_)->isQBitmap();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:165
// [8] QPaintEngine * paintEngine()
extern "C"
void* C_ZNK7QPixmap11paintEngineEv(void *this_) {
  return (void*)((QPixmap*)this_)->paintEngine();
}
//  main block end
