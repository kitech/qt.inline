// /usr/include/qt/QtGui/qquaternion.h
#include <qquaternion.h>
#include <QtGui>

// /usr/include/qt/QtGui/qquaternion.h:58
// void QQuaternion()
extern "C"
void* C_ZN11QQuaternionC1Ev() {
  return new QQuaternion();
}
// inline
// /usr/include/qt/QtGui/qquaternion.h:59
// void QQuaternion(Qt::Initialization)
extern "C"
void* C_ZN11QQuaternionC1EN2Qt14InitializationE(Qt::Initialization a0) {
  return new QQuaternion(a0);
}
// /usr/include/qt/QtGui/qquaternion.h:60
// void QQuaternion(float, float, float, float)
extern "C"
void* C_ZN11QQuaternionC1Effff(float scalar, float xpos, float ypos, float zpos) {
  return new QQuaternion(scalar, xpos, ypos, zpos);
}
// /usr/include/qt/QtGui/qquaternion.h:62
// void QQuaternion(float, const class QVector3D &)
extern "C"
void* C_ZN11QQuaternionC1EfRK9QVector3D(float scalar, const QVector3D & vector) {
  return new QQuaternion(scalar, vector);
}
// /usr/include/qt/QtGui/qquaternion.h:65
// void QQuaternion(const class QVector4D &)
extern "C"
void* C_ZN11QQuaternionC1ERK9QVector4D(const QVector4D & vector) {
  return new QQuaternion(vector);
}
// /usr/include/qt/QtGui/qquaternion.h:68
// bool isNull()
extern "C"
void C_ZNK11QQuaternion6isNullEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->isNull();
}
// /usr/include/qt/QtGui/qquaternion.h:69
// bool isIdentity()
extern "C"
void C_ZNK11QQuaternion10isIdentityEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->isIdentity();
}
// /usr/include/qt/QtGui/qquaternion.h:72
// QVector3D vector()
extern "C"
void C_ZNK11QQuaternion6vectorEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->vector();
}
// /usr/include/qt/QtGui/qquaternion.h:73
// void setVector(const class QVector3D &)
extern "C"
void C_ZN11QQuaternion9setVectorERK9QVector3D(void *this_, const QVector3D & vector) {
  ((QQuaternion*)this_)->setVector(vector);
}
// /usr/include/qt/QtGui/qquaternion.h:75
// void setVector(float, float, float)
extern "C"
void C_ZN11QQuaternion9setVectorEfff(void *this_, float x, float y, float z) {
  ((QQuaternion*)this_)->setVector(x, y, z);
}
// /usr/include/qt/QtGui/qquaternion.h:77
// float x()
extern "C"
void C_ZNK11QQuaternion1xEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->x();
}
// /usr/include/qt/QtGui/qquaternion.h:78
// float y()
extern "C"
void C_ZNK11QQuaternion1yEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->y();
}
// /usr/include/qt/QtGui/qquaternion.h:79
// float z()
extern "C"
void C_ZNK11QQuaternion1zEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->z();
}
// /usr/include/qt/QtGui/qquaternion.h:80
// float scalar()
extern "C"
void C_ZNK11QQuaternion6scalarEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->scalar();
}
// /usr/include/qt/QtGui/qquaternion.h:82
// void setX(float)
extern "C"
void C_ZN11QQuaternion4setXEf(void *this_, float x) {
  ((QQuaternion*)this_)->setX(x);
}
// /usr/include/qt/QtGui/qquaternion.h:83
// void setY(float)
extern "C"
void C_ZN11QQuaternion4setYEf(void *this_, float y) {
  ((QQuaternion*)this_)->setY(y);
}
// /usr/include/qt/QtGui/qquaternion.h:84
// void setZ(float)
extern "C"
void C_ZN11QQuaternion4setZEf(void *this_, float z) {
  ((QQuaternion*)this_)->setZ(z);
}
// /usr/include/qt/QtGui/qquaternion.h:85
// void setScalar(float)
extern "C"
void C_ZN11QQuaternion9setScalarEf(void *this_, float scalar) {
  ((QQuaternion*)this_)->setScalar(scalar);
}
// static inline
// /usr/include/qt/QtGui/qquaternion.h:87
// float dotProduct(const class QQuaternion &, const class QQuaternion &)
extern "C"
void C_ZN11QQuaternion10dotProductERKS_S1_(const QQuaternion & q1, const QQuaternion & q2) {
  /*return*/ QQuaternion::dotProduct(q1, q2);
}
// /usr/include/qt/QtGui/qquaternion.h:89
// float length()
extern "C"
void C_ZNK11QQuaternion6lengthEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->length();
}
// /usr/include/qt/QtGui/qquaternion.h:90
// float lengthSquared()
extern "C"
void C_ZNK11QQuaternion13lengthSquaredEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->lengthSquared();
}
// /usr/include/qt/QtGui/qquaternion.h:92
// QQuaternion normalized()
extern "C"
void C_ZNK11QQuaternion10normalizedEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->normalized();
}
// /usr/include/qt/QtGui/qquaternion.h:93
// void normalize()
extern "C"
void C_ZN11QQuaternion9normalizeEv(void *this_) {
  ((QQuaternion*)this_)->normalize();
}
// inline
// /usr/include/qt/QtGui/qquaternion.h:95
// QQuaternion inverted()
extern "C"
void C_ZNK11QQuaternion8invertedEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->inverted();
}
// /usr/include/qt/QtGui/qquaternion.h:97
// QQuaternion conjugated()
extern "C"
void C_ZNK11QQuaternion10conjugatedEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->conjugated();
}
// /usr/include/qt/QtGui/qquaternion.h:99
// QQuaternion conjugate()
extern "C"
void C_ZNK11QQuaternion9conjugateEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->conjugate();
}
// /usr/include/qt/QtGui/qquaternion.h:102
// QVector3D rotatedVector(const class QVector3D &)
extern "C"
void C_ZNK11QQuaternion13rotatedVectorERK9QVector3D(void *this_, const QVector3D & vector) {
  /*return*/ ((QQuaternion*)this_)->rotatedVector(vector);
}
// /usr/include/qt/QtGui/qquaternion.h:123
// QVector4D toVector4D()
extern "C"
void C_ZNK11QQuaternion10toVector4DEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->toVector4D();
}
// inline
// /usr/include/qt/QtGui/qquaternion.h:129
// void getAxisAndAngle(class QVector3D *, float *)
extern "C"
void C_ZNK11QQuaternion15getAxisAndAngleEP9QVector3DPf(void *this_, QVector3D * axis, float * angle) {
  ((QQuaternion*)this_)->getAxisAndAngle(axis, angle);
}
// static
// /usr/include/qt/QtGui/qquaternion.h:130
// QQuaternion fromAxisAndAngle(const class QVector3D &, float)
extern "C"
void C_ZN11QQuaternion16fromAxisAndAngleERK9QVector3Df(const QVector3D & axis, float angle) {
  /*return*/ QQuaternion::fromAxisAndAngle(axis, angle);
}
// /usr/include/qt/QtGui/qquaternion.h:132
// void getAxisAndAngle(float *, float *, float *, float *)
extern "C"
void C_ZNK11QQuaternion15getAxisAndAngleEPfS0_S0_S0_(void *this_, float * x, float * y, float * z, float * angle) {
  ((QQuaternion*)this_)->getAxisAndAngle(x, y, z, angle);
}
// static
// /usr/include/qt/QtGui/qquaternion.h:133
// QQuaternion fromAxisAndAngle(float, float, float, float)
extern "C"
void C_ZN11QQuaternion16fromAxisAndAngleEffff(float x, float y, float z, float angle) {
  /*return*/ QQuaternion::fromAxisAndAngle(x, y, z, angle);
}
// inline
// /usr/include/qt/QtGui/qquaternion.h:137
// QVector3D toEulerAngles()
extern "C"
void C_ZNK11QQuaternion13toEulerAnglesEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->toEulerAngles();
}
// static inline
// /usr/include/qt/QtGui/qquaternion.h:138
// QQuaternion fromEulerAngles(const class QVector3D &)
extern "C"
void C_ZN11QQuaternion15fromEulerAnglesERK9QVector3D(const QVector3D & eulerAngles) {
  /*return*/ QQuaternion::fromEulerAngles(eulerAngles);
}
// /usr/include/qt/QtGui/qquaternion.h:140
// void getEulerAngles(float *, float *, float *)
extern "C"
void C_ZNK11QQuaternion14getEulerAnglesEPfS0_S0_(void *this_, float * pitch, float * yaw, float * roll) {
  ((QQuaternion*)this_)->getEulerAngles(pitch, yaw, roll);
}
// static
// /usr/include/qt/QtGui/qquaternion.h:141
// QQuaternion fromEulerAngles(float, float, float)
extern "C"
void C_ZN11QQuaternion15fromEulerAnglesEfff(float pitch, float yaw, float roll) {
  /*return*/ QQuaternion::fromEulerAngles(pitch, yaw, roll);
}
// /usr/include/qt/QtGui/qquaternion.h:143
// QMatrix3x3 toRotationMatrix()
extern "C"
void C_ZNK11QQuaternion16toRotationMatrixEv(void *this_) {
  /*return*/ ((QQuaternion*)this_)->toRotationMatrix();
}
// static
// /usr/include/qt/QtGui/qquaternion.h:144
// QQuaternion fromRotationMatrix(const QMatrix3x3 &)
extern "C"
void C_ZN11QQuaternion18fromRotationMatrixERK14QGenericMatrixILi3ELi3EfE(const QMatrix3x3 & rot3x3) {
  /*return*/ QQuaternion::fromRotationMatrix(rot3x3);
}
// /usr/include/qt/QtGui/qquaternion.h:147
// void getAxes(class QVector3D *, class QVector3D *, class QVector3D *)
extern "C"
void C_ZNK11QQuaternion7getAxesEP9QVector3DS1_S1_(void *this_, QVector3D * xAxis, QVector3D * yAxis, QVector3D * zAxis) {
  ((QQuaternion*)this_)->getAxes(xAxis, yAxis, zAxis);
}
// static
// /usr/include/qt/QtGui/qquaternion.h:148
// QQuaternion fromAxes(const class QVector3D &, const class QVector3D &, const class QVector3D &)
extern "C"
void C_ZN11QQuaternion8fromAxesERK9QVector3DS2_S2_(const QVector3D & xAxis, const QVector3D & yAxis, const QVector3D & zAxis) {
  /*return*/ QQuaternion::fromAxes(xAxis, yAxis, zAxis);
}
// static
// /usr/include/qt/QtGui/qquaternion.h:150
// QQuaternion fromDirection(const class QVector3D &, const class QVector3D &)
extern "C"
void C_ZN11QQuaternion13fromDirectionERK9QVector3DS2_(const QVector3D & direction, const QVector3D & up) {
  /*return*/ QQuaternion::fromDirection(direction, up);
}
// static
// /usr/include/qt/QtGui/qquaternion.h:152
// QQuaternion rotationTo(const class QVector3D &, const class QVector3D &)
extern "C"
void C_ZN11QQuaternion10rotationToERK9QVector3DS2_(const QVector3D & from, const QVector3D & to) {
  /*return*/ QQuaternion::rotationTo(from, to);
}
// static
// /usr/include/qt/QtGui/qquaternion.h:155
// QQuaternion slerp(const class QQuaternion &, const class QQuaternion &, float)
extern "C"
void C_ZN11QQuaternion5slerpERKS_S1_f(const QQuaternion & q1, const QQuaternion & q2, float t) {
  /*return*/ QQuaternion::slerp(q1, q2, t);
}
// static
// /usr/include/qt/QtGui/qquaternion.h:157
// QQuaternion nlerp(const class QQuaternion &, const class QQuaternion &, float)
extern "C"
void C_ZN11QQuaternion5nlerpERKS_S1_f(const QQuaternion & q1, const QQuaternion & q2, float t) {
  /*return*/ QQuaternion::nlerp(q1, q2, t);
}