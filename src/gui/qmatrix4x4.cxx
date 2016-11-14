// /usr/include/qt/QtGui/qmatrix4x4.h
#include <qmatrix4x4.h>
#include <QtGui>

// inline
// /usr/include/qt/QtGui/qmatrix4x4.h:61
// void QMatrix4x4()
extern "C"
void* C_ZN10QMatrix4x4C1Ev() {
  return new QMatrix4x4();
}
// inline
// /usr/include/qt/QtGui/qmatrix4x4.h:62
// void QMatrix4x4(Qt::Initialization)
extern "C"
void* C_ZN10QMatrix4x4C1EN2Qt14InitializationE(Qt::Initialization a0) {
  return new QMatrix4x4(a0);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:63
// void QMatrix4x4(const float *)
extern "C"
void* C_ZN10QMatrix4x4C1EPKf(const float * values) {
  return new QMatrix4x4(values);
}
// inline
// /usr/include/qt/QtGui/qmatrix4x4.h:64
// void QMatrix4x4(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)
extern "C"
void* C_ZN10QMatrix4x4C1Effffffffffffffff(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) {
  return new QMatrix4x4(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:72
// void QMatrix4x4(const float *, int, int)
extern "C"
void* C_ZN10QMatrix4x4C1EPKfii(const float * values, int cols, int rows) {
  return new QMatrix4x4(values, cols, rows);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:73
// void QMatrix4x4(const class QTransform &)
extern "C"
void* C_ZN10QMatrix4x4C1ERK10QTransform(const QTransform & transform) {
  return new QMatrix4x4(transform);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:74
// void QMatrix4x4(const class QMatrix &)
extern "C"
void* C_ZN10QMatrix4x4C1ERK7QMatrix(const QMatrix & matrix) {
  return new QMatrix4x4(matrix);
}
// inline
// /usr/include/qt/QtGui/qmatrix4x4.h:80
// QVector4D column(int)
extern "C"
void C_ZNK10QMatrix4x46columnEi(void *this_, int index) {
  /*return*/ ((QMatrix4x4*)this_)->column(index);
}
// inline
// /usr/include/qt/QtGui/qmatrix4x4.h:81
// void setColumn(int, const class QVector4D &)
extern "C"
void C_ZN10QMatrix4x49setColumnEiRK9QVector4D(void *this_, int index, const QVector4D & value) {
  ((QMatrix4x4*)this_)->setColumn(index, value);
}
// inline
// /usr/include/qt/QtGui/qmatrix4x4.h:83
// QVector4D row(int)
extern "C"
void C_ZNK10QMatrix4x43rowEi(void *this_, int index) {
  /*return*/ ((QMatrix4x4*)this_)->row(index);
}
// inline
// /usr/include/qt/QtGui/qmatrix4x4.h:84
// void setRow(int, const class QVector4D &)
extern "C"
void C_ZN10QMatrix4x46setRowEiRK9QVector4D(void *this_, int index, const QVector4D & value) {
  ((QMatrix4x4*)this_)->setRow(index, value);
}
// inline
// /usr/include/qt/QtGui/qmatrix4x4.h:87
// bool isAffine()
extern "C"
void C_ZNK10QMatrix4x48isAffineEv(void *this_) {
  /*return*/ ((QMatrix4x4*)this_)->isAffine();
}
// inline
// /usr/include/qt/QtGui/qmatrix4x4.h:89
// bool isIdentity()
extern "C"
void C_ZNK10QMatrix4x410isIdentityEv(void *this_) {
  /*return*/ ((QMatrix4x4*)this_)->isIdentity();
}
// inline
// /usr/include/qt/QtGui/qmatrix4x4.h:90
// void setToIdentity()
extern "C"
void C_ZN10QMatrix4x413setToIdentityEv(void *this_) {
  ((QMatrix4x4*)this_)->setToIdentity();
}
// inline
// /usr/include/qt/QtGui/qmatrix4x4.h:92
// void fill(float)
extern "C"
void C_ZN10QMatrix4x44fillEf(void *this_, float value) {
  ((QMatrix4x4*)this_)->fill(value);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:94
// double determinant()
extern "C"
void C_ZNK10QMatrix4x411determinantEv(void *this_) {
  /*return*/ ((QMatrix4x4*)this_)->determinant();
}
// /usr/include/qt/QtGui/qmatrix4x4.h:95
// QMatrix4x4 inverted(_Bool *)
extern "C"
void C_ZNK10QMatrix4x48invertedEPb(void *this_, bool * invertible) {
  /*return*/ ((QMatrix4x4*)this_)->inverted(invertible);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:96
// QMatrix4x4 transposed()
extern "C"
void C_ZNK10QMatrix4x410transposedEv(void *this_) {
  /*return*/ ((QMatrix4x4*)this_)->transposed();
}
// /usr/include/qt/QtGui/qmatrix4x4.h:97
// QMatrix3x3 normalMatrix()
extern "C"
void C_ZNK10QMatrix4x412normalMatrixEv(void *this_) {
  /*return*/ ((QMatrix4x4*)this_)->normalMatrix();
}
// /usr/include/qt/QtGui/qmatrix4x4.h:130
// void scale(const class QVector3D &)
extern "C"
void C_ZN10QMatrix4x45scaleERK9QVector3D(void *this_, const QVector3D & vector) {
  ((QMatrix4x4*)this_)->scale(vector);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:131
// void translate(const class QVector3D &)
extern "C"
void C_ZN10QMatrix4x49translateERK9QVector3D(void *this_, const QVector3D & vector) {
  ((QMatrix4x4*)this_)->translate(vector);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:132
// void rotate(float, const class QVector3D &)
extern "C"
void C_ZN10QMatrix4x46rotateEfRK9QVector3D(void *this_, float angle, const QVector3D & vector) {
  ((QMatrix4x4*)this_)->rotate(angle, vector);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:134
// void scale(float, float)
extern "C"
void C_ZN10QMatrix4x45scaleEff(void *this_, float x, float y) {
  ((QMatrix4x4*)this_)->scale(x, y);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:135
// void scale(float, float, float)
extern "C"
void C_ZN10QMatrix4x45scaleEfff(void *this_, float x, float y, float z) {
  ((QMatrix4x4*)this_)->scale(x, y, z);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:136
// void scale(float)
extern "C"
void C_ZN10QMatrix4x45scaleEf(void *this_, float factor) {
  ((QMatrix4x4*)this_)->scale(factor);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:137
// void translate(float, float)
extern "C"
void C_ZN10QMatrix4x49translateEff(void *this_, float x, float y) {
  ((QMatrix4x4*)this_)->translate(x, y);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:138
// void translate(float, float, float)
extern "C"
void C_ZN10QMatrix4x49translateEfff(void *this_, float x, float y, float z) {
  ((QMatrix4x4*)this_)->translate(x, y, z);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:139
// void rotate(float, float, float, float)
extern "C"
void C_ZN10QMatrix4x46rotateEffff(void *this_, float angle, float x, float y, float z) {
  ((QMatrix4x4*)this_)->rotate(angle, x, y, z);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:141
// void rotate(const class QQuaternion &)
extern "C"
void C_ZN10QMatrix4x46rotateERK11QQuaternion(void *this_, const QQuaternion & quaternion) {
  ((QMatrix4x4*)this_)->rotate(quaternion);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:144
// void ortho(const class QRect &)
extern "C"
void C_ZN10QMatrix4x45orthoERK5QRect(void *this_, const QRect & rect) {
  ((QMatrix4x4*)this_)->ortho(rect);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:145
// void ortho(const class QRectF &)
extern "C"
void C_ZN10QMatrix4x45orthoERK6QRectF(void *this_, const QRectF & rect) {
  ((QMatrix4x4*)this_)->ortho(rect);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:146
// void ortho(float, float, float, float, float, float)
extern "C"
void C_ZN10QMatrix4x45orthoEffffff(void *this_, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
  ((QMatrix4x4*)this_)->ortho(left, right, bottom, top, nearPlane, farPlane);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:147
// void frustum(float, float, float, float, float, float)
extern "C"
void C_ZN10QMatrix4x47frustumEffffff(void *this_, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
  ((QMatrix4x4*)this_)->frustum(left, right, bottom, top, nearPlane, farPlane);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:148
// void perspective(float, float, float, float)
extern "C"
void C_ZN10QMatrix4x411perspectiveEffff(void *this_, float verticalAngle, float aspectRatio, float nearPlane, float farPlane) {
  ((QMatrix4x4*)this_)->perspective(verticalAngle, aspectRatio, nearPlane, farPlane);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:150
// void lookAt(const class QVector3D &, const class QVector3D &, const class QVector3D &)
extern "C"
void C_ZN10QMatrix4x46lookAtERK9QVector3DS2_S2_(void *this_, const QVector3D & eye, const QVector3D & center, const QVector3D & up) {
  ((QMatrix4x4*)this_)->lookAt(eye, center, up);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:152
// void viewport(const class QRectF &)
extern "C"
void C_ZN10QMatrix4x48viewportERK6QRectF(void *this_, const QRectF & rect) {
  ((QMatrix4x4*)this_)->viewport(rect);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:153
// void viewport(float, float, float, float, float, float)
extern "C"
void C_ZN10QMatrix4x48viewportEffffff(void *this_, float left, float bottom, float width, float height, float nearPlane, float farPlane) {
  ((QMatrix4x4*)this_)->viewport(left, bottom, width, height, nearPlane, farPlane);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:154
// void flipCoordinates()
extern "C"
void C_ZN10QMatrix4x415flipCoordinatesEv(void *this_) {
  ((QMatrix4x4*)this_)->flipCoordinates();
}
// /usr/include/qt/QtGui/qmatrix4x4.h:156
// void copyDataTo(float *)
extern "C"
void C_ZNK10QMatrix4x410copyDataToEPf(void *this_, float * values) {
  ((QMatrix4x4*)this_)->copyDataTo(values);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:158
// QMatrix toAffine()
extern "C"
void C_ZNK10QMatrix4x48toAffineEv(void *this_) {
  /*return*/ ((QMatrix4x4*)this_)->toAffine();
}
// /usr/include/qt/QtGui/qmatrix4x4.h:159
// QTransform toTransform()
extern "C"
void C_ZNK10QMatrix4x411toTransformEv(void *this_) {
  /*return*/ ((QMatrix4x4*)this_)->toTransform();
}
// /usr/include/qt/QtGui/qmatrix4x4.h:160
// QTransform toTransform(float)
extern "C"
void C_ZNK10QMatrix4x411toTransformEf(void *this_, float distanceToPlane) {
  /*return*/ ((QMatrix4x4*)this_)->toTransform(distanceToPlane);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:162
// QPoint map(const class QPoint &)
extern "C"
void C_ZNK10QMatrix4x43mapERK6QPoint(void *this_, const QPoint & point) {
  /*return*/ ((QMatrix4x4*)this_)->map(point);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:163
// QPointF map(const class QPointF &)
extern "C"
void C_ZNK10QMatrix4x43mapERK7QPointF(void *this_, const QPointF & point) {
  /*return*/ ((QMatrix4x4*)this_)->map(point);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:165
// QVector3D map(const class QVector3D &)
extern "C"
void C_ZNK10QMatrix4x43mapERK9QVector3D(void *this_, const QVector3D & point) {
  /*return*/ ((QMatrix4x4*)this_)->map(point);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:166
// QVector3D mapVector(const class QVector3D &)
extern "C"
void C_ZNK10QMatrix4x49mapVectorERK9QVector3D(void *this_, const QVector3D & vector) {
  /*return*/ ((QMatrix4x4*)this_)->mapVector(vector);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:169
// QVector4D map(const class QVector4D &)
extern "C"
void C_ZNK10QMatrix4x43mapERK9QVector4D(void *this_, const QVector4D & point) {
  /*return*/ ((QMatrix4x4*)this_)->map(point);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:171
// QRect mapRect(const class QRect &)
extern "C"
void C_ZNK10QMatrix4x47mapRectERK5QRect(void *this_, const QRect & rect) {
  /*return*/ ((QMatrix4x4*)this_)->mapRect(rect);
}
// /usr/include/qt/QtGui/qmatrix4x4.h:172
// QRectF mapRect(const class QRectF &)
extern "C"
void C_ZNK10QMatrix4x47mapRectERK6QRectF(void *this_, const QRectF & rect) {
  /*return*/ ((QMatrix4x4*)this_)->mapRect(rect);
}
// inline
// /usr/include/qt/QtGui/qmatrix4x4.h:177
// float * data()
extern "C"
void C_ZN10QMatrix4x44dataEv(void *this_) {
  /*return*/ ((QMatrix4x4*)this_)->data();
}
// inline
// /usr/include/qt/QtGui/qmatrix4x4.h:178
// const float * data()
extern "C"
void C_ZNK10QMatrix4x44dataEv(void *this_) {
  /*return*/ ((QMatrix4x4*)this_)->data();
}
// inline
// /usr/include/qt/QtGui/qmatrix4x4.h:179
// const float * constData()
extern "C"
void C_ZNK10QMatrix4x49constDataEv(void *this_) {
  /*return*/ ((QMatrix4x4*)this_)->constData();
}
// /usr/include/qt/QtGui/qmatrix4x4.h:181
// void optimize()
extern "C"
void C_ZN10QMatrix4x48optimizeEv(void *this_) {
  ((QMatrix4x4*)this_)->optimize();
}