// /usr/include/qt/QtGui/qvector3d.h
#include <qvector3d.h>
#include <QtGui>

// inline
// /usr/include/qt/QtGui/qvector3d.h:59
// void QVector3D()
extern "C"
void* C_ZN9QVector3DC1Ev() {
  return new QVector3D();
}
// inline
// /usr/include/qt/QtGui/qvector3d.h:60
// void QVector3D(Qt::Initialization)
extern "C"
void* C_ZN9QVector3DC1EN2Qt14InitializationE(Qt::Initialization a0) {
  return new QVector3D(a0);
}
// inline
// /usr/include/qt/QtGui/qvector3d.h:61
// void QVector3D(float, float, float)
extern "C"
void* C_ZN9QVector3DC1Efff(float xpos, float ypos, float zpos) {
  return new QVector3D(xpos, ypos, zpos);
}
// inline
// /usr/include/qt/QtGui/qvector3d.h:63
// void QVector3D(const class QPoint &)
extern "C"
void* C_ZN9QVector3DC1ERK6QPoint(const QPoint & point) {
  return new QVector3D(point);
}
// inline
// /usr/include/qt/QtGui/qvector3d.h:64
// void QVector3D(const class QPointF &)
extern "C"
void* C_ZN9QVector3DC1ERK7QPointF(const QPointF & point) {
  return new QVector3D(point);
}
// /usr/include/qt/QtGui/qvector3d.h:66
// void QVector3D(const class QVector2D &)
extern "C"
void* C_ZN9QVector3DC1ERK9QVector2D(const QVector2D & vector) {
  return new QVector3D(vector);
}
// /usr/include/qt/QtGui/qvector3d.h:67
// void QVector3D(const class QVector2D &, float)
extern "C"
void* C_ZN9QVector3DC1ERK9QVector2Df(const QVector2D & vector, float zpos) {
  return new QVector3D(vector, zpos);
}
// /usr/include/qt/QtGui/qvector3d.h:70
// void QVector3D(const class QVector4D &)
extern "C"
void* C_ZN9QVector3DC1ERK9QVector4D(const QVector4D & vector) {
  return new QVector3D(vector);
}
// /usr/include/qt/QtGui/qvector3d.h:73
// bool isNull()
extern "C"
void C_ZNK9QVector3D6isNullEv(void *this_) {
  /*return*/ ((QVector3D*)this_)->isNull();
}
// inline
// /usr/include/qt/QtGui/qvector3d.h:75
// float x()
extern "C"
void C_ZNK9QVector3D1xEv(void *this_) {
  /*return*/ ((QVector3D*)this_)->x();
}
// inline
// /usr/include/qt/QtGui/qvector3d.h:76
// float y()
extern "C"
void C_ZNK9QVector3D1yEv(void *this_) {
  /*return*/ ((QVector3D*)this_)->y();
}
// inline
// /usr/include/qt/QtGui/qvector3d.h:77
// float z()
extern "C"
void C_ZNK9QVector3D1zEv(void *this_) {
  /*return*/ ((QVector3D*)this_)->z();
}
// /usr/include/qt/QtGui/qvector3d.h:79
// void setX(float)
extern "C"
void C_ZN9QVector3D4setXEf(void *this_, float x) {
  ((QVector3D*)this_)->setX(x);
}
// /usr/include/qt/QtGui/qvector3d.h:80
// void setY(float)
extern "C"
void C_ZN9QVector3D4setYEf(void *this_, float y) {
  ((QVector3D*)this_)->setY(y);
}
// /usr/include/qt/QtGui/qvector3d.h:81
// void setZ(float)
extern "C"
void C_ZN9QVector3D4setZEf(void *this_, float z) {
  ((QVector3D*)this_)->setZ(z);
}
// /usr/include/qt/QtGui/qvector3d.h:86
// float length()
extern "C"
void C_ZNK9QVector3D6lengthEv(void *this_) {
  /*return*/ ((QVector3D*)this_)->length();
}
// /usr/include/qt/QtGui/qvector3d.h:87
// float lengthSquared()
extern "C"
void C_ZNK9QVector3D13lengthSquaredEv(void *this_) {
  /*return*/ ((QVector3D*)this_)->lengthSquared();
}
// /usr/include/qt/QtGui/qvector3d.h:89
// QVector3D normalized()
extern "C"
void C_ZNK9QVector3D10normalizedEv(void *this_) {
  /*return*/ ((QVector3D*)this_)->normalized();
}
// /usr/include/qt/QtGui/qvector3d.h:90
// void normalize()
extern "C"
void C_ZN9QVector3D9normalizeEv(void *this_) {
  ((QVector3D*)this_)->normalize();
}
// static
// /usr/include/qt/QtGui/qvector3d.h:99
// float dotProduct(const class QVector3D &, const class QVector3D &)
extern "C"
void C_ZN9QVector3D10dotProductERKS_S1_(const QVector3D & v1, const QVector3D & v2) {
  /*return*/ QVector3D::dotProduct(v1, v2);
}
// static
// /usr/include/qt/QtGui/qvector3d.h:100
// QVector3D crossProduct(const class QVector3D &, const class QVector3D &)
extern "C"
void C_ZN9QVector3D12crossProductERKS_S1_(const QVector3D & v1, const QVector3D & v2) {
  /*return*/ QVector3D::crossProduct(v1, v2);
}
// static
// /usr/include/qt/QtGui/qvector3d.h:102
// QVector3D normal(const class QVector3D &, const class QVector3D &)
extern "C"
void C_ZN9QVector3D6normalERKS_S1_(const QVector3D & v1, const QVector3D & v2) {
  /*return*/ QVector3D::normal(v1, v2);
}
// static
// /usr/include/qt/QtGui/qvector3d.h:103
// QVector3D normal(const class QVector3D &, const class QVector3D &, const class QVector3D &)
extern "C"
void C_ZN9QVector3D6normalERKS_S1_S1_(const QVector3D & v1, const QVector3D & v2, const QVector3D & v3) {
  /*return*/ QVector3D::normal(v1, v2, v3);
}
// /usr/include/qt/QtGui/qvector3d.h:106
// QVector3D project(const class QMatrix4x4 &, const class QMatrix4x4 &, const class QRect &)
extern "C"
void C_ZNK9QVector3D7projectERK10QMatrix4x4S2_RK5QRect(void *this_, const QMatrix4x4 & modelView, const QMatrix4x4 & projection, const QRect & viewport) {
  /*return*/ ((QVector3D*)this_)->project(modelView, projection, viewport);
}
// /usr/include/qt/QtGui/qvector3d.h:107
// QVector3D unproject(const class QMatrix4x4 &, const class QMatrix4x4 &, const class QRect &)
extern "C"
void C_ZNK9QVector3D9unprojectERK10QMatrix4x4S2_RK5QRect(void *this_, const QMatrix4x4 & modelView, const QMatrix4x4 & projection, const QRect & viewport) {
  /*return*/ ((QVector3D*)this_)->unproject(modelView, projection, viewport);
}
// /usr/include/qt/QtGui/qvector3d.h:109
// float distanceToPoint(const class QVector3D &)
extern "C"
void C_ZNK9QVector3D15distanceToPointERKS_(void *this_, const QVector3D & point) {
  /*return*/ ((QVector3D*)this_)->distanceToPoint(point);
}
// /usr/include/qt/QtGui/qvector3d.h:110
// float distanceToPlane(const class QVector3D &, const class QVector3D &)
extern "C"
void C_ZNK9QVector3D15distanceToPlaneERKS_S1_(void *this_, const QVector3D & plane, const QVector3D & normal) {
  /*return*/ ((QVector3D*)this_)->distanceToPlane(plane, normal);
}
// /usr/include/qt/QtGui/qvector3d.h:111
// float distanceToPlane(const class QVector3D &, const class QVector3D &, const class QVector3D &)
extern "C"
void C_ZNK9QVector3D15distanceToPlaneERKS_S1_S1_(void *this_, const QVector3D & plane1, const QVector3D & plane2, const QVector3D & plane3) {
  /*return*/ ((QVector3D*)this_)->distanceToPlane(plane1, plane2, plane3);
}
// /usr/include/qt/QtGui/qvector3d.h:112
// float distanceToLine(const class QVector3D &, const class QVector3D &)
extern "C"
void C_ZNK9QVector3D14distanceToLineERKS_S1_(void *this_, const QVector3D & point, const QVector3D & direction) {
  /*return*/ ((QVector3D*)this_)->distanceToLine(point, direction);
}
// /usr/include/qt/QtGui/qvector3d.h:128
// QVector2D toVector2D()
extern "C"
void C_ZNK9QVector3D10toVector2DEv(void *this_) {
  /*return*/ ((QVector3D*)this_)->toVector2D();
}
// /usr/include/qt/QtGui/qvector3d.h:131
// QVector4D toVector4D()
extern "C"
void C_ZNK9QVector3D10toVector4DEv(void *this_) {
  /*return*/ ((QVector3D*)this_)->toVector4D();
}
// inline
// /usr/include/qt/QtGui/qvector3d.h:134
// QPoint toPoint()
extern "C"
void C_ZNK9QVector3D7toPointEv(void *this_) {
  /*return*/ ((QVector3D*)this_)->toPoint();
}
// inline
// /usr/include/qt/QtGui/qvector3d.h:135
// QPointF toPointF()
extern "C"
void C_ZNK9QVector3D8toPointFEv(void *this_) {
  /*return*/ ((QVector3D*)this_)->toPointF();
}