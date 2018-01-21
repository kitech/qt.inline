//  header block begin
// /usr/include/qt/QtGui/qpixmap.h
#include <qpixmap.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qpixmap.h:63
// void QPixmap()
extern "C"
void* C_ZN7QPixmapC1Ev() {
  return new QPixmap();
}
// /usr/include/qt/QtGui/qpixmap.h:64
// void QPixmap(class QPlatformPixmap *)
extern "C"
void* C_ZN7QPixmapC1EP15QPlatformPixmap(QPlatformPixmap * data) {
  return new QPixmap(data);
}
// /usr/include/qt/QtGui/qpixmap.h:65
// void QPixmap(int, int)
extern "C"
void* C_ZN7QPixmapC1Eii(int w, int h) {
  return new QPixmap(w, h);
}
// /usr/include/qt/QtGui/qpixmap.h:66
// void QPixmap(const class QSize &)
extern "C"
void* C_ZN7QPixmapC1ERK5QSize(const QSize & arg0) {
  return new QPixmap(arg0);
}
// /usr/include/qt/QtGui/qpixmap.h:67
// void QPixmap(const class QString &, const char *, Qt::ImageConversionFlags)
extern "C"
void* C_ZN7QPixmapC1ERK7QStringPKc6QFlagsIN2Qt19ImageConversionFlagEE(const QString & fileName, const char * format, QFlags<Qt::ImageConversionFlag> flags) {
  return new QPixmap(fileName, format, flags);
}
// /usr/include/qt/QtGui/qpixmap.h:69
// void QPixmap(const char *const *)
extern "C"
void* C_ZN7QPixmapC1EPKPKc(const char *const xpm []) {
  return new QPixmap(xpm);
}
// virtual
// /usr/include/qt/QtGui/qpixmap.h:72
// void ~QPixmap()
extern "C"
void C_ZN7QPixmapD1Ev(void *this_) {
  delete (QPixmap*)(this_);
}
// inline
// /usr/include/qt/QtGui/qpixmap.h:79
// void swap(class QPixmap &)
extern "C"
void C_ZN7QPixmap4swapERS_(void *this_, QPixmap & other) {
  ((QPixmap*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qpixmap.h:84
// bool isNull()
extern "C"
void C_ZNK7QPixmap6isNullEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->isNull();
}
// virtual
// /usr/include/qt/QtGui/qpixmap.h:85
// int devType()
extern "C"
void C_ZNK7QPixmap7devTypeEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->devType();
}
// /usr/include/qt/QtGui/qpixmap.h:87
// int width()
extern "C"
void C_ZNK7QPixmap5widthEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->width();
}
// /usr/include/qt/QtGui/qpixmap.h:88
// int height()
extern "C"
void C_ZNK7QPixmap6heightEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->height();
}
// /usr/include/qt/QtGui/qpixmap.h:89
// QSize size()
extern "C"
void C_ZNK7QPixmap4sizeEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->size();
}
// /usr/include/qt/QtGui/qpixmap.h:90
// QRect rect()
extern "C"
void C_ZNK7QPixmap4rectEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->rect();
}
// /usr/include/qt/QtGui/qpixmap.h:91
// int depth()
extern "C"
void C_ZNK7QPixmap5depthEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->depth();
}
// static
// /usr/include/qt/QtGui/qpixmap.h:93
// int defaultDepth()
extern "C"
void C_ZN7QPixmap12defaultDepthEv() {
  /*return*/ QPixmap::defaultDepth();
}
// /usr/include/qt/QtGui/qpixmap.h:95
// void fill(const class QColor &)
extern "C"
void C_ZN7QPixmap4fillERK6QColor(void *this_, const QColor & fillColor) {
  ((QPixmap*)this_)->fill(fillColor);
}
// /usr/include/qt/QtGui/qpixmap.h:96
// void fill(const class QPaintDevice *, const class QPoint &)
extern "C"
void C_ZN7QPixmap4fillEPK12QPaintDeviceRK6QPoint(void *this_, const QPaintDevice * device, const QPoint & ofs) {
  ((QPixmap*)this_)->fill(device, ofs);
}
// inline
// /usr/include/qt/QtGui/qpixmap.h:97
// void fill(const class QPaintDevice *, int, int)
extern "C"
void C_ZN7QPixmap4fillEPK12QPaintDeviceii(void *this_, const QPaintDevice * device, int xofs, int yofs) {
  ((QPixmap*)this_)->fill(device, xofs, yofs);
}
// /usr/include/qt/QtGui/qpixmap.h:99
// QBitmap mask()
extern "C"
void C_ZNK7QPixmap4maskEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->mask();
}
// /usr/include/qt/QtGui/qpixmap.h:100
// void setMask(const class QBitmap &)
extern "C"
void C_ZN7QPixmap7setMaskERK7QBitmap(void *this_, const QBitmap & arg0) {
  ((QPixmap*)this_)->setMask(arg0);
}
// /usr/include/qt/QtGui/qpixmap.h:102
// qreal devicePixelRatio()
extern "C"
void C_ZNK7QPixmap16devicePixelRatioEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->devicePixelRatio();
}
// /usr/include/qt/QtGui/qpixmap.h:103
// void setDevicePixelRatio(qreal)
extern "C"
void C_ZN7QPixmap19setDevicePixelRatioEd(void *this_, qreal scaleFactor) {
  ((QPixmap*)this_)->setDevicePixelRatio(scaleFactor);
}
// /usr/include/qt/QtGui/qpixmap.h:105
// bool hasAlpha()
extern "C"
void C_ZNK7QPixmap8hasAlphaEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->hasAlpha();
}
// /usr/include/qt/QtGui/qpixmap.h:106
// bool hasAlphaChannel()
extern "C"
void C_ZNK7QPixmap15hasAlphaChannelEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->hasAlphaChannel();
}
// /usr/include/qt/QtGui/qpixmap.h:109
// QBitmap createHeuristicMask(_Bool)
extern "C"
void C_ZNK7QPixmap19createHeuristicMaskEb(void *this_, bool clipTight) {
  /*return*/ ((QPixmap*)this_)->createHeuristicMask(clipTight);
}
// /usr/include/qt/QtGui/qpixmap.h:111
// QBitmap createMaskFromColor(const class QColor &, Qt::MaskMode)
extern "C"
void C_ZNK7QPixmap19createMaskFromColorERK6QColorN2Qt8MaskModeE(void *this_, const QColor & maskColor, Qt::MaskMode mode) {
  /*return*/ ((QPixmap*)this_)->createMaskFromColor(maskColor, mode);
}
// static
// /usr/include/qt/QtGui/qpixmap.h:113
// QPixmap grabWindow(WId, int, int, int, int)
extern "C"
void C_ZN7QPixmap10grabWindowEyiiii(WId arg0, int x, int y, int w, int h) {
  /*return*/ QPixmap::grabWindow(arg0, x, y, w, h);
}
// static
// /usr/include/qt/QtGui/qpixmap.h:114
// QPixmap grabWidget(class QObject *, const class QRect &)
extern "C"
void C_ZN7QPixmap10grabWidgetEP7QObjectRK5QRect(QObject * widget, const QRect & rect) {
  /*return*/ QPixmap::grabWidget(widget, rect);
}
// static inline
// /usr/include/qt/QtGui/qpixmap.h:115
// QPixmap grabWidget(class QObject *, int, int, int, int)
extern "C"
void C_ZN7QPixmap10grabWidgetEP7QObjectiiii(QObject * widget, int x, int y, int w, int h) {
  /*return*/ QPixmap::grabWidget(widget, x, y, w, h);
}
// inline
// /usr/include/qt/QtGui/qpixmap.h:118
// QPixmap scaled(int, int, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C"
void C_ZNK7QPixmap6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE(void *this_, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  /*return*/ ((QPixmap*)this_)->scaled(w, h, aspectMode, mode);
}
// /usr/include/qt/QtGui/qpixmap.h:121
// QPixmap scaled(const class QSize &, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C"
void C_ZNK7QPixmap6scaledERK5QSizeN2Qt15AspectRatioModeENS3_18TransformationModeE(void *this_, const QSize & s, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  /*return*/ ((QPixmap*)this_)->scaled(s, aspectMode, mode);
}
// /usr/include/qt/QtGui/qpixmap.h:123
// QPixmap scaledToWidth(int, Qt::TransformationMode)
extern "C"
void C_ZNK7QPixmap13scaledToWidthEiN2Qt18TransformationModeE(void *this_, int w, Qt::TransformationMode mode) {
  /*return*/ ((QPixmap*)this_)->scaledToWidth(w, mode);
}
// /usr/include/qt/QtGui/qpixmap.h:124
// QPixmap scaledToHeight(int, Qt::TransformationMode)
extern "C"
void C_ZNK7QPixmap14scaledToHeightEiN2Qt18TransformationModeE(void *this_, int h, Qt::TransformationMode mode) {
  /*return*/ ((QPixmap*)this_)->scaledToHeight(h, mode);
}
// /usr/include/qt/QtGui/qpixmap.h:125
// QPixmap transformed(const class QMatrix &, Qt::TransformationMode)
extern "C"
void C_ZNK7QPixmap11transformedERK7QMatrixN2Qt18TransformationModeE(void *this_, const QMatrix & arg0, Qt::TransformationMode mode) {
  /*return*/ ((QPixmap*)this_)->transformed(arg0, mode);
}
// static
// /usr/include/qt/QtGui/qpixmap.h:126
// QMatrix trueMatrix(const class QMatrix &, int, int)
extern "C"
void C_ZN7QPixmap10trueMatrixERK7QMatrixii(const QMatrix & m, int w, int h) {
  /*return*/ QPixmap::trueMatrix(m, w, h);
}
// /usr/include/qt/QtGui/qpixmap.h:127
// QPixmap transformed(const class QTransform &, Qt::TransformationMode)
extern "C"
void C_ZNK7QPixmap11transformedERK10QTransformN2Qt18TransformationModeE(void *this_, const QTransform & arg0, Qt::TransformationMode mode) {
  /*return*/ ((QPixmap*)this_)->transformed(arg0, mode);
}
// static
// /usr/include/qt/QtGui/qpixmap.h:128
// QTransform trueMatrix(const class QTransform &, int, int)
extern "C"
void C_ZN7QPixmap10trueMatrixERK10QTransformii(const QTransform & m, int w, int h) {
  /*return*/ QPixmap::trueMatrix(m, w, h);
}
// /usr/include/qt/QtGui/qpixmap.h:130
// QImage toImage()
extern "C"
void C_ZNK7QPixmap7toImageEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->toImage();
}
// static
// /usr/include/qt/QtGui/qpixmap.h:131
// QPixmap fromImage(const class QImage &, Qt::ImageConversionFlags)
extern "C"
void C_ZN7QPixmap9fromImageERK6QImage6QFlagsIN2Qt19ImageConversionFlagEE(const QImage & image, QFlags<Qt::ImageConversionFlag> flags) {
  /*return*/ QPixmap::fromImage(image, flags);
}
// static
// /usr/include/qt/QtGui/qpixmap.h:132
// QPixmap fromImageReader(class QImageReader *, Qt::ImageConversionFlags)
extern "C"
void C_ZN7QPixmap15fromImageReaderEP12QImageReader6QFlagsIN2Qt19ImageConversionFlagEE(QImageReader * imageReader, QFlags<Qt::ImageConversionFlag> flags) {
  /*return*/ QPixmap::fromImageReader(imageReader, flags);
}
// static inline
// /usr/include/qt/QtGui/qpixmap.h:134
// QPixmap fromImage(class QImage &&, Qt::ImageConversionFlags)
extern "C"
void C_ZN7QPixmap9fromImageEO6QImage6QFlagsIN2Qt19ImageConversionFlagEE(QImage && image, QFlags<Qt::ImageConversionFlag> flags) {
  /*return*/ QPixmap::fromImage(image, flags);
}
// /usr/include/qt/QtGui/qpixmap.h:140
// bool load(const class QString &, const char *, Qt::ImageConversionFlags)
extern "C"
void C_ZN7QPixmap4loadERK7QStringPKc6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const QString & fileName, const char * format, QFlags<Qt::ImageConversionFlag> flags) {
  /*return*/ ((QPixmap*)this_)->load(fileName, format, flags);
}
// /usr/include/qt/QtGui/qpixmap.h:141
// bool loadFromData(const uchar *, uint, const char *, Qt::ImageConversionFlags)
extern "C"
void C_ZN7QPixmap12loadFromDataEPKhjPKc6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const uchar * buf, uint len, const char * format, QFlags<Qt::ImageConversionFlag> flags) {
  /*return*/ ((QPixmap*)this_)->loadFromData(buf, len, format, flags);
}
// inline
// /usr/include/qt/QtGui/qpixmap.h:142
// bool loadFromData(const class QByteArray &, const char *, Qt::ImageConversionFlags)
extern "C"
void C_ZN7QPixmap12loadFromDataERK10QByteArrayPKc6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const QByteArray & data, const char * format, QFlags<Qt::ImageConversionFlag> flags) {
  /*return*/ ((QPixmap*)this_)->loadFromData(data, format, flags);
}
// /usr/include/qt/QtGui/qpixmap.h:143
// bool save(const class QString &, const char *, int)
extern "C"
void C_ZNK7QPixmap4saveERK7QStringPKci(void *this_, const QString & fileName, const char * format, int quality) {
  /*return*/ ((QPixmap*)this_)->save(fileName, format, quality);
}
// /usr/include/qt/QtGui/qpixmap.h:144
// bool save(class QIODevice *, const char *, int)
extern "C"
void C_ZNK7QPixmap4saveEP9QIODevicePKci(void *this_, QIODevice * device, const char * format, int quality) {
  /*return*/ ((QPixmap*)this_)->save(device, format, quality);
}
// /usr/include/qt/QtGui/qpixmap.h:146
// bool convertFromImage(const class QImage &, Qt::ImageConversionFlags)
extern "C"
void C_ZN7QPixmap16convertFromImageERK6QImage6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const QImage & img, QFlags<Qt::ImageConversionFlag> flags) {
  /*return*/ ((QPixmap*)this_)->convertFromImage(img, flags);
}
// inline
// /usr/include/qt/QtGui/qpixmap.h:148
// QPixmap copy(int, int, int, int)
extern "C"
void C_ZNK7QPixmap4copyEiiii(void *this_, int x, int y, int width, int height) {
  /*return*/ ((QPixmap*)this_)->copy(x, y, width, height);
}
// /usr/include/qt/QtGui/qpixmap.h:149
// QPixmap copy(const class QRect &)
extern "C"
void C_ZNK7QPixmap4copyERK5QRect(void *this_, const QRect & rect) {
  /*return*/ ((QPixmap*)this_)->copy(rect);
}
// inline
// /usr/include/qt/QtGui/qpixmap.h:151
// void scroll(int, int, int, int, int, int, class QRegion *)
extern "C"
void C_ZN7QPixmap6scrollEiiiiiiP7QRegion(void *this_, int dx, int dy, int x, int y, int width, int height, QRegion * exposed) {
  ((QPixmap*)this_)->scroll(dx, dy, x, y, width, height, exposed);
}
// /usr/include/qt/QtGui/qpixmap.h:152
// void scroll(int, int, const class QRect &, class QRegion *)
extern "C"
void C_ZN7QPixmap6scrollEiiRK5QRectP7QRegion(void *this_, int dx, int dy, const QRect & rect, QRegion * exposed) {
  ((QPixmap*)this_)->scroll(dx, dy, rect, exposed);
}
// /usr/include/qt/QtGui/qpixmap.h:157
// qint64 cacheKey()
extern "C"
void C_ZNK7QPixmap8cacheKeyEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->cacheKey();
}
// /usr/include/qt/QtGui/qpixmap.h:159
// bool isDetached()
extern "C"
void C_ZNK7QPixmap10isDetachedEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->isDetached();
}
// /usr/include/qt/QtGui/qpixmap.h:160
// void detach()
extern "C"
void C_ZN7QPixmap6detachEv(void *this_) {
  ((QPixmap*)this_)->detach();
}
// /usr/include/qt/QtGui/qpixmap.h:162
// bool isQBitmap()
extern "C"
void C_ZNK7QPixmap9isQBitmapEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->isQBitmap();
}
// virtual
// /usr/include/qt/QtGui/qpixmap.h:164
// QPaintEngine * paintEngine()
extern "C"
void C_ZNK7QPixmap11paintEngineEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->paintEngine();
}
// /usr/include/qt/QtGui/qpixmap.h:197
// QPlatformPixmap * handle()
extern "C"
void C_ZNK7QPixmap6handleEv(void *this_) {
  /*return*/ ((QPixmap*)this_)->handle();
}
//  main block end
