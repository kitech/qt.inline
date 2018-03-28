//  header block begin
// since 0x040600
// /usr/include/qt/QtGui/qquaternion.h
#ifndef protected
#define protected public
#endif
#include <qquaternion.h>
#include <QtGui>
#include "callback_inherit.h"

// QQuaternion is pure virtual: false
// QQuaternion has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQuaternion : public QQuaternion {
public:
  virtual ~MyQQuaternion() {}
// void QQuaternion()
MyQQuaternion() : QQuaternion() {}
// void QQuaternion(Qt::Initialization)
MyQQuaternion(Qt::Initialization arg0) : QQuaternion(arg0) {}
// void QQuaternion(float, float, float, float)
MyQQuaternion(float scalar, float xpos, float ypos, float zpos) : QQuaternion(scalar, xpos, ypos, zpos) {}
// void QQuaternion(float, const QVector3D &)
MyQQuaternion(float scalar, const QVector3D & vector) : QQuaternion(scalar, vector) {}
// void QQuaternion(const QVector4D &)
MyQQuaternion(const QVector4D & vector) : QQuaternion(vector) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:59
// [-2] void QQuaternion()
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternionC2Ev() {
  return  new QQuaternion();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:60
// [-2] void QQuaternion(Qt::Initialization)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternionC2EN2Qt14InitializationE(Qt::Initialization arg0) {
  return  new QQuaternion(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:61
// [-2] void QQuaternion(float, float, float, float)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternionC2Effff(float scalar, float xpos, float ypos, float zpos) {
  return  new QQuaternion(scalar, xpos, ypos, zpos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:63
// [-2] void QQuaternion(float, const QVector3D &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternionC2EfRK9QVector3D(float scalar, QVector3D* vector) {
  return  new QQuaternion(scalar, *vector);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:66
// [-2] void QQuaternion(const QVector4D &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternionC2ERK9QVector4D(QVector4D* vector) {
  return  new QQuaternion(*vector);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:69
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QQuaternion6isNullEv(void *this_) {
  return (bool)((QQuaternion*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:70
// [1] bool isIdentity()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QQuaternion10isIdentityEv(void *this_) {
  return (bool)((QQuaternion*)this_)->isIdentity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:73
// [12] QVector3D vector()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QQuaternion6vectorEv(void *this_) {
  auto rv = ((QQuaternion*)this_)->vector();
return new QVector3D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:74
// [-2] void setVector(const QVector3D &)
extern "C" Q_DECL_EXPORT
void C_ZN11QQuaternion9setVectorERK9QVector3D(void *this_, QVector3D* vector) {
  ((QQuaternion*)this_)->setVector(*vector);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:76
// [-2] void setVector(float, float, float)
extern "C" Q_DECL_EXPORT
void C_ZN11QQuaternion9setVectorEfff(void *this_, float x, float y, float z) {
  ((QQuaternion*)this_)->setVector(x, y, z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:78
// [4] float x()
extern "C" Q_DECL_EXPORT
float C_ZNK11QQuaternion1xEv(void *this_) {
  return (float)((QQuaternion*)this_)->x();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:79
// [4] float y()
extern "C" Q_DECL_EXPORT
float C_ZNK11QQuaternion1yEv(void *this_) {
  return (float)((QQuaternion*)this_)->y();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:80
// [4] float z()
extern "C" Q_DECL_EXPORT
float C_ZNK11QQuaternion1zEv(void *this_) {
  return (float)((QQuaternion*)this_)->z();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:81
// [4] float scalar()
extern "C" Q_DECL_EXPORT
float C_ZNK11QQuaternion6scalarEv(void *this_) {
  return (float)((QQuaternion*)this_)->scalar();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:83
// [-2] void setX(float)
extern "C" Q_DECL_EXPORT
void C_ZN11QQuaternion4setXEf(void *this_, float x) {
  ((QQuaternion*)this_)->setX(x);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:84
// [-2] void setY(float)
extern "C" Q_DECL_EXPORT
void C_ZN11QQuaternion4setYEf(void *this_, float y) {
  ((QQuaternion*)this_)->setY(y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:85
// [-2] void setZ(float)
extern "C" Q_DECL_EXPORT
void C_ZN11QQuaternion4setZEf(void *this_, float z) {
  ((QQuaternion*)this_)->setZ(z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:86
// [-2] void setScalar(float)
extern "C" Q_DECL_EXPORT
void C_ZN11QQuaternion9setScalarEf(void *this_, float scalar) {
  ((QQuaternion*)this_)->setScalar(scalar);
}

// Public static inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qquaternion.h:88
// [4] float dotProduct(const QQuaternion &, const QQuaternion &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
float C_ZN11QQuaternion10dotProductERKS_S1_(QQuaternion* q1, QQuaternion* q2) {
  return (float)QQuaternion::dotProduct(*q1, *q2);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:90
// [4] float length()
extern "C" Q_DECL_EXPORT
float C_ZNK11QQuaternion6lengthEv(void *this_) {
  return (float)((QQuaternion*)this_)->length();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:91
// [4] float lengthSquared()
extern "C" Q_DECL_EXPORT
float C_ZNK11QQuaternion13lengthSquaredEv(void *this_) {
  return (float)((QQuaternion*)this_)->lengthSquared();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:93
// [16] QQuaternion normalized()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QQuaternion10normalizedEv(void *this_) {
  auto rv = ((QQuaternion*)this_)->normalized();
return new QQuaternion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:94
// [-2] void normalize()
extern "C" Q_DECL_EXPORT
void C_ZN11QQuaternion9normalizeEv(void *this_) {
  ((QQuaternion*)this_)->normalize();
}

// Public inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qquaternion.h:96
// [16] QQuaternion inverted()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK11QQuaternion8invertedEv(void *this_) {
  auto rv = ((QQuaternion*)this_)->inverted();
return new QQuaternion(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qquaternion.h:98
// [16] QQuaternion conjugated()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK11QQuaternion10conjugatedEv(void *this_) {
  auto rv = ((QQuaternion*)this_)->conjugated();
return new QQuaternion(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:100
// [16] QQuaternion conjugate()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QQuaternion9conjugateEv(void *this_) {
  auto rv = ((QQuaternion*)this_)->conjugate();
return new QQuaternion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:103
// [12] QVector3D rotatedVector(const QVector3D &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QQuaternion13rotatedVectorERK9QVector3D(void *this_, QVector3D* vector) {
  auto rv = ((QQuaternion*)this_)->rotatedVector(*vector);
return new QVector3D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:105
// [16] QQuaternion & operator+=(const QQuaternion &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternionpLERKS_(void *this_, QQuaternion* quaternion) {
  auto& rv = ((QQuaternion*)this_)->operator+=(*quaternion);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:106
// [16] QQuaternion & operator-=(const QQuaternion &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternionmIERKS_(void *this_, QQuaternion* quaternion) {
  auto& rv = ((QQuaternion*)this_)->operator-=(*quaternion);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:107
// [16] QQuaternion & operator*=(float)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternionmLEf(void *this_, float factor) {
  auto& rv = ((QQuaternion*)this_)->operator*=(factor);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:108
// [16] QQuaternion & operator*=(const QQuaternion &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternionmLERKS_(void *this_, QQuaternion* quaternion) {
  auto& rv = ((QQuaternion*)this_)->operator*=(*quaternion);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:109
// [16] QQuaternion & operator/=(float)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaterniondVEf(void *this_, float divisor) {
  auto& rv = ((QQuaternion*)this_)->operator/=(divisor);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:124
// [16] QVector4D toVector4D()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QQuaternion10toVector4DEv(void *this_) {
  auto rv = ((QQuaternion*)this_)->toVector4D();
return new QVector4D(rv);
}

// Public inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qquaternion.h:130
// [-2] void getAxisAndAngle(QVector3D *, float *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZNK11QQuaternion15getAxisAndAngleEP9QVector3DPf(void *this_, QVector3D * axis, float * angle) {
  ((QQuaternion*)this_)->getAxisAndAngle(axis, angle);
}
#endif // QT_VERSION >= 0x050500

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:131
// [16] QQuaternion fromAxisAndAngle(const QVector3D &, float)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternion16fromAxisAndAngleERK9QVector3Df(QVector3D* axis, float angle) {
  auto rv = QQuaternion::fromAxisAndAngle(*axis, angle);
return new QQuaternion(rv);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qquaternion.h:133
// [-2] void getAxisAndAngle(float *, float *, float *, float *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZNK11QQuaternion15getAxisAndAngleEPfS0_S0_S0_(void *this_, float * x, float * y, float * z, float * angle) {
  ((QQuaternion*)this_)->getAxisAndAngle(x, y, z, angle);
}
#endif // QT_VERSION >= 0x050500

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:134
// [16] QQuaternion fromAxisAndAngle(float, float, float, float)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternion16fromAxisAndAngleEffff(float x, float y, float z, float angle) {
  auto rv = QQuaternion::fromAxisAndAngle(x, y, z, angle);
return new QQuaternion(rv);
}

// Public inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qquaternion.h:138
// [12] QVector3D toEulerAngles()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK11QQuaternion13toEulerAnglesEv(void *this_) {
  auto rv = ((QQuaternion*)this_)->toEulerAngles();
return new QVector3D(rv);
}
#endif // QT_VERSION >= 0x050500

// Public static inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qquaternion.h:139
// [16] QQuaternion fromEulerAngles(const QVector3D &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternion15fromEulerAnglesERK9QVector3D(QVector3D* eulerAngles) {
  auto rv = QQuaternion::fromEulerAngles(*eulerAngles);
return new QQuaternion(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qquaternion.h:141
// [-2] void getEulerAngles(float *, float *, float *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZNK11QQuaternion14getEulerAnglesEPfS0_S0_(void *this_, float * pitch, float * yaw, float * roll) {
  ((QQuaternion*)this_)->getEulerAngles(pitch, yaw, roll);
}
#endif // QT_VERSION >= 0x050500

// Public static Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qquaternion.h:142
// [16] QQuaternion fromEulerAngles(float, float, float)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternion15fromEulerAnglesEfff(float pitch, float yaw, float roll) {
  auto rv = QQuaternion::fromEulerAngles(pitch, yaw, roll);
return new QQuaternion(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qquaternion.h:148
// [-2] void getAxes(QVector3D *, QVector3D *, QVector3D *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZNK11QQuaternion7getAxesEP9QVector3DS1_S1_(void *this_, QVector3D * xAxis, QVector3D * yAxis, QVector3D * zAxis) {
  ((QQuaternion*)this_)->getAxes(xAxis, yAxis, zAxis);
}
#endif // QT_VERSION >= 0x050500

// Public static Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qquaternion.h:149
// [16] QQuaternion fromAxes(const QVector3D &, const QVector3D &, const QVector3D &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternion8fromAxesERK9QVector3DS2_S2_(QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis) {
  auto rv = QQuaternion::fromAxes(*xAxis, *yAxis, *zAxis);
return new QQuaternion(rv);
}
#endif // QT_VERSION >= 0x050500

// Public static Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qquaternion.h:151
// [16] QQuaternion fromDirection(const QVector3D &, const QVector3D &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternion13fromDirectionERK9QVector3DS2_(QVector3D* direction, QVector3D* up) {
  auto rv = QQuaternion::fromDirection(*direction, *up);
return new QQuaternion(rv);
}
#endif // QT_VERSION >= 0x050500

// Public static Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qquaternion.h:153
// [16] QQuaternion rotationTo(const QVector3D &, const QVector3D &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternion10rotationToERK9QVector3DS2_(QVector3D* from, QVector3D* to) {
  auto rv = QQuaternion::rotationTo(*from, *to);
return new QQuaternion(rv);
}
#endif // QT_VERSION >= 0x050500

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:156
// [16] QQuaternion slerp(const QQuaternion &, const QQuaternion &, float)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternion5slerpERKS_S1_f(QQuaternion* q1, QQuaternion* q2, float t) {
  auto rv = QQuaternion::slerp(*q1, *q2, t);
return new QQuaternion(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:158
// [16] QQuaternion nlerp(const QQuaternion &, const QQuaternion &, float)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQuaternion5nlerpERKS_S1_f(QQuaternion* q1, QQuaternion* q2, float t) {
  auto rv = QQuaternion::nlerp(*q1, *q2, t);
return new QQuaternion(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN11QQuaternionD2Ev(void *this_) {
  delete (QQuaternion*)(this_);
}
//  main block end
