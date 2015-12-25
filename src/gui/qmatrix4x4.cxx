// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtGui/qmatrix4x4.h
// dst-file: /src/gui/qmatrix4x4.cxx
//

// header block begin =>
#include <qmatrix4x4.h>

extern "C" {

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

  // proto:  float * QMatrix4x4::data();
float * _ZN10QMatrix4x44dataEv(void *that)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  return cthat->data();
}

  // proto:  void QMatrix4x4::setColumn(int index, const QVector4D & value);
void _ZN10QMatrix4x49setColumnEiRK9QVector4D(void *that, int index, const QVector4D & value)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
   cthat->setColumn(index, value);
}

  // proto:  bool QMatrix4x4::isIdentity();
bool _ZNK10QMatrix4x410isIdentityEv(void *that)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  return cthat->isIdentity();
}

  // proto:  QVector4D QMatrix4x4::column(int index);
QVector4D* _ZNK10QMatrix4x46columnEi(void *that, int index)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  auto recret = cthat->column(index);
  return new QVector4D(recret);
}

  // proto:  void QMatrix4x4::setRow(int index, const QVector4D & value);
void _ZN10QMatrix4x46setRowEiRK9QVector4D(void *that, int index, const QVector4D & value)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
   cthat->setRow(index, value);
}

  // proto:  bool QMatrix4x4::isAffine();
bool _ZNK10QMatrix4x48isAffineEv(void *that)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  return cthat->isAffine();
}

  // proto:  void QMatrix4x4::setToIdentity();
void _ZN10QMatrix4x413setToIdentityEv(void *that)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
   cthat->setToIdentity();
}

  // proto:  void QMatrix4x4::QMatrix4x4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44);
void _ZN10QMatrix4x4C1Effffffffffffffff(void *that, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  auto _o = new(that) QMatrix4x4(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
}

  // proto:  void QMatrix4x4::fill(float value);
void _ZN10QMatrix4x44fillEf(void *that, float value)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
   cthat->fill(value);
}

  // proto:  QVector4D QMatrix4x4::row(int index);
QVector4D* _ZNK10QMatrix4x43rowEi(void *that, int index)
{
  QMatrix4x4 *cthat = (QMatrix4x4 *)that;
  auto recret = cthat->row(index);
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
