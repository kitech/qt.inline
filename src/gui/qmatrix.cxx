// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtGui/qmatrix.h
// dst-file: /src/gui/qmatrix.cxx
//

// header block begin =>
#include <qmatrix.h>

extern "C" {

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

// QMatrix(qreal, qreal, qreal, qreal, qreal, qreal)
QMatrix* dector_ZN7QMatrixC1Edddddd(double m11, double m12, double m21, double m22, double dx, double dy)
{
  // static_assert(sizeof(QMatrix) == 48, "tyszerr");
  QMatrix* rthis = new QMatrix(m11, m12, m21, m22, dx, dy);
  return rthis;
}

  // proto:  bool QMatrix::isIdentity();
bool _ZNK7QMatrix10isIdentityEv(void *that)
{
  QMatrix *cthat = (QMatrix *)that;
  return cthat->isIdentity();
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

