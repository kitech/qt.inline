// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
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

  // proto:  qreal QTransform::determinant();
qreal _ZNK10QTransform11determinantEv(void *that)
{
  QTransform *cthat = (QTransform *)that;
  return cthat->determinant();
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

