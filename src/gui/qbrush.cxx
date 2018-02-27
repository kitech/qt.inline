//  header block begin
// /usr/include/qt/QtGui/qbrush.h
#ifndef protected
#define protected public
#endif
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QBrush is pure virtual: false
// QBrush has virtual projected: false
//  header block end

//  main block begin

class MyQBrush : public QBrush {
public:
  virtual ~MyQBrush() {}
// void QBrush()
MyQBrush() : QBrush() {}
// void QBrush(Qt::BrushStyle)
MyQBrush(Qt::BrushStyle bs) : QBrush(bs) {}
// void QBrush(const class QColor &, Qt::BrushStyle)
MyQBrush(const QColor & color, Qt::BrushStyle bs) : QBrush(color, bs) {}
// void QBrush(Qt::GlobalColor, Qt::BrushStyle)
MyQBrush(Qt::GlobalColor color, Qt::BrushStyle bs) : QBrush(color, bs) {}
// void QBrush(const class QColor &, const class QPixmap &)
MyQBrush(const QColor & color, const QPixmap & pixmap) : QBrush(color, pixmap) {}
// void QBrush(Qt::GlobalColor, const class QPixmap &)
MyQBrush(Qt::GlobalColor color, const QPixmap & pixmap) : QBrush(color, pixmap) {}
// void QBrush(const class QPixmap &)
MyQBrush(const QPixmap & pixmap) : QBrush(pixmap) {}
// void QBrush(const class QImage &)
MyQBrush(const QImage & image) : QBrush(image) {}
// void QBrush(const class QGradient &)
MyQBrush(const QGradient & gradient) : QBrush(gradient) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:66
// [-2] void QBrush()
extern "C"
void* C_ZN6QBrushC2Ev() {
  return  new QBrush();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:67
// [-2] void QBrush(Qt::BrushStyle)
extern "C"
void* C_ZN6QBrushC2EN2Qt10BrushStyleE(Qt::BrushStyle bs) {
  return  new QBrush(bs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:68
// [-2] void QBrush(const class QColor &, Qt::BrushStyle)
extern "C"
void* C_ZN6QBrushC2ERK6QColorN2Qt10BrushStyleE(QColor* color, Qt::BrushStyle bs) {
  return  new QBrush(*color, bs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:69
// [-2] void QBrush(Qt::GlobalColor, Qt::BrushStyle)
extern "C"
void* C_ZN6QBrushC2EN2Qt11GlobalColorENS0_10BrushStyleE(Qt::GlobalColor color, Qt::BrushStyle bs) {
  return  new QBrush(color, bs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:71
// [-2] void QBrush(const class QColor &, const class QPixmap &)
extern "C"
void* C_ZN6QBrushC2ERK6QColorRK7QPixmap(QColor* color, QPixmap* pixmap) {
  return  new QBrush(*color, *pixmap);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:72
// [-2] void QBrush(Qt::GlobalColor, const class QPixmap &)
extern "C"
void* C_ZN6QBrushC2EN2Qt11GlobalColorERK7QPixmap(Qt::GlobalColor color, QPixmap* pixmap) {
  return  new QBrush(color, *pixmap);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:73
// [-2] void QBrush(const class QPixmap &)
extern "C"
void* C_ZN6QBrushC2ERK7QPixmap(QPixmap* pixmap) {
  return  new QBrush(*pixmap);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:74
// [-2] void QBrush(const class QImage &)
extern "C"
void* C_ZN6QBrushC2ERK6QImage(QImage* image) {
  return  new QBrush(*image);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:78
// [-2] void QBrush(const class QGradient &)
extern "C"
void* C_ZN6QBrushC2ERK9QGradient(QGradient* gradient) {
  return  new QBrush(*gradient);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:80
// [-2] void ~QBrush()
extern "C"
void C_ZN6QBrushD2Ev(void *this_) {
  delete (QBrush*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:81
// [8] QBrush & operator=(const class QBrush &)
extern "C"
void* C_ZN6QBrushaSERKS_(void *this_, QBrush* brush) {
  auto& rv = ((QBrush*)this_)->operator=(*brush);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:83
// [8] QBrush & operator=(class QBrush &&)
extern "C"
void* C_ZN6QBrushaSEOS_(void *this_, QBrush && other) {
  auto& rv = ((QBrush*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:86
// [-2] void swap(class QBrush &)
extern "C"
void C_ZN6QBrush4swapERS_(void *this_, QBrush* other) {
  ((QBrush*)this_)->swap(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:91
// [4] Qt::BrushStyle style()
extern "C"
Qt::BrushStyle C_ZNK6QBrush5styleEv(void *this_) {
  return (Qt::BrushStyle)((QBrush*)this_)->style();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:92
// [-2] void setStyle(Qt::BrushStyle)
extern "C"
void C_ZN6QBrush8setStyleEN2Qt10BrushStyleE(void *this_, Qt::BrushStyle arg0) {
  ((QBrush*)this_)->setStyle(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:94
// [48] const QMatrix & matrix()
extern "C"
void* C_ZNK6QBrush6matrixEv(void *this_) {
  auto& rv = ((QBrush*)this_)->matrix();
return new QMatrix(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:95
// [-2] void setMatrix(const class QMatrix &)
extern "C"
void C_ZN6QBrush9setMatrixERK7QMatrix(void *this_, QMatrix* mat) {
  ((QBrush*)this_)->setMatrix(*mat);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:97
// [88] QTransform transform()
extern "C"
void* C_ZNK6QBrush9transformEv(void *this_) {
  auto rv = ((QBrush*)this_)->transform();
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:98
// [-2] void setTransform(const class QTransform &)
extern "C"
void C_ZN6QBrush12setTransformERK10QTransform(void *this_, QTransform* arg0) {
  ((QBrush*)this_)->setTransform(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:100
// [32] QPixmap texture()
extern "C"
void* C_ZNK6QBrush7textureEv(void *this_) {
  auto rv = ((QBrush*)this_)->texture();
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:101
// [-2] void setTexture(const class QPixmap &)
extern "C"
void C_ZN6QBrush10setTextureERK7QPixmap(void *this_, QPixmap* pixmap) {
  ((QBrush*)this_)->setTexture(*pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:103
// [32] QImage textureImage()
extern "C"
void* C_ZNK6QBrush12textureImageEv(void *this_) {
  auto rv = ((QBrush*)this_)->textureImage();
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:104
// [-2] void setTextureImage(const class QImage &)
extern "C"
void C_ZN6QBrush15setTextureImageERK6QImage(void *this_, QImage* image) {
  ((QBrush*)this_)->setTextureImage(*image);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:106
// [16] const QColor & color()
extern "C"
void* C_ZNK6QBrush5colorEv(void *this_) {
  auto& rv = ((QBrush*)this_)->color();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:107
// [-2] void setColor(const class QColor &)
extern "C"
void C_ZN6QBrush8setColorERK6QColor(void *this_, QColor* color) {
  ((QBrush*)this_)->setColor(*color);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:108
// [-2] void setColor(Qt::GlobalColor)
extern "C"
void C_ZN6QBrush8setColorEN2Qt11GlobalColorE(void *this_, Qt::GlobalColor color) {
  ((QBrush*)this_)->setColor(color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:110
// [8] const QGradient * gradient()
extern "C"
void* C_ZNK6QBrush8gradientEv(void *this_) {
  return (void*)((QBrush*)this_)->gradient();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:112
// [1] bool isOpaque()
extern "C"
bool C_ZNK6QBrush8isOpaqueEv(void *this_) {
  return (bool)((QBrush*)this_)->isOpaque();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:114
// [1] bool operator==(const class QBrush &)
extern "C"
bool C_ZNK6QBrusheqERKS_(void *this_, QBrush* b) {
  return (bool)((QBrush*)this_)->operator==(*b);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:115
// [1] bool operator!=(const class QBrush &)
extern "C"
bool C_ZNK6QBrushneERKS_(void *this_, QBrush* b) {
  return (bool)((QBrush*)this_)->operator!=(*b);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:129
// [1] bool isDetached()
extern "C"
bool C_ZNK6QBrush10isDetachedEv(void *this_) {
  return (bool)((QBrush*)this_)->isDetached();
}

//  main block end
