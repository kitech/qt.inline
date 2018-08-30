//  header block begin
// /usr/include/qt/QtGui/qpen.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpen.h>
#include <QtGui>
#include "callback_inherit.h"

// QPen is pure virtual: false
// QPen has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQPen_t {
  QByteArrayData data[1];
  char stringdata0[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPen_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPen_t qt_meta_stringdata_MyQPen = {
   {
  QT_MOC_LITERAL(0, 0, 6), // "MyQPen"
  },
  "MyQPen"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPen[] = {
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
class Q_DECL_EXPORT MyQPen : public QPen {
public:
  virtual ~MyQPen() {}
// void QPen()
MyQPen() : QPen() {}
// void QPen(Qt::PenStyle)
MyQPen(Qt::PenStyle arg0) : QPen(arg0) {}
// void QPen(const QColor &)
MyQPen(const QColor & color) : QPen(color) {}
// void QPen(const QBrush &, qreal, Qt::PenStyle, Qt::PenCapStyle, Qt::PenJoinStyle)
MyQPen(const QBrush & brush, qreal width, Qt::PenStyle s, Qt::PenCapStyle c, Qt::PenJoinStyle j) : QPen(brush, width, s, c, j) {}
// void QPen(const QPen &)
MyQPen(const QPen & pen) : QPen(pen) {}
// void QPen(QPen &&)
MyQPen(QPen && other) : QPen(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:63
// [-2] void QPen()
extern "C" Q_DECL_EXPORT
void* C_ZN4QPenC2Ev() {
  return  new QPen();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:64
// [-2] void QPen(Qt::PenStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN4QPenC2EN2Qt8PenStyleE(Qt::PenStyle arg0) {
  return  new QPen(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:65
// [-2] void QPen(const QColor &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QPenC2ERK6QColor(QColor* color) {
  return  new QPen(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:66
// [-2] void QPen(const QBrush &, qreal, Qt::PenStyle, Qt::PenCapStyle, Qt::PenJoinStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN4QPenC2ERK6QBrushdN2Qt8PenStyleENS3_11PenCapStyleENS3_12PenJoinStyleE(QBrush* brush, qreal width, Qt::PenStyle s, Qt::PenCapStyle c, Qt::PenJoinStyle j) {
  return  new QPen(*brush, width, s, c, j);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:68
// [-2] void QPen(const QPen &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QPenC2ERKS_(QPen* pen) {
  return  new QPen(*pen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:70
// [-2] void ~QPen()
extern "C" Q_DECL_EXPORT
void C_ZN4QPenD2Ev(void *this_) {
  delete (QPen*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:72
// [8] QPen & operator=(const QPen &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QPenaSERKS_(void *this_, QPen* pen) {
  auto& rv = ((QPen*)this_)->operator=(*pen);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qpen.h:74
// [-2] void QPen(QPen &&)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN4QPenC2EOS_(QPen && other) {
  return  new QPen(other);
}
#endif // QT_VERSION >= 0x050400

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:76
// [8] QPen & operator=(QPen &&)
extern "C" Q_DECL_EXPORT
void* C_ZN4QPenaSEOS_(void *this_, QPen && other) {
  auto& rv = ((QPen*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qpen.h:79
// [-2] void swap(QPen &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN4QPen4swapERS_(void *this_, QPen* other) {
  ((QPen*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:81
// [4] Qt::PenStyle style()
extern "C" Q_DECL_EXPORT
Qt::PenStyle C_ZNK4QPen5styleEv(void *this_) {
  return (Qt::PenStyle)((QPen*)this_)->style();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:82
// [-2] void setStyle(Qt::PenStyle)
extern "C" Q_DECL_EXPORT
void C_ZN4QPen8setStyleEN2Qt8PenStyleE(void *this_, Qt::PenStyle arg0) {
  ((QPen*)this_)->setStyle(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:84
// [-2] QVector<qreal> dashPattern()
extern "C" Q_DECL_EXPORT
void C_ZNK4QPen11dashPatternEv(void *this_) {
  auto rv = ((QPen*)this_)->dashPattern();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:85
// [-2] void setDashPattern(const QVector<qreal> &)
extern "C" Q_DECL_EXPORT
void C_ZN4QPen14setDashPatternERK7QVectorIdE(void *this_, QVector<double>* pattern) {
  ((QPen*)this_)->setDashPattern(*pattern);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:87
// [8] qreal dashOffset()
extern "C" Q_DECL_EXPORT
qreal C_ZNK4QPen10dashOffsetEv(void *this_) {
  return (qreal)((QPen*)this_)->dashOffset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:88
// [-2] void setDashOffset(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN4QPen13setDashOffsetEd(void *this_, qreal doffset) {
  ((QPen*)this_)->setDashOffset(doffset);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:90
// [8] qreal miterLimit()
extern "C" Q_DECL_EXPORT
qreal C_ZNK4QPen10miterLimitEv(void *this_) {
  return (qreal)((QPen*)this_)->miterLimit();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:91
// [-2] void setMiterLimit(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN4QPen13setMiterLimitEd(void *this_, qreal limit) {
  ((QPen*)this_)->setMiterLimit(limit);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:93
// [8] qreal widthF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK4QPen6widthFEv(void *this_) {
  return (qreal)((QPen*)this_)->widthF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:94
// [-2] void setWidthF(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN4QPen9setWidthFEd(void *this_, qreal width) {
  ((QPen*)this_)->setWidthF(width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:96
// [4] int width()
extern "C" Q_DECL_EXPORT
int C_ZNK4QPen5widthEv(void *this_) {
  return (int)((QPen*)this_)->width();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:97
// [-2] void setWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN4QPen8setWidthEi(void *this_, int width) {
  ((QPen*)this_)->setWidth(width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:99
// [16] QColor color()
extern "C" Q_DECL_EXPORT
void* C_ZNK4QPen5colorEv(void *this_) {
  auto rv = ((QPen*)this_)->color();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:100
// [-2] void setColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN4QPen8setColorERK6QColor(void *this_, QColor* color) {
  ((QPen*)this_)->setColor(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:102
// [8] QBrush brush()
extern "C" Q_DECL_EXPORT
void* C_ZNK4QPen5brushEv(void *this_) {
  auto rv = ((QPen*)this_)->brush();
return new QBrush(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:103
// [-2] void setBrush(const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN4QPen8setBrushERK6QBrush(void *this_, QBrush* brush) {
  ((QPen*)this_)->setBrush(*brush);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:105
// [1] bool isSolid()
extern "C" Q_DECL_EXPORT
bool C_ZNK4QPen7isSolidEv(void *this_) {
  return (bool)((QPen*)this_)->isSolid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:107
// [4] Qt::PenCapStyle capStyle()
extern "C" Q_DECL_EXPORT
Qt::PenCapStyle C_ZNK4QPen8capStyleEv(void *this_) {
  return (Qt::PenCapStyle)((QPen*)this_)->capStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:108
// [-2] void setCapStyle(Qt::PenCapStyle)
extern "C" Q_DECL_EXPORT
void C_ZN4QPen11setCapStyleEN2Qt11PenCapStyleE(void *this_, Qt::PenCapStyle pcs) {
  ((QPen*)this_)->setCapStyle(pcs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:110
// [4] Qt::PenJoinStyle joinStyle()
extern "C" Q_DECL_EXPORT
Qt::PenJoinStyle C_ZNK4QPen9joinStyleEv(void *this_) {
  return (Qt::PenJoinStyle)((QPen*)this_)->joinStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:111
// [-2] void setJoinStyle(Qt::PenJoinStyle)
extern "C" Q_DECL_EXPORT
void C_ZN4QPen12setJoinStyleEN2Qt12PenJoinStyleE(void *this_, Qt::PenJoinStyle pcs) {
  ((QPen*)this_)->setJoinStyle(pcs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:113
// [1] bool isCosmetic()
extern "C" Q_DECL_EXPORT
bool C_ZNK4QPen10isCosmeticEv(void *this_) {
  return (bool)((QPen*)this_)->isCosmetic();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:114
// [-2] void setCosmetic(bool)
extern "C" Q_DECL_EXPORT
void C_ZN4QPen11setCosmeticEb(void *this_, bool cosmetic) {
  ((QPen*)this_)->setCosmetic(cosmetic);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:116
// [1] bool operator==(const QPen &)
extern "C" Q_DECL_EXPORT
bool C_ZNK4QPeneqERKS_(void *this_, QPen* p) {
  return (bool)((QPen*)this_)->operator==(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:117
// [1] bool operator!=(const QPen &)
extern "C" Q_DECL_EXPORT
bool C_ZNK4QPenneERKS_(void *this_, QPen* p) {
  return (bool)((QPen*)this_)->operator!=(*p);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:120
// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_ZN4QPen10isDetachedEv(void *this_) {
  return (bool)((QPen*)this_)->isDetached();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:130
// [8] QPen::DataPtr & data_ptr()
extern "C" Q_DECL_EXPORT
void* C_ZN4QPen8data_ptrEv(void *this_) {
  auto& rv = ((QPen*)this_)->data_ptr();
return &rv;
}

//  main block end
