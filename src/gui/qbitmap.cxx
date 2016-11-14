// /usr/include/qt/QtGui/qbitmap.h
#include <qbitmap.h>
#include <QtGui>

// /usr/include/qt/QtGui/qbitmap.h:53
// void QBitmap()
extern "C"
void* C_ZN7QBitmapC1Ev() {
  return new QBitmap();
}
// /usr/include/qt/QtGui/qbitmap.h:54
// void QBitmap(const class QPixmap &)
extern "C"
void* C_ZN7QBitmapC1ERK7QPixmap(const QPixmap & a0) {
  return new QBitmap(a0);
}
// /usr/include/qt/QtGui/qbitmap.h:55
// void QBitmap(int, int)
extern "C"
void* C_ZN7QBitmapC1Eii(int w, int h) {
  return new QBitmap(w, h);
}
// /usr/include/qt/QtGui/qbitmap.h:56
// void QBitmap(const class QSize &)
extern "C"
void* C_ZN7QBitmapC1ERK5QSize(const QSize & a0) {
  return new QBitmap(a0);
}
// /usr/include/qt/QtGui/qbitmap.h:57
// void QBitmap(const class QString &, const char *)
extern "C"
void* C_ZN7QBitmapC1ERK7QStringPKc(const QString & fileName, const char * format) {
  return new QBitmap(fileName, format);
}
// virtual
// /usr/include/qt/QtGui/qbitmap.h:64
// void ~QBitmap()
extern "C"
void C_ZN7QBitmapD1Ev(void *this_) {
  delete (QBitmap*)(this_);
}
// inline
// /usr/include/qt/QtGui/qbitmap.h:68
// void swap(class QBitmap &)
extern "C"
void C_ZN7QBitmap4swapERS_(void *this_, QBitmap & other) {
  ((QBitmap*)this_)->swap(other);
}
// inline
// /usr/include/qt/QtGui/qbitmap.h:71
// void clear()
extern "C"
void C_ZN7QBitmap5clearEv(void *this_) {
  ((QBitmap*)this_)->clear();
}
// static
// /usr/include/qt/QtGui/qbitmap.h:73
// QBitmap fromImage(const class QImage &, Qt::ImageConversionFlags)
extern "C"
void C_ZN7QBitmap9fromImageERK6QImage6QFlagsIN2Qt19ImageConversionFlagEE(const QImage & image, QFlags<Qt::ImageConversionFlag> flags) {
  /*return*/ QBitmap::fromImage(image, flags);
}
// static
// /usr/include/qt/QtGui/qbitmap.h:74
// QBitmap fromData(const class QSize &, const uchar *, class QImage::Format)
extern "C"
void C_ZN7QBitmap8fromDataERK5QSizePKhN6QImage6FormatE(const QSize & size, const uchar * bits, QImage::Format monoFormat) {
  /*return*/ QBitmap::fromData(size, bits, monoFormat);
}
// /usr/include/qt/QtGui/qbitmap.h:77
// QBitmap transformed(const class QMatrix &)
extern "C"
void C_ZNK7QBitmap11transformedERK7QMatrix(void *this_, const QMatrix & a0) {
  /*return*/ ((QBitmap*)this_)->transformed(a0);
}
// /usr/include/qt/QtGui/qbitmap.h:78
// QBitmap transformed(const class QTransform &)
extern "C"
void C_ZNK7QBitmap11transformedERK10QTransform(void *this_, const QTransform & matrix) {
  /*return*/ ((QBitmap*)this_)->transformed(matrix);
}