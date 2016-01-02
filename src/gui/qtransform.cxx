// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qtransform.h
// dst-file: /src/gui/qtransform.cxx
//

// header block begin =>
#include <qtransform.h>

extern "C" {

int QTransform_Class_Size()
{
  return sizeof(QTransform);
}

// QTransform(Qt::Initialization)
QTransform* dector_ZN10QTransformC1EN2Qt14InitializationE(Qt::Initialization arg1)
{
  // static_assert(sizeof(QTransform) == 88, "tyszerr");
  QTransform* rthis = new QTransform(arg1);
  return rthis;
}

// QTransform()
QTransform* dector_ZN10QTransformC1Ev()
{
  // static_assert(sizeof(QTransform) == 88, "tyszerr");
  QTransform* rthis = new QTransform();
  return rthis;
}

// QTransform(qreal, qreal, qreal, qreal, qreal, qreal)
QTransform* dector_ZN10QTransformC1Edddddd(double h11, double h12, double h21, double h22, double dx, double dy)
{
  // static_assert(sizeof(QTransform) == 88, "tyszerr");
  QTransform* rthis = new QTransform(h11, h12, h21, h22, dx, dy);
  return rthis;
}

// QTransform(const class QMatrix &)
QTransform* dector_ZN10QTransformC1ERK7QMatrix(const QMatrix & mtx)
{
  // static_assert(sizeof(QTransform) == 88, "tyszerr");
  QTransform* rthis = new QTransform(mtx);
  return rthis;
}

// QTransform(qreal, qreal, qreal, qreal, qreal, qreal, qreal, qreal, qreal)
QTransform* dector_ZN10QTransformC1Eddddddddd(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33)
{
  // static_assert(sizeof(QTransform) == 88, "tyszerr");
  QTransform* rthis = new QTransform(h11, h12, h13, h21, h22, h23, h31, h32, h33);
  return rthis;
}

  // proto:  qreal QTransform::det();
qreal demth_ZNK10QTransform3detEv(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->det();
}

  // proto:  void QTransform::QTransform(Qt::Initialization );
void demth_ZN10QTransformC1EN2Qt14InitializationE(void *that, Qt::Initialization arg1)
{
  QTransform *cthat = (QTransform *)that;
  auto _o = new(that) QTransform(arg1);
}

  // proto:  qreal QTransform::determinant();
qreal demth_ZNK10QTransform11determinantEv(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->determinant();
}

  // proto:  bool QTransform::isTranslating();
bool demth_ZNK10QTransform13isTranslatingEv(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->isTranslating();
}

  // proto:  qreal QTransform::m22();
qreal demth_ZNK10QTransform3m22Ev(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->m22();
}

  // proto:  qreal QTransform::m32();
qreal demth_ZNK10QTransform3m32Ev(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->m32();
}

  // proto:  bool QTransform::isInvertible();
bool demth_ZNK10QTransform12isInvertibleEv(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->isInvertible();
}

  // proto:  qreal QTransform::m31();
qreal demth_ZNK10QTransform3m31Ev(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->m31();
}

  // proto:  bool QTransform::isRotating();
bool demth_ZNK10QTransform10isRotatingEv(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->isRotating();
}

  // proto:  qreal QTransform::m33();
qreal demth_ZNK10QTransform3m33Ev(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->m33();
}

  // proto:  qreal QTransform::m13();
qreal demth_ZNK10QTransform3m13Ev(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->m13();
}

  // proto:  qreal QTransform::m21();
qreal demth_ZNK10QTransform3m21Ev(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->m21();
}

  // proto:  bool QTransform::isScaling();
bool demth_ZNK10QTransform9isScalingEv(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->isScaling();
}

  // proto:  bool QTransform::isAffine();
bool demth_ZNK10QTransform8isAffineEv(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->isAffine();
}

  // proto:  qreal QTransform::m11();
qreal demth_ZNK10QTransform3m11Ev(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->m11();
}

  // proto:  bool QTransform::isIdentity();
bool demth_ZNK10QTransform10isIdentityEv(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->isIdentity();
}

  // proto:  qreal QTransform::dx();
qreal demth_ZNK10QTransform2dxEv(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->dx();
}

  // proto:  qreal QTransform::m23();
qreal demth_ZNK10QTransform3m23Ev(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->m23();
}

  // proto:  qreal QTransform::dy();
qreal demth_ZNK10QTransform2dyEv(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->dy();
}

  // proto:  qreal QTransform::m12();
qreal demth_ZNK10QTransform3m12Ev(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->m12();
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

