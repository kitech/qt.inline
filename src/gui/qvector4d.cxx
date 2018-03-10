//  header block begin
// since 0x040600
// /usr/include/qt/QtGui/qvector4d.h
#ifndef protected
#define protected public
#endif
#include <qvector4d.h>
#include <QtGui>
#include "callback_inherit.h"

// QVector4D is pure virtual: false
// QVector4D has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVector4D : public QVector4D {
public:
  virtual ~MyQVector4D() {}
// void QVector4D()
MyQVector4D() : QVector4D() {}
// void QVector4D(Qt::Initialization)
MyQVector4D(Qt::Initialization arg0) : QVector4D(arg0) {}
// void QVector4D(float, float, float, float)
MyQVector4D(float xpos, float ypos, float zpos, float wpos) : QVector4D(xpos, ypos, zpos, wpos) {}
// void QVector4D(const class QPoint &)
MyQVector4D(const QPoint & point) : QVector4D(point) {}
// void QVector4D(const class QPointF &)
MyQVector4D(const QPointF & point) : QVector4D(point) {}
// void QVector4D(const class QVector2D &)
MyQVector4D(const QVector2D & vector) : QVector4D(vector) {}
// void QVector4D(const class QVector2D &, float, float)
MyQVector4D(const QVector2D & vector, float zpos, float wpos) : QVector4D(vector, zpos, wpos) {}
// void QVector4D(const class QVector3D &)
MyQVector4D(const QVector3D & vector) : QVector4D(vector) {}
// void QVector4D(const class QVector3D &, float)
MyQVector4D(const QVector3D & vector, float wpos) : QVector4D(vector, wpos) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:59
// [-2] void QVector4D()
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DC2Ev() {
  return  new QVector4D();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:60
// [-2] void QVector4D(Qt::Initialization)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DC2EN2Qt14InitializationE(Qt::Initialization arg0) {
  return  new QVector4D(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:61
// [-2] void QVector4D(float, float, float, float)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DC2Effff(float xpos, float ypos, float zpos, float wpos) {
  return  new QVector4D(xpos, ypos, zpos, wpos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:62
// [-2] void QVector4D(const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DC2ERK6QPoint(QPoint* point) {
  return  new QVector4D(*point);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:63
// [-2] void QVector4D(const class QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DC2ERK7QPointF(QPointF* point) {
  return  new QVector4D(*point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:65
// [-2] void QVector4D(const class QVector2D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DC2ERK9QVector2D(QVector2D* vector) {
  return  new QVector4D(*vector);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:66
// [-2] void QVector4D(const class QVector2D &, float, float)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DC2ERK9QVector2Dff(QVector2D* vector, float zpos, float wpos) {
  return  new QVector4D(*vector, zpos, wpos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:69
// [-2] void QVector4D(const class QVector3D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DC2ERK9QVector3D(QVector3D* vector) {
  return  new QVector4D(*vector);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:70
// [-2] void QVector4D(const class QVector3D &, float)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DC2ERK9QVector3Df(QVector3D* vector, float wpos) {
  return  new QVector4D(*vector, wpos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:73
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QVector4D6isNullEv(void *this_) {
  return (bool)((QVector4D*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:75
// [4] float x()
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector4D1xEv(void *this_) {
  return (float)((QVector4D*)this_)->x();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:76
// [4] float y()
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector4D1yEv(void *this_) {
  return (float)((QVector4D*)this_)->y();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:77
// [4] float z()
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector4D1zEv(void *this_) {
  return (float)((QVector4D*)this_)->z();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:78
// [4] float w()
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector4D1wEv(void *this_) {
  return (float)((QVector4D*)this_)->w();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:80
// [-2] void setX(float)
extern "C" Q_DECL_EXPORT
void C_ZN9QVector4D4setXEf(void *this_, float x) {
  ((QVector4D*)this_)->setX(x);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:81
// [-2] void setY(float)
extern "C" Q_DECL_EXPORT
void C_ZN9QVector4D4setYEf(void *this_, float y) {
  ((QVector4D*)this_)->setY(y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:82
// [-2] void setZ(float)
extern "C" Q_DECL_EXPORT
void C_ZN9QVector4D4setZEf(void *this_, float z) {
  ((QVector4D*)this_)->setZ(z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:83
// [-2] void setW(float)
extern "C" Q_DECL_EXPORT
void C_ZN9QVector4D4setWEf(void *this_, float w) {
  ((QVector4D*)this_)->setW(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:85
// [4] float & operator[](int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DixEi(void *this_, int i) {
  auto& rv = ((QVector4D*)this_)->operator[](i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:86
// [4] float operator[](int)
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector4DixEi(void *this_, int i) {
  return (float)((QVector4D*)this_)->operator[](i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:88
// [4] float length()
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector4D6lengthEv(void *this_) {
  return (float)((QVector4D*)this_)->length();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:89
// [4] float lengthSquared()
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector4D13lengthSquaredEv(void *this_) {
  return (float)((QVector4D*)this_)->lengthSquared();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:91
// [16] QVector4D normalized()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector4D10normalizedEv(void *this_) {
  auto rv = ((QVector4D*)this_)->normalized();
return new QVector4D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:92
// [-2] void normalize()
extern "C" Q_DECL_EXPORT
void C_ZN9QVector4D9normalizeEv(void *this_) {
  ((QVector4D*)this_)->normalize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:94
// [16] QVector4D & operator+=(const class QVector4D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DpLERKS_(void *this_, QVector4D* vector) {
  auto& rv = ((QVector4D*)this_)->operator+=(*vector);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:95
// [16] QVector4D & operator-=(const class QVector4D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DmIERKS_(void *this_, QVector4D* vector) {
  auto& rv = ((QVector4D*)this_)->operator-=(*vector);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:96
// [16] QVector4D & operator*=(float)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DmLEf(void *this_, float factor) {
  auto& rv = ((QVector4D*)this_)->operator*=(factor);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:97
// [16] QVector4D & operator*=(const class QVector4D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DmLERKS_(void *this_, QVector4D* vector) {
  auto& rv = ((QVector4D*)this_)->operator*=(*vector);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:98
// [16] QVector4D & operator/=(float)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DdVEf(void *this_, float divisor) {
  auto& rv = ((QVector4D*)this_)->operator/=(divisor);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:99
// [16] QVector4D & operator/=(const class QVector4D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector4DdVERKS_(void *this_, QVector4D* vector) {
  auto& rv = ((QVector4D*)this_)->operator/=(*vector);
return &rv;
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:101
// [4] float dotProduct(const class QVector4D &, const class QVector4D &)
extern "C" Q_DECL_EXPORT
float C_ZN9QVector4D10dotProductERKS_S1_(QVector4D* v1, QVector4D* v2) {
  return (float)QVector4D::dotProduct(*v1, *v2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:117
// [8] QVector2D toVector2D()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector4D10toVector2DEv(void *this_) {
  auto rv = ((QVector4D*)this_)->toVector2D();
return new QVector2D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:118
// [8] QVector2D toVector2DAffine()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector4D16toVector2DAffineEv(void *this_) {
  auto rv = ((QVector4D*)this_)->toVector2DAffine();
return new QVector2D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:121
// [12] QVector3D toVector3D()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector4D10toVector3DEv(void *this_) {
  auto rv = ((QVector4D*)this_)->toVector3D();
return new QVector3D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:122
// [12] QVector3D toVector3DAffine()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector4D16toVector3DAffineEv(void *this_) {
  auto rv = ((QVector4D*)this_)->toVector3DAffine();
return new QVector3D(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:125
// [8] QPoint toPoint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector4D7toPointEv(void *this_) {
  auto rv = ((QVector4D*)this_)->toPoint();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:126
// [16] QPointF toPointF()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector4D8toPointFEv(void *this_) {
  auto rv = ((QVector4D*)this_)->toPointF();
return new QPointF(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN9QVector4DD2Ev(void *this_) {
  delete (QVector4D*)(this_);
}
//  main block end
