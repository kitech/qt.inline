//  header block begin
// /usr/include/qt/QtGui/qvector4d.h
#include <qvector4d.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qvector4d.h:58
// void QVector4D()
extern "C"
void* C_ZN9QVector4DC1Ev() {
  return new QVector4D();
}
// inline
// /usr/include/qt/QtGui/qvector4d.h:59
// void QVector4D(Qt::Initialization)
extern "C"
void* C_ZN9QVector4DC1EN2Qt14InitializationE(Qt::Initialization arg0) {
  return new QVector4D(arg0);
}
// inline
// /usr/include/qt/QtGui/qvector4d.h:60
// void QVector4D(float, float, float, float)
extern "C"
void* C_ZN9QVector4DC1Effff(float xpos, float ypos, float zpos, float wpos) {
  return new QVector4D(xpos, ypos, zpos, wpos);
}
// inline
// /usr/include/qt/QtGui/qvector4d.h:61
// void QVector4D(const class QPoint &)
extern "C"
void* C_ZN9QVector4DC1ERK6QPoint(const QPoint & point) {
  return new QVector4D(point);
}
// inline
// /usr/include/qt/QtGui/qvector4d.h:62
// void QVector4D(const class QPointF &)
extern "C"
void* C_ZN9QVector4DC1ERK7QPointF(const QPointF & point) {
  return new QVector4D(point);
}
// /usr/include/qt/QtGui/qvector4d.h:64
// void QVector4D(const class QVector2D &)
extern "C"
void* C_ZN9QVector4DC1ERK9QVector2D(const QVector2D & vector) {
  return new QVector4D(vector);
}
// /usr/include/qt/QtGui/qvector4d.h:65
// void QVector4D(const class QVector2D &, float, float)
extern "C"
void* C_ZN9QVector4DC1ERK9QVector2Dff(const QVector2D & vector, float zpos, float wpos) {
  return new QVector4D(vector, zpos, wpos);
}
// /usr/include/qt/QtGui/qvector4d.h:68
// void QVector4D(const class QVector3D &)
extern "C"
void* C_ZN9QVector4DC1ERK9QVector3D(const QVector3D & vector) {
  return new QVector4D(vector);
}
// /usr/include/qt/QtGui/qvector4d.h:69
// void QVector4D(const class QVector3D &, float)
extern "C"
void* C_ZN9QVector4DC1ERK9QVector3Df(const QVector3D & vector, float wpos) {
  return new QVector4D(vector, wpos);
}
// /usr/include/qt/QtGui/qvector4d.h:72
// bool isNull()
extern "C"
void C_ZNK9QVector4D6isNullEv(void *this_) {
  /*return*/ ((QVector4D*)this_)->isNull();
}
// inline
// /usr/include/qt/QtGui/qvector4d.h:74
// float x()
extern "C"
void C_ZNK9QVector4D1xEv(void *this_) {
  /*return*/ ((QVector4D*)this_)->x();
}
// inline
// /usr/include/qt/QtGui/qvector4d.h:75
// float y()
extern "C"
void C_ZNK9QVector4D1yEv(void *this_) {
  /*return*/ ((QVector4D*)this_)->y();
}
// inline
// /usr/include/qt/QtGui/qvector4d.h:76
// float z()
extern "C"
void C_ZNK9QVector4D1zEv(void *this_) {
  /*return*/ ((QVector4D*)this_)->z();
}
// inline
// /usr/include/qt/QtGui/qvector4d.h:77
// float w()
extern "C"
void C_ZNK9QVector4D1wEv(void *this_) {
  /*return*/ ((QVector4D*)this_)->w();
}
// /usr/include/qt/QtGui/qvector4d.h:79
// void setX(float)
extern "C"
void C_ZN9QVector4D4setXEf(void *this_, float x) {
  ((QVector4D*)this_)->setX(x);
}
// /usr/include/qt/QtGui/qvector4d.h:80
// void setY(float)
extern "C"
void C_ZN9QVector4D4setYEf(void *this_, float y) {
  ((QVector4D*)this_)->setY(y);
}
// /usr/include/qt/QtGui/qvector4d.h:81
// void setZ(float)
extern "C"
void C_ZN9QVector4D4setZEf(void *this_, float z) {
  ((QVector4D*)this_)->setZ(z);
}
// /usr/include/qt/QtGui/qvector4d.h:82
// void setW(float)
extern "C"
void C_ZN9QVector4D4setWEf(void *this_, float w) {
  ((QVector4D*)this_)->setW(w);
}
// /usr/include/qt/QtGui/qvector4d.h:87
// float length()
extern "C"
void C_ZNK9QVector4D6lengthEv(void *this_) {
  /*return*/ ((QVector4D*)this_)->length();
}
// /usr/include/qt/QtGui/qvector4d.h:88
// float lengthSquared()
extern "C"
void C_ZNK9QVector4D13lengthSquaredEv(void *this_) {
  /*return*/ ((QVector4D*)this_)->lengthSquared();
}
// /usr/include/qt/QtGui/qvector4d.h:90
// QVector4D normalized()
extern "C"
void C_ZNK9QVector4D10normalizedEv(void *this_) {
  /*return*/ ((QVector4D*)this_)->normalized();
}
// /usr/include/qt/QtGui/qvector4d.h:91
// void normalize()
extern "C"
void C_ZN9QVector4D9normalizeEv(void *this_) {
  ((QVector4D*)this_)->normalize();
}
// static
// /usr/include/qt/QtGui/qvector4d.h:100
// float dotProduct(const class QVector4D &, const class QVector4D &)
extern "C"
void C_ZN9QVector4D10dotProductERKS_S1_(const QVector4D & v1, const QVector4D & v2) {
  /*return*/ QVector4D::dotProduct(v1, v2);
}
// /usr/include/qt/QtGui/qvector4d.h:116
// QVector2D toVector2D()
extern "C"
void C_ZNK9QVector4D10toVector2DEv(void *this_) {
  /*return*/ ((QVector4D*)this_)->toVector2D();
}
// /usr/include/qt/QtGui/qvector4d.h:117
// QVector2D toVector2DAffine()
extern "C"
void C_ZNK9QVector4D16toVector2DAffineEv(void *this_) {
  /*return*/ ((QVector4D*)this_)->toVector2DAffine();
}
// /usr/include/qt/QtGui/qvector4d.h:120
// QVector3D toVector3D()
extern "C"
void C_ZNK9QVector4D10toVector3DEv(void *this_) {
  /*return*/ ((QVector4D*)this_)->toVector3D();
}
// /usr/include/qt/QtGui/qvector4d.h:121
// QVector3D toVector3DAffine()
extern "C"
void C_ZNK9QVector4D16toVector3DAffineEv(void *this_) {
  /*return*/ ((QVector4D*)this_)->toVector3DAffine();
}
// inline
// /usr/include/qt/QtGui/qvector4d.h:124
// QPoint toPoint()
extern "C"
void C_ZNK9QVector4D7toPointEv(void *this_) {
  /*return*/ ((QVector4D*)this_)->toPoint();
}
// inline
// /usr/include/qt/QtGui/qvector4d.h:125
// QPointF toPointF()
extern "C"
void C_ZNK9QVector4D8toPointFEv(void *this_) {
  /*return*/ ((QVector4D*)this_)->toPointF();
}
//  main block end
