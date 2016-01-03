// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qimage.h
// dst-file: /src/gui/qimage.cxx
//

// header block begin =>
#include <qimage.h>

extern "C" {

int QImage_Class_Size()
{
  return sizeof(QImage);
}

// QImage(const class QSize &, enum QImage::Format)
QImage* dector_ZN6QImageC1ERK5QSizeNS_6FormatE(const QSize & size, QImage::Format format)
{
  // static_assert(sizeof(QImage) == 32, "tyszerr");
  QImage* rthis = new QImage(size, format);
  return rthis;
}

// QImage(int, int, enum QImage::Format)
QImage* dector_ZN6QImageC1EiiNS_6FormatE(int width, int height, QImage::Format format)
{
  // static_assert(sizeof(QImage) == 32, "tyszerr");
  QImage* rthis = new QImage(width, height, format);
  return rthis;
}

// QImage(const class QString &, const char *)
QImage* dector_ZN6QImageC1ERK7QStringPKc(const QString & fileName, const char * format)
{
  // static_assert(sizeof(QImage) == 32, "tyszerr");
  QImage* rthis = new QImage(fileName, format);
  return rthis;
}

// QImage(const class QImage &)
QImage* dector_ZN6QImageC1ERKS_(const QImage & arg1)
{
  // static_assert(sizeof(QImage) == 32, "tyszerr");
  QImage* rthis = new QImage(arg1);
  return rthis;
}

// QImage()
QImage* dector_ZN6QImageC1Ev()
{
  // static_assert(sizeof(QImage) == 32, "tyszerr");
  QImage* rthis = new QImage();
  return rthis;
}

// ~QImage()
void dedtor_ZN6QImageD0Ev(QImage* that)
{
  QImage* rthis = (QImage*)that;
  delete rthis;
}

// QImage(class QImage &&)
QImage* dector_ZN6QImageC1EOS_(QImage && other)
{
  // static_assert(sizeof(QImage) == 32, "tyszerr");
  QImage* rthis = new QImage(other);
  return rthis;
}

  // proto:  QImage QImage::mirrored(bool horizontally, bool vertically);
QImage* demth_ZNKR6QImage8mirroredEbb(void *that, bool horizontally, bool vertically)
{
  QImage *cthat = (QImage *)that;
  auto recret = cthat->mirrored(horizontally, vertically);
  return new QImage(recret);
}

  // proto:  QImage && QImage::mirrored(bool horizontally, bool vertically);
QImage && demth_ZNO6QImage8mirroredEbb(void *that, bool horizontally, bool vertically)
{
  QImage *cthat = (QImage *)that;
  return cthat->mirrored(horizontally, vertically);
}

  // proto: static QImage QImage::fromData(const QByteArray & data, const char * format);
QImage* demth_ZN6QImage8fromDataERK10QByteArrayPKc(void *that, const QByteArray & data, const char * format)
{
  QImage *cthat = (QImage *)that;
  auto recret = cthat->fromData(data, format);
  return new QImage(recret);
}

  // proto:  QImage QImage::convertToFormat(QImage::Format f, Qt::ImageConversionFlags flags);
QImage* demth_ZNO6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE(void *that, QImage::Format f, Qt::ImageConversionFlags flags)
{
  QImage *cthat = (QImage *)that;
  auto recret = cthat->convertToFormat(f, flags);
  return new QImage(recret);
}

  // proto:  QImage && QImage::rgbSwapped();
QImage && demth_ZNO6QImage10rgbSwappedEv(void *that)
{
  QImage *cthat = (QImage *)that;
  return cthat->rgbSwapped();
}

  // proto:  QRgb QImage::pixel(const QPoint & pt);
QRgb demth_ZNK6QImage5pixelERK6QPoint(void *that, const QPoint & pt)
{
  QImage *cthat = (QImage *)that;
  return cthat->pixel(pt);
}

  // proto:  QImage QImage::copy(int x, int y, int w, int h);
QImage* demth_ZNK6QImage4copyEiiii(void *that, int x, int y, int w, int h)
{
  QImage *cthat = (QImage *)that;
  auto recret = cthat->copy(x, y, w, h);
  return new QImage(recret);
}

  // proto:  QImage QImage::scaled(int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode);
QImage* demth_ZNK6QImage6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE(void *that, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode)
{
  QImage *cthat = (QImage *)that;
  auto recret = cthat->scaled(w, h, aspectMode, mode);
  return new QImage(recret);
}

  // proto:  void QImage::setPixel(const QPoint & pt, uint index_or_rgb);
void demth_ZN6QImage8setPixelERK6QPointj(void *that, const QPoint & pt, unsigned int index_or_rgb)
{
  QImage *cthat = (QImage *)that;
   cthat->setPixel(pt, index_or_rgb);
}

  // proto:  bool QImage::loadFromData(const QByteArray & data, const char * aformat);
bool demth_ZN6QImage12loadFromDataERK10QByteArrayPKc(void *that, const QByteArray & data, const char * aformat)
{
  QImage *cthat = (QImage *)that;
  return cthat->loadFromData(data, aformat);
}

  // proto:  void QImage::swap(QImage & other);
void demth_ZN6QImage4swapERS_(void *that, QImage & other)
{
  QImage *cthat = (QImage *)that;
   cthat->swap(other);
}

  // proto:  QImage QImage::convertToFormat(QImage::Format f, Qt::ImageConversionFlags flags);
QImage* demth_ZNKR6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE(void *that, QImage::Format f, Qt::ImageConversionFlags flags)
{
  QImage *cthat = (QImage *)that;
  auto recret = cthat->convertToFormat(f, flags);
  return new QImage(recret);
}

  // proto:  bool QImage::valid(const QPoint & pt);
bool demth_ZNK6QImage5validERK6QPoint(void *that, const QPoint & pt)
{
  QImage *cthat = (QImage *)that;
  return cthat->valid(pt);
}

  // proto:  int QImage::pixelIndex(const QPoint & pt);
int demth_ZNK6QImage10pixelIndexERK6QPoint(void *that, const QPoint & pt)
{
  QImage *cthat = (QImage *)that;
  return cthat->pixelIndex(pt);
}

  // proto:  void QImage::QImage(QImage && other);
void demth_ZN6QImageC1EOS_(void *that, QImage && other)
{
  QImage *cthat = (QImage *)that;
  auto _o = new(that) QImage(other);
}

  // proto:  QImage QImage::rgbSwapped();
QImage* demth_ZNKR6QImage10rgbSwappedEv(void *that)
{
  QImage *cthat = (QImage *)that;
  auto recret = cthat->rgbSwapped();
  return new QImage(recret);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

