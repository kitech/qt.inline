//  header block begin
// /usr/include/qt/QtGui/qbrush.h
#include <qbrush.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qbrush.h:65
// void QBrush()
extern "C"
void* C_ZN6QBrushC1Ev() {
  return new QBrush();
}
// /usr/include/qt/QtGui/qbrush.h:66
// void QBrush(Qt::BrushStyle)
extern "C"
void* C_ZN6QBrushC1EN2Qt10BrushStyleE(Qt::BrushStyle bs) {
  return new QBrush(bs);
}
// /usr/include/qt/QtGui/qbrush.h:67
// void QBrush(const class QColor &, Qt::BrushStyle)
extern "C"
void* C_ZN6QBrushC1ERK6QColorN2Qt10BrushStyleE(const QColor & color, Qt::BrushStyle bs) {
  return new QBrush(color, bs);
}
// /usr/include/qt/QtGui/qbrush.h:68
// void QBrush(Qt::GlobalColor, Qt::BrushStyle)
extern "C"
void* C_ZN6QBrushC1EN2Qt11GlobalColorENS0_10BrushStyleE(Qt::GlobalColor color, Qt::BrushStyle bs) {
  return new QBrush(color, bs);
}
// /usr/include/qt/QtGui/qbrush.h:70
// void QBrush(const class QColor &, const class QPixmap &)
extern "C"
void* C_ZN6QBrushC1ERK6QColorRK7QPixmap(const QColor & color, const QPixmap & pixmap) {
  return new QBrush(color, pixmap);
}
// /usr/include/qt/QtGui/qbrush.h:71
// void QBrush(Qt::GlobalColor, const class QPixmap &)
extern "C"
void* C_ZN6QBrushC1EN2Qt11GlobalColorERK7QPixmap(Qt::GlobalColor color, const QPixmap & pixmap) {
  return new QBrush(color, pixmap);
}
// /usr/include/qt/QtGui/qbrush.h:72
// void QBrush(const class QPixmap &)
extern "C"
void* C_ZN6QBrushC1ERK7QPixmap(const QPixmap & pixmap) {
  return new QBrush(pixmap);
}
// /usr/include/qt/QtGui/qbrush.h:73
// void QBrush(const class QImage &)
extern "C"
void* C_ZN6QBrushC1ERK6QImage(const QImage & image) {
  return new QBrush(image);
}
// /usr/include/qt/QtGui/qbrush.h:77
// void QBrush(const class QGradient &)
extern "C"
void* C_ZN6QBrushC1ERK9QGradient(const QGradient & gradient) {
  return new QBrush(gradient);
}
// /usr/include/qt/QtGui/qbrush.h:79
// void ~QBrush()
extern "C"
void C_ZN6QBrushD1Ev(void *this_) {
  delete (QBrush*)(this_);
}
// inline
// /usr/include/qt/QtGui/qbrush.h:85
// void swap(class QBrush &)
extern "C"
void C_ZN6QBrush4swapERS_(void *this_, QBrush & other) {
  ((QBrush*)this_)->swap(other);
}
// inline
// /usr/include/qt/QtGui/qbrush.h:90
// Qt::BrushStyle style()
extern "C"
void C_ZNK6QBrush5styleEv(void *this_) {
  /*return*/ ((QBrush*)this_)->style();
}
// /usr/include/qt/QtGui/qbrush.h:91
// void setStyle(Qt::BrushStyle)
extern "C"
void C_ZN6QBrush8setStyleEN2Qt10BrushStyleE(void *this_, Qt::BrushStyle arg0) {
  ((QBrush*)this_)->setStyle(arg0);
}
// inline
// /usr/include/qt/QtGui/qbrush.h:93
// const QMatrix & matrix()
extern "C"
void C_ZNK6QBrush6matrixEv(void *this_) {
  /*return*/ ((QBrush*)this_)->matrix();
}
// /usr/include/qt/QtGui/qbrush.h:94
// void setMatrix(const class QMatrix &)
extern "C"
void C_ZN6QBrush9setMatrixERK7QMatrix(void *this_, const QMatrix & mat) {
  ((QBrush*)this_)->setMatrix(mat);
}
// inline
// /usr/include/qt/QtGui/qbrush.h:96
// QTransform transform()
extern "C"
void C_ZNK6QBrush9transformEv(void *this_) {
  /*return*/ ((QBrush*)this_)->transform();
}
// /usr/include/qt/QtGui/qbrush.h:97
// void setTransform(const class QTransform &)
extern "C"
void C_ZN6QBrush12setTransformERK10QTransform(void *this_, const QTransform & arg0) {
  ((QBrush*)this_)->setTransform(arg0);
}
// /usr/include/qt/QtGui/qbrush.h:99
// QPixmap texture()
extern "C"
void C_ZNK6QBrush7textureEv(void *this_) {
  /*return*/ ((QBrush*)this_)->texture();
}
// /usr/include/qt/QtGui/qbrush.h:100
// void setTexture(const class QPixmap &)
extern "C"
void C_ZN6QBrush10setTextureERK7QPixmap(void *this_, const QPixmap & pixmap) {
  ((QBrush*)this_)->setTexture(pixmap);
}
// /usr/include/qt/QtGui/qbrush.h:102
// QImage textureImage()
extern "C"
void C_ZNK6QBrush12textureImageEv(void *this_) {
  /*return*/ ((QBrush*)this_)->textureImage();
}
// /usr/include/qt/QtGui/qbrush.h:103
// void setTextureImage(const class QImage &)
extern "C"
void C_ZN6QBrush15setTextureImageERK6QImage(void *this_, const QImage & image) {
  ((QBrush*)this_)->setTextureImage(image);
}
// inline
// /usr/include/qt/QtGui/qbrush.h:105
// const QColor & color()
extern "C"
void C_ZNK6QBrush5colorEv(void *this_) {
  /*return*/ ((QBrush*)this_)->color();
}
// /usr/include/qt/QtGui/qbrush.h:106
// void setColor(const class QColor &)
extern "C"
void C_ZN6QBrush8setColorERK6QColor(void *this_, const QColor & color) {
  ((QBrush*)this_)->setColor(color);
}
// inline
// /usr/include/qt/QtGui/qbrush.h:107
// void setColor(Qt::GlobalColor)
extern "C"
void C_ZN6QBrush8setColorEN2Qt11GlobalColorE(void *this_, Qt::GlobalColor color) {
  ((QBrush*)this_)->setColor(color);
}
// /usr/include/qt/QtGui/qbrush.h:109
// const QGradient * gradient()
extern "C"
void C_ZNK6QBrush8gradientEv(void *this_) {
  /*return*/ ((QBrush*)this_)->gradient();
}
// /usr/include/qt/QtGui/qbrush.h:111
// bool isOpaque()
extern "C"
void C_ZNK6QBrush8isOpaqueEv(void *this_) {
  /*return*/ ((QBrush*)this_)->isOpaque();
}
// inline
// /usr/include/qt/QtGui/qbrush.h:128
// bool isDetached()
extern "C"
void C_ZNK6QBrush10isDetachedEv(void *this_) {
  /*return*/ ((QBrush*)this_)->isDetached();
}
//  main block end
