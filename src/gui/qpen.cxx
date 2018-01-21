//  header block begin
// /usr/include/qt/QtGui/qpen.h
#include <qpen.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qpen.h:62
// void QPen()
extern "C"
void* C_ZN4QPenC1Ev() {
  return new QPen();
}
// /usr/include/qt/QtGui/qpen.h:63
// void QPen(Qt::PenStyle)
extern "C"
void* C_ZN4QPenC1EN2Qt8PenStyleE(Qt::PenStyle arg0) {
  return new QPen(arg0);
}
// /usr/include/qt/QtGui/qpen.h:64
// void QPen(const class QColor &)
extern "C"
void* C_ZN4QPenC1ERK6QColor(const QColor & color) {
  return new QPen(color);
}
// /usr/include/qt/QtGui/qpen.h:65
// void QPen(const class QBrush &, qreal, Qt::PenStyle, Qt::PenCapStyle, Qt::PenJoinStyle)
extern "C"
void* C_ZN4QPenC1ERK6QBrushdN2Qt8PenStyleENS3_11PenCapStyleENS3_12PenJoinStyleE(const QBrush & brush, qreal width, Qt::PenStyle s, Qt::PenCapStyle c, Qt::PenJoinStyle j) {
  return new QPen(brush, width, s, c, j);
}
// /usr/include/qt/QtGui/qpen.h:69
// void ~QPen()
extern "C"
void C_ZN4QPenD1Ev(void *this_) {
  delete (QPen*)(this_);
}
// inline
// /usr/include/qt/QtGui/qpen.h:78
// void swap(class QPen &)
extern "C"
void C_ZN4QPen4swapERS_(void *this_, QPen & other) {
  ((QPen*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qpen.h:80
// Qt::PenStyle style()
extern "C"
void C_ZNK4QPen5styleEv(void *this_) {
  /*return*/ ((QPen*)this_)->style();
}
// /usr/include/qt/QtGui/qpen.h:81
// void setStyle(Qt::PenStyle)
extern "C"
void C_ZN4QPen8setStyleEN2Qt8PenStyleE(void *this_, Qt::PenStyle arg0) {
  ((QPen*)this_)->setStyle(arg0);
}
// /usr/include/qt/QtGui/qpen.h:83
// QVector<qreal> dashPattern()
extern "C"
void C_ZNK4QPen11dashPatternEv(void *this_) {
  /*return*/ ((QPen*)this_)->dashPattern();
}
// /usr/include/qt/QtGui/qpen.h:84
// void setDashPattern(const QVector<qreal> &)
extern "C"
void C_ZN4QPen14setDashPatternERK7QVectorIdE(void *this_, const QVector<qreal> & pattern) {
  ((QPen*)this_)->setDashPattern(pattern);
}
// /usr/include/qt/QtGui/qpen.h:86
// qreal dashOffset()
extern "C"
void C_ZNK4QPen10dashOffsetEv(void *this_) {
  /*return*/ ((QPen*)this_)->dashOffset();
}
// /usr/include/qt/QtGui/qpen.h:87
// void setDashOffset(qreal)
extern "C"
void C_ZN4QPen13setDashOffsetEd(void *this_, qreal doffset) {
  ((QPen*)this_)->setDashOffset(doffset);
}
// /usr/include/qt/QtGui/qpen.h:89
// qreal miterLimit()
extern "C"
void C_ZNK4QPen10miterLimitEv(void *this_) {
  /*return*/ ((QPen*)this_)->miterLimit();
}
// /usr/include/qt/QtGui/qpen.h:90
// void setMiterLimit(qreal)
extern "C"
void C_ZN4QPen13setMiterLimitEd(void *this_, qreal limit) {
  ((QPen*)this_)->setMiterLimit(limit);
}
// /usr/include/qt/QtGui/qpen.h:92
// qreal widthF()
extern "C"
void C_ZNK4QPen6widthFEv(void *this_) {
  /*return*/ ((QPen*)this_)->widthF();
}
// /usr/include/qt/QtGui/qpen.h:93
// void setWidthF(qreal)
extern "C"
void C_ZN4QPen9setWidthFEd(void *this_, qreal width) {
  ((QPen*)this_)->setWidthF(width);
}
// /usr/include/qt/QtGui/qpen.h:95
// int width()
extern "C"
void C_ZNK4QPen5widthEv(void *this_) {
  /*return*/ ((QPen*)this_)->width();
}
// /usr/include/qt/QtGui/qpen.h:96
// void setWidth(int)
extern "C"
void C_ZN4QPen8setWidthEi(void *this_, int width) {
  ((QPen*)this_)->setWidth(width);
}
// /usr/include/qt/QtGui/qpen.h:98
// QColor color()
extern "C"
void C_ZNK4QPen5colorEv(void *this_) {
  /*return*/ ((QPen*)this_)->color();
}
// /usr/include/qt/QtGui/qpen.h:99
// void setColor(const class QColor &)
extern "C"
void C_ZN4QPen8setColorERK6QColor(void *this_, const QColor & color) {
  ((QPen*)this_)->setColor(color);
}
// /usr/include/qt/QtGui/qpen.h:101
// QBrush brush()
extern "C"
void C_ZNK4QPen5brushEv(void *this_) {
  /*return*/ ((QPen*)this_)->brush();
}
// /usr/include/qt/QtGui/qpen.h:102
// void setBrush(const class QBrush &)
extern "C"
void C_ZN4QPen8setBrushERK6QBrush(void *this_, const QBrush & brush) {
  ((QPen*)this_)->setBrush(brush);
}
// /usr/include/qt/QtGui/qpen.h:104
// bool isSolid()
extern "C"
void C_ZNK4QPen7isSolidEv(void *this_) {
  /*return*/ ((QPen*)this_)->isSolid();
}
// /usr/include/qt/QtGui/qpen.h:106
// Qt::PenCapStyle capStyle()
extern "C"
void C_ZNK4QPen8capStyleEv(void *this_) {
  /*return*/ ((QPen*)this_)->capStyle();
}
// /usr/include/qt/QtGui/qpen.h:107
// void setCapStyle(Qt::PenCapStyle)
extern "C"
void C_ZN4QPen11setCapStyleEN2Qt11PenCapStyleE(void *this_, Qt::PenCapStyle pcs) {
  ((QPen*)this_)->setCapStyle(pcs);
}
// /usr/include/qt/QtGui/qpen.h:109
// Qt::PenJoinStyle joinStyle()
extern "C"
void C_ZNK4QPen9joinStyleEv(void *this_) {
  /*return*/ ((QPen*)this_)->joinStyle();
}
// /usr/include/qt/QtGui/qpen.h:110
// void setJoinStyle(Qt::PenJoinStyle)
extern "C"
void C_ZN4QPen12setJoinStyleEN2Qt12PenJoinStyleE(void *this_, Qt::PenJoinStyle pcs) {
  ((QPen*)this_)->setJoinStyle(pcs);
}
// /usr/include/qt/QtGui/qpen.h:112
// bool isCosmetic()
extern "C"
void C_ZNK4QPen10isCosmeticEv(void *this_) {
  /*return*/ ((QPen*)this_)->isCosmetic();
}
// /usr/include/qt/QtGui/qpen.h:113
// void setCosmetic(_Bool)
extern "C"
void C_ZN4QPen11setCosmeticEb(void *this_, bool cosmetic) {
  ((QPen*)this_)->setCosmetic(cosmetic);
}
// /usr/include/qt/QtGui/qpen.h:119
// bool isDetached()
extern "C"
void C_ZN4QPen10isDetachedEv(void *this_) {
  /*return*/ ((QPen*)this_)->isDetached();
}
//  main block end
