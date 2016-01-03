// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qmatrix.h
// dst-file: /src/gui/qmatrix.cxx
//

// header block begin =>
#include <qmatrix.h>

extern "C" {

int QMatrix_Class_Size()
{
  return sizeof(QMatrix);
}

// QMatrix()
QMatrix* dector_ZN7QMatrixC1Ev()
{
  // static_assert(sizeof(QMatrix) == 48, "tyszerr");
  QMatrix* rthis = new QMatrix();
  return rthis;
}

// QMatrix(const class QMatrix &)
QMatrix* dector_ZN7QMatrixC1ERKS_(const QMatrix & matrix)
{
  // static_assert(sizeof(QMatrix) == 48, "tyszerr");
  QMatrix* rthis = new QMatrix(matrix);
  return rthis;
}

// QMatrix(Qt::Initialization)
QMatrix* dector_ZN7QMatrixC1EN2Qt14InitializationE(Qt::Initialization arg1)
{
  // static_assert(sizeof(QMatrix) == 48, "tyszerr");
  QMatrix* rthis = new QMatrix(arg1);
  return rthis;
}

// QMatrix(qreal, qreal, qreal, qreal, qreal, qreal)
QMatrix* dector_ZN7QMatrixC1Edddddd(double m11, double m12, double m21, double m22, double dx, double dy)
{
  // static_assert(sizeof(QMatrix) == 48, "tyszerr");
  QMatrix* rthis = new QMatrix(m11, m12, m21, m22, dx, dy);
  return rthis;
}

  // proto:  qreal QMatrix::dx();
qreal demth_ZNK7QMatrix2dxEv(void *that)
{
  QMatrix *cthat = (QMatrix *)that;
  return cthat->dx();
}

  // proto:  qreal QMatrix::dy();
qreal demth_ZNK7QMatrix2dyEv(void *that)
{
  QMatrix *cthat = (QMatrix *)that;
  return cthat->dy();
}

  // proto:  qreal QMatrix::determinant();
qreal demth_ZNK7QMatrix11determinantEv(void *that)
{
  QMatrix *cthat = (QMatrix *)that;
  return cthat->determinant();
}

  // proto:  qreal QMatrix::m21();
qreal demth_ZNK7QMatrix3m21Ev(void *that)
{
  QMatrix *cthat = (QMatrix *)that;
  return cthat->m21();
}

  // proto:  qreal QMatrix::m11();
qreal demth_ZNK7QMatrix3m11Ev(void *that)
{
  QMatrix *cthat = (QMatrix *)that;
  return cthat->m11();
}

  // proto:  void QMatrix::QMatrix(Qt::Initialization );
void demth_ZN7QMatrixC1EN2Qt14InitializationE(void *that, Qt::Initialization arg1)
{
  QMatrix *cthat = (QMatrix *)that;
  auto _o = new(that) QMatrix(arg1);
}

  // proto:  bool QMatrix::isIdentity();
bool demth_ZNK7QMatrix10isIdentityEv(void *that)
{
  QMatrix *cthat = (QMatrix *)that;
  return cthat->isIdentity();
}

  // proto:  qreal QMatrix::m12();
qreal demth_ZNK7QMatrix3m12Ev(void *that)
{
  QMatrix *cthat = (QMatrix *)that;
  return cthat->m12();
}

  // proto:  bool QMatrix::isInvertible();
bool demth_ZNK7QMatrix12isInvertibleEv(void *that)
{
  QMatrix *cthat = (QMatrix *)that;
  return cthat->isInvertible();
}

  // proto:  qreal QMatrix::m22();
qreal demth_ZNK7QMatrix3m22Ev(void *that)
{
  QMatrix *cthat = (QMatrix *)that;
  return cthat->m22();
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

