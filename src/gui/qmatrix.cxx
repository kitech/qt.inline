// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
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

