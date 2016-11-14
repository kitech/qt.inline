// /usr/include/qt/QtGui/qtransform.h
#include <qtransform.h>
#include <QtGui>

// inline
// /usr/include/qt/QtGui/qtransform.h:68
// void QTransform(Qt::Initialization)
extern "C"
void* C_ZN10QTransformC1EN2Qt14InitializationE(Qt::Initialization a0) {
  return new QTransform(a0);
}
// /usr/include/qt/QtGui/qtransform.h:69
// void QTransform()
extern "C"
void* C_ZN10QTransformC1Ev() {
  return new QTransform();
}
// /usr/include/qt/QtGui/qtransform.h:70
// void QTransform(qreal, qreal, qreal, qreal, qreal, qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN10QTransformC1Eddddddddd(qreal h11, qreal h12, qreal h13, qreal h21, qreal h22, qreal h23, qreal h31, qreal h32, qreal h33) {
  return new QTransform(h11, h12, h13, h21, h22, h23, h31, h32, h33);
}
// /usr/include/qt/QtGui/qtransform.h:73
// void QTransform(qreal, qreal, qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN10QTransformC1Edddddd(qreal h11, qreal h12, qreal h21, qreal h22, qreal dx, qreal dy) {
  return new QTransform(h11, h12, h21, h22, dx, dy);
}
// /usr/include/qt/QtGui/qtransform.h:75
// void QTransform(const class QMatrix &)
extern "C"
void* C_ZN10QTransformC1ERK7QMatrix(const QMatrix & mtx) {
  return new QTransform(mtx);
}
// /usr/include/qt/QtGui/qtransform.h:90
// bool isAffine()
extern "C"
void C_ZNK10QTransform8isAffineEv(void *this_) {
  /*return*/ ((QTransform*)this_)->isAffine();
}
// /usr/include/qt/QtGui/qtransform.h:91
// bool isIdentity()
extern "C"
void C_ZNK10QTransform10isIdentityEv(void *this_) {
  /*return*/ ((QTransform*)this_)->isIdentity();
}
// /usr/include/qt/QtGui/qtransform.h:92
// bool isInvertible()
extern "C"
void C_ZNK10QTransform12isInvertibleEv(void *this_) {
  /*return*/ ((QTransform*)this_)->isInvertible();
}
// /usr/include/qt/QtGui/qtransform.h:93
// bool isScaling()
extern "C"
void C_ZNK10QTransform9isScalingEv(void *this_) {
  /*return*/ ((QTransform*)this_)->isScaling();
}
// /usr/include/qt/QtGui/qtransform.h:94
// bool isRotating()
extern "C"
void C_ZNK10QTransform10isRotatingEv(void *this_) {
  /*return*/ ((QTransform*)this_)->isRotating();
}
// /usr/include/qt/QtGui/qtransform.h:95
// bool isTranslating()
extern "C"
void C_ZNK10QTransform13isTranslatingEv(void *this_) {
  /*return*/ ((QTransform*)this_)->isTranslating();
}
// /usr/include/qt/QtGui/qtransform.h:97
// QTransform::TransformationType type()
extern "C"
void C_ZNK10QTransform4typeEv(void *this_) {
  /*return*/ ((QTransform*)this_)->type();
}
// inline
// /usr/include/qt/QtGui/qtransform.h:99
// qreal determinant()
extern "C"
void C_ZNK10QTransform11determinantEv(void *this_) {
  /*return*/ ((QTransform*)this_)->determinant();
}
// /usr/include/qt/QtGui/qtransform.h:100
// qreal det()
extern "C"
void C_ZNK10QTransform3detEv(void *this_) {
  /*return*/ ((QTransform*)this_)->det();
}
// /usr/include/qt/QtGui/qtransform.h:102
// qreal m11()
extern "C"
void C_ZNK10QTransform3m11Ev(void *this_) {
  /*return*/ ((QTransform*)this_)->m11();
}
// /usr/include/qt/QtGui/qtransform.h:103
// qreal m12()
extern "C"
void C_ZNK10QTransform3m12Ev(void *this_) {
  /*return*/ ((QTransform*)this_)->m12();
}
// /usr/include/qt/QtGui/qtransform.h:104
// qreal m13()
extern "C"
void C_ZNK10QTransform3m13Ev(void *this_) {
  /*return*/ ((QTransform*)this_)->m13();
}
// /usr/include/qt/QtGui/qtransform.h:105
// qreal m21()
extern "C"
void C_ZNK10QTransform3m21Ev(void *this_) {
  /*return*/ ((QTransform*)this_)->m21();
}
// /usr/include/qt/QtGui/qtransform.h:106
// qreal m22()
extern "C"
void C_ZNK10QTransform3m22Ev(void *this_) {
  /*return*/ ((QTransform*)this_)->m22();
}
// /usr/include/qt/QtGui/qtransform.h:107
// qreal m23()
extern "C"
void C_ZNK10QTransform3m23Ev(void *this_) {
  /*return*/ ((QTransform*)this_)->m23();
}
// /usr/include/qt/QtGui/qtransform.h:108
// qreal m31()
extern "C"
void C_ZNK10QTransform3m31Ev(void *this_) {
  /*return*/ ((QTransform*)this_)->m31();
}
// /usr/include/qt/QtGui/qtransform.h:109
// qreal m32()
extern "C"
void C_ZNK10QTransform3m32Ev(void *this_) {
  /*return*/ ((QTransform*)this_)->m32();
}
// /usr/include/qt/QtGui/qtransform.h:110
// qreal m33()
extern "C"
void C_ZNK10QTransform3m33Ev(void *this_) {
  /*return*/ ((QTransform*)this_)->m33();
}
// /usr/include/qt/QtGui/qtransform.h:111
// qreal dx()
extern "C"
void C_ZNK10QTransform2dxEv(void *this_) {
  /*return*/ ((QTransform*)this_)->dx();
}
// /usr/include/qt/QtGui/qtransform.h:112
// qreal dy()
extern "C"
void C_ZNK10QTransform2dyEv(void *this_) {
  /*return*/ ((QTransform*)this_)->dy();
}
// /usr/include/qt/QtGui/qtransform.h:114
// void setMatrix(qreal, qreal, qreal, qreal, qreal, qreal, qreal, qreal, qreal)
extern "C"
void C_ZN10QTransform9setMatrixEddddddddd(void *this_, qreal m11, qreal m12, qreal m13, qreal m21, qreal m22, qreal m23, qreal m31, qreal m32, qreal m33) {
  ((QTransform*)this_)->setMatrix(m11, m12, m13, m21, m22, m23, m31, m32, m33);
}
// /usr/include/qt/QtGui/qtransform.h:118
// QTransform inverted(_Bool *)
extern "C"
void C_ZNK10QTransform8invertedEPb(void *this_, bool * invertible) {
  /*return*/ ((QTransform*)this_)->inverted(invertible);
}
// /usr/include/qt/QtGui/qtransform.h:119
// QTransform adjoint()
extern "C"
void C_ZNK10QTransform7adjointEv(void *this_) {
  /*return*/ ((QTransform*)this_)->adjoint();
}
// /usr/include/qt/QtGui/qtransform.h:120
// QTransform transposed()
extern "C"
void C_ZNK10QTransform10transposedEv(void *this_) {
  /*return*/ ((QTransform*)this_)->transposed();
}
// /usr/include/qt/QtGui/qtransform.h:122
// QTransform & translate(qreal, qreal)
extern "C"
void C_ZN10QTransform9translateEdd(void *this_, qreal dx, qreal dy) {
  /*return*/ ((QTransform*)this_)->translate(dx, dy);
}
// /usr/include/qt/QtGui/qtransform.h:123
// QTransform & scale(qreal, qreal)
extern "C"
void C_ZN10QTransform5scaleEdd(void *this_, qreal sx, qreal sy) {
  /*return*/ ((QTransform*)this_)->scale(sx, sy);
}
// /usr/include/qt/QtGui/qtransform.h:124
// QTransform & shear(qreal, qreal)
extern "C"
void C_ZN10QTransform5shearEdd(void *this_, qreal sh, qreal sv) {
  /*return*/ ((QTransform*)this_)->shear(sh, sv);
}
// /usr/include/qt/QtGui/qtransform.h:125
// QTransform & rotate(qreal, Qt::Axis)
extern "C"
void C_ZN10QTransform6rotateEdN2Qt4AxisE(void *this_, qreal a, Qt::Axis axis) {
  /*return*/ ((QTransform*)this_)->rotate(a, axis);
}
// /usr/include/qt/QtGui/qtransform.h:126
// QTransform & rotateRadians(qreal, Qt::Axis)
extern "C"
void C_ZN10QTransform13rotateRadiansEdN2Qt4AxisE(void *this_, qreal a, Qt::Axis axis) {
  /*return*/ ((QTransform*)this_)->rotateRadians(a, axis);
}
// static
// /usr/include/qt/QtGui/qtransform.h:128
// bool squareToQuad(const class QPolygonF &, class QTransform &)
extern "C"
void C_ZN10QTransform12squareToQuadERK9QPolygonFRS_(const QPolygonF & square, QTransform & result) {
  /*return*/ QTransform::squareToQuad(square, result);
}
// static
// /usr/include/qt/QtGui/qtransform.h:129
// bool quadToSquare(const class QPolygonF &, class QTransform &)
extern "C"
void C_ZN10QTransform12quadToSquareERK9QPolygonFRS_(const QPolygonF & quad, QTransform & result) {
  /*return*/ QTransform::quadToSquare(quad, result);
}
// static
// /usr/include/qt/QtGui/qtransform.h:130
// bool quadToQuad(const class QPolygonF &, const class QPolygonF &, class QTransform &)
extern "C"
void C_ZN10QTransform10quadToQuadERK9QPolygonFS2_RS_(const QPolygonF & one, const QPolygonF & two, QTransform & result) {
  /*return*/ QTransform::quadToQuad(one, two, result);
}
// /usr/include/qt/QtGui/qtransform.h:142
// void reset()
extern "C"
void C_ZN10QTransform5resetEv(void *this_) {
  ((QTransform*)this_)->reset();
}
// /usr/include/qt/QtGui/qtransform.h:143
// QPoint map(const class QPoint &)
extern "C"
void C_ZNK10QTransform3mapERK6QPoint(void *this_, const QPoint & p) {
  /*return*/ ((QTransform*)this_)->map(p);
}
// /usr/include/qt/QtGui/qtransform.h:144
// QPointF map(const class QPointF &)
extern "C"
void C_ZNK10QTransform3mapERK7QPointF(void *this_, const QPointF & p) {
  /*return*/ ((QTransform*)this_)->map(p);
}
// /usr/include/qt/QtGui/qtransform.h:145
// QLine map(const class QLine &)
extern "C"
void C_ZNK10QTransform3mapERK5QLine(void *this_, const QLine & l) {
  /*return*/ ((QTransform*)this_)->map(l);
}
// /usr/include/qt/QtGui/qtransform.h:146
// QLineF map(const class QLineF &)
extern "C"
void C_ZNK10QTransform3mapERK6QLineF(void *this_, const QLineF & l) {
  /*return*/ ((QTransform*)this_)->map(l);
}
// /usr/include/qt/QtGui/qtransform.h:147
// QPolygonF map(const class QPolygonF &)
extern "C"
void C_ZNK10QTransform3mapERK9QPolygonF(void *this_, const QPolygonF & a) {
  /*return*/ ((QTransform*)this_)->map(a);
}
// /usr/include/qt/QtGui/qtransform.h:148
// QPolygon map(const class QPolygon &)
extern "C"
void C_ZNK10QTransform3mapERK8QPolygon(void *this_, const QPolygon & a) {
  /*return*/ ((QTransform*)this_)->map(a);
}
// /usr/include/qt/QtGui/qtransform.h:149
// QRegion map(const class QRegion &)
extern "C"
void C_ZNK10QTransform3mapERK7QRegion(void *this_, const QRegion & r) {
  /*return*/ ((QTransform*)this_)->map(r);
}
// /usr/include/qt/QtGui/qtransform.h:150
// QPainterPath map(const class QPainterPath &)
extern "C"
void C_ZNK10QTransform3mapERK12QPainterPath(void *this_, const QPainterPath & p) {
  /*return*/ ((QTransform*)this_)->map(p);
}
// /usr/include/qt/QtGui/qtransform.h:151
// QPolygon mapToPolygon(const class QRect &)
extern "C"
void C_ZNK10QTransform12mapToPolygonERK5QRect(void *this_, const QRect & r) {
  /*return*/ ((QTransform*)this_)->mapToPolygon(r);
}
// /usr/include/qt/QtGui/qtransform.h:152
// QRect mapRect(const class QRect &)
extern "C"
void C_ZNK10QTransform7mapRectERK5QRect(void *this_, const QRect & a0) {
  /*return*/ ((QTransform*)this_)->mapRect(a0);
}
// /usr/include/qt/QtGui/qtransform.h:153
// QRectF mapRect(const class QRectF &)
extern "C"
void C_ZNK10QTransform7mapRectERK6QRectF(void *this_, const QRectF & a0) {
  /*return*/ ((QTransform*)this_)->mapRect(a0);
}
// /usr/include/qt/QtGui/qtransform.h:154
// void map(int, int, int *, int *)
extern "C"
void C_ZNK10QTransform3mapEiiPiS0_(void *this_, int x, int y, int * tx, int * ty) {
  ((QTransform*)this_)->map(x, y, tx, ty);
}
// /usr/include/qt/QtGui/qtransform.h:155
// void map(qreal, qreal, qreal *, qreal *)
extern "C"
void C_ZNK10QTransform3mapEddPdS0_(void *this_, qreal x, qreal y, qreal * tx, qreal * ty) {
  ((QTransform*)this_)->map(x, y, tx, ty);
}
// /usr/include/qt/QtGui/qtransform.h:157
// const QMatrix & toAffine()
extern "C"
void C_ZNK10QTransform8toAffineEv(void *this_) {
  /*return*/ ((QTransform*)this_)->toAffine();
}
// static
// /usr/include/qt/QtGui/qtransform.h:164
// QTransform fromTranslate(qreal, qreal)
extern "C"
void C_ZN10QTransform13fromTranslateEdd(qreal dx, qreal dy) {
  /*return*/ QTransform::fromTranslate(dx, dy);
}
// static
// /usr/include/qt/QtGui/qtransform.h:165
// QTransform fromScale(qreal, qreal)
extern "C"
void C_ZN10QTransform9fromScaleEdd(qreal dx, qreal dy) {
  /*return*/ QTransform::fromScale(dx, dy);
}