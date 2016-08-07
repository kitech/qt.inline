// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qimage.h
// dst-file: /src/gui/qimage.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qimage.h>


#include <qtransform.h>
#include <qpixelformat.h>
#include <qstring.h>
#include <qrect.h>
#include <qmatrix.h>
#include <qrgb.h>
#include <qcolor.h>
#include <qpoint.h>
#include <qstringlist.h>
#include <qglobal.h>
#include <qvector.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qimage_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 272, column 12>
//   // proto:  QImage QImage::mirrored(bool horizontally, bool vertically);
if (true) {
  auto f = [](QImage flythis, bool arg1, bool arg2) {
    ((QImage*)0)->mirrored(arg1, arg2);
    flythis.mirrored(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNKR6QImage8mirroredEbb mirrored(_Bool, _Bool)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 274, column 14>
//   // proto:  QImage && QImage::mirrored(bool horizontally, bool vertically);
if (true) {
  auto f = [](QImage flythis, bool arg1, bool arg2) {
    ((QImage*)0)->mirrored(arg1, arg2);
    flythis.mirrored(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNO6QImage8mirroredEbb mirrored(_Bool, _Bool)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 297, column 26>
//   // proto: static QImage QImage::fromData(const QByteArray & data, const char * format);
if (true) {
  auto f = [](QImage flythis, const QByteArray & arg1, const char * arg2) {
    ((QImage*)0)->fromData(arg1, arg2);
    flythis.fromData(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN6QImage8fromDataERK10QByteArrayPKc fromData(const class QByteArray &, const char *)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 179, column 28>
//   // proto:  QImage QImage::convertToFormat(QImage::Format f, Qt::ImageConversionFlags flags);
if (true) {
  auto f = [](QImage flythis, QImage::Format arg1, Qt::ImageConversionFlags arg2) {
    ((QImage*)0)->convertToFormat(arg1, arg2);
    flythis.convertToFormat(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNO6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE convertToFormat(enum QImage::Format, Qt::ImageConversionFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 234, column 10>
//   // proto:  void QImage::setPixelColor(const QPoint & pt, const QColor & c);
if (true) {
  auto f = [](QImage flythis, const QPoint & arg1, const QColor & arg2) {
    ((QImage*)0)->setPixelColor(arg1, arg2);
    flythis.setPixelColor(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN6QImage13setPixelColorERK6QPointRK6QColor setPixelColor(const class QPoint &, const class QColor &)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 278, column 14>
//   // proto:  QImage && QImage::rgbSwapped();
if (true) {
  auto f = [](QImage flythis) {
    ((QImage*)0)->rgbSwapped();
    flythis.rgbSwapped();
  };
  if (f == nullptr){}
}
// _ZNO6QImage10rgbSwappedEv rgbSwapped()
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 225, column 10>
//   // proto:  QRgb QImage::pixel(const QPoint & pt);
if (true) {
  auto f = [](QImage flythis, const QPoint & arg1) {
    ((QImage*)0)->pixel(arg1);
    flythis.pixel(arg1);
  };
  if (f == nullptr){}
}
// _ZNK6QImage5pixelERK6QPoint pixel(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 231, column 12>
//   // proto:  QColor QImage::pixelColor(const QPoint & pt);
if (true) {
  auto f = [](QImage flythis, const QPoint & arg1) {
    ((QImage*)0)->pixelColor(arg1);
    flythis.pixelColor(arg1);
  };
  if (f == nullptr){}
}
// _ZNK6QImage10pixelColorERK6QPoint pixelColor(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 171, column 19>
//   // proto:  QImage QImage::copy(int x, int y, int w, int h);
if (true) {
  auto f = [](QImage flythis, int arg1, int arg2, int arg3, int arg4) {
    ((QImage*)0)->copy(arg1, arg2, arg3, arg4);
    flythis.copy(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK6QImage4copyEiiii copy(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 260, column 19>
//   // proto:  QImage QImage::scaled(int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode);
if (true) {
  auto f = [](QImage flythis, int arg1, int arg2, Qt::AspectRatioMode arg3, Qt::TransformationMode arg4) {
    ((QImage*)0)->scaled(arg1, arg2, arg3, arg4);
    flythis.scaled(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK6QImage6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE scaled(int, int, Qt::AspectRatioMode, Qt::TransformationMode)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 228, column 10>
//   // proto:  void QImage::setPixel(const QPoint & pt, uint index_or_rgb);
if (true) {
  auto f = [](QImage flythis, const QPoint & arg1, uint arg2) {
    ((QImage*)0)->setPixel(arg1, arg2);
    flythis.setPixel(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN6QImage8setPixelERK6QPointj setPixel(const class QPoint &, uint)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 177, column 28>
//   // proto:  QImage QImage::convertToFormat(QImage::Format f, Qt::ImageConversionFlags flags);
if (true) {
  auto f = [](QImage flythis, QImage::Format arg1, Qt::ImageConversionFlags arg2) {
    ((QImage*)0)->convertToFormat(arg1, arg2);
    flythis.convertToFormat(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNKR6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE convertToFormat(enum QImage::Format, Qt::ImageConversionFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 290, column 17>
//   // proto:  bool QImage::loadFromData(const QByteArray & data, const char * aformat);
if (true) {
  auto f = [](QImage flythis, const QByteArray & arg1, const char * arg2) {
    ((QImage*)0)->loadFromData(arg1, arg2);
    flythis.loadFromData(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN6QImage12loadFromDataERK10QByteArrayPKc loadFromData(const class QByteArray &, const char *)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 157, column 17>
//   // proto:  void QImage::swap(QImage & other);
if (true) {
  auto f = [](QImage flythis, QImage & arg1) {
    ((QImage*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN6QImage4swapERS_ swap(class QImage &)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 219, column 10>
//   // proto:  bool QImage::valid(const QPoint & pt);
if (true) {
  auto f = [](QImage flythis, const QPoint & arg1) {
    ((QImage*)0)->valid(arg1);
    flythis.valid(arg1);
  };
  if (f == nullptr){}
}
// _ZNK6QImage5validERK6QPoint valid(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 222, column 9>
//   // proto:  int QImage::pixelIndex(const QPoint & pt);
if (true) {
  auto f = [](QImage flythis, const QPoint & arg1) {
    ((QImage*)0)->pixelIndex(arg1);
    flythis.pixelIndex(arg1);
  };
  if (f == nullptr){}
}
// _ZNK6QImage10pixelIndexERK6QPoint pixelIndex(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 146, column 12>
//   // proto:  void QImage::QImage(QImage && other);
if (true) {
  auto f = [](QImage && arg1) {
    new QImage(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 276, column 12>
//   // proto:  QImage QImage::rgbSwapped();
if (true) {
  auto f = [](QImage flythis) {
    ((QImage*)0)->rgbSwapped();
    flythis.rgbSwapped();
  };
  if (f == nullptr){}
}
// _ZNKR6QImage10rgbSwappedEv rgbSwapped()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QImage_Class_Size()
{
  return sizeof(QImage);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 170, column 12>
//   // proto:  QImage QImage::copy(const QRect & rect);
// _ZNK6QImage4copyERK5QRect copy(const class QRect &)
extern "C"
QImage*
C_ZNK6QImage4copyERK5QRect(void *qthis,
const QRect* arg1) {
  auto ret =
  ((QImage*)qthis)->copy(*((const QRect*)arg1));
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 270, column 23>
//   // proto: static QTransform QImage::trueMatrix(const QTransform & , int w, int h);
// _ZN6QImage10trueMatrixERK10QTransformii trueMatrix(const class QTransform &, int, int)
extern "C"
QTransform*
C_ZN6QImage10trueMatrixERK10QTransformii(const QTransform* arg1,
int arg2,
int arg3) {
  auto ret =
  QImage::trueMatrix(*((const QTransform*)arg1),
arg2,
arg3);
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 132, column 5>
//   // proto:  void QImage::QImage(const QSize & size, QImage::Format format);
extern "C"
QImage*
C_ZN6QImageC2ERK5QSizeNS_6FormatE(const QSize* arg1,
QImage::Format arg2) {
  auto ret = new QImage(*((const QSize*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 254, column 12>
//   // proto:  QImage QImage::createAlphaMask(Qt::ImageConversionFlags flags);
// _ZNK6QImage15createAlphaMaskE6QFlagsIN2Qt19ImageConversionFlagEE createAlphaMask(Qt::ImageConversionFlags)
extern "C"
QImage*
C_ZNK6QImage15createAlphaMaskE6QFlagsIN2Qt19ImageConversionFlagEE(void *qthis,
Qt::ImageConversionFlags* arg1) {
  auto ret =
  ((QImage*)qthis)->createAlphaMask(*((Qt::ImageConversionFlags*)arg1));
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 320, column 25>
//   // proto: static QPixelFormat QImage::toPixelFormat(QImage::Format format);
// _ZN6QImage13toPixelFormatENS_6FormatE toPixelFormat(class QImage::Format)
extern "C"
QPixelFormat*
C_ZN6QImage13toPixelFormatENS_6FormatE(QImage::Format* arg1) {
  auto ret =
  QImage::toPixelFormat(*((QImage::Format*)arg1));
  return new QPixelFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 207, column 12>
//   // proto:  uchar * QImage::bits();
// _ZN6QImage4bitsEv bits()
extern "C"
void*
C_ZN6QImage4bitsEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->bits();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 252, column 10>
//   // proto:  void QImage::setAlphaChannel(const QImage & alphaChannel);
// _ZN6QImage15setAlphaChannelERKS_ setAlphaChannel(const class QImage &)
extern "C"
void
C_ZN6QImage15setAlphaChannelERKS_(void *qthis,
const QImage* arg1) {
  ((QImage*)qthis)->setAlphaChannel(*((const QImage*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 316, column 13>
//   // proto:  QString QImage::text(const QString & key);
// _ZNK6QImage4textERK7QString text(const class QString &)
extern "C"
QString*
C_ZNK6QImage4textERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QImage*)qthis)->text(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 194, column 11>
//   // proto:  QRect QImage::rect();
// _ZNK6QImage4rectEv rect()
extern "C"
QRect*
C_ZNK6QImage4rectEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->rect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 272, column 12>
//   // proto:  QImage QImage::mirrored(bool horizontally, bool vertically);
// _ZNKR6QImage8mirroredEbb mirrored(_Bool, _Bool)
extern "C"
QImage*
C_ZNKR6QImage8mirroredEbb(void *qthis,
bool arg1,
bool arg2) {
  auto ret =
  ((QImage*)qthis)->mirrored(arg1,
arg2);
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 140, column 14>
//   // proto:  void QImage::QImage(const char *const [] xpm);
extern "C"
QImage*
C_ZN6QImageC2EPKPKc(const char *const arg1[]) {
  auto ret = new QImage(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 256, column 12>
//   // proto:  QImage QImage::createHeuristicMask(bool clipTight);
// _ZNK6QImage19createHeuristicMaskEb createHeuristicMask(_Bool)
extern "C"
QImage*
C_ZNK6QImage19createHeuristicMaskEb(void *qthis,
bool arg1) {
  auto ret =
  ((QImage*)qthis)->createHeuristicMask(arg1);
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 209, column 18>
//   // proto:  const uchar * QImage::constBits();
// _ZNK6QImage9constBitsEv constBits()
extern "C"
void*
C_ZNK6QImage9constBitsEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->constBits();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 136, column 5>
//   // proto:  void QImage::QImage(uchar * data, int width, int height, int bytesPerLine, QImage::Format format, QImageCleanupFunction cleanupFunction, void * cleanupInfo);
extern "C"
QImage*
C_ZN6QImageC2EPhiiiNS_6FormatEPFvPvES2_(uchar * arg1,
int arg2,
int arg3,
int arg4,
QImage::Format arg5,
QImageCleanupFunction arg6,
void * arg7) {
  auto ret = new QImage(arg1,
arg2,
arg3,
arg4,
arg5,
arg6,
arg7);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 274, column 14>
//   // proto:  QImage && QImage::mirrored(bool horizontally, bool vertically);
// _ZNO6QImage8mirroredEbb mirrored(_Bool, _Bool)
extern "C"
QImage*
C_ZNO6QImage8mirroredEbb(void *qthis,
bool arg1,
bool arg2) {
  auto ret =
  ((QImage*)qthis)->mirrored(arg1,
arg2);
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 297, column 26>
//   // proto: static QImage QImage::fromData(const QByteArray & data, const char * format);
// _ZN6QImage8fromDataERK10QByteArrayPKc fromData(const class QByteArray &, const char *)
extern "C"
QImage*
C_ZN6QImage8fromDataERK10QByteArrayPKc(const QByteArray* arg1,
const char * arg2) {
  auto ret =
  QImage::fromData(*((const QByteArray*)arg1),
arg2);
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 296, column 19>
//   // proto: static QImage QImage::fromData(const uchar * data, int size, const char * format);
// _ZN6QImage8fromDataEPKhiPKc fromData(const uchar *, int, const char *)
extern "C"
QImage*
C_ZN6QImage8fromDataEPKhiPKc(const uchar * arg1,
int arg2,
const char * arg3) {
  auto ret =
  QImage::fromData(arg1,
arg2,
arg3);
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 168, column 10>
//   // proto:  bool QImage::isDetached();
// _ZNK6QImage10isDetachedEv isDetached()
extern "C"
bool
C_ZNK6QImage10isDetachedEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->isDetached();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 179, column 28>
//   // proto:  QImage QImage::convertToFormat(QImage::Format f, Qt::ImageConversionFlags flags);
// _ZNO6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE convertToFormat(enum QImage::Format, Qt::ImageConversionFlags)
extern "C"
QImage*
C_ZNO6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE(void *qthis,
QImage::Format arg1,
Qt::ImageConversionFlags* arg2) {
  auto ret =
  ((QImage*)qthis)->convertToFormat(arg1,
*((Qt::ImageConversionFlags*)arg2));
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 313, column 10>
//   // proto:  void QImage::setOffset(const QPoint & );
// _ZN6QImage9setOffsetERK6QPoint setOffset(const class QPoint &)
extern "C"
void
C_ZN6QImage9setOffsetERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QImage*)qthis)->setOffset(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 268, column 20>
//   // proto: static QMatrix QImage::trueMatrix(const QMatrix & , int w, int h);
// _ZN6QImage10trueMatrixERK7QMatrixii trueMatrix(const class QMatrix &, int, int)
extern "C"
QMatrix*
C_ZN6QImage10trueMatrixERK7QMatrixii(const QMatrix* arg1,
int arg2,
int arg3) {
  auto ret =
  QImage::trueMatrix(*((const QMatrix*)arg1),
arg2,
arg3);
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 134, column 5>
//   // proto:  void QImage::QImage(uchar * data, int width, int height, QImage::Format format, QImageCleanupFunction cleanupFunction, void * cleanupInfo);
extern "C"
QImage*
C_ZN6QImageC2EPhiiNS_6FormatEPFvPvES2_(uchar * arg1,
int arg2,
int arg3,
QImage::Format arg4,
QImageCleanupFunction arg5,
void * arg6) {
  auto ret = new QImage(arg1,
arg2,
arg3,
arg4,
arg5,
arg6);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 266, column 12>
//   // proto:  QImage QImage::scaledToHeight(int h, Qt::TransformationMode mode);
// _ZNK6QImage14scaledToHeightEiN2Qt18TransformationModeE scaledToHeight(int, Qt::TransformationMode)
extern "C"
QImage*
C_ZNK6QImage14scaledToHeightEiN2Qt18TransformationModeE(void *qthis,
int arg1,
Qt::TransformationMode* arg2) {
  auto ret =
  ((QImage*)qthis)->scaledToHeight(arg1,
*((Qt::TransformationMode*)arg2));
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 205, column 10>
//   // proto:  bool QImage::isGrayscale();
// _ZNK6QImage11isGrayscaleEv isGrayscale()
extern "C"
bool
C_ZNK6QImage11isGrayscaleEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->isGrayscale();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 234, column 10>
//   // proto:  void QImage::setPixelColor(const QPoint & pt, const QColor & c);
// _ZN6QImage13setPixelColorERK6QPointRK6QColor setPixelColor(const class QPoint &, const class QColor &)
extern "C"
void
C_ZN6QImage13setPixelColorERK6QPointRK6QColor(void *qthis,
const QPoint* arg1,
const QColor* arg2) {
  ((QImage*)qthis)->setPixelColor(*((const QPoint*)arg1),
*((const QColor*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 294, column 10>
//   // proto:  bool QImage::save(QIODevice * device, const char * format, int quality);
// _ZNK6QImage4saveEP9QIODevicePKci save(class QIODevice *, const char *, int)
extern "C"
bool
C_ZNK6QImage4saveEP9QIODevicePKci(void *qthis,
QIODevice * arg1,
const char * arg2,
int arg3) {
  auto ret =
  ((QImage*)qthis)->save(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 196, column 9>
//   // proto:  int QImage::depth();
// _ZNK6QImage5depthEv depth()
extern "C"
int
C_ZNK6QImage5depthEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->depth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 253, column 12>
//   // proto:  QImage QImage::alphaChannel();
// _ZNK6QImage12alphaChannelEv alphaChannel()
extern "C"
QImage*
C_ZNK6QImage12alphaChannelEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->alphaChannel();
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 251, column 10>
//   // proto:  bool QImage::hasAlphaChannel();
// _ZNK6QImage15hasAlphaChannelEv hasAlphaChannel()
extern "C"
bool
C_ZNK6QImage15hasAlphaChannelEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->hasAlphaChannel();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 289, column 10>
//   // proto:  bool QImage::loadFromData(const uchar * buf, int len, const char * format);
// _ZN6QImage12loadFromDataEPKhiPKc loadFromData(const uchar *, int, const char *)
extern "C"
bool
C_ZN6QImage12loadFromDataEPKhiPKc(void *qthis,
const uchar * arg1,
int arg2,
const char * arg3) {
  auto ret =
  ((QImage*)qthis)->loadFromData(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 278, column 14>
//   // proto:  QImage && QImage::rgbSwapped();
// _ZNO6QImage10rgbSwappedEv rgbSwapped()
extern "C"
QImage*
C_ZNO6QImage10rgbSwappedEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->rgbSwapped();
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 197, column 9>
//   // proto:  int QImage::colorCount();
// _ZNK6QImage10colorCountEv colorCount()
extern "C"
int
C_ZNK6QImage10colorCountEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->colorCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 204, column 10>
//   // proto:  bool QImage::allGray();
// _ZNK6QImage7allGrayEv allGray()
extern "C"
bool
C_ZNK6QImage7allGrayEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->allGray();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 202, column 10>
//   // proto:  void QImage::setColorCount(int );
// _ZN6QImage13setColorCountEi setColorCount(int)
extern "C"
void
C_ZN6QImage13setColorCountEi(void *qthis,
int arg1) {
  ((QImage*)qthis)->setColorCount(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 225, column 10>
//   // proto:  QRgb QImage::pixel(const QPoint & pt);
// _ZNK6QImage5pixelERK6QPoint pixel(const class QPoint &)
extern "C"
unsigned int
C_ZNK6QImage5pixelERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QImage*)qthis)->pixel(*((const QPoint*)arg1));
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 244, column 10>
//   // proto:  void QImage::setDevicePixelRatio(qreal scaleFactor);
// _ZN6QImage19setDevicePixelRatioEd setDevicePixelRatio(qreal)
extern "C"
void
C_ZN6QImage19setDevicePixelRatioEd(void *qthis,
qreal arg1) {
  ((QImage*)qthis)->setDevicePixelRatio(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 231, column 12>
//   // proto:  QColor QImage::pixelColor(const QPoint & pt);
// _ZNK6QImage10pixelColorERK6QPoint pixelColor(const class QPoint &)
extern "C"
QColor*
C_ZNK6QImage10pixelColorERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QImage*)qthis)->pixelColor(*((const QPoint*)arg1));
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 171, column 19>
//   // proto:  QImage QImage::copy(int x, int y, int w, int h);
// _ZNK6QImage4copyEiiii copy(int, int, int, int)
extern "C"
QImage*
C_ZNK6QImage4copyEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  auto ret =
  ((QImage*)qthis)->copy(arg1,
arg2,
arg3,
arg4);
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 317, column 10>
//   // proto:  void QImage::setText(const QString & key, const QString & value);
// _ZN6QImage7setTextERK7QStringS2_ setText(const class QString &, const class QString &)
extern "C"
void
C_ZN6QImage7setTextERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  ((QImage*)qthis)->setText(*((const QString*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 200, column 10>
//   // proto:  QRgb QImage::color(int i);
// _ZNK6QImage5colorEi color(int)
extern "C"
unsigned int
C_ZNK6QImage5colorEi(void *qthis,
int arg1) {
  auto ret =
  ((QImage*)qthis)->color(arg1);
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 260, column 19>
//   // proto:  QImage QImage::scaled(int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode);
// _ZNK6QImage6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE scaled(int, int, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C"
QImage*
C_ZNK6QImage6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE(void *qthis,
int arg1,
int arg2,
Qt::AspectRatioMode* arg3,
Qt::TransformationMode* arg4) {
  auto ret =
  ((QImage*)qthis)->scaled(arg1,
arg2,
*((Qt::AspectRatioMode*)arg3),
*((Qt::TransformationMode*)arg4));
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 228, column 10>
//   // proto:  void QImage::setPixel(const QPoint & pt, uint index_or_rgb);
// _ZN6QImage8setPixelERK6QPointj setPixel(const class QPoint &, uint)
extern "C"
void
C_ZN6QImage8setPixelERK6QPointj(void *qthis,
const QPoint* arg1,
uint arg2) {
  ((QImage*)qthis)->setPixel(*((const QPoint*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 135, column 5>
//   // proto:  void QImage::QImage(const uchar * data, int width, int height, QImage::Format format, QImageCleanupFunction cleanupFunction, void * cleanupInfo);
extern "C"
QImage*
C_ZN6QImageC2EPKhiiNS_6FormatEPFvPvES3_(const uchar * arg1,
int arg2,
int arg3,
QImage::Format arg4,
QImageCleanupFunction arg5,
void * arg6) {
  auto ret = new QImage(arg1,
arg2,
arg3,
arg4,
arg5,
arg6);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 312, column 12>
//   // proto:  QPoint QImage::offset();
// _ZNK6QImage6offsetEv offset()
extern "C"
QPoint*
C_ZNK6QImage6offsetEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->offset();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 215, column 18>
//   // proto:  const uchar * QImage::constScanLine(int );
// _ZNK6QImage13constScanLineEi constScanLine(int)
extern "C"
void*
C_ZNK6QImage13constScanLineEi(void *qthis,
int arg1) {
  auto ret =
  ((QImage*)qthis)->constScanLine(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 315, column 17>
//   // proto:  QStringList QImage::textKeys();
// _ZNK6QImage8textKeysEv textKeys()
extern "C"
QStringList*
C_ZNK6QImage8textKeysEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->textKeys();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 309, column 9>
//   // proto:  int QImage::dotsPerMeterY();
// _ZNK6QImage13dotsPerMeterYEv dotsPerMeterY()
extern "C"
int
C_ZNK6QImage13dotsPerMeterYEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->dotsPerMeterY();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 263, column 12>
//   // proto:  QImage QImage::scaled(const QSize & s, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode);
// _ZNK6QImage6scaledERK5QSizeN2Qt15AspectRatioModeENS3_18TransformationModeE scaled(const class QSize &, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C"
QImage*
C_ZNK6QImage6scaledERK5QSizeN2Qt15AspectRatioModeENS3_18TransformationModeE(void *qthis,
const QSize* arg1,
Qt::AspectRatioMode* arg2,
Qt::TransformationMode* arg3) {
  auto ret =
  ((QImage*)qthis)->scaled(*((const QSize*)arg1),
*((Qt::AspectRatioMode*)arg2),
*((Qt::TransformationMode*)arg3));
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 288, column 10>
//   // proto:  bool QImage::load(const QString & fileName, const char * format);
// _ZN6QImage4loadERK7QStringPKc load(const class QString &, const char *)
extern "C"
bool
C_ZN6QImage4loadERK7QStringPKc(void *qthis,
const QString* arg1,
const char * arg2) {
  auto ret =
  ((QImage*)qthis)->load(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 246, column 10>
//   // proto:  void QImage::fill(uint pixel);
// _ZN6QImage4fillEj fill(uint)
extern "C"
void
C_ZN6QImage4fillEj(void *qthis,
uint arg1) {
  ((QImage*)qthis)->fill(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 174, column 12>
//   // proto:  QImage::Format QImage::format();
// _ZNK6QImage6formatEv format()
extern "C"
QImage::Format
C_ZNK6QImage6formatEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->format();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 319, column 18>
//   // proto:  QPixelFormat QImage::pixelFormat();
// _ZNK6QImage11pixelFormatEv pixelFormat()
extern "C"
QPixelFormat*
C_ZNK6QImage11pixelFormatEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->pixelFormat();
  return new QPixelFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 269, column 12>
//   // proto:  QImage QImage::transformed(const QTransform & matrix, Qt::TransformationMode mode);
// _ZNK6QImage11transformedERK10QTransformN2Qt18TransformationModeE transformed(const class QTransform &, Qt::TransformationMode)
extern "C"
QImage*
C_ZNK6QImage11transformedERK10QTransformN2Qt18TransformationModeE(void *qthis,
const QTransform* arg1,
Qt::TransformationMode* arg2) {
  auto ret =
  ((QImage*)qthis)->transformed(*((const QTransform*)arg1),
*((Qt::TransformationMode*)arg2));
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 308, column 9>
//   // proto:  int QImage::dotsPerMeterX();
// _ZNK6QImage13dotsPerMeterXEv dotsPerMeterX()
extern "C"
int
C_ZNK6QImage13dotsPerMeterXEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->dotsPerMeterX();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 311, column 10>
//   // proto:  void QImage::setDotsPerMeterY(int );
// _ZN6QImage16setDotsPerMeterYEi setDotsPerMeterY(int)
extern "C"
void
C_ZN6QImage16setDotsPerMeterYEi(void *qthis,
int arg1) {
  ((QImage*)qthis)->setDotsPerMeterY(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 133, column 5>
//   // proto:  void QImage::QImage(int width, int height, QImage::Format format);
extern "C"
QImage*
C_ZN6QImageC2EiiNS_6FormatE(int arg1,
int arg2,
QImage::Format arg3) {
  auto ret = new QImage(arg1,
arg2,
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 177, column 28>
//   // proto:  QImage QImage::convertToFormat(QImage::Format f, Qt::ImageConversionFlags flags);
// _ZNKR6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE convertToFormat(enum QImage::Format, Qt::ImageConversionFlags)
extern "C"
QImage*
C_ZNKR6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE(void *qthis,
QImage::Format arg1,
Qt::ImageConversionFlags* arg2) {
  auto ret =
  ((QImage*)qthis)->convertToFormat(arg1,
*((Qt::ImageConversionFlags*)arg2));
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 247, column 10>
//   // proto:  void QImage::fill(const QColor & color);
// _ZN6QImage4fillERK6QColor fill(const class QColor &)
extern "C"
void
C_ZN6QImage4fillERK6QColor(void *qthis,
const QColor* arg1) {
  ((QImage*)qthis)->fill(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 137, column 5>
//   // proto:  void QImage::QImage(const uchar * data, int width, int height, int bytesPerLine, QImage::Format format, QImageCleanupFunction cleanupFunction, void * cleanupInfo);
extern "C"
QImage*
C_ZN6QImageC2EPKhiiiNS_6FormatEPFvPvES3_(const uchar * arg1,
int arg2,
int arg3,
int arg4,
QImage::Format arg5,
QImageCleanupFunction arg6,
void * arg7) {
  auto ret = new QImage(arg1,
arg2,
arg3,
arg4,
arg5,
arg6,
arg7);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 167, column 10>
//   // proto:  void QImage::detach();
// _ZN6QImage6detachEv detach()
extern "C"
void
C_ZN6QImage6detachEv(void *qthis) {
  ((QImage*)qthis)->detach();
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 290, column 17>
//   // proto:  bool QImage::loadFromData(const QByteArray & data, const char * aformat);
// _ZN6QImage12loadFromDataERK10QByteArrayPKc loadFromData(const class QByteArray &, const char *)
extern "C"
bool
C_ZN6QImage12loadFromDataERK10QByteArrayPKc(void *qthis,
const QByteArray* arg1,
const char * arg2) {
  auto ret =
  ((QImage*)qthis)->loadFromData(*((const QByteArray*)arg1),
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 142, column 14>
//   // proto:  void QImage::QImage(const QString & fileName, const char * format);
extern "C"
QImage*
C_ZN6QImageC2ERK7QStringPKc(const QString* arg1,
const char * arg2) {
  auto ret = new QImage(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 305, column 19>
//   // proto:  QPaintEngine * QImage::paintEngine();
// _ZNK6QImage11paintEngineEv paintEngine()
extern "C"
void*
C_ZNK6QImage11paintEngineEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->paintEngine();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 267, column 12>
//   // proto:  QImage QImage::transformed(const QMatrix & matrix, Qt::TransformationMode mode);
// _ZNK6QImage11transformedERK7QMatrixN2Qt18TransformationModeE transformed(const class QMatrix &, Qt::TransformationMode)
extern "C"
QImage*
C_ZNK6QImage11transformedERK7QMatrixN2Qt18TransformationModeE(void *qthis,
const QMatrix* arg1,
Qt::TransformationMode* arg2) {
  auto ret =
  ((QImage*)qthis)->transformed(*((const QMatrix*)arg1),
*((Qt::TransformationMode*)arg2));
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 144, column 5>
//   // proto:  void QImage::QImage(const QImage & );
extern "C"
QImage*
C_ZN6QImageC2ERKS_(const QImage* arg1) {
  auto ret = new QImage(*((const QImage*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 284, column 10>
//   // proto:  void QImage::invertPixels(QImage::InvertMode );
// _ZN6QImage12invertPixelsENS_10InvertModeE invertPixels(enum QImage::InvertMode)
extern "C"
void
C_ZN6QImage12invertPixelsENS_10InvertModeE(void *qthis,
QImage::InvertMode arg1) {
  ((QImage*)qthis)->invertPixels(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 157, column 17>
//   // proto:  void QImage::swap(QImage & other);
// _ZN6QImage4swapERS_ swap(class QImage &)
extern "C"
void
C_ZN6QImage4swapERS_(void *qthis,
QImage* arg1) {
  ((QImage*)qthis)->swap(*((QImage*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 243, column 11>
//   // proto:  qreal QImage::devicePixelRatio();
// _ZNK6QImage16devicePixelRatioEv devicePixelRatio()
extern "C"
double
C_ZNK6QImage16devicePixelRatioEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->devicePixelRatio();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 162, column 9>
//   // proto:  int QImage::devType();
// _ZNK6QImage7devTypeEv devType()
extern "C"
int
C_ZNK6QImage7devTypeEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->devType();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 265, column 12>
//   // proto:  QImage QImage::scaledToWidth(int w, Qt::TransformationMode mode);
// _ZNK6QImage13scaledToWidthEiN2Qt18TransformationModeE scaledToWidth(int, Qt::TransformationMode)
extern "C"
QImage*
C_ZNK6QImage13scaledToWidthEiN2Qt18TransformationModeE(void *qthis,
int arg1,
Qt::TransformationMode* arg2) {
  auto ret =
  ((QImage*)qthis)->scaledToWidth(arg1,
*((Qt::TransformationMode*)arg2));
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 214, column 18>
//   // proto:  const uchar * QImage::scanLine(int );
// _ZNK6QImage8scanLineEi scanLine(int)
extern "C"
void*
C_ZNK6QImage8scanLineEi(void *qthis,
int arg1) {
  auto ret =
  ((QImage*)qthis)->scanLine(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 219, column 10>
//   // proto:  bool QImage::valid(const QPoint & pt);
// _ZNK6QImage5validERK6QPoint valid(const class QPoint &)
extern "C"
bool
C_ZNK6QImage5validERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QImage*)qthis)->valid(*((const QPoint*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 222, column 9>
//   // proto:  int QImage::pixelIndex(const QPoint & pt);
// _ZNK6QImage10pixelIndexERK6QPoint pixelIndex(const class QPoint &)
extern "C"
int
C_ZNK6QImage10pixelIndexERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QImage*)qthis)->pixelIndex(*((const QPoint*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 310, column 10>
//   // proto:  void QImage::setDotsPerMeterX(int );
// _ZN6QImage16setDotsPerMeterXEi setDotsPerMeterX(int)
extern "C"
void
C_ZN6QImage16setDotsPerMeterXEi(void *qthis,
int arg1) {
  ((QImage*)qthis)->setDotsPerMeterX(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 227, column 10>
//   // proto:  void QImage::setPixel(int x, int y, uint index_or_rgb);
// _ZN6QImage8setPixelEiij setPixel(int, int, uint)
extern "C"
void
C_ZN6QImage8setPixelEiij(void *qthis,
int arg1,
int arg2,
uint arg3) {
  ((QImage*)qthis)->setPixel(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 198, column 9>
//   // proto:  int QImage::bitPlaneCount();
// _ZNK6QImage13bitPlaneCountEv bitPlaneCount()
extern "C"
int
C_ZNK6QImage13bitPlaneCountEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->bitPlaneCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 236, column 19>
//   // proto:  QVector<QRgb> QImage::colorTable();
// _ZNK6QImage10colorTableEv colorTable()
extern "C"
QVector<unsigned int>*
C_ZNK6QImage10colorTableEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->colorTable();
  return new QVector<unsigned int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 233, column 10>
//   // proto:  void QImage::setPixelColor(int x, int y, const QColor & c);
// _ZN6QImage13setPixelColorEiiRK6QColor setPixelColor(int, int, const class QColor &)
extern "C"
void
C_ZN6QImage13setPixelColorEiiRK6QColor(void *qthis,
int arg1,
int arg2,
const QColor* arg3) {
  ((QImage*)qthis)->setPixelColor(arg1,
arg2,
*((const QColor*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 193, column 11>
//   // proto:  QSize QImage::size();
// _ZNK6QImage4sizeEv size()
extern "C"
QSize*
C_ZNK6QImage4sizeEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->size();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 189, column 12>
//   // proto:  QImage QImage::convertToFormat(QImage::Format f, const QVector<QRgb> & colorTable, Qt::ImageConversionFlags flags);
// _ZNK6QImage15convertToFormatENS_6FormatERK7QVectorIjE6QFlagsIN2Qt19ImageConversionFlagEE convertToFormat(enum QImage::Format, const QVector<QRgb> &, Qt::ImageConversionFlags)
extern "C"
QImage*
C_ZNK6QImage15convertToFormatENS_6FormatERK7QVectorIjE6QFlagsIN2Qt19ImageConversionFlagEE(void *qthis,
QImage::Format arg1,
const QVector<QRgb>* arg2,
Qt::ImageConversionFlags* arg3) {
  auto ret =
  ((QImage*)qthis)->convertToFormat(arg1,
*((const QVector<QRgb>*)arg2),
*((Qt::ImageConversionFlags*)arg3));
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 192, column 9>
//   // proto:  int QImage::height();
// _ZNK6QImage6heightEv height()
extern "C"
int
C_ZNK6QImage6heightEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->height();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 258, column 12>
//   // proto:  QImage QImage::createMaskFromColor(QRgb color, Qt::MaskMode mode);
// _ZNK6QImage19createMaskFromColorEjN2Qt8MaskModeE createMaskFromColor(QRgb, Qt::MaskMode)
extern "C"
QImage*
C_ZNK6QImage19createMaskFromColorEjN2Qt8MaskModeE(void *qthis,
QRgb arg1,
Qt::MaskMode* arg2) {
  auto ret =
  ((QImage*)qthis)->createMaskFromColor(arg1,
*((Qt::MaskMode*)arg2));
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 208, column 18>
//   // proto:  const uchar * QImage::bits();
// _ZNK6QImage4bitsEv bits()
extern "C"
void*
C_ZNK6QImage4bitsEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->bits();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 221, column 9>
//   // proto:  int QImage::pixelIndex(int x, int y);
// _ZNK6QImage10pixelIndexEii pixelIndex(int, int)
extern "C"
int
C_ZNK6QImage10pixelIndexEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QImage*)qthis)->pixelIndex(arg1,
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 191, column 9>
//   // proto:  int QImage::width();
// _ZNK6QImage5widthEv width()
extern "C"
int
C_ZNK6QImage5widthEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->width();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 287, column 10>
//   // proto:  bool QImage::load(QIODevice * device, const char * format);
// _ZN6QImage4loadEP9QIODevicePKc load(class QIODevice *, const char *)
extern "C"
bool
C_ZN6QImage4loadEP9QIODevicePKc(void *qthis,
QIODevice * arg1,
const char * arg2) {
  auto ret =
  ((QImage*)qthis)->load(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 131, column 5>
//   // proto:  void QImage::QImage();
extern "C"
QImage*
C_ZN6QImageC2Ev() {
  auto ret = new QImage();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 213, column 12>
//   // proto:  uchar * QImage::scanLine(int );
// _ZN6QImage8scanLineEi scanLine(int)
extern "C"
void*
C_ZN6QImage8scanLineEi(void *qthis,
int arg1) {
  auto ret =
  ((QImage*)qthis)->scanLine(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 216, column 9>
//   // proto:  int QImage::bytesPerLine();
// _ZNK6QImage12bytesPerLineEv bytesPerLine()
extern "C"
int
C_ZNK6QImage12bytesPerLineEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->bytesPerLine();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 303, column 12>
//   // proto:  qint64 QImage::cacheKey();
// _ZNK6QImage8cacheKeyEv cacheKey()
extern "C"
long long
C_ZNK6QImage8cacheKeyEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->cacheKey();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 224, column 10>
//   // proto:  QRgb QImage::pixel(int x, int y);
// _ZNK6QImage5pixelEii pixel(int, int)
extern "C"
unsigned int
C_ZNK6QImage5pixelEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QImage*)qthis)->pixel(arg1,
arg2);
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 230, column 12>
//   // proto:  QColor QImage::pixelColor(int x, int y);
// _ZNK6QImage10pixelColorEii pixelColor(int, int)
extern "C"
QColor*
C_ZNK6QImage10pixelColorEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QImage*)qthis)->pixelColor(arg1,
arg2);
  return new QColor(ret); // 5
}
//   // proto:  void QImage::~QImage();
extern "C"
void C_ZN6QImageD2Ev(void *qthis) {
  delete (QImage*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 293, column 10>
//   // proto:  bool QImage::save(const QString & fileName, const char * format, int quality);
// _ZNK6QImage4saveERK7QStringPKci save(const class QString &, const char *, int)
extern "C"
bool
C_ZNK6QImage4saveERK7QStringPKci(void *qthis,
const QString* arg1,
const char * arg2,
int arg3) {
  auto ret =
  ((QImage*)qthis)->save(*((const QString*)arg1),
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 146, column 12>
//   // proto:  void QImage::QImage(QImage && other);
extern "C"
QImage*
C_ZN6QImageC2EOS_(QImage* arg1) {
  auto ret = new QImage(*((QImage*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 201, column 10>
//   // proto:  void QImage::setColor(int i, QRgb c);
// _ZN6QImage8setColorEij setColor(int, QRgb)
extern "C"
void
C_ZN6QImage8setColorEij(void *qthis,
int arg1,
QRgb arg2) {
  ((QImage*)qthis)->setColor(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 160, column 10>
//   // proto:  bool QImage::isNull();
// _ZNK6QImage6isNullEv isNull()
extern "C"
bool
C_ZNK6QImage6isNullEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 240, column 10>
//   // proto:  void QImage::setColorTable(const QVector<QRgb> colors);
// _ZN6QImage13setColorTableE7QVectorIjE setColorTable(const QVector<QRgb>)
extern "C"
void
C_ZN6QImage13setColorTableE7QVectorIjE(void *qthis,
const QVector<QRgb>* arg1) {
  ((QImage*)qthis)->setColorTable(*((const QVector<QRgb>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 211, column 9>
//   // proto:  int QImage::byteCount();
// _ZNK6QImage9byteCountEv byteCount()
extern "C"
int
C_ZNK6QImage9byteCountEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->byteCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 248, column 10>
//   // proto:  void QImage::fill(Qt::GlobalColor color);
// _ZN6QImage4fillEN2Qt11GlobalColorE fill(Qt::GlobalColor)
extern "C"
void
C_ZN6QImage4fillEN2Qt11GlobalColorE(void *qthis,
Qt::GlobalColor* arg1) {
  ((QImage*)qthis)->fill(*((Qt::GlobalColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 218, column 10>
//   // proto:  bool QImage::valid(int x, int y);
// _ZNK6QImage5validEii valid(int, int)
extern "C"
bool
C_ZNK6QImage5validEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QImage*)qthis)->valid(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 321, column 27>
//   // proto: static QImage::Format QImage::toImageFormat(QPixelFormat format);
// _ZN6QImage13toImageFormatE12QPixelFormat toImageFormat(class QPixelFormat)
extern "C"
QImage::Format
C_ZN6QImage13toImageFormatE12QPixelFormat(QPixelFormat* arg1) {
  auto ret =
  QImage::toImageFormat(*((QPixelFormat*)arg1));
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 276, column 12>
//   // proto:  QImage QImage::rgbSwapped();
// _ZNKR6QImage10rgbSwappedEv rgbSwapped()
extern "C"
QImage*
C_ZNKR6QImage10rgbSwappedEv(void *qthis) {
  auto ret =
  ((QImage*)qthis)->rgbSwapped();
  return new QImage(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

