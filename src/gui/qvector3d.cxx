//  header block begin
// /usr/include/qt/QtGui/qvector3d.h
#ifndef protected
#define protected public
#endif
#include <qvector3d.h>
#include <QtGui>
#include "callback_inherit.h"

// QVector3D is pure virtual: false
// QVector3D has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVector3D : public QVector3D {
public:
  virtual ~MyQVector3D() {}
// void QVector3D()
MyQVector3D() : QVector3D() {}
// void QVector3D(Qt::Initialization)
MyQVector3D(Qt::Initialization arg0) : QVector3D(arg0) {}
// void QVector3D(float, float, float)
MyQVector3D(float xpos, float ypos, float zpos) : QVector3D(xpos, ypos, zpos) {}
// void QVector3D(const class QPoint &)
MyQVector3D(const QPoint & point) : QVector3D(point) {}
// void QVector3D(const class QPointF &)
MyQVector3D(const QPointF & point) : QVector3D(point) {}
// void QVector3D(const class QVector2D &)
MyQVector3D(const QVector2D & vector) : QVector3D(vector) {}
// void QVector3D(const class QVector2D &, float)
MyQVector3D(const QVector2D & vector, float zpos) : QVector3D(vector, zpos) {}
// void QVector3D(const class QVector4D &)
MyQVector3D(const QVector4D & vector) : QVector3D(vector) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:60
// [-2] void QVector3D()
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3DC2Ev() {
  return  new QVector3D();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:61
// [-2] void QVector3D(Qt::Initialization)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3DC2EN2Qt14InitializationE(Qt::Initialization arg0) {
  return  new QVector3D(arg0);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:62
// [-2] void QVector3D(float, float, float)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3DC2Efff(float xpos, float ypos, float zpos) {
  return  new QVector3D(xpos, ypos, zpos);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:64
// [-2] void QVector3D(const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3DC2ERK6QPoint(QPoint* point) {
  return  new QVector3D(*point);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:65
// [-2] void QVector3D(const class QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3DC2ERK7QPointF(QPointF* point) {
  return  new QVector3D(*point);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:67
// [-2] void QVector3D(const class QVector2D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3DC2ERK9QVector2D(QVector2D* vector) {
  return  new QVector3D(*vector);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:68
// [-2] void QVector3D(const class QVector2D &, float)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3DC2ERK9QVector2Df(QVector2D* vector, float zpos) {
  return  new QVector3D(*vector, zpos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:71
// [-2] void QVector3D(const class QVector4D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3DC2ERK9QVector4D(QVector4D* vector) {
  return  new QVector3D(*vector);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:74
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QVector3D6isNullEv(void *this_) {
  return (bool)((QVector3D*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:76
// [4] float x()
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector3D1xEv(void *this_) {
  return (float)((QVector3D*)this_)->x();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:77
// [4] float y()
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector3D1yEv(void *this_) {
  return (float)((QVector3D*)this_)->y();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:78
// [4] float z()
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector3D1zEv(void *this_) {
  return (float)((QVector3D*)this_)->z();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:80
// [-2] void setX(float)
extern "C" Q_DECL_EXPORT
void C_ZN9QVector3D4setXEf(void *this_, float x) {
  ((QVector3D*)this_)->setX(x);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:81
// [-2] void setY(float)
extern "C" Q_DECL_EXPORT
void C_ZN9QVector3D4setYEf(void *this_, float y) {
  ((QVector3D*)this_)->setY(y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:82
// [-2] void setZ(float)
extern "C" Q_DECL_EXPORT
void C_ZN9QVector3D4setZEf(void *this_, float z) {
  ((QVector3D*)this_)->setZ(z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:84
// [4] float & operator[](int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3DixEi(void *this_, int i) {
  auto& rv = ((QVector3D*)this_)->operator[](i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:85
// [4] float operator[](int)
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector3DixEi(void *this_, int i) {
  return (float)((QVector3D*)this_)->operator[](i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:87
// [4] float length()
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector3D6lengthEv(void *this_) {
  return (float)((QVector3D*)this_)->length();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:88
// [4] float lengthSquared()
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector3D13lengthSquaredEv(void *this_) {
  return (float)((QVector3D*)this_)->lengthSquared();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:90
// [12] QVector3D normalized()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector3D10normalizedEv(void *this_) {
  auto rv = ((QVector3D*)this_)->normalized();
return new QVector3D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:91
// [-2] void normalize()
extern "C" Q_DECL_EXPORT
void C_ZN9QVector3D9normalizeEv(void *this_) {
  ((QVector3D*)this_)->normalize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:93
// [12] QVector3D & operator+=(const class QVector3D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3DpLERKS_(void *this_, QVector3D* vector) {
  auto& rv = ((QVector3D*)this_)->operator+=(*vector);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:94
// [12] QVector3D & operator-=(const class QVector3D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3DmIERKS_(void *this_, QVector3D* vector) {
  auto& rv = ((QVector3D*)this_)->operator-=(*vector);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:95
// [12] QVector3D & operator*=(float)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3DmLEf(void *this_, float factor) {
  auto& rv = ((QVector3D*)this_)->operator*=(factor);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:96
// [12] QVector3D & operator*=(const class QVector3D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3DmLERKS_(void *this_, QVector3D* vector) {
  auto& rv = ((QVector3D*)this_)->operator*=(*vector);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:97
// [12] QVector3D & operator/=(float)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3DdVEf(void *this_, float divisor) {
  auto& rv = ((QVector3D*)this_)->operator/=(divisor);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:98
// [12] QVector3D & operator/=(const class QVector3D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3DdVERKS_(void *this_, QVector3D* vector) {
  auto& rv = ((QVector3D*)this_)->operator/=(*vector);
return &rv;
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:100
// [4] float dotProduct(const class QVector3D &, const class QVector3D &)
extern "C" Q_DECL_EXPORT
float C_ZN9QVector3D10dotProductERKS_S1_(QVector3D* v1, QVector3D* v2) {
  return (float)QVector3D::dotProduct(*v1, *v2);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:101
// [12] QVector3D crossProduct(const class QVector3D &, const class QVector3D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3D12crossProductERKS_S1_(QVector3D* v1, QVector3D* v2) {
  auto rv = QVector3D::crossProduct(*v1, *v2);
return new QVector3D(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:103
// [12] QVector3D normal(const class QVector3D &, const class QVector3D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3D6normalERKS_S1_(QVector3D* v1, QVector3D* v2) {
  auto rv = QVector3D::normal(*v1, *v2);
return new QVector3D(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:104
// [12] QVector3D normal(const class QVector3D &, const class QVector3D &, const class QVector3D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector3D6normalERKS_S1_S1_(QVector3D* v1, QVector3D* v2, QVector3D* v3) {
  auto rv = QVector3D::normal(*v1, *v2, *v3);
return new QVector3D(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:107
// [12] QVector3D project(const class QMatrix4x4 &, const class QMatrix4x4 &, const class QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector3D7projectERK10QMatrix4x4S2_RK5QRect(void *this_, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport) {
  auto rv = ((QVector3D*)this_)->project(*modelView, *projection, *viewport);
return new QVector3D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:108
// [12] QVector3D unproject(const class QMatrix4x4 &, const class QMatrix4x4 &, const class QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector3D9unprojectERK10QMatrix4x4S2_RK5QRect(void *this_, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport) {
  auto rv = ((QVector3D*)this_)->unproject(*modelView, *projection, *viewport);
return new QVector3D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:110
// [4] float distanceToPoint(const class QVector3D &)
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector3D15distanceToPointERKS_(void *this_, QVector3D* point) {
  return (float)((QVector3D*)this_)->distanceToPoint(*point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:111
// [4] float distanceToPlane(const class QVector3D &, const class QVector3D &)
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector3D15distanceToPlaneERKS_S1_(void *this_, QVector3D* plane, QVector3D* normal) {
  return (float)((QVector3D*)this_)->distanceToPlane(*plane, *normal);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:112
// [4] float distanceToPlane(const class QVector3D &, const class QVector3D &, const class QVector3D &)
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector3D15distanceToPlaneERKS_S1_S1_(void *this_, QVector3D* plane1, QVector3D* plane2, QVector3D* plane3) {
  return (float)((QVector3D*)this_)->distanceToPlane(*plane1, *plane2, *plane3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:113
// [4] float distanceToLine(const class QVector3D &, const class QVector3D &)
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector3D14distanceToLineERKS_S1_(void *this_, QVector3D* point, QVector3D* direction) {
  return (float)((QVector3D*)this_)->distanceToLine(*point, *direction);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:129
// [8] QVector2D toVector2D()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector3D10toVector2DEv(void *this_) {
  auto rv = ((QVector3D*)this_)->toVector2D();
return new QVector2D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:132
// [16] QVector4D toVector4D()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector3D10toVector4DEv(void *this_) {
  auto rv = ((QVector3D*)this_)->toVector4D();
return new QVector4D(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:135
// [8] QPoint toPoint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector3D7toPointEv(void *this_) {
  auto rv = ((QVector3D*)this_)->toPoint();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:136
// [16] QPointF toPointF()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector3D8toPointFEv(void *this_) {
  auto rv = ((QVector3D*)this_)->toPointF();
return new QPointF(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN9QVector3DD2Ev(void *this_) {
  delete (QVector3D*)(this_);
}
//  main block end
