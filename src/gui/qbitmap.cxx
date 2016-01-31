// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qbitmap.h
// dst-file: /src/gui/qbitmap.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qbitmap.h>


// <= header block end

// main block begin =>
void __keep_qbitmap_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qbitmap.h', line 55, column 17>
//   // proto:  void QBitmap::swap(QBitmap & other);
if (true) {
  auto f = [](QBitmap flythis, QBitmap & arg1) {
    ((QBitmap*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN7QBitmap4swapERS_ swap(class QBitmap &)
// <SourceLocation file '/usr/include/qt/QtGui/qbitmap.h', line 58, column 17>
//   // proto:  void QBitmap::clear();
if (true) {
  auto f = [](QBitmap flythis) {
    ((QBitmap*)0)->clear();
    flythis.clear();
  };
  if (f == nullptr){}
}
// _ZN7QBitmap5clearEv clear()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QBitmap_Class_Size()
{
  return sizeof(QBitmap);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qbitmap.h', line 48, column 5>
//   // proto:  void QBitmap::QBitmap(const QPixmap & );
extern "C"
QBitmap*
C_ZN7QBitmapC2ERK7QPixmap(const QPixmap* arg1) {
  auto ret = new QBitmap(*((const QPixmap*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qbitmap.h', line 61, column 20>
//   // proto: static QBitmap QBitmap::fromData(const QSize & size, const uchar * bits, QImage::Format monoFormat);
// _ZN7QBitmap8fromDataERK5QSizePKhN6QImage6FormatE fromData(const class QSize &, const uchar *, class QImage::Format)
extern "C"
QBitmap*
C_ZN7QBitmap8fromDataERK5QSizePKhN6QImage6FormatE(const QSize* arg1,
const uchar * arg2,
QImage::Format* arg3) {
  auto ret =
  QBitmap::fromData(*((const QSize*)arg1),
arg2,
*((QImage::Format*)arg3));
  return new QBitmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qbitmap.h', line 50, column 14>
//   // proto:  void QBitmap::QBitmap(const QSize & );
extern "C"
QBitmap*
C_ZN7QBitmapC2ERK5QSize(const QSize* arg1) {
  auto ret = new QBitmap(*((const QSize*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qbitmap.h', line 49, column 5>
//   // proto:  void QBitmap::QBitmap(int w, int h);
extern "C"
QBitmap*
C_ZN7QBitmapC2Eii(int arg1,
int arg2) {
  auto ret = new QBitmap(arg1,
arg2);
  return ret;
}
//   // proto:  void QBitmap::~QBitmap();
extern "C"
void C_ZN7QBitmapD2Ev(void *qthis) {
  delete (QBitmap*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qbitmap.h', line 55, column 17>
//   // proto:  void QBitmap::swap(QBitmap & other);
// _ZN7QBitmap4swapERS_ swap(class QBitmap &)
extern "C"
void
C_ZN7QBitmap4swapERS_(void *qthis,
QBitmap* arg1) {
  ((QBitmap*)qthis)->swap(*((QBitmap*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qbitmap.h', line 64, column 13>
//   // proto:  QBitmap QBitmap::transformed(const QMatrix & );
// _ZNK7QBitmap11transformedERK7QMatrix transformed(const class QMatrix &)
extern "C"
QBitmap*
C_ZNK7QBitmap11transformedERK7QMatrix(void *qthis,
const QMatrix* arg1) {
  auto ret =
  ((QBitmap*)qthis)->transformed(*((const QMatrix*)arg1));
  return new QBitmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qbitmap.h', line 58, column 17>
//   // proto:  void QBitmap::clear();
// _ZN7QBitmap5clearEv clear()
extern "C"
void
C_ZN7QBitmap5clearEv(void *qthis) {
  ((QBitmap*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtGui/qbitmap.h', line 51, column 14>
//   // proto:  void QBitmap::QBitmap(const QString & fileName, const char * format);
extern "C"
QBitmap*
C_ZN7QBitmapC2ERK7QStringPKc(const QString* arg1,
const char * arg2) {
  auto ret = new QBitmap(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qbitmap.h', line 60, column 20>
//   // proto: static QBitmap QBitmap::fromImage(const QImage & image, Qt::ImageConversionFlags flags);
// _ZN7QBitmap9fromImageERK6QImage6QFlagsIN2Qt19ImageConversionFlagEE fromImage(const class QImage &, Qt::ImageConversionFlags)
extern "C"
QBitmap*
C_ZN7QBitmap9fromImageERK6QImage6QFlagsIN2Qt19ImageConversionFlagEE(const QImage* arg1,
Qt::ImageConversionFlags* arg2) {
  auto ret =
  QBitmap::fromImage(*((const QImage*)arg1),
*((Qt::ImageConversionFlags*)arg2));
  return new QBitmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qbitmap.h', line 47, column 5>
//   // proto:  void QBitmap::QBitmap();
extern "C"
QBitmap*
C_ZN7QBitmapC2Ev() {
  auto ret = new QBitmap();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qbitmap.h', line 65, column 13>
//   // proto:  QBitmap QBitmap::transformed(const QTransform & matrix);
// _ZNK7QBitmap11transformedERK10QTransform transformed(const class QTransform &)
extern "C"
QBitmap*
C_ZNK7QBitmap11transformedERK10QTransform(void *qthis,
const QTransform* arg1) {
  auto ret =
  ((QBitmap*)qthis)->transformed(*((const QTransform*)arg1));
  return new QBitmap(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

