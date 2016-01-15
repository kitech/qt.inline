#include <qrgb.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qimage.h
// dst-file: /src/gui/qimage.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qimage.h>

extern "C" {

int QImage_Class_Size()
{
  return sizeof(QImage);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qimage_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 259, column 12>
//   // proto:  QImage QImage::mirrored(bool horizontally, bool vertically);
if (false) {
  auto f = [](bool arg1, bool arg2) {
    ((QImage*)0)->mirrored(arg1, arg2);
  };
}
// _ZNKR6QImage8mirroredEbb mirrored(_Bool, _Bool)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 261, column 14>
//   // proto:  QImage && QImage::mirrored(bool horizontally, bool vertically);
if (false) {
  auto f = [](bool arg1, bool arg2) {
    ((QImage*)0)->mirrored(arg1, arg2);
  };
}
// _ZNO6QImage8mirroredEbb mirrored(_Bool, _Bool)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 284, column 26>
//   // proto: static QImage QImage::fromData(const QByteArray & data, const char * format);
if (false) {
  auto f = [](const QByteArray & arg1, const char * arg2) {
    ((QImage*)0)->fromData(arg1, arg2);
  };
}
// _ZN6QImage8fromDataERK10QByteArrayPKc fromData(const class QByteArray &, const char *)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 172, column 12>
//   // proto:  QImage QImage::convertToFormat(QImage::Format f, Qt::ImageConversionFlags flags);
if (false) {
  auto f = [](QImage::Format arg1, Qt::ImageConversionFlags arg2) {
    ((QImage*)0)->convertToFormat(arg1, arg2);
  };
}
// _ZNO6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE convertToFormat(enum QImage::Format, Qt::ImageConversionFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 265, column 14>
//   // proto:  QImage && QImage::rgbSwapped();
if (false) {
  auto f = []() {
    ((QImage*)0)->rgbSwapped();
  };
}
// _ZNO6QImage10rgbSwappedEv rgbSwapped()
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 218, column 10>
//   // proto:  QRgb QImage::pixel(const QPoint & pt);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QImage*)0)->pixel(arg1);
  };
}
// _ZNK6QImage5pixelERK6QPoint pixel(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 164, column 19>
//   // proto:  QImage QImage::copy(int x, int y, int w, int h);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    ((QImage*)0)->copy(arg1, arg2, arg3, arg4);
  };
}
// _ZNK6QImage4copyEiiii copy(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 247, column 19>
//   // proto:  QImage QImage::scaled(int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode);
if (false) {
  auto f = [](int arg1, int arg2, Qt::AspectRatioMode arg3, Qt::TransformationMode arg4) {
    ((QImage*)0)->scaled(arg1, arg2, arg3, arg4);
  };
}
// _ZNK6QImage6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE scaled(int, int, Qt::AspectRatioMode, Qt::TransformationMode)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 344, column 21>
//   // proto:  DataPtr & QImage::data_ptr();
if (false) {
  auto f = []() {
    ((QImage*)0)->data_ptr();
  };
}
// _ZN6QImage8data_ptrEv data_ptr()
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 221, column 10>
//   // proto:  void QImage::setPixel(const QPoint & pt, uint index_or_rgb);
if (false) {
  auto f = [](const QPoint & arg1, uint arg2) {
    ((QImage*)0)->setPixel(arg1, arg2);
  };
}
// _ZN6QImage8setPixelERK6QPointj setPixel(const class QPoint &, uint)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 277, column 17>
//   // proto:  bool QImage::loadFromData(const QByteArray & data, const char * aformat);
if (false) {
  auto f = [](const QByteArray & arg1, const char * arg2) {
    ((QImage*)0)->loadFromData(arg1, arg2);
  };
}
// _ZN6QImage12loadFromDataERK10QByteArrayPKc loadFromData(const class QByteArray &, const char *)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 150, column 17>
//   // proto:  void QImage::swap(QImage & other);
if (false) {
  auto f = [](QImage & arg1) {
    ((QImage*)0)->swap(arg1);
  };
}
// _ZN6QImage4swapERS_ swap(class QImage &)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 170, column 12>
//   // proto:  QImage QImage::convertToFormat(QImage::Format f, Qt::ImageConversionFlags flags);
if (false) {
  auto f = [](QImage::Format arg1, Qt::ImageConversionFlags arg2) {
    ((QImage*)0)->convertToFormat(arg1, arg2);
  };
}
// _ZNKR6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE convertToFormat(enum QImage::Format, Qt::ImageConversionFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 212, column 10>
//   // proto:  bool QImage::valid(const QPoint & pt);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QImage*)0)->valid(arg1);
  };
}
// _ZNK6QImage5validERK6QPoint valid(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 215, column 9>
//   // proto:  int QImage::pixelIndex(const QPoint & pt);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QImage*)0)->pixelIndex(arg1);
  };
}
// _ZNK6QImage10pixelIndexERK6QPoint pixelIndex(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 139, column 12>
//   // proto:  void QImage::QImage(QImage && other);
if (false) {
  auto f = [](QImage && arg1) {
    new QImage(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qimage.h', line 263, column 12>
//   // proto:  QImage QImage::rgbSwapped();
if (false) {
  auto f = []() {
    ((QImage*)0)->rgbSwapped();
  };
}
// _ZNKR6QImage10rgbSwappedEv rgbSwapped()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

