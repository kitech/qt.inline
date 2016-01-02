// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qmatrix4x4.h
// dst-file: /src/gui/qmatrix4x4.cxx
//

// header block begin =>
#include <qmatrix4x4.h>

extern "C" {

int QMatrix4x4_Class_Size()
{
  return sizeof(QMatrix4x4);
}

// QMatrix4x4()
QMatrix4x4* dector_ZN10QMatrix4x4C1Ev()
{
  // static_assert(sizeof(QMatrix4x4) == 68, "tyszerr");
  QMatrix4x4* rthis = new QMatrix4x4();
  return rthis;
}

// QMatrix4x4(const class QTransform &)
QMatrix4x4* dector_ZN10QMatrix4x4C1ERK10QTransform(const QTransform & transform)
{
  // static_assert(sizeof(QMatrix4x4) == 68, "tyszerr");
  QMatrix4x4* rthis = new QMatrix4x4(transform);
  return rthis;
}

// QMatrix4x4(const class QMatrix &)
QMatrix4x4* dector_ZN10QMatrix4x4C1ERK7QMatrix(const QMatrix & matrix)
{
  // static_assert(sizeof(QMatrix4x4) == 68, "tyszerr");
  QMatrix4x4* rthis = new QMatrix4x4(matrix);
  return rthis;
}

// QMatrix4x4(Qt::Initialization)
QMatrix4x4* dector_ZN10QMatrix4x4C1EN2Qt14InitializationE(Qt::Initialization arg1)
{
  // static_assert(sizeof(QMatrix4x4) == 68, "tyszerr");
  QMatrix4x4* rthis = new QMatrix4x4(arg1);
  return rthis;
}

// QMatrix4x4(const float *)
QMatrix4x4* dector_ZN10QMatrix4x4C1EPKf(const float * values)
{
  // static_assert(sizeof(QMatrix4x4) == 68, "tyszerr");
  QMatrix4x4* rthis = new QMatrix4x4(values);
  return rthis;
}

// QMatrix4x4(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)
QMatrix4x4* dector_ZN10QMatrix4x4C1Effffffffffffffff(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
  // static_assert(sizeof(QMatrix4x4) == 68, "tyszerr");
  QMatrix4x4* rthis = new QMatrix4x4(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
  return rthis;
}

// QMatrix4x4(const float *, int, int)
QMatrix4x4* dector_ZN10QMatrix4x4C1EPKfii(const float * values, int cols, int rows)
{
  // static_assert(sizeof(QMatrix4x4) == 68, "tyszerr");
  QMatrix4x4* rthis = new QMatrix4x4(values, cols, rows);
  return rthis;
}

  // proto:  const float * QMatrix4x4::constData();
const float * demth_ZNK10QMatrix4x49constDataEv(void *that)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  return cthat->constData();
}

  // proto:  float * QMatrix4x4::data();
float * demth_ZN10QMatrix4x44dataEv(void *that)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  return cthat->data();
}

  // proto:  QVector3D QMatrix4x4::mapVector(const QVector3D & vector);
QVector3D* demth_ZNK10QMatrix4x49mapVectorERK9QVector3D(void *that, const QVector3D & vector)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  auto recret = cthat->mapVector(vector);
  return new QVector3D(recret);
}

  // proto:  void QMatrix4x4::QMatrix4x4();
void demth_ZN10QMatrix4x4C1Ev(void *that)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  auto _o = new(that) QMatrix4x4();
}

  // proto:  void QMatrix4x4::setColumn(int index, const QVector4D & value);
void demth_ZN10QMatrix4x49setColumnEiRK9QVector4D(void *that, int index, const QVector4D & value)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
   cthat->setColumn(index, value);
}

  // proto:  bool QMatrix4x4::isIdentity();
bool demth_ZNK10QMatrix4x410isIdentityEv(void *that)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  return cthat->isIdentity();
}

  // proto:  QVector4D QMatrix4x4::column(int index);
QVector4D* demth_ZNK10QMatrix4x46columnEi(void *that, int index)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  auto recret = cthat->column(index);
  return new QVector4D(recret);
}

  // proto:  void QMatrix4x4::setRow(int index, const QVector4D & value);
void demth_ZN10QMatrix4x46setRowEiRK9QVector4D(void *that, int index, const QVector4D & value)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
   cthat->setRow(index, value);
}

  // proto:  bool QMatrix4x4::isAffine();
bool demth_ZNK10QMatrix4x48isAffineEv(void *that)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  return cthat->isAffine();
}

  // proto:  const float * QMatrix4x4::data();
const float * demth_ZNK10QMatrix4x44dataEv(void *that)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  return cthat->data();
}

  // proto:  QPoint QMatrix4x4::map(const QPoint & point);
QPoint* demth_ZNK10QMatrix4x43mapERK6QPoint(void *that, const QPoint & point)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  auto recret = cthat->map(point);
  return new QPoint(recret);
}

  // proto:  void QMatrix4x4::setToIdentity();
void demth_ZN10QMatrix4x413setToIdentityEv(void *that)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
   cthat->setToIdentity();
}

  // proto:  void QMatrix4x4::QMatrix4x4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44);
void demth_ZN10QMatrix4x4C1Effffffffffffffff(void *that, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  auto _o = new(that) QMatrix4x4(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
}

  // proto:  QVector3D QMatrix4x4::map(const QVector3D & point);
QVector3D* demth_ZNK10QMatrix4x43mapERK9QVector3D(void *that, const QVector3D & point)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  auto recret = cthat->map(point);
  return new QVector3D(recret);
}

  // proto:  void QMatrix4x4::viewport(const QRectF & rect);
void demth_ZN10QMatrix4x48viewportERK6QRectF(void *that, const QRectF & rect)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
   cthat->viewport(rect);
}

  // proto:  void QMatrix4x4::fill(float value);
void demth_ZN10QMatrix4x44fillEf(void *that, float value)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
   cthat->fill(value);
}

  // proto:  QPointF QMatrix4x4::map(const QPointF & point);
QPointF* demth_ZNK10QMatrix4x43mapERK7QPointF(void *that, const QPointF & point)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  auto recret = cthat->map(point);
  return new QPointF(recret);
}

  // proto:  QVector4D QMatrix4x4::row(int index);
QVector4D* demth_ZNK10QMatrix4x43rowEi(void *that, int index)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  auto recret = cthat->row(index);
  return new QVector4D(recret);
}

  // proto:  QVector4D QMatrix4x4::map(const QVector4D & point);
QVector4D* demth_ZNK10QMatrix4x43mapERK9QVector4D(void *that, const QVector4D & point)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  auto recret = cthat->map(point);
  return new QVector4D(recret);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

