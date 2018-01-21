//  header block begin
// /usr/include/qt/QtGui/qvector2d.h
#include <qvector2d.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qvector2d.h:58
// void QVector2D()
extern "C"
void* C_ZN9QVector2DC1Ev() {
  return new QVector2D();
}
// inline
// /usr/include/qt/QtGui/qvector2d.h:59
// void QVector2D(Qt::Initialization)
extern "C"
void* C_ZN9QVector2DC1EN2Qt14InitializationE(Qt::Initialization arg0) {
  return new QVector2D(arg0);
}
// inline
// /usr/include/qt/QtGui/qvector2d.h:60
// void QVector2D(float, float)
extern "C"
void* C_ZN9QVector2DC1Eff(float xpos, float ypos) {
  return new QVector2D(xpos, ypos);
}
// inline
// /usr/include/qt/QtGui/qvector2d.h:61
// void QVector2D(const class QPoint &)
extern "C"
void* C_ZN9QVector2DC1ERK6QPoint(const QPoint & point) {
  return new QVector2D(point);
}
// inline
// /usr/include/qt/QtGui/qvector2d.h:62
// void QVector2D(const class QPointF &)
extern "C"
void* C_ZN9QVector2DC1ERK7QPointF(const QPointF & point) {
  return new QVector2D(point);
}
// /usr/include/qt/QtGui/qvector2d.h:64
// void QVector2D(const class QVector3D &)
extern "C"
void* C_ZN9QVector2DC1ERK9QVector3D(const QVector3D & vector) {
  return new QVector2D(vector);
}
// /usr/include/qt/QtGui/qvector2d.h:67
// void QVector2D(const class QVector4D &)
extern "C"
void* C_ZN9QVector2DC1ERK9QVector4D(const QVector4D & vector) {
  return new QVector2D(vector);
}
// /usr/include/qt/QtGui/qvector2d.h:70
// bool isNull()
extern "C"
void C_ZNK9QVector2D6isNullEv(void *this_) {
  /*return*/ ((QVector2D*)this_)->isNull();
}
// inline
// /usr/include/qt/QtGui/qvector2d.h:72
// float x()
extern "C"
void C_ZNK9QVector2D1xEv(void *this_) {
  /*return*/ ((QVector2D*)this_)->x();
}
// inline
// /usr/include/qt/QtGui/qvector2d.h:73
// float y()
extern "C"
void C_ZNK9QVector2D1yEv(void *this_) {
  /*return*/ ((QVector2D*)this_)->y();
}
// /usr/include/qt/QtGui/qvector2d.h:75
// void setX(float)
extern "C"
void C_ZN9QVector2D4setXEf(void *this_, float x) {
  ((QVector2D*)this_)->setX(x);
}
// /usr/include/qt/QtGui/qvector2d.h:76
// void setY(float)
extern "C"
void C_ZN9QVector2D4setYEf(void *this_, float y) {
  ((QVector2D*)this_)->setY(y);
}
// /usr/include/qt/QtGui/qvector2d.h:81
// float length()
extern "C"
void C_ZNK9QVector2D6lengthEv(void *this_) {
  /*return*/ ((QVector2D*)this_)->length();
}
// /usr/include/qt/QtGui/qvector2d.h:82
// float lengthSquared()
extern "C"
void C_ZNK9QVector2D13lengthSquaredEv(void *this_) {
  /*return*/ ((QVector2D*)this_)->lengthSquared();
}
// /usr/include/qt/QtGui/qvector2d.h:84
// QVector2D normalized()
extern "C"
void C_ZNK9QVector2D10normalizedEv(void *this_) {
  /*return*/ ((QVector2D*)this_)->normalized();
}
// /usr/include/qt/QtGui/qvector2d.h:85
// void normalize()
extern "C"
void C_ZN9QVector2D9normalizeEv(void *this_) {
  ((QVector2D*)this_)->normalize();
}
// /usr/include/qt/QtGui/qvector2d.h:87
// float distanceToPoint(const class QVector2D &)
extern "C"
void C_ZNK9QVector2D15distanceToPointERKS_(void *this_, const QVector2D & point) {
  /*return*/ ((QVector2D*)this_)->distanceToPoint(point);
}
// /usr/include/qt/QtGui/qvector2d.h:88
// float distanceToLine(const class QVector2D &, const class QVector2D &)
extern "C"
void C_ZNK9QVector2D14distanceToLineERKS_S1_(void *this_, const QVector2D & point, const QVector2D & direction) {
  /*return*/ ((QVector2D*)this_)->distanceToLine(point, direction);
}
// static
// /usr/include/qt/QtGui/qvector2d.h:97
// float dotProduct(const class QVector2D &, const class QVector2D &)
extern "C"
void C_ZN9QVector2D10dotProductERKS_S1_(const QVector2D & v1, const QVector2D & v2) {
  /*return*/ QVector2D::dotProduct(v1, v2);
}
// /usr/include/qt/QtGui/qvector2d.h:113
// QVector3D toVector3D()
extern "C"
void C_ZNK9QVector2D10toVector3DEv(void *this_) {
  /*return*/ ((QVector2D*)this_)->toVector3D();
}
// /usr/include/qt/QtGui/qvector2d.h:116
// QVector4D toVector4D()
extern "C"
void C_ZNK9QVector2D10toVector4DEv(void *this_) {
  /*return*/ ((QVector2D*)this_)->toVector4D();
}
// inline
// /usr/include/qt/QtGui/qvector2d.h:119
// QPoint toPoint()
extern "C"
void C_ZNK9QVector2D7toPointEv(void *this_) {
  /*return*/ ((QVector2D*)this_)->toPoint();
}
// inline
// /usr/include/qt/QtGui/qvector2d.h:120
// QPointF toPointF()
extern "C"
void C_ZNK9QVector2D8toPointFEv(void *this_) {
  /*return*/ ((QVector2D*)this_)->toPointF();
}
//  main block end
