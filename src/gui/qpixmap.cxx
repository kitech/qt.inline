// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qpixmap.h
// dst-file: /src/gui/qpixmap.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpixmap.h>


#include <qglobal.h>
#include <qtransform.h>
#include <qbitmap.h>
#include <qimage.h>
#include <qrect.h>
#include <qmatrix.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qpixmap_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 73, column 17>
//   // proto:  void QPixmap::swap(QPixmap & other);
if (true) {
  auto f = [](QPixmap flythis, QPixmap & arg1) {
    ((QPixmap*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN7QPixmap4swapERS_ swap(class QPixmap &)
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 91, column 17>
//   // proto:  void QPixmap::fill(const QPaintDevice * device, int xofs, int yofs);
if (true) {
  auto f = [](QPixmap flythis, const QPaintDevice * arg1, int arg2, int arg3) {
    ((QPixmap*)0)->fill(arg1, arg2, arg3);
    flythis.fill(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN7QPixmap4fillEPK12QPaintDeviceii fill(const class QPaintDevice *, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 112, column 20>
//   // proto:  QPixmap QPixmap::scaled(int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode);
if (true) {
  auto f = [](QPixmap flythis, int arg1, int arg2, Qt::AspectRatioMode arg3, Qt::TransformationMode arg4) {
    ((QPixmap*)0)->scaled(arg1, arg2, arg3, arg4);
    flythis.scaled(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK7QPixmap6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE scaled(int, int, Qt::AspectRatioMode, Qt::TransformationMode)
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 145, column 17>
//   // proto:  void QPixmap::scroll(int dx, int dy, int x, int y, int width, int height, QRegion * exposed);
if (true) {
  auto f = [](QPixmap flythis, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, QRegion * arg7) {
    ((QPixmap*)0)->scroll(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    flythis.scroll(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
  };
  if (f == nullptr){}
}
// _ZN7QPixmap6scrollEiiiiiiP7QRegion scroll(int, int, int, int, int, int, class QRegion *)
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 128, column 20>
//   // proto: static QPixmap QPixmap::fromImage(QImage && image, Qt::ImageConversionFlags flags);
if (true) {
  auto f = [](QPixmap flythis, QImage && arg1, Qt::ImageConversionFlags arg2) {
    ((QPixmap*)0)->fromImage(arg1, arg2);
    flythis.fromImage(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN7QPixmap9fromImageEO6QImage6QFlagsIN2Qt19ImageConversionFlagEE fromImage(class QImage &&, Qt::ImageConversionFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 142, column 20>
//   // proto:  QPixmap QPixmap::copy(int x, int y, int width, int height);
if (true) {
  auto f = [](QPixmap flythis, int arg1, int arg2, int arg3, int arg4) {
    ((QPixmap*)0)->copy(arg1, arg2, arg3, arg4);
    flythis.copy(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK7QPixmap4copyEiiii copy(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 136, column 17>
//   // proto:  bool QPixmap::loadFromData(const QByteArray & data, const char * format, Qt::ImageConversionFlags flags);
if (true) {
  auto f = [](QPixmap flythis, const QByteArray & arg1, const char * arg2, Qt::ImageConversionFlags arg3) {
    ((QPixmap*)0)->loadFromData(arg1, arg2, arg3);
    flythis.loadFromData(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN7QPixmap12loadFromDataERK10QByteArrayPKc6QFlagsIN2Qt19ImageConversionFlagEE loadFromData(const class QByteArray &, const char *, Qt::ImageConversionFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 109, column 27>
//   // proto: static QPixmap QPixmap::grabWidget(QObject * widget, int x, int y, int w, int h);
if (true) {
  auto f = [](QPixmap flythis, QObject * arg1, int arg2, int arg3, int arg4, int arg5) {
    ((QPixmap*)0)->grabWidget(arg1, arg2, arg3, arg4, arg5);
    flythis.grabWidget(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZN7QPixmap10grabWidgetEP7QObjectiiii grabWidget(class QObject *, int, int, int, int)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPixmap_Class_Size()
{
  return sizeof(QPixmap);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 137, column 10>
//   // proto:  bool QPixmap::save(const QString & fileName, const char * format, int quality);
// _ZNK7QPixmap4saveERK7QStringPKci save(const class QString &, const char *, int)
extern "C"
bool
C_ZNK7QPixmap4saveERK7QStringPKci(void *qthis,
const QString* arg1,
const char * arg2,
int arg3) {
  auto ret =
  ((QPixmap*)qthis)->save(*((const QString*)arg1),
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 73, column 17>
//   // proto:  void QPixmap::swap(QPixmap & other);
// _ZN7QPixmap4swapERS_ swap(class QPixmap &)
extern "C"
void
C_ZN7QPixmap4swapERS_(void *qthis,
QPixmap* arg1) {
  ((QPixmap*)qthis)->swap(*((QPixmap*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 156, column 10>
//   // proto:  bool QPixmap::isQBitmap();
// _ZNK7QPixmap9isQBitmapEv isQBitmap()
extern "C"
bool
C_ZNK7QPixmap9isQBitmapEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->isQBitmap();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 58, column 14>
//   // proto:  void QPixmap::QPixmap(QPlatformPixmap * data);
extern "C"
QPixmap*
C_ZN7QPixmapC2EP15QPlatformPixmap(QPlatformPixmap * arg1) {
  auto ret = new QPixmap(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 96, column 11>
//   // proto:  qreal QPixmap::devicePixelRatio();
// _ZNK7QPixmap16devicePixelRatioEv devicePixelRatio()
extern "C"
double
C_ZNK7QPixmap16devicePixelRatioEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->devicePixelRatio();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 60, column 14>
//   // proto:  void QPixmap::QPixmap(const QSize & );
extern "C"
QPixmap*
C_ZN7QPixmapC2ERK5QSize(const QSize* arg1) {
  auto ret = new QPixmap(*((const QSize*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 135, column 10>
//   // proto:  bool QPixmap::loadFromData(const uchar * buf, uint len, const char * format, Qt::ImageConversionFlags flags);
// _ZN7QPixmap12loadFromDataEPKhjPKc6QFlagsIN2Qt19ImageConversionFlagEE loadFromData(const uchar *, uint, const char *, Qt::ImageConversionFlags)
extern "C"
bool
C_ZN7QPixmap12loadFromDataEPKhjPKc6QFlagsIN2Qt19ImageConversionFlagEE(void *qthis,
const uchar * arg1,
uint arg2,
const char * arg3,
Qt::ImageConversionFlags* arg4) {
  auto ret =
  ((QPixmap*)qthis)->loadFromData(arg1,
arg2,
arg3,
*((Qt::ImageConversionFlags*)arg4));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 91, column 17>
//   // proto:  void QPixmap::fill(const QPaintDevice * device, int xofs, int yofs);
// _ZN7QPixmap4fillEPK12QPaintDeviceii fill(const class QPaintDevice *, int, int)
extern "C"
void
C_ZN7QPixmap4fillEPK12QPaintDeviceii(void *qthis,
const QPaintDevice * arg1,
int arg2,
int arg3) {
  ((QPixmap*)qthis)->fill(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 121, column 13>
//   // proto:  QPixmap QPixmap::transformed(const QTransform & , Qt::TransformationMode mode);
// _ZNK7QPixmap11transformedERK10QTransformN2Qt18TransformationModeE transformed(const class QTransform &, Qt::TransformationMode)
extern "C"
QPixmap*
C_ZNK7QPixmap11transformedERK10QTransformN2Qt18TransformationModeE(void *qthis,
const QTransform* arg1,
Qt::TransformationMode* arg2) {
  auto ret =
  ((QPixmap*)qthis)->transformed(*((const QTransform*)arg1),
*((Qt::TransformationMode*)arg2));
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 89, column 10>
//   // proto:  void QPixmap::fill(const QColor & fillColor);
// _ZN7QPixmap4fillERK6QColor fill(const class QColor &)
extern "C"
void
C_ZN7QPixmap4fillERK6QColor(void *qthis,
const QColor* arg1) {
  ((QPixmap*)qthis)->fill(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 112, column 20>
//   // proto:  QPixmap QPixmap::scaled(int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode);
// _ZNK7QPixmap6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE scaled(int, int, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C"
QPixmap*
C_ZNK7QPixmap6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE(void *qthis,
int arg1,
int arg2,
Qt::AspectRatioMode* arg3,
Qt::TransformationMode* arg4) {
  auto ret =
  ((QPixmap*)qthis)->scaled(arg1,
arg2,
*((Qt::AspectRatioMode*)arg3),
*((Qt::TransformationMode*)arg4));
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 61, column 5>
//   // proto:  void QPixmap::QPixmap(const QString & fileName, const char * format, Qt::ImageConversionFlags flags);
extern "C"
QPixmap*
C_ZN7QPixmapC2ERK7QStringPKc6QFlagsIN2Qt19ImageConversionFlagEE(const QString* arg1,
const char * arg2,
Qt::ImageConversionFlags* arg3) {
  auto ret = new QPixmap(*((const QString*)arg1), arg2, *((Qt::ImageConversionFlags*)arg3));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 119, column 13>
//   // proto:  QPixmap QPixmap::transformed(const QMatrix & , Qt::TransformationMode mode);
// _ZNK7QPixmap11transformedERK7QMatrixN2Qt18TransformationModeE transformed(const class QMatrix &, Qt::TransformationMode)
extern "C"
QPixmap*
C_ZNK7QPixmap11transformedERK7QMatrixN2Qt18TransformationModeE(void *qthis,
const QMatrix* arg1,
Qt::TransformationMode* arg2) {
  auto ret =
  ((QPixmap*)qthis)->transformed(*((const QMatrix*)arg1),
*((Qt::TransformationMode*)arg2));
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 79, column 9>
//   // proto:  int QPixmap::devType();
// _ZNK7QPixmap7devTypeEv devType()
extern "C"
int
C_ZNK7QPixmap7devTypeEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->devType();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 145, column 17>
//   // proto:  void QPixmap::scroll(int dx, int dy, int x, int y, int width, int height, QRegion * exposed);
// _ZN7QPixmap6scrollEiiiiiiP7QRegion scroll(int, int, int, int, int, int, class QRegion *)
extern "C"
void
C_ZN7QPixmap6scrollEiiiiiiP7QRegion(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
int arg5,
int arg6,
QRegion * arg7) {
  ((QPixmap*)qthis)->scroll(arg1,
arg2,
arg3,
arg4,
arg5,
arg6,
arg7);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 128, column 20>
//   // proto: static QPixmap QPixmap::fromImage(QImage && image, Qt::ImageConversionFlags flags);
// _ZN7QPixmap9fromImageEO6QImage6QFlagsIN2Qt19ImageConversionFlagEE fromImage(class QImage &&, Qt::ImageConversionFlags)
extern "C"
QPixmap*
C_ZN7QPixmap9fromImageEO6QImage6QFlagsIN2Qt19ImageConversionFlagEE(QImage* arg1,
Qt::ImageConversionFlags* arg2) {
  auto ret =
  QPixmap::fromImage(*((QImage*)arg1),
*((Qt::ImageConversionFlags*)arg2));
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 143, column 13>
//   // proto:  QPixmap QPixmap::copy(const QRect & rect);
// _ZNK7QPixmap4copyERK5QRect copy(const class QRect &)
extern "C"
QPixmap*
C_ZNK7QPixmap4copyERK5QRect(void *qthis,
const QRect* arg1) {
  auto ret =
  ((QPixmap*)qthis)->copy(*((const QRect*)arg1));
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 122, column 23>
//   // proto: static QTransform QPixmap::trueMatrix(const QTransform & m, int w, int h);
// _ZN7QPixmap10trueMatrixERK10QTransformii trueMatrix(const class QTransform &, int, int)
extern "C"
QTransform*
C_ZN7QPixmap10trueMatrixERK10QTransformii(const QTransform* arg1,
int arg2,
int arg3) {
  auto ret =
  QPixmap::trueMatrix(*((const QTransform*)arg1),
arg2,
arg3);
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 59, column 5>
//   // proto:  void QPixmap::QPixmap(int w, int h);
extern "C"
QPixmap*
C_ZN7QPixmapC2Eii(int arg1,
int arg2) {
  auto ret = new QPixmap(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 118, column 13>
//   // proto:  QPixmap QPixmap::scaledToHeight(int h, Qt::TransformationMode mode);
// _ZNK7QPixmap14scaledToHeightEiN2Qt18TransformationModeE scaledToHeight(int, Qt::TransformationMode)
extern "C"
QPixmap*
C_ZNK7QPixmap14scaledToHeightEiN2Qt18TransformationModeE(void *qthis,
int arg1,
Qt::TransformationMode* arg2) {
  auto ret =
  ((QPixmap*)qthis)->scaledToHeight(arg1,
*((Qt::TransformationMode*)arg2));
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 105, column 13>
//   // proto:  QBitmap QPixmap::createMaskFromColor(const QColor & maskColor, Qt::MaskMode mode);
// _ZNK7QPixmap19createMaskFromColorERK6QColorN2Qt8MaskModeE createMaskFromColor(const class QColor &, Qt::MaskMode)
extern "C"
QBitmap*
C_ZNK7QPixmap19createMaskFromColorERK6QColorN2Qt8MaskModeE(void *qthis,
const QColor* arg1,
Qt::MaskMode* arg2) {
  auto ret =
  ((QPixmap*)qthis)->createMaskFromColor(*((const QColor*)arg1),
*((Qt::MaskMode*)arg2));
  return new QBitmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 107, column 20>
//   // proto: static QPixmap QPixmap::grabWindow(WId , int x, int y, int w, int h);
// _ZN7QPixmap10grabWindowEiiiii grabWindow(WId, int, int, int, int)
extern "C"
QPixmap*
C_ZN7QPixmap10grabWindowEiiiii(WId arg1,
int arg2,
int arg3,
int arg4,
int arg5) {
  auto ret =
  QPixmap::grabWindow(arg1,
arg2,
arg3,
arg4,
arg5);
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 90, column 10>
//   // proto:  void QPixmap::fill(const QPaintDevice * device, const QPoint & ofs);
// _ZN7QPixmap4fillEPK12QPaintDeviceRK6QPoint fill(const class QPaintDevice *, const class QPoint &)
extern "C"
void
C_ZN7QPixmap4fillEPK12QPaintDeviceRK6QPoint(void *qthis,
const QPaintDevice * arg1,
const QPoint* arg2) {
  ((QPixmap*)qthis)->fill(arg1,
*((const QPoint*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 153, column 10>
//   // proto:  bool QPixmap::isDetached();
// _ZNK7QPixmap10isDetachedEv isDetached()
extern "C"
bool
C_ZNK7QPixmap10isDetachedEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->isDetached();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 78, column 10>
//   // proto:  bool QPixmap::isNull();
// _ZNK7QPixmap6isNullEv isNull()
extern "C"
bool
C_ZNK7QPixmap6isNullEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 142, column 20>
//   // proto:  QPixmap QPixmap::copy(int x, int y, int width, int height);
// _ZNK7QPixmap4copyEiiii copy(int, int, int, int)
extern "C"
QPixmap*
C_ZNK7QPixmap4copyEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  auto ret =
  ((QPixmap*)qthis)->copy(arg1,
arg2,
arg3,
arg4);
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 87, column 16>
//   // proto: static int QPixmap::defaultDepth();
// _ZN7QPixmap12defaultDepthEv defaultDepth()
extern "C"
int
C_ZN7QPixmap12defaultDepthEv() {
  auto ret =
  QPixmap::defaultDepth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 154, column 10>
//   // proto:  void QPixmap::detach();
// _ZN7QPixmap6detachEv detach()
extern "C"
void
C_ZN7QPixmap6detachEv(void *qthis) {
  ((QPixmap*)qthis)->detach();
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 146, column 10>
//   // proto:  void QPixmap::scroll(int dx, int dy, const QRect & rect, QRegion * exposed);
// _ZN7QPixmap6scrollEiiRK5QRectP7QRegion scroll(int, int, const class QRect &, class QRegion *)
extern "C"
void
C_ZN7QPixmap6scrollEiiRK5QRectP7QRegion(void *qthis,
int arg1,
int arg2,
const QRect* arg3,
QRegion * arg4) {
  ((QPixmap*)qthis)->scroll(arg1,
arg2,
*((const QRect*)arg3),
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 94, column 10>
//   // proto:  void QPixmap::setMask(const QBitmap & );
// _ZN7QPixmap7setMaskERK7QBitmap setMask(const class QBitmap &)
extern "C"
void
C_ZN7QPixmap7setMaskERK7QBitmap(void *qthis,
const QBitmap* arg1) {
  ((QPixmap*)qthis)->setMask(*((const QBitmap*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 57, column 5>
//   // proto:  void QPixmap::QPixmap();
extern "C"
QPixmap*
C_ZN7QPixmapC2Ev() {
  auto ret = new QPixmap();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 108, column 20>
//   // proto: static QPixmap QPixmap::grabWidget(QObject * widget, const QRect & rect);
// _ZN7QPixmap10grabWidgetEP7QObjectRK5QRect grabWidget(class QObject *, const class QRect &)
extern "C"
QPixmap*
C_ZN7QPixmap10grabWidgetEP7QObjectRK5QRect(QObject * arg1,
const QRect* arg2) {
  auto ret =
  QPixmap::grabWidget(arg1,
*((const QRect*)arg2));
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 65, column 5>
//   // proto:  void QPixmap::QPixmap(const QPixmap & );
extern "C"
QPixmap*
C_ZN7QPixmapC2ERKS_(const QPixmap* arg1) {
  auto ret = new QPixmap(*((const QPixmap*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 97, column 10>
//   // proto:  void QPixmap::setDevicePixelRatio(qreal scaleFactor);
// _ZN7QPixmap19setDevicePixelRatioEd setDevicePixelRatio(qreal)
extern "C"
void
C_ZN7QPixmap19setDevicePixelRatioEd(void *qthis,
qreal arg1) {
  ((QPixmap*)qthis)->setDevicePixelRatio(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 136, column 17>
//   // proto:  bool QPixmap::loadFromData(const QByteArray & data, const char * format, Qt::ImageConversionFlags flags);
// _ZN7QPixmap12loadFromDataERK10QByteArrayPKc6QFlagsIN2Qt19ImageConversionFlagEE loadFromData(const class QByteArray &, const char *, Qt::ImageConversionFlags)
extern "C"
bool
C_ZN7QPixmap12loadFromDataERK10QByteArrayPKc6QFlagsIN2Qt19ImageConversionFlagEE(void *qthis,
const QByteArray* arg1,
const char * arg2,
Qt::ImageConversionFlags* arg3) {
  auto ret =
  ((QPixmap*)qthis)->loadFromData(*((const QByteArray*)arg1),
arg2,
*((Qt::ImageConversionFlags*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 125, column 20>
//   // proto: static QPixmap QPixmap::fromImage(const QImage & image, Qt::ImageConversionFlags flags);
// _ZN7QPixmap9fromImageERK6QImage6QFlagsIN2Qt19ImageConversionFlagEE fromImage(const class QImage &, Qt::ImageConversionFlags)
extern "C"
QPixmap*
C_ZN7QPixmap9fromImageERK6QImage6QFlagsIN2Qt19ImageConversionFlagEE(const QImage* arg1,
Qt::ImageConversionFlags* arg2) {
  auto ret =
  QPixmap::fromImage(*((const QImage*)arg1),
*((Qt::ImageConversionFlags*)arg2));
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 63, column 14>
//   // proto:  void QPixmap::QPixmap(const char *const [] xpm);
extern "C"
QPixmap*
C_ZN7QPixmapC2EPKPKc(const char *const arg1[]) {
  auto ret = new QPixmap(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 151, column 12>
//   // proto:  qint64 QPixmap::cacheKey();
// _ZNK7QPixmap8cacheKeyEv cacheKey()
extern "C"
long long
C_ZNK7QPixmap8cacheKeyEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->cacheKey();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 103, column 13>
//   // proto:  QBitmap QPixmap::createHeuristicMask(bool clipTight);
// _ZNK7QPixmap19createHeuristicMaskEb createHeuristicMask(_Bool)
extern "C"
QBitmap*
C_ZNK7QPixmap19createHeuristicMaskEb(void *qthis,
bool arg1) {
  auto ret =
  ((QPixmap*)qthis)->createHeuristicMask(arg1);
  return new QBitmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 85, column 9>
//   // proto:  int QPixmap::depth();
// _ZNK7QPixmap5depthEv depth()
extern "C"
int
C_ZNK7QPixmap5depthEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->depth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 134, column 10>
//   // proto:  bool QPixmap::load(const QString & fileName, const char * format, Qt::ImageConversionFlags flags);
// _ZN7QPixmap4loadERK7QStringPKc6QFlagsIN2Qt19ImageConversionFlagEE load(const class QString &, const char *, Qt::ImageConversionFlags)
extern "C"
bool
C_ZN7QPixmap4loadERK7QStringPKc6QFlagsIN2Qt19ImageConversionFlagEE(void *qthis,
const QString* arg1,
const char * arg2,
Qt::ImageConversionFlags* arg3) {
  auto ret =
  ((QPixmap*)qthis)->load(*((const QString*)arg1),
arg2,
*((Qt::ImageConversionFlags*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 124, column 12>
//   // proto:  QImage QPixmap::toImage();
// _ZNK7QPixmap7toImageEv toImage()
extern "C"
QImage*
C_ZNK7QPixmap7toImageEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->toImage();
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 126, column 20>
//   // proto: static QPixmap QPixmap::fromImageReader(QImageReader * imageReader, Qt::ImageConversionFlags flags);
// _ZN7QPixmap15fromImageReaderEP12QImageReader6QFlagsIN2Qt19ImageConversionFlagEE fromImageReader(class QImageReader *, Qt::ImageConversionFlags)
extern "C"
QPixmap*
C_ZN7QPixmap15fromImageReaderEP12QImageReader6QFlagsIN2Qt19ImageConversionFlagEE(QImageReader * arg1,
Qt::ImageConversionFlags* arg2) {
  auto ret =
  QPixmap::fromImageReader(arg1,
*((Qt::ImageConversionFlags*)arg2));
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 115, column 13>
//   // proto:  QPixmap QPixmap::scaled(const QSize & s, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode);
// _ZNK7QPixmap6scaledERK5QSizeN2Qt15AspectRatioModeENS3_18TransformationModeE scaled(const class QSize &, Qt::AspectRatioMode, Qt::TransformationMode)
extern "C"
QPixmap*
C_ZNK7QPixmap6scaledERK5QSizeN2Qt15AspectRatioModeENS3_18TransformationModeE(void *qthis,
const QSize* arg1,
Qt::AspectRatioMode* arg2,
Qt::TransformationMode* arg3) {
  auto ret =
  ((QPixmap*)qthis)->scaled(*((const QSize*)arg1),
*((Qt::AspectRatioMode*)arg2),
*((Qt::TransformationMode*)arg3));
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 109, column 27>
//   // proto: static QPixmap QPixmap::grabWidget(QObject * widget, int x, int y, int w, int h);
// _ZN7QPixmap10grabWidgetEP7QObjectiiii grabWidget(class QObject *, int, int, int, int)
extern "C"
QPixmap*
C_ZN7QPixmap10grabWidgetEP7QObjectiiii(QObject * arg1,
int arg2,
int arg3,
int arg4,
int arg5) {
  auto ret =
  QPixmap::grabWidget(arg1,
arg2,
arg3,
arg4,
arg5);
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 191, column 22>
//   // proto:  QPlatformPixmap * QPixmap::handle();
// _ZNK7QPixmap6handleEv handle()
extern "C"
void*
C_ZNK7QPixmap6handleEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->handle();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 100, column 10>
//   // proto:  bool QPixmap::hasAlphaChannel();
// _ZNK7QPixmap15hasAlphaChannelEv hasAlphaChannel()
extern "C"
bool
C_ZNK7QPixmap15hasAlphaChannelEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->hasAlphaChannel();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 84, column 11>
//   // proto:  QRect QPixmap::rect();
// _ZNK7QPixmap4rectEv rect()
extern "C"
QRect*
C_ZNK7QPixmap4rectEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->rect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 120, column 20>
//   // proto: static QMatrix QPixmap::trueMatrix(const QMatrix & m, int w, int h);
// _ZN7QPixmap10trueMatrixERK7QMatrixii trueMatrix(const class QMatrix &, int, int)
extern "C"
QMatrix*
C_ZN7QPixmap10trueMatrixERK7QMatrixii(const QMatrix* arg1,
int arg2,
int arg3) {
  auto ret =
  QPixmap::trueMatrix(*((const QMatrix*)arg1),
arg2,
arg3);
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 140, column 10>
//   // proto:  bool QPixmap::convertFromImage(const QImage & img, Qt::ImageConversionFlags flags);
// _ZN7QPixmap16convertFromImageERK6QImage6QFlagsIN2Qt19ImageConversionFlagEE convertFromImage(const class QImage &, Qt::ImageConversionFlags)
extern "C"
bool
C_ZN7QPixmap16convertFromImageERK6QImage6QFlagsIN2Qt19ImageConversionFlagEE(void *qthis,
const QImage* arg1,
Qt::ImageConversionFlags* arg2) {
  auto ret =
  ((QPixmap*)qthis)->convertFromImage(*((const QImage*)arg1),
*((Qt::ImageConversionFlags*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 93, column 13>
//   // proto:  QBitmap QPixmap::mask();
// _ZNK7QPixmap4maskEv mask()
extern "C"
QBitmap*
C_ZNK7QPixmap4maskEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->mask();
  return new QBitmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 81, column 9>
//   // proto:  int QPixmap::width();
// _ZNK7QPixmap5widthEv width()
extern "C"
int
C_ZNK7QPixmap5widthEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->width();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 158, column 19>
//   // proto:  QPaintEngine * QPixmap::paintEngine();
// _ZNK7QPixmap11paintEngineEv paintEngine()
extern "C"
void*
C_ZNK7QPixmap11paintEngineEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->paintEngine();
  return (void*)ret;
}
//   // proto:  void QPixmap::~QPixmap();
extern "C"
void C_ZN7QPixmapD2Ev(void *qthis) {
  delete (QPixmap*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 117, column 13>
//   // proto:  QPixmap QPixmap::scaledToWidth(int w, Qt::TransformationMode mode);
// _ZNK7QPixmap13scaledToWidthEiN2Qt18TransformationModeE scaledToWidth(int, Qt::TransformationMode)
extern "C"
QPixmap*
C_ZNK7QPixmap13scaledToWidthEiN2Qt18TransformationModeE(void *qthis,
int arg1,
Qt::TransformationMode* arg2) {
  auto ret =
  ((QPixmap*)qthis)->scaledToWidth(arg1,
*((Qt::TransformationMode*)arg2));
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 82, column 9>
//   // proto:  int QPixmap::height();
// _ZNK7QPixmap6heightEv height()
extern "C"
int
C_ZNK7QPixmap6heightEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->height();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 138, column 10>
//   // proto:  bool QPixmap::save(QIODevice * device, const char * format, int quality);
// _ZNK7QPixmap4saveEP9QIODevicePKci save(class QIODevice *, const char *, int)
extern "C"
bool
C_ZNK7QPixmap4saveEP9QIODevicePKci(void *qthis,
QIODevice * arg1,
const char * arg2,
int arg3) {
  auto ret =
  ((QPixmap*)qthis)->save(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 83, column 11>
//   // proto:  QSize QPixmap::size();
// _ZNK7QPixmap4sizeEv size()
extern "C"
QSize*
C_ZNK7QPixmap4sizeEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->size();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmap.h', line 99, column 10>
//   // proto:  bool QPixmap::hasAlpha();
// _ZNK7QPixmap8hasAlphaEv hasAlpha()
extern "C"
bool
C_ZNK7QPixmap8hasAlphaEv(void *qthis) {
  auto ret =
  ((QPixmap*)qthis)->hasAlpha();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

