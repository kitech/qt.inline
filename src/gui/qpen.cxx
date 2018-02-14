//  header block begin
// /usr/include/qt/QtGui/qpen.h
#include <qpen.h>
#include <QtGui>
#include "callback_inherit.h"

// QPen is pure virtual: false
// QPen has virtual projected: false
//  header block end

//  main block begin

class MyQPen : public QPen {
public:
  virtual ~MyQPen() {}
// void QPen()
MyQPen() : QPen() {}
// void QPen(Qt::PenStyle)
MyQPen(Qt::PenStyle arg0) : QPen(arg0) {}
// void QPen(const class QColor &)
MyQPen(const QColor & color) : QPen(color) {}
// void QPen(const class QBrush &, qreal, Qt::PenStyle, Qt::PenCapStyle, Qt::PenJoinStyle)
MyQPen(const QBrush & brush, qreal width, Qt::PenStyle s, Qt::PenCapStyle c, Qt::PenJoinStyle j) : QPen(brush, width, s, c, j) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:63
// [-2] void QPen()
extern "C"
void* C_ZN4QPenC2Ev() {
  return  new QPen();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:64
// [-2] void QPen(Qt::PenStyle)
extern "C"
void* C_ZN4QPenC2EN2Qt8PenStyleE(Qt::PenStyle arg0) {
  return  new QPen(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:65
// [-2] void QPen(const class QColor &)
extern "C"
void* C_ZN4QPenC2ERK6QColor(QColor* color) {
  return  new QPen(*color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:66
// [-2] void QPen(const class QBrush &, qreal, Qt::PenStyle, Qt::PenCapStyle, Qt::PenJoinStyle)
extern "C"
void* C_ZN4QPenC2ERK6QBrushdN2Qt8PenStyleENS3_11PenCapStyleENS3_12PenJoinStyleE(QBrush* brush, qreal width, Qt::PenStyle s, Qt::PenCapStyle c, Qt::PenJoinStyle j) {
  return  new QPen(*brush, width, s, c, j);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:70
// [-2] void ~QPen()
extern "C"
void C_ZN4QPenD2Ev(void *this_) {
  delete (QPen*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:72
// [8] QPen & operator=(const class QPen &)
extern "C"
void* C_ZN4QPenaSERKS_(void *this_, QPen* pen) {
  auto& rv = ((QPen*)this_)->operator=(*pen);
return &rv;
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:76
// [8] QPen & operator=(class QPen &&)
extern "C"
void* C_ZN4QPenaSEOS_(void *this_, QPen && other) {
  auto& rv = ((QPen*)this_)->operator=(other);
return &rv;
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:79
// [-2] void swap(class QPen &)
extern "C"
void C_ZN4QPen4swapERS_(void *this_, QPen* other) {
  ((QPen*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:81
// [4] Qt::PenStyle style()
extern "C"
Qt::PenStyle C_ZNK4QPen5styleEv(void *this_) {
  return (Qt::PenStyle)((QPen*)this_)->style();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:82
// [-2] void setStyle(Qt::PenStyle)
extern "C"
void C_ZN4QPen8setStyleEN2Qt8PenStyleE(void *this_, Qt::PenStyle arg0) {
  ((QPen*)this_)->setStyle(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:87
// [8] qreal dashOffset()
extern "C"
qreal C_ZNK4QPen10dashOffsetEv(void *this_) {
  return (qreal)((QPen*)this_)->dashOffset();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:88
// [-2] void setDashOffset(qreal)
extern "C"
void C_ZN4QPen13setDashOffsetEd(void *this_, qreal doffset) {
  ((QPen*)this_)->setDashOffset(doffset);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:90
// [8] qreal miterLimit()
extern "C"
qreal C_ZNK4QPen10miterLimitEv(void *this_) {
  return (qreal)((QPen*)this_)->miterLimit();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:91
// [-2] void setMiterLimit(qreal)
extern "C"
void C_ZN4QPen13setMiterLimitEd(void *this_, qreal limit) {
  ((QPen*)this_)->setMiterLimit(limit);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:93
// [8] qreal widthF()
extern "C"
qreal C_ZNK4QPen6widthFEv(void *this_) {
  return (qreal)((QPen*)this_)->widthF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:94
// [-2] void setWidthF(qreal)
extern "C"
void C_ZN4QPen9setWidthFEd(void *this_, qreal width) {
  ((QPen*)this_)->setWidthF(width);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:96
// [4] int width()
extern "C"
int C_ZNK4QPen5widthEv(void *this_) {
  return (int)((QPen*)this_)->width();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:97
// [-2] void setWidth(int)
extern "C"
void C_ZN4QPen8setWidthEi(void *this_, int width) {
  ((QPen*)this_)->setWidth(width);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:99
// [16] QColor color()
extern "C"
void* C_ZNK4QPen5colorEv(void *this_) {
  auto rv = ((QPen*)this_)->color();
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:100
// [-2] void setColor(const class QColor &)
extern "C"
void C_ZN4QPen8setColorERK6QColor(void *this_, QColor* color) {
  ((QPen*)this_)->setColor(*color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:102
// [8] QBrush brush()
extern "C"
void* C_ZNK4QPen5brushEv(void *this_) {
  auto rv = ((QPen*)this_)->brush();
return new QBrush(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:103
// [-2] void setBrush(const class QBrush &)
extern "C"
void C_ZN4QPen8setBrushERK6QBrush(void *this_, QBrush* brush) {
  ((QPen*)this_)->setBrush(*brush);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:105
// [1] bool isSolid()
extern "C"
bool C_ZNK4QPen7isSolidEv(void *this_) {
  return (bool)((QPen*)this_)->isSolid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:107
// [4] Qt::PenCapStyle capStyle()
extern "C"
Qt::PenCapStyle C_ZNK4QPen8capStyleEv(void *this_) {
  return (Qt::PenCapStyle)((QPen*)this_)->capStyle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:108
// [-2] void setCapStyle(Qt::PenCapStyle)
extern "C"
void C_ZN4QPen11setCapStyleEN2Qt11PenCapStyleE(void *this_, Qt::PenCapStyle pcs) {
  ((QPen*)this_)->setCapStyle(pcs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:110
// [4] Qt::PenJoinStyle joinStyle()
extern "C"
Qt::PenJoinStyle C_ZNK4QPen9joinStyleEv(void *this_) {
  return (Qt::PenJoinStyle)((QPen*)this_)->joinStyle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:111
// [-2] void setJoinStyle(Qt::PenJoinStyle)
extern "C"
void C_ZN4QPen12setJoinStyleEN2Qt12PenJoinStyleE(void *this_, Qt::PenJoinStyle pcs) {
  ((QPen*)this_)->setJoinStyle(pcs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:113
// [1] bool isCosmetic()
extern "C"
bool C_ZNK4QPen10isCosmeticEv(void *this_) {
  return (bool)((QPen*)this_)->isCosmetic();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:114
// [-2] void setCosmetic(_Bool)
extern "C"
void C_ZN4QPen11setCosmeticEb(void *this_, bool cosmetic) {
  ((QPen*)this_)->setCosmetic(cosmetic);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:116
// [1] bool operator==(const class QPen &)
extern "C"
bool C_ZNK4QPeneqERKS_(void *this_, QPen* p) {
  return (bool)((QPen*)this_)->operator==(*p);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:117
// [1] bool operator!=(const class QPen &)
extern "C"
bool C_ZNK4QPenneERKS_(void *this_, QPen* p) {
  return (bool)((QPen*)this_)->operator!=(*p);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:120
// [1] bool isDetached()
extern "C"
bool C_ZN4QPen10isDetachedEv(void *this_) {
  return (bool)((QPen*)this_)->isDetached();
}
//  main block end
