//  header block begin
// /usr/include/qt/QtGui/qmatrix.h
#include <qmatrix.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qmatrix.h:59
// void QMatrix(Qt::Initialization)
extern "C"
void* C_ZN7QMatrixC1EN2Qt14InitializationE(Qt::Initialization arg0) {
  return new QMatrix(arg0);
}
// /usr/include/qt/QtGui/qmatrix.h:60
// void QMatrix()
extern "C"
void* C_ZN7QMatrixC1Ev() {
  return new QMatrix();
}
// /usr/include/qt/QtGui/qmatrix.h:61
// void QMatrix(qreal, qreal, qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN7QMatrixC1Edddddd(qreal m11, qreal m12, qreal m21, qreal m22, qreal dx, qreal dy) {
  return new QMatrix(m11, m12, m21, m22, dx, dy);
}
// /usr/include/qt/QtGui/qmatrix.h:74
// void setMatrix(qreal, qreal, qreal, qreal, qreal, qreal)
extern "C"
void C_ZN7QMatrix9setMatrixEdddddd(void *this_, qreal m11, qreal m12, qreal m21, qreal m22, qreal dx, qreal dy) {
  ((QMatrix*)this_)->setMatrix(m11, m12, m21, m22, dx, dy);
}
// inline
// /usr/include/qt/QtGui/qmatrix.h:77
// qreal m11()
extern "C"
void C_ZNK7QMatrix3m11Ev(void *this_) {
  /*return*/ ((QMatrix*)this_)->m11();
}
// inline
// /usr/include/qt/QtGui/qmatrix.h:78
// qreal m12()
extern "C"
void C_ZNK7QMatrix3m12Ev(void *this_) {
  /*return*/ ((QMatrix*)this_)->m12();
}
// inline
// /usr/include/qt/QtGui/qmatrix.h:79
// qreal m21()
extern "C"
void C_ZNK7QMatrix3m21Ev(void *this_) {
  /*return*/ ((QMatrix*)this_)->m21();
}
// inline
// /usr/include/qt/QtGui/qmatrix.h:80
// qreal m22()
extern "C"
void C_ZNK7QMatrix3m22Ev(void *this_) {
  /*return*/ ((QMatrix*)this_)->m22();
}
// inline
// /usr/include/qt/QtGui/qmatrix.h:81
// qreal dx()
extern "C"
void C_ZNK7QMatrix2dxEv(void *this_) {
  /*return*/ ((QMatrix*)this_)->dx();
}
// inline
// /usr/include/qt/QtGui/qmatrix.h:82
// qreal dy()
extern "C"
void C_ZNK7QMatrix2dyEv(void *this_) {
  /*return*/ ((QMatrix*)this_)->dy();
}
// /usr/include/qt/QtGui/qmatrix.h:84
// void map(int, int, int *, int *)
extern "C"
void C_ZNK7QMatrix3mapEiiPiS0_(void *this_, int x, int y, int * tx, int * ty) {
  ((QMatrix*)this_)->map(x, y, tx, ty);
}
// /usr/include/qt/QtGui/qmatrix.h:85
// void map(qreal, qreal, qreal *, qreal *)
extern "C"
void C_ZNK7QMatrix3mapEddPdS0_(void *this_, qreal x, qreal y, qreal * tx, qreal * ty) {
  ((QMatrix*)this_)->map(x, y, tx, ty);
}
// /usr/include/qt/QtGui/qmatrix.h:86
// QRect mapRect(const class QRect &)
extern "C"
void C_ZNK7QMatrix7mapRectERK5QRect(void *this_, const QRect & arg0) {
  /*return*/ ((QMatrix*)this_)->mapRect(arg0);
}
// /usr/include/qt/QtGui/qmatrix.h:87
// QRectF mapRect(const class QRectF &)
extern "C"
void C_ZNK7QMatrix7mapRectERK6QRectF(void *this_, const QRectF & arg0) {
  /*return*/ ((QMatrix*)this_)->mapRect(arg0);
}
// /usr/include/qt/QtGui/qmatrix.h:89
// QPoint map(const class QPoint &)
extern "C"
void C_ZNK7QMatrix3mapERK6QPoint(void *this_, const QPoint & p) {
  /*return*/ ((QMatrix*)this_)->map(p);
}
// /usr/include/qt/QtGui/qmatrix.h:90
// QPointF map(const class QPointF &)
extern "C"
void C_ZNK7QMatrix3mapERK7QPointF(void *this_, const QPointF & p) {
  /*return*/ ((QMatrix*)this_)->map(p);
}
// /usr/include/qt/QtGui/qmatrix.h:91
// QLine map(const class QLine &)
extern "C"
void C_ZNK7QMatrix3mapERK5QLine(void *this_, const QLine & l) {
  /*return*/ ((QMatrix*)this_)->map(l);
}
// /usr/include/qt/QtGui/qmatrix.h:92
// QLineF map(const class QLineF &)
extern "C"
void C_ZNK7QMatrix3mapERK6QLineF(void *this_, const QLineF & l) {
  /*return*/ ((QMatrix*)this_)->map(l);
}
// /usr/include/qt/QtGui/qmatrix.h:93
// QPolygonF map(const class QPolygonF &)
extern "C"
void C_ZNK7QMatrix3mapERK9QPolygonF(void *this_, const QPolygonF & a) {
  /*return*/ ((QMatrix*)this_)->map(a);
}
// /usr/include/qt/QtGui/qmatrix.h:94
// QPolygon map(const class QPolygon &)
extern "C"
void C_ZNK7QMatrix3mapERK8QPolygon(void *this_, const QPolygon & a) {
  /*return*/ ((QMatrix*)this_)->map(a);
}
// /usr/include/qt/QtGui/qmatrix.h:95
// QRegion map(const class QRegion &)
extern "C"
void C_ZNK7QMatrix3mapERK7QRegion(void *this_, const QRegion & r) {
  /*return*/ ((QMatrix*)this_)->map(r);
}
// /usr/include/qt/QtGui/qmatrix.h:96
// QPainterPath map(const class QPainterPath &)
extern "C"
void C_ZNK7QMatrix3mapERK12QPainterPath(void *this_, const QPainterPath & p) {
  /*return*/ ((QMatrix*)this_)->map(p);
}
// /usr/include/qt/QtGui/qmatrix.h:97
// QPolygon mapToPolygon(const class QRect &)
extern "C"
void C_ZNK7QMatrix12mapToPolygonERK5QRect(void *this_, const QRect & r) {
  /*return*/ ((QMatrix*)this_)->mapToPolygon(r);
}
// /usr/include/qt/QtGui/qmatrix.h:99
// void reset()
extern "C"
void C_ZN7QMatrix5resetEv(void *this_) {
  ((QMatrix*)this_)->reset();
}
// inline
// /usr/include/qt/QtGui/qmatrix.h:100
// bool isIdentity()
extern "C"
void C_ZNK7QMatrix10isIdentityEv(void *this_) {
  /*return*/ ((QMatrix*)this_)->isIdentity();
}
// /usr/include/qt/QtGui/qmatrix.h:102
// QMatrix & translate(qreal, qreal)
extern "C"
void C_ZN7QMatrix9translateEdd(void *this_, qreal dx, qreal dy) {
  /*return*/ ((QMatrix*)this_)->translate(dx, dy);
}
// /usr/include/qt/QtGui/qmatrix.h:103
// QMatrix & scale(qreal, qreal)
extern "C"
void C_ZN7QMatrix5scaleEdd(void *this_, qreal sx, qreal sy) {
  /*return*/ ((QMatrix*)this_)->scale(sx, sy);
}
// /usr/include/qt/QtGui/qmatrix.h:104
// QMatrix & shear(qreal, qreal)
extern "C"
void C_ZN7QMatrix5shearEdd(void *this_, qreal sh, qreal sv) {
  /*return*/ ((QMatrix*)this_)->shear(sh, sv);
}
// /usr/include/qt/QtGui/qmatrix.h:105
// QMatrix & rotate(qreal)
extern "C"
void C_ZN7QMatrix6rotateEd(void *this_, qreal a) {
  /*return*/ ((QMatrix*)this_)->rotate(a);
}
// inline
// /usr/include/qt/QtGui/qmatrix.h:107
// bool isInvertible()
extern "C"
void C_ZNK7QMatrix12isInvertibleEv(void *this_) {
  /*return*/ ((QMatrix*)this_)->isInvertible();
}
// inline
// /usr/include/qt/QtGui/qmatrix.h:108
// qreal determinant()
extern "C"
void C_ZNK7QMatrix11determinantEv(void *this_) {
  /*return*/ ((QMatrix*)this_)->determinant();
}
// /usr/include/qt/QtGui/qmatrix.h:110
// QMatrix inverted(_Bool *)
extern "C"
void C_ZNK7QMatrix8invertedEPb(void *this_, bool * invertible) {
  /*return*/ ((QMatrix*)this_)->inverted(invertible);
}
//  main block end
