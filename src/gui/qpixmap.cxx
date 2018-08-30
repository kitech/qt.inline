//  header block begin
// /usr/include/qt/QtGui/qpixmap.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpixmap.h>
#include <QtGui>
#include "callback_inherit.h"

// QPixmap is pure virtual: false
// QPixmap has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQPixmap_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPixmap_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPixmap_t qt_meta_stringdata_MyQPixmap = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQPixmap"
  },
  "MyQPixmap"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPixmap[] = {
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
class Q_DECL_EXPORT MyQPixmap : public QPixmap {
public:
  virtual ~MyQPixmap() {}
// void QPixmap()
MyQPixmap() : QPixmap() {}
// void QPixmap(QPlatformPixmap *)
MyQPixmap(QPlatformPixmap * data) : QPixmap(data) {}
// void QPixmap(int, int)
MyQPixmap(int w, int h) : QPixmap(w, h) {}
// void QPixmap(const QSize &)
MyQPixmap(const QSize & arg0) : QPixmap(arg0) {}
// void QPixmap(const QString &, const char *, Qt::ImageConversionFlags)
MyQPixmap(const QString & fileName, const char * format, QFlags<Qt::ImageConversionFlag> flags) : QPixmap(fileName, format, flags) {}
// void QPixmap(const char *const *)
MyQPixmap(char** xpm) : QPixmap(xpm) {}
// void QPixmap(const QPixmap &)
MyQPixmap(const QPixmap & arg0) : QPixmap(arg0) {}
// Protected virtual Visibility=Default Availability=Available
// [4] int metric(QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric arg0) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metric", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QPixmap::metric(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:175
// [4] int metric(QPaintDevice::PaintDeviceMetric)
extern "C" Q_DECL_EXPORT
int C_ZNK7QPixmap6metricEN12QPaintDevice17PaintDeviceMetricE(void *this_, QPaintDevice::PaintDeviceMetric arg0) {
  return (int)((QPixmap*)this_)->QPixmap::metric(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:64
// [-2] void QPixmap()
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmapC2Ev() {
  auto _nilp = (MyQPixmap*)(0);
  return  new MyQPixmap();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:65
// [-2] void QPixmap(QPlatformPixmap *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmapC2EP15QPlatformPixmap(QPlatformPixmap * data) {
  auto _nilp = (MyQPixmap*)(0);
  return  new MyQPixmap(data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:66
// [-2] void QPixmap(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmapC2Eii(int w, int h) {
  auto _nilp = (MyQPixmap*)(0);
  return  new MyQPixmap(w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:67
// [-2] void QPixmap(const QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmapC2ERK5QSize(QSize* arg0) {
  auto _nilp = (MyQPixmap*)(0);
  return  new MyQPixmap(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:68
// [-2] void QPixmap(const QString &, const char *, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmapC2ERK7QStringPKc6QFlagsIN2Qt19ImageConversionFlagEE(QString* fileName, const char * format, QFlags<Qt::ImageConversionFlag> flags) {
  auto _nilp = (MyQPixmap*)(0);
  return  new MyQPixmap(*fileName, format, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:70
// [-2] void QPixmap(const char *const *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmapC2EPKPKc(char** xpm) {
  auto _nilp = (MyQPixmap*)(0);
  return  new MyQPixmap(xpm);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:72
// [-2] void QPixmap(const QPixmap &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmapC2ERKS_(QPixmap* arg0) {
  auto _nilp = (MyQPixmap*)(0);
  return  new MyQPixmap(*arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:73
// [-2] void ~QPixmap()
extern "C" Q_DECL_EXPORT
void C_ZN7QPixmapD2Ev(void *this_) {
  delete (QPixmap*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:75
// [32] QPixmap & operator=(const QPixmap &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmapaSERKS_(void *this_, QPixmap* arg0) {
  auto& rv = ((QPixmap*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:77
// [32] QPixmap & operator=(QPixmap &&)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmapaSEOS_(void *this_, QPixmap && other) {
  auto& rv = ((QPixmap*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qpixmap.h:80
// [-2] void swap(QPixmap &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN7QPixmap4swapERS_(void *this_, QPixmap* other) {
  ((QPixmap*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:85
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QPixmap6isNullEv(void *this_) {
  return (bool)((QPixmap*)this_)->isNull();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:86
// [4] int devType()
extern "C" Q_DECL_EXPORT
int C_ZNK7QPixmap7devTypeEv(void *this_) {
  return (int)((QPixmap*)this_)->devType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:88
// [4] int width()
extern "C" Q_DECL_EXPORT
int C_ZNK7QPixmap5widthEv(void *this_) {
  return (int)((QPixmap*)this_)->width();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:89
// [4] int height()
extern "C" Q_DECL_EXPORT
int C_ZNK7QPixmap6heightEv(void *this_) {
  return (int)((QPixmap*)this_)->height();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:90
// [8] QSize size()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap4sizeEv(void *this_) {
  auto rv = ((QPixmap*)this_)->size();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:91
// [16] QRect rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap4rectEv(void *this_) {
  auto rv = ((QPixmap*)this_)->rect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:92
// [4] int depth()
extern "C" Q_DECL_EXPORT
int C_ZNK7QPixmap5depthEv(void *this_) {
  return (int)((QPixmap*)this_)->depth();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:94
// [4] int defaultDepth()
extern "C" Q_DECL_EXPORT
int C_ZN7QPixmap12defaultDepthEv() {
  return (int)QPixmap::defaultDepth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:96
// [-2] void fill(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN7QPixmap4fillERK6QColor(void *this_, QColor* fillColor) {
  ((QPixmap*)this_)->fill(*fillColor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:97
// [-2] void fill(const QPaintDevice *, const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN7QPixmap4fillEPK12QPaintDeviceRK6QPoint(void *this_, const QPaintDevice * device, QPoint* ofs) {
  ((QPixmap*)this_)->fill(device, *ofs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:98
// [-2] void fill(const QPaintDevice *, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN7QPixmap4fillEPK12QPaintDeviceii(void *this_, const QPaintDevice * device, int xofs, int yofs) {
  ((QPixmap*)this_)->fill(device, xofs, yofs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:100
// [32] QBitmap mask()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap4maskEv(void *this_) {
  auto rv = ((QPixmap*)this_)->mask();
return new QBitmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:101
// [-2] void setMask(const QBitmap &)
extern "C" Q_DECL_EXPORT
void C_ZN7QPixmap7setMaskERK7QBitmap(void *this_, QBitmap* arg0) {
  ((QPixmap*)this_)->setMask(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:103
// [8] qreal devicePixelRatio()
extern "C" Q_DECL_EXPORT
qreal C_ZNK7QPixmap16devicePixelRatioEv(void *this_) {
  return (qreal)((QPixmap*)this_)->devicePixelRatio();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:104
// [-2] void setDevicePixelRatio(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN7QPixmap19setDevicePixelRatioEd(void *this_, qreal scaleFactor) {
  ((QPixmap*)this_)->setDevicePixelRatio(scaleFactor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:106
// [1] bool hasAlpha()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QPixmap8hasAlphaEv(void *this_) {
  return (bool)((QPixmap*)this_)->hasAlpha();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:107
// [1] bool hasAlphaChannel()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QPixmap15hasAlphaChannelEv(void *this_) {
  return (bool)((QPixmap*)this_)->hasAlphaChannel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:110
// [32] QBitmap createHeuristicMask(bool)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap19createHeuristicMaskEb(void *this_, bool clipTight) {
  auto rv = ((QPixmap*)this_)->createHeuristicMask(clipTight);
return new QBitmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:112
// [32] QBitmap createMaskFromColor(const QColor &, Qt::MaskMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap19createMaskFromColorERK6QColorN2Qt8MaskModeE(void *this_, QColor* maskColor, Qt::MaskMode mode) {
  auto rv = ((QPixmap*)this_)->createMaskFromColor(*maskColor, mode);
return new QBitmap(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:114
// [32] QPixmap grabWindow(WId, int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmap10grabWindowEyiiii(WId arg0, int x, int y, int w, int h) {
  auto rv = QPixmap::grabWindow(arg0, x, y, w, h);
return new QPixmap(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:115
// [32] QPixmap grabWidget(QObject *, const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmap10grabWidgetEP7QObjectRK5QRect(QObject * widget, QRect* rect) {
  auto rv = QPixmap::grabWidget(widget, *rect);
return new QPixmap(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:116
// [32] QPixmap grabWidget(QObject *, int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmap10grabWidgetEP7QObjectiiii(QObject * widget, int x, int y, int w, int h) {
  auto rv = QPixmap::grabWidget(widget, x, y, w, h);
return new QPixmap(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:119
// [32] QPixmap scaled(int, int, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE(void *this_, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  auto rv = ((QPixmap*)this_)->scaled(w, h, aspectMode, mode);
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:122
// [32] QPixmap scaled(const QSize &, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap6scaledERK5QSizeN2Qt15AspectRatioModeENS3_18TransformationModeE(void *this_, QSize* s, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  auto rv = ((QPixmap*)this_)->scaled(*s, aspectMode, mode);
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:124
// [32] QPixmap scaledToWidth(int, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap13scaledToWidthEiN2Qt18TransformationModeE(void *this_, int w, Qt::TransformationMode mode) {
  auto rv = ((QPixmap*)this_)->scaledToWidth(w, mode);
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:125
// [32] QPixmap scaledToHeight(int, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap14scaledToHeightEiN2Qt18TransformationModeE(void *this_, int h, Qt::TransformationMode mode) {
  auto rv = ((QPixmap*)this_)->scaledToHeight(h, mode);
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:126
// [32] QPixmap transformed(const QMatrix &, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap11transformedERK7QMatrixN2Qt18TransformationModeE(void *this_, QMatrix* arg0, Qt::TransformationMode mode) {
  auto rv = ((QPixmap*)this_)->transformed(*arg0, mode);
return new QPixmap(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:127
// [48] QMatrix trueMatrix(const QMatrix &, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmap10trueMatrixERK7QMatrixii(QMatrix* m, int w, int h) {
  auto rv = QPixmap::trueMatrix(*m, w, h);
return new QMatrix(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:128
// [32] QPixmap transformed(const QTransform &, Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap11transformedERK10QTransformN2Qt18TransformationModeE(void *this_, QTransform* arg0, Qt::TransformationMode mode) {
  auto rv = ((QPixmap*)this_)->transformed(*arg0, mode);
return new QPixmap(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:129
// [88] QTransform trueMatrix(const QTransform &, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmap10trueMatrixERK10QTransformii(QTransform* m, int w, int h) {
  auto rv = QPixmap::trueMatrix(*m, w, h);
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:131
// [32] QImage toImage()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap7toImageEv(void *this_) {
  auto rv = ((QPixmap*)this_)->toImage();
return new QImage(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:132
// [32] QPixmap fromImage(const QImage &, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmap9fromImageERK6QImage6QFlagsIN2Qt19ImageConversionFlagEE(QImage* image, QFlags<Qt::ImageConversionFlag> flags) {
  auto rv = QPixmap::fromImage(*image, flags);
return new QPixmap(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:133
// [32] QPixmap fromImageReader(QImageReader *, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmap15fromImageReaderEP12QImageReader6QFlagsIN2Qt19ImageConversionFlagEE(QImageReader * imageReader, QFlags<Qt::ImageConversionFlag> flags) {
  auto rv = QPixmap::fromImageReader(imageReader, flags);
return new QPixmap(rv);
}

// Public static inline Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qpixmap.h:135
// [32] QPixmap fromImage(QImage &&, Qt::ImageConversionFlags)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmap9fromImageEO6QImage6QFlagsIN2Qt19ImageConversionFlagEE(QImage && image, QFlags<Qt::ImageConversionFlag> flags) {
  auto rv = QPixmap::fromImage(image, flags);
return new QPixmap(rv);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:141
// [1] bool load(const QString &, const char *, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
bool C_ZN7QPixmap4loadERK7QStringPKc6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QString* fileName, const char * format, QFlags<Qt::ImageConversionFlag> flags) {
  return (bool)((QPixmap*)this_)->load(*fileName, format, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:142
// [1] bool loadFromData(const uchar *, uint, const char *, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
bool C_ZN7QPixmap12loadFromDataEPKhjPKc6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const uchar * buf, uint len_, const char * format, QFlags<Qt::ImageConversionFlag> flags) {
  return (bool)((QPixmap*)this_)->loadFromData(buf, len_, format, flags);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:143
// [1] bool loadFromData(const QByteArray &, const char *, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
bool C_ZN7QPixmap12loadFromDataERK10QByteArrayPKc6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QByteArray* data, const char * format, QFlags<Qt::ImageConversionFlag> flags) {
  return (bool)((QPixmap*)this_)->loadFromData(*data, format, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:144
// [1] bool save(const QString &, const char *, int)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QPixmap4saveERK7QStringPKci(void *this_, QString* fileName, const char * format, int quality) {
  return (bool)((QPixmap*)this_)->save(*fileName, format, quality);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:145
// [1] bool save(QIODevice *, const char *, int)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QPixmap4saveEP9QIODevicePKci(void *this_, QIODevice * device, const char * format, int quality) {
  return (bool)((QPixmap*)this_)->save(device, format, quality);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qpixmap.h:147
// [1] bool convertFromImage(const QImage &, Qt::ImageConversionFlags)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
bool C_ZN7QPixmap16convertFromImageERK6QImage6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QImage* img, QFlags<Qt::ImageConversionFlag> flags) {
  return (bool)((QPixmap*)this_)->convertFromImage(*img, flags);
}
#endif // QT_VERSION >= 0x040700

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:149
// [32] QPixmap copy(int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap4copyEiiii(void *this_, int x, int y, int width, int height) {
  auto rv = ((QPixmap*)this_)->copy(x, y, width, height);
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:150
// [32] QPixmap copy(const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap4copyERK5QRect(void *this_, QRect* rect) {
  auto rv = ((QPixmap*)this_)->copy(*rect);
return new QPixmap(rv);
}

// Public inline Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qpixmap.h:152
// [-2] void scroll(int, int, int, int, int, int, QRegion *)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN7QPixmap6scrollEiiiiiiP7QRegion(void *this_, int dx, int dy, int x, int y, int width, int height, QRegion * exposed) {
  ((QPixmap*)this_)->scroll(dx, dy, x, y, width, height, exposed);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qpixmap.h:153
// [-2] void scroll(int, int, const QRect &, QRegion *)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN7QPixmap6scrollEiiRK5QRectP7QRegion(void *this_, int dx, int dy, QRect* rect, QRegion * exposed) {
  ((QPixmap*)this_)->scroll(dx, dy, *rect, exposed);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:158
// [8] qint64 cacheKey()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK7QPixmap8cacheKeyEv(void *this_) {
  return (qint64)((QPixmap*)this_)->cacheKey();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:160
// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QPixmap10isDetachedEv(void *this_) {
  return (bool)((QPixmap*)this_)->isDetached();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:161
// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_ZN7QPixmap6detachEv(void *this_) {
  ((QPixmap*)this_)->detach();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:163
// [1] bool isQBitmap()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QPixmap9isQBitmapEv(void *this_) {
  return (bool)((QPixmap*)this_)->isQBitmap();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:165
// [8] QPaintEngine * paintEngine()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap11paintEngineEv(void *this_) {
  return (void*)((QPixmap*)this_)->paintEngine();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:167
// [1] bool operator!()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QPixmapntEv(void *this_) {
  return (bool)((QPixmap*)this_)->operator!();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:198
// [8] QPlatformPixmap * handle()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QPixmap6handleEv(void *this_) {
  return (void*)((QPixmap*)this_)->handle();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:202
// [8] QPixmap::DataPtr & data_ptr()
extern "C" Q_DECL_EXPORT
void* C_ZN7QPixmap8data_ptrEv(void *this_) {
  auto& rv = ((QPixmap*)this_)->data_ptr();
return &rv;
}

//  main block end
