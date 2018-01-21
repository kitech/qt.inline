//  header block begin
// /usr/include/qt/QtGui/qimage.h
#include <qimage.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qimage.h:131
// void QImage()
extern "C"
void* C_ZN6QImageC1Ev() {
  return new QImage();
}
// /usr/include/qt/QtGui/qimage.h:132
// void QImage(const class QSize &, enum QImage::Format)
extern "C"
void* C_ZN6QImageC1ERK5QSizeNS_6FormatE(const QSize & size, QImage::Format format) {
  return new QImage(size, format);
}
// /usr/include/qt/QtGui/qimage.h:133
// void QImage(int, int, enum QImage::Format)
extern "C"
void* C_ZN6QImageC1EiiNS_6FormatE(int width, int height, QImage::Format format) {
  return new QImage(width, height, format);
}
// /usr/include/qt/QtGui/qimage.h:140
// void QImage(const char *const *)
extern "C"
void* C_ZN6QImageC1EPKPKc(const char *const xpm []) {
  return new QImage(xpm);
}
// /usr/include/qt/QtGui/qimage.h:142
// void QImage(const class QString &, const char *)
extern "C"
void* C_ZN6QImageC1ERK7QStringPKc(const QString & fileName, const char * format) {
  return new QImage(fileName, format);
}
// virtual
// /usr/include/qt/QtGui/qimage.h:150
// void ~QImage()
extern "C"
void C_ZN6QImageD1Ev(void *this_) {
  delete (QImage*)(this_);
}
// inline
// /usr/include/qt/QtGui/qimage.h:157
// void swap(class QImage &)
extern "C"
void C_ZN6QImage4swapERS_(void *this_, QImage & other) {
  ((QImage*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qimage.h:160
// bool isNull()
extern "C"
void C_ZNK6QImage6isNullEv(void *this_) {
  /*return*/ ((QImage*)this_)->isNull();
}
// virtual
// /usr/include/qt/QtGui/qimage.h:162
// int devType()
extern "C"
void C_ZNK6QImage7devTypeEv(void *this_) {
  /*return*/ ((QImage*)this_)->devType();
}
// /usr/include/qt/QtGui/qimage.h:167
// void detach()
extern "C"
void C_ZN6QImage6detachEv(void *this_) {
  ((QImage*)this_)->detach();
}
// /usr/include/qt/QtGui/qimage.h:168
// bool isDetached()
extern "C"
void C_ZNK6QImage10isDetachedEv(void *this_) {
  /*return*/ ((QImage*)this_)->isDetached();
}
// /usr/include/qt/QtGui/qimage.h:170
// QImage copy(const class QRect &)
extern "C"
void C_ZNK6QImage4copyERK5QRect(void *this_, const QRect & rect) {
  /*return*/ ((QImage*)this_)->copy(rect);
}
// inline
// /usr/include/qt/QtGui/qimage.h:171
// QImage copy(int, int, int, int)
extern "C"
void C_ZNK6QImage4copyEiiii(void *this_, int x, int y, int w, int h) {
  /*return*/ ((QImage*)this_)->copy(x, y, w, h);
}
// /usr/include/qt/QtGui/qimage.h:174
// QImage::Format format()
extern "C"
void C_ZNK6QImage6formatEv(void *this_) {
  /*return*/ ((QImage*)this_)->format();
}
// inline
// /usr/include/qt/QtGui/qimage.h:177
// QImage convertToFormat(enum QImage::Format, Qt::ImageConversionFlags)
extern "C"
void C_ZNKR6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QImage::Format f, QFlags<Qt::ImageConversionFlag> flags) {
  /*return*/ ((QImage*)this_)->convertToFormat(f, flags);
}
// inline
// /usr/include/qt/QtGui/qimage.h:179
// QImage convertToFormat(enum QImage::Format, Qt::ImageConversionFlags)
extern "C"
void C_ZNO6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QImage::Format f, QFlags<Qt::ImageConversionFlag> flags) {
  /*return*/ ((QImage*)this_)->convertToFormat(f, flags);
}
// /usr/include/qt/QtGui/qimage.h:189
// QImage convertToFormat(enum QImage::Format, const QVector<QRgb> &, Qt::ImageConversionFlags)
extern "C"
void C_ZNK6QImage15convertToFormatENS_6FormatERK7QVectorIjE6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QImage::Format f, const QVector<QRgb> & colorTable, QFlags<Qt::ImageConversionFlag> flags) {
  /*return*/ ((QImage*)this_)->convertToFormat(f, colorTable, flags);
}
// /usr/include/qt/QtGui/qimage.h:191
// int width()
extern "C"
void C_ZNK6QImage5widthEv(void *this_) {
  /*return*/ ((QImage*)this_)->width();
}
// /usr/include/qt/QtGui/qimage.h:192
// int height()
extern "C"
void C_ZNK6QImage6heightEv(void *this_) {
  /*return*/ ((QImage*)this_)->height();
}
// /usr/include/qt/QtGui/qimage.h:193
// QSize size()
extern "C"
void C_ZNK6QImage4sizeEv(void *this_) {
  /*return*/ ((QImage*)this_)->size();
}
// /usr/include/qt/QtGui/qimage.h:194
// QRect rect()
extern "C"
void C_ZNK6QImage4rectEv(void *this_) {
  /*return*/ ((QImage*)this_)->rect();
}
// /usr/include/qt/QtGui/qimage.h:196
// int depth()
extern "C"
void C_ZNK6QImage5depthEv(void *this_) {
  /*return*/ ((QImage*)this_)->depth();
}
// /usr/include/qt/QtGui/qimage.h:197
// int colorCount()
extern "C"
void C_ZNK6QImage10colorCountEv(void *this_) {
  /*return*/ ((QImage*)this_)->colorCount();
}
// /usr/include/qt/QtGui/qimage.h:198
// int bitPlaneCount()
extern "C"
void C_ZNK6QImage13bitPlaneCountEv(void *this_) {
  /*return*/ ((QImage*)this_)->bitPlaneCount();
}
// /usr/include/qt/QtGui/qimage.h:200
// QRgb color(int)
extern "C"
void C_ZNK6QImage5colorEi(void *this_, int i) {
  /*return*/ ((QImage*)this_)->color(i);
}
// /usr/include/qt/QtGui/qimage.h:201
// void setColor(int, QRgb)
extern "C"
void C_ZN6QImage8setColorEij(void *this_, int i, QRgb c) {
  ((QImage*)this_)->setColor(i, c);
}
// /usr/include/qt/QtGui/qimage.h:202
// void setColorCount(int)
extern "C"
void C_ZN6QImage13setColorCountEi(void *this_, int arg0) {
  ((QImage*)this_)->setColorCount(arg0);
}
// /usr/include/qt/QtGui/qimage.h:204
// bool allGray()
extern "C"
void C_ZNK6QImage7allGrayEv(void *this_) {
  /*return*/ ((QImage*)this_)->allGray();
}
// /usr/include/qt/QtGui/qimage.h:205
// bool isGrayscale()
extern "C"
void C_ZNK6QImage11isGrayscaleEv(void *this_) {
  /*return*/ ((QImage*)this_)->isGrayscale();
}
// /usr/include/qt/QtGui/qimage.h:207
// uchar * bits()
extern "C"
void C_ZN6QImage4bitsEv(void *this_) {
  /*return*/ ((QImage*)this_)->bits();
}
// /usr/include/qt/QtGui/qimage.h:208
// const uchar * bits()
extern "C"
void C_ZNK6QImage4bitsEv(void *this_) {
  /*return*/ ((QImage*)this_)->bits();
}
// /usr/include/qt/QtGui/qimage.h:209
// const uchar * constBits()
extern "C"
void C_ZNK6QImage9constBitsEv(void *this_) {
  /*return*/ ((QImage*)this_)->constBits();
}
// /usr/include/qt/QtGui/qimage.h:211
// int byteCount()
extern "C"
void C_ZNK6QImage9byteCountEv(void *this_) {
  /*return*/ ((QImage*)this_)->byteCount();
}
// /usr/include/qt/QtGui/qimage.h:213
// uchar * scanLine(int)
extern "C"
void C_ZN6QImage8scanLineEi(void *this_, int arg0) {
  /*return*/ ((QImage*)this_)->scanLine(arg0);
}
// /usr/include/qt/QtGui/qimage.h:214
// const uchar * scanLine(int)
extern "C"
void C_ZNK6QImage8scanLineEi(void *this_, int arg0) {
  /*return*/ ((QImage*)this_)->scanLine(arg0);
}
// /usr/include/qt/QtGui/qimage.h:215
// const uchar * constScanLine(int)
extern "C"
void C_ZNK6QImage13constScanLineEi(void *this_, int arg0) {
  /*return*/ ((QImage*)this_)->constScanLine(arg0);
}
// /usr/include/qt/QtGui/qimage.h:216
// int bytesPerLine()
extern "C"
void C_ZNK6QImage12bytesPerLineEv(void *this_) {
  /*return*/ ((QImage*)this_)->bytesPerLine();
}
// /usr/include/qt/QtGui/qimage.h:218
// bool valid(int, int)
extern "C"
void C_ZNK6QImage5validEii(void *this_, int x, int y) {
  /*return*/ ((QImage*)this_)->valid(x, y);
}
// /usr/include/qt/QtGui/qimage.h:219
// bool valid(const class QPoint &)
extern "C"
void C_ZNK6QImage5validERK6QPoint(void *this_, const QPoint & pt) {
  /*return*/ ((QImage*)this_)->valid(pt);
}
// /usr/include/qt/QtGui/qimage.h:221
// int pixelIndex(int, int)
extern "C"
void C_ZNK6QImage10pixelIndexEii(void *this_, int x, int y) {
  /*return*/ ((QImage*)this_)->pixelIndex(x, y);
}
// /usr/include/qt/QtGui/qimage.h:222
// int pixelIndex(const class QPoint &)
extern "C"
void C_ZNK6QImage10pixelIndexERK6QPoint(void *this_, const QPoint & pt) {
  /*return*/ ((QImage*)this_)->pixelIndex(pt);
}
// /usr/include/qt/QtGui/qimage.h:224
// QRgb pixel(int, int)
extern "C"
void C_ZNK6QImage5pixelEii(void *this_, int x, int y) {
  /*return*/ ((QImage*)this_)->pixel(x, y);
}
// /usr/include/qt/QtGui/qimage.h:225
// QRgb pixel(const class QPoint &)
extern "C"
void C_ZNK6QImage5pixelERK6QPoint(void *this_, const QPoint & pt) {
  /*return*/ ((QImage*)this_)->pixel(pt);
}
// /usr/include/qt/QtGui/qimage.h:227
// void setPixel(int, int, uint)
extern "C"
void C_ZN6QImage8setPixelEiij(void *this_, int x, int y, uint index_or_rgb) {
  ((QImage*)this_)->setPixel(x, y, index_or_rgb);
}
// /usr/include/qt/QtGui/qimage.h:228
// void setPixel(const class QPoint &, uint)
extern "C"
void C_ZN6QImage8setPixelERK6QPointj(void *this_, const QPoint & pt, uint index_or_rgb) {
  ((QImage*)this_)->setPixel(pt, index_or_rgb);
}
// /usr/include/qt/QtGui/qimage.h:230
// QColor pixelColor(int, int)
extern "C"
void C_ZNK6QImage10pixelColorEii(void *this_, int x, int y) {
  /*return*/ ((QImage*)this_)->pixelColor(x, y);
}
// /usr/include/qt/QtGui/qimage.h:231
// QColor pixelColor(const class QPoint &)
extern "C"
void C_ZNK6QImage10pixelColorERK6QPoint(void *this_, const QPoint & pt) {
  /*return*/ ((QImage*)this_)->pixelColor(pt);
}
// /usr/include/qt/QtGui/qimage.h:233
// void setPixelColor(int, int, const class QColor &)
extern "C"
void C_ZN6QImage13setPixelColorEiiRK6QColor(void *this_, int x, int y, const QColor & c) {
  ((QImage*)this_)->setPixelColor(x, y, c);
}
// /usr/include/qt/QtGui/qimage.h:234
// void setPixelColor(const class QPoint &, const class QColor &)
extern "C"
void C_ZN6QImage13setPixelColorERK6QPointRK6QColor(void *this_, const QPoint & pt, const QColor & c) {
  ((QImage*)this_)->setPixelColor(pt, c);
}
// /usr/include/qt/QtGui/qimage.h:236
// QVector<QRgb> colorTable()
extern "C"
void C_ZNK6QImage10colorTableEv(void *this_) {
  /*return*/ ((QImage*)this_)->colorTable();
}
// /usr/include/qt/QtGui/qimage.h:240
// void setColorTable(const QVector<QRgb>)
extern "C"
void C_ZN6QImage13setColorTableE7QVectorIjE(void *this_, const QVector<QRgb> colors) {
  ((QImage*)this_)->setColorTable(colors);
}
// /usr/include/qt/QtGui/qimage.h:243
// qreal devicePixelRatio()
extern "C"
void C_ZNK6QImage16devicePixelRatioEv(void *this_) {
  /*return*/ ((QImage*)this_)->devicePixelRatio();
}
// /usr/include/qt/QtGui/qimage.h:244
// void setDevicePixelRatio(qreal)
extern "C"
void C_ZN6QImage19setDevicePixelRatioEd(void *this_, qreal scaleFactor) {
  ((QImage*)this_)->setDevicePixelRatio(scaleFactor);
}
// /usr/include/qt/QtGui/qimage.h:246
// void fill(uint)
extern "C"
void C_ZN6QImage4fillEj(void *this_, uint pixel) {
  ((QImage*)this_)->fill(pixel);
}
// /usr/include/qt/QtGui/qimage.h:247
// void fill(const class QColor &)
extern "C"
void C_ZN6QImage4fillERK6QColor(void *this_, const QColor & color) {
  ((QImage*)this_)->fill(color);
}
// /usr/include/qt/QtGui/qimage.h:248
// void fill(Qt::GlobalColor)
extern "C"
void C_ZN6QImage4fillEN2Qt11GlobalColorE(void *this_, Qt::GlobalColor color) {
  ((QImage*)this_)->fill(color);
}
// /usr/include/qt/QtGui/qimage.h:251
// bool hasAlphaChannel()
extern "C"
void C_ZNK6QImage15hasAlphaChannelEv(void *this_) {
  /*return*/ ((QImage*)this_)->hasAlphaChannel();
}
// /usr/include/qt/QtGui/qimage.h:252
// void setAlphaChannel(const class QImage &)
extern "C"
void C_ZN6QImage15setAlphaChannelERKS_(void *this_, const QImage & alphaChannel) {
  ((QImage*)this_)->setAlphaChannel(alphaChannel);
}
// /usr/include/qt/QtGui/qimage.h:253
// QImage alphaChannel()
extern "C"
void C_ZNK6QImage12alphaChannelEv(void *this_) {
  /*return*/ ((QImage*)this_)->alphaChannel();
}
// /usr/include/qt/QtGui/qimage.h:254
// QImage createAlphaMask(Qt::ImageConversionFlags)
extern "C"
void C_ZNK6QImage15createAlphaMaskE6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QFlags<Qt::ImageConversionFlag> flags) {
  /*return*/ ((QImage*)this_)->createAlphaMask(flags);
}
// /usr/include/qt/QtGui/qimage.h:256
// QImage createHeuristicMask(_Bool)
extern "C"
void C_ZNK6QImage19createHeuristicMaskEb(void *this_, bool clipTight) {
  /*return*/ ((QImage*)this_)->createHeuristicMask(clipTight);
}
// /usr/include/qt/QtGui/qimage.h:258
// QImage createMaskFromColor(QRgb, Qt::MaskMode)
extern "C"
void C_ZNK6QImage19createMaskFromColorEjN2Qt8MaskModeE(void *this_, QRgb color, Qt::MaskMode mode) {
  /*return*/ ((QImage*)this_)->createMaskFromColor(color, mode);
}
// inline
// /usr/include/qt/QtGui/qimage.h:260
// QImage scaled(int, int, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C"
void C_ZNK6QImage6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE(void *this_, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  /*return*/ ((QImage*)this_)->scaled(w, h, aspectMode, mode);
}
// /usr/include/qt/QtGui/qimage.h:263
// QImage scaled(const class QSize &, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C"
void C_ZNK6QImage6scaledERK5QSizeN2Qt15AspectRatioModeENS3_18TransformationModeE(void *this_, const QSize & s, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) {
  /*return*/ ((QImage*)this_)->scaled(s, aspectMode, mode);
}
// /usr/include/qt/QtGui/qimage.h:265
// QImage scaledToWidth(int, Qt::TransformationMode)
extern "C"
void C_ZNK6QImage13scaledToWidthEiN2Qt18TransformationModeE(void *this_, int w, Qt::TransformationMode mode) {
  /*return*/ ((QImage*)this_)->scaledToWidth(w, mode);
}
// /usr/include/qt/QtGui/qimage.h:266
// QImage scaledToHeight(int, Qt::TransformationMode)
extern "C"
void C_ZNK6QImage14scaledToHeightEiN2Qt18TransformationModeE(void *this_, int h, Qt::TransformationMode mode) {
  /*return*/ ((QImage*)this_)->scaledToHeight(h, mode);
}
// /usr/include/qt/QtGui/qimage.h:267
// QImage transformed(const class QMatrix &, Qt::TransformationMode)
extern "C"
void C_ZNK6QImage11transformedERK7QMatrixN2Qt18TransformationModeE(void *this_, const QMatrix & matrix, Qt::TransformationMode mode) {
  /*return*/ ((QImage*)this_)->transformed(matrix, mode);
}
// static
// /usr/include/qt/QtGui/qimage.h:268
// QMatrix trueMatrix(const class QMatrix &, int, int)
extern "C"
void C_ZN6QImage10trueMatrixERK7QMatrixii(const QMatrix & arg0, int w, int h) {
  /*return*/ QImage::trueMatrix(arg0, w, h);
}
// /usr/include/qt/QtGui/qimage.h:269
// QImage transformed(const class QTransform &, Qt::TransformationMode)
extern "C"
void C_ZNK6QImage11transformedERK10QTransformN2Qt18TransformationModeE(void *this_, const QTransform & matrix, Qt::TransformationMode mode) {
  /*return*/ ((QImage*)this_)->transformed(matrix, mode);
}
// static
// /usr/include/qt/QtGui/qimage.h:270
// QTransform trueMatrix(const class QTransform &, int, int)
extern "C"
void C_ZN6QImage10trueMatrixERK10QTransformii(const QTransform & arg0, int w, int h) {
  /*return*/ QImage::trueMatrix(arg0, w, h);
}
// inline
// /usr/include/qt/QtGui/qimage.h:272
// QImage mirrored(_Bool, _Bool)
extern "C"
void C_ZNKR6QImage8mirroredEbb(void *this_, bool horizontally, bool vertically) {
  /*return*/ ((QImage*)this_)->mirrored(horizontally, vertically);
}
// inline
// /usr/include/qt/QtGui/qimage.h:274
// QImage && mirrored(_Bool, _Bool)
extern "C"
void C_ZNO6QImage8mirroredEbb(void *this_, bool horizontally, bool vertically) {
  /*return*/ ((QImage*)this_)->mirrored(horizontally, vertically);
}
// inline
// /usr/include/qt/QtGui/qimage.h:276
// QImage rgbSwapped()
extern "C"
void C_ZNKR6QImage10rgbSwappedEv(void *this_) {
  /*return*/ ((QImage*)this_)->rgbSwapped();
}
// inline
// /usr/include/qt/QtGui/qimage.h:278
// QImage && rgbSwapped()
extern "C"
void C_ZNO6QImage10rgbSwappedEv(void *this_) {
  /*return*/ ((QImage*)this_)->rgbSwapped();
}
// /usr/include/qt/QtGui/qimage.h:284
// void invertPixels(enum QImage::InvertMode)
extern "C"
void C_ZN6QImage12invertPixelsENS_10InvertModeE(void *this_, QImage::InvertMode arg0) {
  ((QImage*)this_)->invertPixels(arg0);
}
// /usr/include/qt/QtGui/qimage.h:287
// bool load(class QIODevice *, const char *)
extern "C"
void C_ZN6QImage4loadEP9QIODevicePKc(void *this_, QIODevice * device, const char * format) {
  /*return*/ ((QImage*)this_)->load(device, format);
}
// /usr/include/qt/QtGui/qimage.h:288
// bool load(const class QString &, const char *)
extern "C"
void C_ZN6QImage4loadERK7QStringPKc(void *this_, const QString & fileName, const char * format) {
  /*return*/ ((QImage*)this_)->load(fileName, format);
}
// /usr/include/qt/QtGui/qimage.h:289
// bool loadFromData(const uchar *, int, const char *)
extern "C"
void C_ZN6QImage12loadFromDataEPKhiPKc(void *this_, const uchar * buf, int len, const char * format) {
  /*return*/ ((QImage*)this_)->loadFromData(buf, len, format);
}
// inline
// /usr/include/qt/QtGui/qimage.h:290
// bool loadFromData(const class QByteArray &, const char *)
extern "C"
void C_ZN6QImage12loadFromDataERK10QByteArrayPKc(void *this_, const QByteArray & data, const char * aformat) {
  /*return*/ ((QImage*)this_)->loadFromData(data, aformat);
}
// /usr/include/qt/QtGui/qimage.h:293
// bool save(const class QString &, const char *, int)
extern "C"
void C_ZNK6QImage4saveERK7QStringPKci(void *this_, const QString & fileName, const char * format, int quality) {
  /*return*/ ((QImage*)this_)->save(fileName, format, quality);
}
// /usr/include/qt/QtGui/qimage.h:294
// bool save(class QIODevice *, const char *, int)
extern "C"
void C_ZNK6QImage4saveEP9QIODevicePKci(void *this_, QIODevice * device, const char * format, int quality) {
  /*return*/ ((QImage*)this_)->save(device, format, quality);
}
// static
// /usr/include/qt/QtGui/qimage.h:296
// QImage fromData(const uchar *, int, const char *)
extern "C"
void C_ZN6QImage8fromDataEPKhiPKc(const uchar * data, int size, const char * format) {
  /*return*/ QImage::fromData(data, size, format);
}
// static inline
// /usr/include/qt/QtGui/qimage.h:297
// QImage fromData(const class QByteArray &, const char *)
extern "C"
void C_ZN6QImage8fromDataERK10QByteArrayPKc(const QByteArray & data, const char * format) {
  /*return*/ QImage::fromData(data, format);
}
// /usr/include/qt/QtGui/qimage.h:303
// qint64 cacheKey()
extern "C"
void C_ZNK6QImage8cacheKeyEv(void *this_) {
  /*return*/ ((QImage*)this_)->cacheKey();
}
// virtual
// /usr/include/qt/QtGui/qimage.h:305
// QPaintEngine * paintEngine()
extern "C"
void C_ZNK6QImage11paintEngineEv(void *this_) {
  /*return*/ ((QImage*)this_)->paintEngine();
}
// /usr/include/qt/QtGui/qimage.h:308
// int dotsPerMeterX()
extern "C"
void C_ZNK6QImage13dotsPerMeterXEv(void *this_) {
  /*return*/ ((QImage*)this_)->dotsPerMeterX();
}
// /usr/include/qt/QtGui/qimage.h:309
// int dotsPerMeterY()
extern "C"
void C_ZNK6QImage13dotsPerMeterYEv(void *this_) {
  /*return*/ ((QImage*)this_)->dotsPerMeterY();
}
// /usr/include/qt/QtGui/qimage.h:310
// void setDotsPerMeterX(int)
extern "C"
void C_ZN6QImage16setDotsPerMeterXEi(void *this_, int arg0) {
  ((QImage*)this_)->setDotsPerMeterX(arg0);
}
// /usr/include/qt/QtGui/qimage.h:311
// void setDotsPerMeterY(int)
extern "C"
void C_ZN6QImage16setDotsPerMeterYEi(void *this_, int arg0) {
  ((QImage*)this_)->setDotsPerMeterY(arg0);
}
// /usr/include/qt/QtGui/qimage.h:312
// QPoint offset()
extern "C"
void C_ZNK6QImage6offsetEv(void *this_) {
  /*return*/ ((QImage*)this_)->offset();
}
// /usr/include/qt/QtGui/qimage.h:313
// void setOffset(const class QPoint &)
extern "C"
void C_ZN6QImage9setOffsetERK6QPoint(void *this_, const QPoint & arg0) {
  ((QImage*)this_)->setOffset(arg0);
}
// /usr/include/qt/QtGui/qimage.h:315
// QStringList textKeys()
extern "C"
void C_ZNK6QImage8textKeysEv(void *this_) {
  /*return*/ ((QImage*)this_)->textKeys();
}
// /usr/include/qt/QtGui/qimage.h:316
// QString text(const class QString &)
extern "C"
void C_ZNK6QImage4textERK7QString(void *this_, const QString & key) {
  /*return*/ ((QImage*)this_)->text(key);
}
// /usr/include/qt/QtGui/qimage.h:317
// void setText(const class QString &, const class QString &)
extern "C"
void C_ZN6QImage7setTextERK7QStringS2_(void *this_, const QString & key, const QString & value) {
  ((QImage*)this_)->setText(key, value);
}
// /usr/include/qt/QtGui/qimage.h:319
// QPixelFormat pixelFormat()
extern "C"
void C_ZNK6QImage11pixelFormatEv(void *this_) {
  /*return*/ ((QImage*)this_)->pixelFormat();
}
// static
// /usr/include/qt/QtGui/qimage.h:320
// QPixelFormat toPixelFormat(class QImage::Format)
extern "C"
void C_ZN6QImage13toPixelFormatENS_6FormatE(QImage::Format format) {
  /*return*/ QImage::toPixelFormat(format);
}
// static
// /usr/include/qt/QtGui/qimage.h:321
// QImage::Format toImageFormat(class QPixelFormat)
extern "C"
void C_ZN6QImage13toImageFormatE12QPixelFormat(QPixelFormat format) {
  /*return*/ QImage::toImageFormat(format);
}
//  main block end
