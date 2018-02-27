//  header block begin
// /usr/include/qt/QtGui/qmatrix4x4.h
#ifndef protected
#define protected public
#endif
#include <qmatrix4x4.h>
#include <QtGui>
#include "callback_inherit.h"

// QMatrix4x4 is pure virtual: false
// QMatrix4x4 has virtual projected: false
//  header block end

//  main block begin

class MyQMatrix4x4 : public QMatrix4x4 {
public:
  virtual ~MyQMatrix4x4() {}
// void QMatrix4x4()
MyQMatrix4x4() : QMatrix4x4() {}
// void QMatrix4x4(Qt::Initialization)
MyQMatrix4x4(Qt::Initialization arg0) : QMatrix4x4(arg0) {}
// void QMatrix4x4(const float *)
MyQMatrix4x4(const float * values) : QMatrix4x4(values) {}
// void QMatrix4x4(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)
MyQMatrix4x4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) : QMatrix4x4(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44) {}
// void QMatrix4x4(const float *, int, int)
MyQMatrix4x4(const float * values, int cols, int rows) : QMatrix4x4(values, cols, rows) {}
// void QMatrix4x4(const class QTransform &)
MyQMatrix4x4(const QTransform & transform) : QMatrix4x4(transform) {}
// void QMatrix4x4(const class QMatrix &)
MyQMatrix4x4(const QMatrix & matrix) : QMatrix4x4(matrix) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:62
// [-2] void QMatrix4x4()
extern "C"
void* C_ZN10QMatrix4x4C2Ev() {
  return  new QMatrix4x4();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:63
// [-2] void QMatrix4x4(Qt::Initialization)
extern "C"
void* C_ZN10QMatrix4x4C2EN2Qt14InitializationE(Qt::Initialization arg0) {
  return  new QMatrix4x4(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:64
// [-2] void QMatrix4x4(const float *)
extern "C"
void* C_ZN10QMatrix4x4C2EPKf(const float * values) {
  return  new QMatrix4x4(values);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:65
// [-2] void QMatrix4x4(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)
extern "C"
void* C_ZN10QMatrix4x4C2Effffffffffffffff(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) {
  return  new QMatrix4x4(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:73
// [-2] void QMatrix4x4(const float *, int, int)
extern "C"
void* C_ZN10QMatrix4x4C2EPKfii(const float * values, int cols, int rows) {
  return  new QMatrix4x4(values, cols, rows);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:74
// [-2] void QMatrix4x4(const class QTransform &)
extern "C"
void* C_ZN10QMatrix4x4C2ERK10QTransform(QTransform* transform) {
  return  new QMatrix4x4(*transform);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:75
// [-2] void QMatrix4x4(const class QMatrix &)
extern "C"
void* C_ZN10QMatrix4x4C2ERK7QMatrix(QMatrix* matrix) {
  return  new QMatrix4x4(*matrix);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:77
// [4] const float & operator()(int, int)
extern "C"
void* C_ZNK10QMatrix4x4clEii(void *this_, int row, int column) {
  auto& rv = ((QMatrix4x4*)this_)->operator()(row, column);
return new float(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:78
// [4] float & operator()(int, int)
extern "C"
void* C_ZN10QMatrix4x4clEii(void *this_, int row, int column) {
  auto& rv = ((QMatrix4x4*)this_)->operator()(row, column);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:81
// [16] QVector4D column(int)
extern "C"
void* C_ZNK10QMatrix4x46columnEi(void *this_, int index) {
  auto rv = ((QMatrix4x4*)this_)->column(index);
return new QVector4D(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:82
// [-2] void setColumn(int, const class QVector4D &)
extern "C"
void C_ZN10QMatrix4x49setColumnEiRK9QVector4D(void *this_, int index, QVector4D* value) {
  ((QMatrix4x4*)this_)->setColumn(index, *value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:84
// [16] QVector4D row(int)
extern "C"
void* C_ZNK10QMatrix4x43rowEi(void *this_, int index) {
  auto rv = ((QMatrix4x4*)this_)->row(index);
return new QVector4D(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:85
// [-2] void setRow(int, const class QVector4D &)
extern "C"
void C_ZN10QMatrix4x46setRowEiRK9QVector4D(void *this_, int index, QVector4D* value) {
  ((QMatrix4x4*)this_)->setRow(index, *value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:88
// [1] bool isAffine()
extern "C"
bool C_ZNK10QMatrix4x48isAffineEv(void *this_) {
  return (bool)((QMatrix4x4*)this_)->isAffine();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:90
// [1] bool isIdentity()
extern "C"
bool C_ZNK10QMatrix4x410isIdentityEv(void *this_) {
  return (bool)((QMatrix4x4*)this_)->isIdentity();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:91
// [-2] void setToIdentity()
extern "C"
void C_ZN10QMatrix4x413setToIdentityEv(void *this_) {
  ((QMatrix4x4*)this_)->setToIdentity();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:93
// [-2] void fill(float)
extern "C"
void C_ZN10QMatrix4x44fillEf(void *this_, float value) {
  ((QMatrix4x4*)this_)->fill(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:95
// [8] double determinant()
extern "C"
double C_ZNK10QMatrix4x411determinantEv(void *this_) {
  return (double)((QMatrix4x4*)this_)->determinant();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:96
// [68] QMatrix4x4 inverted(_Bool *)
extern "C"
void* C_ZNK10QMatrix4x48invertedEPb(void *this_, bool * invertible) {
  auto rv = ((QMatrix4x4*)this_)->inverted(invertible);
return new QMatrix4x4(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:97
// [68] QMatrix4x4 transposed()
extern "C"
void* C_ZNK10QMatrix4x410transposedEv(void *this_) {
  auto rv = ((QMatrix4x4*)this_)->transposed();
return new QMatrix4x4(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:100
// [68] QMatrix4x4 & operator+=(const class QMatrix4x4 &)
extern "C"
void* C_ZN10QMatrix4x4pLERKS_(void *this_, QMatrix4x4* other) {
  auto& rv = ((QMatrix4x4*)this_)->operator+=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:101
// [68] QMatrix4x4 & operator-=(const class QMatrix4x4 &)
extern "C"
void* C_ZN10QMatrix4x4mIERKS_(void *this_, QMatrix4x4* other) {
  auto& rv = ((QMatrix4x4*)this_)->operator-=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:102
// [68] QMatrix4x4 & operator*=(const class QMatrix4x4 &)
extern "C"
void* C_ZN10QMatrix4x4mLERKS_(void *this_, QMatrix4x4* other) {
  auto& rv = ((QMatrix4x4*)this_)->operator*=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:103
// [68] QMatrix4x4 & operator*=(float)
extern "C"
void* C_ZN10QMatrix4x4mLEf(void *this_, float factor) {
  auto& rv = ((QMatrix4x4*)this_)->operator*=(factor);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:104
// [68] QMatrix4x4 & operator/=(float)
extern "C"
void* C_ZN10QMatrix4x4dVEf(void *this_, float divisor) {
  auto& rv = ((QMatrix4x4*)this_)->operator/=(divisor);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:105
// [1] bool operator==(const class QMatrix4x4 &)
extern "C"
bool C_ZNK10QMatrix4x4eqERKS_(void *this_, QMatrix4x4* other) {
  return (bool)((QMatrix4x4*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:106
// [1] bool operator!=(const class QMatrix4x4 &)
extern "C"
bool C_ZNK10QMatrix4x4neERKS_(void *this_, QMatrix4x4* other) {
  return (bool)((QMatrix4x4*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:131
// [-2] void scale(const class QVector3D &)
extern "C"
void C_ZN10QMatrix4x45scaleERK9QVector3D(void *this_, QVector3D* vector) {
  ((QMatrix4x4*)this_)->scale(*vector);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:132
// [-2] void translate(const class QVector3D &)
extern "C"
void C_ZN10QMatrix4x49translateERK9QVector3D(void *this_, QVector3D* vector) {
  ((QMatrix4x4*)this_)->translate(*vector);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:133
// [-2] void rotate(float, const class QVector3D &)
extern "C"
void C_ZN10QMatrix4x46rotateEfRK9QVector3D(void *this_, float angle, QVector3D* vector) {
  ((QMatrix4x4*)this_)->rotate(angle, *vector);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:135
// [-2] void scale(float, float)
extern "C"
void C_ZN10QMatrix4x45scaleEff(void *this_, float x, float y) {
  ((QMatrix4x4*)this_)->scale(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:136
// [-2] void scale(float, float, float)
extern "C"
void C_ZN10QMatrix4x45scaleEfff(void *this_, float x, float y, float z) {
  ((QMatrix4x4*)this_)->scale(x, y, z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:137
// [-2] void scale(float)
extern "C"
void C_ZN10QMatrix4x45scaleEf(void *this_, float factor) {
  ((QMatrix4x4*)this_)->scale(factor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:138
// [-2] void translate(float, float)
extern "C"
void C_ZN10QMatrix4x49translateEff(void *this_, float x, float y) {
  ((QMatrix4x4*)this_)->translate(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:139
// [-2] void translate(float, float, float)
extern "C"
void C_ZN10QMatrix4x49translateEfff(void *this_, float x, float y, float z) {
  ((QMatrix4x4*)this_)->translate(x, y, z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:140
// [-2] void rotate(float, float, float, float)
extern "C"
void C_ZN10QMatrix4x46rotateEffff(void *this_, float angle, float x, float y, float z) {
  ((QMatrix4x4*)this_)->rotate(angle, x, y, z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:142
// [-2] void rotate(const class QQuaternion &)
extern "C"
void C_ZN10QMatrix4x46rotateERK11QQuaternion(void *this_, QQuaternion* quaternion) {
  ((QMatrix4x4*)this_)->rotate(*quaternion);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:145
// [-2] void ortho(const class QRect &)
extern "C"
void C_ZN10QMatrix4x45orthoERK5QRect(void *this_, QRect* rect) {
  ((QMatrix4x4*)this_)->ortho(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:146
// [-2] void ortho(const class QRectF &)
extern "C"
void C_ZN10QMatrix4x45orthoERK6QRectF(void *this_, QRectF* rect) {
  ((QMatrix4x4*)this_)->ortho(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:147
// [-2] void ortho(float, float, float, float, float, float)
extern "C"
void C_ZN10QMatrix4x45orthoEffffff(void *this_, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
  ((QMatrix4x4*)this_)->ortho(left, right, bottom, top, nearPlane, farPlane);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:148
// [-2] void frustum(float, float, float, float, float, float)
extern "C"
void C_ZN10QMatrix4x47frustumEffffff(void *this_, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
  ((QMatrix4x4*)this_)->frustum(left, right, bottom, top, nearPlane, farPlane);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:149
// [-2] void perspective(float, float, float, float)
extern "C"
void C_ZN10QMatrix4x411perspectiveEffff(void *this_, float verticalAngle, float aspectRatio, float nearPlane, float farPlane) {
  ((QMatrix4x4*)this_)->perspective(verticalAngle, aspectRatio, nearPlane, farPlane);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:151
// [-2] void lookAt(const class QVector3D &, const class QVector3D &, const class QVector3D &)
extern "C"
void C_ZN10QMatrix4x46lookAtERK9QVector3DS2_S2_(void *this_, QVector3D* eye, QVector3D* center, QVector3D* up) {
  ((QMatrix4x4*)this_)->lookAt(*eye, *center, *up);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:153
// [-2] void viewport(const class QRectF &)
extern "C"
void C_ZN10QMatrix4x48viewportERK6QRectF(void *this_, QRectF* rect) {
  ((QMatrix4x4*)this_)->viewport(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:154
// [-2] void viewport(float, float, float, float, float, float)
extern "C"
void C_ZN10QMatrix4x48viewportEffffff(void *this_, float left, float bottom, float width, float height, float nearPlane, float farPlane) {
  ((QMatrix4x4*)this_)->viewport(left, bottom, width, height, nearPlane, farPlane);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:155
// [-2] void flipCoordinates()
extern "C"
void C_ZN10QMatrix4x415flipCoordinatesEv(void *this_) {
  ((QMatrix4x4*)this_)->flipCoordinates();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:157
// [-2] void copyDataTo(float *)
extern "C"
void C_ZNK10QMatrix4x410copyDataToEPf(void *this_, float * values) {
  ((QMatrix4x4*)this_)->copyDataTo(values);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:159
// [48] QMatrix toAffine()
extern "C"
void* C_ZNK10QMatrix4x48toAffineEv(void *this_) {
  auto rv = ((QMatrix4x4*)this_)->toAffine();
return new QMatrix(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:160
// [88] QTransform toTransform()
extern "C"
void* C_ZNK10QMatrix4x411toTransformEv(void *this_) {
  auto rv = ((QMatrix4x4*)this_)->toTransform();
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:161
// [88] QTransform toTransform(float)
extern "C"
void* C_ZNK10QMatrix4x411toTransformEf(void *this_, float distanceToPlane) {
  auto rv = ((QMatrix4x4*)this_)->toTransform(distanceToPlane);
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:163
// [8] QPoint map(const class QPoint &)
extern "C"
void* C_ZNK10QMatrix4x43mapERK6QPoint(void *this_, QPoint* point) {
  auto rv = ((QMatrix4x4*)this_)->map(*point);
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:164
// [16] QPointF map(const class QPointF &)
extern "C"
void* C_ZNK10QMatrix4x43mapERK7QPointF(void *this_, QPointF* point) {
  auto rv = ((QMatrix4x4*)this_)->map(*point);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:166
// [12] QVector3D map(const class QVector3D &)
extern "C"
void* C_ZNK10QMatrix4x43mapERK9QVector3D(void *this_, QVector3D* point) {
  auto rv = ((QMatrix4x4*)this_)->map(*point);
return new QVector3D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:167
// [12] QVector3D mapVector(const class QVector3D &)
extern "C"
void* C_ZNK10QMatrix4x49mapVectorERK9QVector3D(void *this_, QVector3D* vector) {
  auto rv = ((QMatrix4x4*)this_)->mapVector(*vector);
return new QVector3D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:170
// [16] QVector4D map(const class QVector4D &)
extern "C"
void* C_ZNK10QMatrix4x43mapERK9QVector4D(void *this_, QVector4D* point) {
  auto rv = ((QMatrix4x4*)this_)->map(*point);
return new QVector4D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:172
// [16] QRect mapRect(const class QRect &)
extern "C"
void* C_ZNK10QMatrix4x47mapRectERK5QRect(void *this_, QRect* rect) {
  auto rv = ((QMatrix4x4*)this_)->mapRect(*rect);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:173
// [32] QRectF mapRect(const class QRectF &)
extern "C"
void* C_ZNK10QMatrix4x47mapRectERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QMatrix4x4*)this_)->mapRect(*rect);
return new QRectF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:178
// [8] float * data()
extern "C"
void* C_ZN10QMatrix4x44dataEv(void *this_) {
  return (void*)((QMatrix4x4*)this_)->data();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:179
// [8] const float * data()
extern "C"
void* C_ZNK10QMatrix4x44dataEv(void *this_) {
  return (void*)((QMatrix4x4*)this_)->data();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:180
// [8] const float * constData()
extern "C"
void* C_ZNK10QMatrix4x49constDataEv(void *this_) {
  return (void*)((QMatrix4x4*)this_)->constData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:182
// [-2] void optimize()
extern "C"
void C_ZN10QMatrix4x48optimizeEv(void *this_) {
  ((QMatrix4x4*)this_)->optimize();
}


extern "C"
void C_ZN10QMatrix4x4D2Ev(void *this_) {
  delete (QMatrix4x4*)(this_);
}
//  main block end
