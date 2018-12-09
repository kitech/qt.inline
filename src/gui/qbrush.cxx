//  header block begin

// /usr/include/qt/QtGui/qbrush.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QBrush is pure virtual: false
// QBrush has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQBrush_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQBrush_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQBrush_t qt_meta_stringdata_MyQBrush = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQBrush"
  },
  "MyQBrush"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQBrush[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQBrush : public QBrush {
public:
  virtual ~MyQBrush() {}
// void QBrush()
MyQBrush() : QBrush() {}
// void QBrush(Qt::BrushStyle)
MyQBrush(Qt::BrushStyle bs) : QBrush(bs) {}
// void QBrush(const QColor &, Qt::BrushStyle)
MyQBrush(const QColor & color, Qt::BrushStyle bs) : QBrush(color, bs) {}
// void QBrush(Qt::GlobalColor, Qt::BrushStyle)
MyQBrush(Qt::GlobalColor color, Qt::BrushStyle bs) : QBrush(color, bs) {}
// void QBrush(const QColor &, const QPixmap &)
MyQBrush(const QColor & color, const QPixmap & pixmap) : QBrush(color, pixmap) {}
// void QBrush(Qt::GlobalColor, const QPixmap &)
MyQBrush(Qt::GlobalColor color, const QPixmap & pixmap) : QBrush(color, pixmap) {}
// void QBrush(const QPixmap &)
MyQBrush(const QPixmap & pixmap) : QBrush(pixmap) {}
// void QBrush(const QImage &)
MyQBrush(const QImage & image) : QBrush(image) {}
// void QBrush(const QBrush &)
MyQBrush(const QBrush & brush) : QBrush(brush) {}
// void QBrush(const QGradient &)
MyQBrush(const QGradient & gradient) : QBrush(gradient) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:66
// [-2] void QBrush()
extern "C" Q_DECL_EXPORT
void* C_ZN6QBrushC2Ev() {
  return  new QBrush();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:67
// [-2] void QBrush(Qt::BrushStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN6QBrushC2EN2Qt10BrushStyleE(Qt::BrushStyle bs) {
  return  new QBrush(bs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:68
// [-2] void QBrush(const QColor &, Qt::BrushStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN6QBrushC2ERK6QColorN2Qt10BrushStyleE(QColor* color, Qt::BrushStyle bs) {
  return  new QBrush(*color, bs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:69
// [-2] void QBrush(Qt::GlobalColor, Qt::BrushStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN6QBrushC2EN2Qt11GlobalColorENS0_10BrushStyleE(Qt::GlobalColor color, Qt::BrushStyle bs) {
  return  new QBrush(color, bs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:71
// [-2] void QBrush(const QColor &, const QPixmap &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QBrushC2ERK6QColorRK7QPixmap(QColor* color, QPixmap* pixmap) {
  return  new QBrush(*color, *pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:72
// [-2] void QBrush(Qt::GlobalColor, const QPixmap &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QBrushC2EN2Qt11GlobalColorERK7QPixmap(Qt::GlobalColor color, QPixmap* pixmap) {
  return  new QBrush(color, *pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:73
// [-2] void QBrush(const QPixmap &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QBrushC2ERK7QPixmap(QPixmap* pixmap) {
  return  new QBrush(*pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:74
// [-2] void QBrush(const QImage &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QBrushC2ERK6QImage(QImage* image) {
  return  new QBrush(*image);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:76
// [-2] void QBrush(const QBrush &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QBrushC2ERKS_(QBrush* brush) {
  return  new QBrush(*brush);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:78
// [-2] void QBrush(const QGradient &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QBrushC2ERK9QGradient(QGradient* gradient) {
  return  new QBrush(*gradient);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:80
// [-2] void ~QBrush()
extern "C" Q_DECL_EXPORT
void C_ZN6QBrushD2Ev(void *this_) {
  delete (QBrush*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:81
// [8] QBrush & operator=(const QBrush &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QBrushaSERKS_(void *this_, QBrush* brush) {
  auto& rv = ((QBrush*)this_)->operator=(*brush);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:83
// [8] QBrush & operator=(QBrush &&)
extern "C" Q_DECL_EXPORT
void* C_ZN6QBrushaSEOS_(void *this_, QBrush && other) {
  auto& rv = ((QBrush*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qbrush.h:86
// [-2] void swap(QBrush &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN6QBrush4swapERS_(void *this_, QBrush* other) {
  ((QBrush*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:91
// [4] Qt::BrushStyle style()
extern "C" Q_DECL_EXPORT
Qt::BrushStyle C_ZNK6QBrush5styleEv(void *this_) {
  return (Qt::BrushStyle)((QBrush*)this_)->style();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:92
// [-2] void setStyle(Qt::BrushStyle)
extern "C" Q_DECL_EXPORT
void C_ZN6QBrush8setStyleEN2Qt10BrushStyleE(void *this_, Qt::BrushStyle arg0) {
  ((QBrush*)this_)->setStyle(arg0);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qbrush.h:94
// [48] const QMatrix & matrix()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK6QBrush6matrixEv(void *this_) {
  auto& rv = ((QBrush*)this_)->matrix();
return new QMatrix(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qbrush.h:95
// [-2] void setMatrix(const QMatrix &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN6QBrush9setMatrixERK7QMatrix(void *this_, QMatrix* mat) {
  ((QBrush*)this_)->setMatrix(*mat);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qbrush.h:97
// [88] QTransform transform()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK6QBrush9transformEv(void *this_) {
  auto rv = ((QBrush*)this_)->transform();
return new QTransform(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qbrush.h:98
// [-2] void setTransform(const QTransform &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN6QBrush12setTransformERK10QTransform(void *this_, QTransform* arg0) {
  ((QBrush*)this_)->setTransform(*arg0);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:100
// [32] QPixmap texture()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QBrush7textureEv(void *this_) {
  auto rv = ((QBrush*)this_)->texture();
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:101
// [-2] void setTexture(const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN6QBrush10setTextureERK7QPixmap(void *this_, QPixmap* pixmap) {
  ((QBrush*)this_)->setTexture(*pixmap);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qbrush.h:103
// [32] QImage textureImage()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK6QBrush12textureImageEv(void *this_) {
  auto rv = ((QBrush*)this_)->textureImage();
return new QImage(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qbrush.h:104
// [-2] void setTextureImage(const QImage &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN6QBrush15setTextureImageERK6QImage(void *this_, QImage* image) {
  ((QBrush*)this_)->setTextureImage(*image);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:106
// [16] const QColor & color()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QBrush5colorEv(void *this_) {
  auto& rv = ((QBrush*)this_)->color();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:107
// [-2] void setColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN6QBrush8setColorERK6QColor(void *this_, QColor* color) {
  ((QBrush*)this_)->setColor(*color);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:108
// [-2] void setColor(Qt::GlobalColor)
extern "C" Q_DECL_EXPORT
void C_ZN6QBrush8setColorEN2Qt11GlobalColorE(void *this_, Qt::GlobalColor color) {
  ((QBrush*)this_)->setColor(color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:110
// [8] const QGradient * gradient()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QBrush8gradientEv(void *this_) {
  return (void*)((QBrush*)this_)->gradient();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:112
// [1] bool isOpaque()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QBrush8isOpaqueEv(void *this_) {
  return (bool)((QBrush*)this_)->isOpaque();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:114
// [1] bool operator==(const QBrush &)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QBrusheqERKS_(void *this_, QBrush* b) {
  return (bool)((QBrush*)this_)->operator==(*b);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:115
// [1] bool operator!=(const QBrush &)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QBrushneERKS_(void *this_, QBrush* b) {
  return (bool)((QBrush*)this_)->operator!=(*b);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:129
// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QBrush10isDetachedEv(void *this_) {
  return (bool)((QBrush*)this_)->isDetached();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:131
// [8] QBrush::DataPtr & data_ptr()
extern "C" Q_DECL_EXPORT
void* C_ZN6QBrush8data_ptrEv(void *this_) {
  auto& rv = ((QBrush*)this_)->data_ptr();
return &rv;
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
