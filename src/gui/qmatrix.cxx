// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qmatrix.h
// dst-file: /src/gui/qmatrix.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmatrix.h>


#include <qglobal.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qline.h>
#include <qpainterpath.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qmatrix_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 66, column 11>
//   // proto:  qreal QMatrix::dx();
if (true) {
  auto f = [](QMatrix flythis) {
    ((QMatrix*)0)->dx();
    flythis.dx();
  };
  if (f == nullptr){}
}
// _ZNK7QMatrix2dxEv dx()
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 67, column 11>
//   // proto:  qreal QMatrix::dy();
if (true) {
  auto f = [](QMatrix flythis) {
    ((QMatrix*)0)->dy();
    flythis.dy();
  };
  if (f == nullptr){}
}
// _ZNK7QMatrix2dyEv dy()
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 93, column 11>
//   // proto:  qreal QMatrix::determinant();
if (true) {
  auto f = [](QMatrix flythis) {
    ((QMatrix*)0)->determinant();
    flythis.determinant();
  };
  if (f == nullptr){}
}
// _ZNK7QMatrix11determinantEv determinant()
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 64, column 11>
//   // proto:  qreal QMatrix::m21();
if (true) {
  auto f = [](QMatrix flythis) {
    ((QMatrix*)0)->m21();
    flythis.m21();
  };
  if (f == nullptr){}
}
// _ZNK7QMatrix3m21Ev m21()
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 62, column 11>
//   // proto:  qreal QMatrix::m11();
if (true) {
  auto f = [](QMatrix flythis) {
    ((QMatrix*)0)->m11();
    flythis.m11();
  };
  if (f == nullptr){}
}
// _ZNK7QMatrix3m11Ev m11()
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 53, column 21>
//   // proto:  void QMatrix::QMatrix(Qt::Initialization );
if (true) {
  auto f = [](Qt::Initialization arg1) {
    new QMatrix(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 85, column 17>
//   // proto:  bool QMatrix::isIdentity();
if (true) {
  auto f = [](QMatrix flythis) {
    ((QMatrix*)0)->isIdentity();
    flythis.isIdentity();
  };
  if (f == nullptr){}
}
// _ZNK7QMatrix10isIdentityEv isIdentity()
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 63, column 11>
//   // proto:  qreal QMatrix::m12();
if (true) {
  auto f = [](QMatrix flythis) {
    ((QMatrix*)0)->m12();
    flythis.m12();
  };
  if (f == nullptr){}
}
// _ZNK7QMatrix3m12Ev m12()
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 92, column 10>
//   // proto:  bool QMatrix::isInvertible();
if (true) {
  auto f = [](QMatrix flythis) {
    ((QMatrix*)0)->isInvertible();
    flythis.isInvertible();
  };
  if (f == nullptr){}
}
// _ZNK7QMatrix12isInvertibleEv isInvertible()
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 65, column 11>
//   // proto:  qreal QMatrix::m22();
if (true) {
  auto f = [](QMatrix flythis) {
    ((QMatrix*)0)->m22();
    flythis.m22();
  };
  if (f == nullptr){}
}
// _ZNK7QMatrix3m22Ev m22()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMatrix_Class_Size()
{
  return sizeof(QMatrix);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 66, column 11>
//   // proto:  qreal QMatrix::dx();
// _ZNK7QMatrix2dxEv dx()
extern "C"
double
C_ZNK7QMatrix2dxEv(void *qthis) {
  auto ret =
  ((QMatrix*)qthis)->dx();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 67, column 11>
//   // proto:  qreal QMatrix::dy();
// _ZNK7QMatrix2dyEv dy()
extern "C"
double
C_ZNK7QMatrix2dyEv(void *qthis) {
  auto ret =
  ((QMatrix*)qthis)->dy();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 88, column 14>
//   // proto:  QMatrix & QMatrix::scale(qreal sx, qreal sy);
// _ZN7QMatrix5scaleEdd scale(qreal, qreal)
extern "C"
QMatrix*
C_ZN7QMatrix5scaleEdd(void *qthis,
qreal arg1,
qreal arg2) {
  auto& ret =
  ((QMatrix*)qthis)->scale(arg1,
arg2);
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 87, column 14>
//   // proto:  QMatrix & QMatrix::translate(qreal dx, qreal dy);
// _ZN7QMatrix9translateEdd translate(qreal, qreal)
extern "C"
QMatrix*
C_ZN7QMatrix9translateEdd(void *qthis,
qreal arg1,
qreal arg2) {
  auto& ret =
  ((QMatrix*)qthis)->translate(arg1,
arg2);
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 93, column 11>
//   // proto:  qreal QMatrix::determinant();
// _ZNK7QMatrix11determinantEv determinant()
extern "C"
double
C_ZNK7QMatrix11determinantEv(void *qthis) {
  auto ret =
  ((QMatrix*)qthis)->determinant();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 89, column 14>
//   // proto:  QMatrix & QMatrix::shear(qreal sh, qreal sv);
// _ZN7QMatrix5shearEdd shear(qreal, qreal)
extern "C"
QMatrix*
C_ZN7QMatrix5shearEdd(void *qthis,
qreal arg1,
qreal arg2) {
  auto& ret =
  ((QMatrix*)qthis)->shear(arg1,
arg2);
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 54, column 5>
//   // proto:  void QMatrix::QMatrix();
extern "C"
QMatrix*
C_ZN7QMatrixC2Ev() {
  auto ret = new QMatrix();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 64, column 11>
//   // proto:  qreal QMatrix::m21();
// _ZNK7QMatrix3m21Ev m21()
extern "C"
double
C_ZNK7QMatrix3m21Ev(void *qthis) {
  auto ret =
  ((QMatrix*)qthis)->m21();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 75, column 13>
//   // proto:  QPointF QMatrix::map(const QPointF & p);
// _ZNK7QMatrix3mapERK7QPointF map(const class QPointF &)
extern "C"
QPointF*
C_ZNK7QMatrix3mapERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QMatrix*)qthis)->map(*((const QPointF*)arg1));
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 78, column 15>
//   // proto:  QPolygonF QMatrix::map(const QPolygonF & a);
// _ZNK7QMatrix3mapERK9QPolygonF map(const class QPolygonF &)
extern "C"
QPolygonF*
C_ZNK7QMatrix3mapERK9QPolygonF(void *qthis,
const QPolygonF* arg1) {
  auto ret =
  ((QMatrix*)qthis)->map(*((const QPolygonF*)arg1));
  return new QPolygonF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 70, column 10>
//   // proto:  void QMatrix::map(qreal x, qreal y, qreal * tx, qreal * ty);
// _ZNK7QMatrix3mapEddPdS0_ map(qreal, qreal, qreal *, qreal *)
extern "C"
void
C_ZNK7QMatrix3mapEddPdS0_(void *qthis,
qreal arg1,
qreal arg2,
qreal * arg3,
qreal * arg4) {
  ((QMatrix*)qthis)->map(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 90, column 14>
//   // proto:  QMatrix & QMatrix::rotate(qreal a);
// _ZN7QMatrix6rotateEd rotate(qreal)
extern "C"
QMatrix*
C_ZN7QMatrix6rotateEd(void *qthis,
qreal arg1) {
  auto& ret =
  ((QMatrix*)qthis)->rotate(arg1);
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 80, column 13>
//   // proto:  QRegion QMatrix::map(const QRegion & r);
// _ZNK7QMatrix3mapERK7QRegion map(const class QRegion &)
extern "C"
QRegion*
C_ZNK7QMatrix3mapERK7QRegion(void *qthis,
const QRegion* arg1) {
  auto ret =
  ((QMatrix*)qthis)->map(*((const QRegion*)arg1));
  return new QRegion(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 59, column 10>
//   // proto:  void QMatrix::setMatrix(qreal m11, qreal m12, qreal m21, qreal m22, qreal dx, qreal dy);
// _ZN7QMatrix9setMatrixEdddddd setMatrix(qreal, qreal, qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN7QMatrix9setMatrixEdddddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4,
qreal arg5,
qreal arg6) {
  ((QMatrix*)qthis)->setMatrix(arg1,
arg2,
arg3,
arg4,
arg5,
arg6);
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 57, column 5>
//   // proto:  void QMatrix::QMatrix(const QMatrix & matrix);
extern "C"
QMatrix*
C_ZN7QMatrixC2ERKS_(const QMatrix* arg1) {
  auto ret = new QMatrix(*((const QMatrix*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 84, column 10>
//   // proto:  void QMatrix::reset();
// _ZN7QMatrix5resetEv reset()
extern "C"
void
C_ZN7QMatrix5resetEv(void *qthis) {
  ((QMatrix*)qthis)->reset();
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 77, column 12>
//   // proto:  QLineF QMatrix::map(const QLineF & l);
// _ZNK7QMatrix3mapERK6QLineF map(const class QLineF &)
extern "C"
QLineF*
C_ZNK7QMatrix3mapERK6QLineF(void *qthis,
const QLineF* arg1) {
  auto ret =
  ((QMatrix*)qthis)->map(*((const QLineF*)arg1));
  return new QLineF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 81, column 18>
//   // proto:  QPainterPath QMatrix::map(const QPainterPath & p);
// _ZNK7QMatrix3mapERK12QPainterPath map(const class QPainterPath &)
extern "C"
QPainterPath*
C_ZNK7QMatrix3mapERK12QPainterPath(void *qthis,
const QPainterPath* arg1) {
  auto ret =
  ((QMatrix*)qthis)->map(*((const QPainterPath*)arg1));
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 62, column 11>
//   // proto:  qreal QMatrix::m11();
// _ZNK7QMatrix3m11Ev m11()
extern "C"
double
C_ZNK7QMatrix3m11Ev(void *qthis) {
  auto ret =
  ((QMatrix*)qthis)->m11();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 82, column 14>
//   // proto:  QPolygon QMatrix::mapToPolygon(const QRect & r);
// _ZNK7QMatrix12mapToPolygonERK5QRect mapToPolygon(const class QRect &)
extern "C"
QPolygon*
C_ZNK7QMatrix12mapToPolygonERK5QRect(void *qthis,
const QRect* arg1) {
  auto ret =
  ((QMatrix*)qthis)->mapToPolygon(*((const QRect*)arg1));
  return new QPolygon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 95, column 13>
//   // proto:  QMatrix QMatrix::inverted(bool * invertible);
// _ZNK7QMatrix8invertedEPb inverted(_Bool *)
extern "C"
QMatrix*
C_ZNK7QMatrix8invertedEPb(void *qthis,
bool * arg1) {
  auto ret =
  ((QMatrix*)qthis)->inverted(arg1);
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 74, column 12>
//   // proto:  QPoint QMatrix::map(const QPoint & p);
// _ZNK7QMatrix3mapERK6QPoint map(const class QPoint &)
extern "C"
QPoint*
C_ZNK7QMatrix3mapERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QMatrix*)qthis)->map(*((const QPoint*)arg1));
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 69, column 10>
//   // proto:  void QMatrix::map(int x, int y, int * tx, int * ty);
// _ZNK7QMatrix3mapEiiPiS0_ map(int, int, int *, int *)
extern "C"
void
C_ZNK7QMatrix3mapEiiPiS0_(void *qthis,
int arg1,
int arg2,
int * arg3,
int * arg4) {
  ((QMatrix*)qthis)->map(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 76, column 11>
//   // proto:  QLine QMatrix::map(const QLine & l);
// _ZNK7QMatrix3mapERK5QLine map(const class QLine &)
extern "C"
QLine*
C_ZNK7QMatrix3mapERK5QLine(void *qthis,
const QLine* arg1) {
  auto ret =
  ((QMatrix*)qthis)->map(*((const QLine*)arg1));
  return new QLine(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 72, column 12>
//   // proto:  QRectF QMatrix::mapRect(const QRectF & );
// _ZNK7QMatrix7mapRectERK6QRectF mapRect(const class QRectF &)
extern "C"
QRectF*
C_ZNK7QMatrix7mapRectERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QMatrix*)qthis)->mapRect(*((const QRectF*)arg1));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 53, column 21>
//   // proto:  void QMatrix::QMatrix(Qt::Initialization );
extern "C"
QMatrix*
C_ZN7QMatrixC2EN2Qt14InitializationE(Qt::Initialization* arg1) {
  auto ret = new QMatrix(*((Qt::Initialization*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 85, column 17>
//   // proto:  bool QMatrix::isIdentity();
// _ZNK7QMatrix10isIdentityEv isIdentity()
extern "C"
bool
C_ZNK7QMatrix10isIdentityEv(void *qthis) {
  auto ret =
  ((QMatrix*)qthis)->isIdentity();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 63, column 11>
//   // proto:  qreal QMatrix::m12();
// _ZNK7QMatrix3m12Ev m12()
extern "C"
double
C_ZNK7QMatrix3m12Ev(void *qthis) {
  auto ret =
  ((QMatrix*)qthis)->m12();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 92, column 10>
//   // proto:  bool QMatrix::isInvertible();
// _ZNK7QMatrix12isInvertibleEv isInvertible()
extern "C"
bool
C_ZNK7QMatrix12isInvertibleEv(void *qthis) {
  auto ret =
  ((QMatrix*)qthis)->isInvertible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 71, column 11>
//   // proto:  QRect QMatrix::mapRect(const QRect & );
// _ZNK7QMatrix7mapRectERK5QRect mapRect(const class QRect &)
extern "C"
QRect*
C_ZNK7QMatrix7mapRectERK5QRect(void *qthis,
const QRect* arg1) {
  auto ret =
  ((QMatrix*)qthis)->mapRect(*((const QRect*)arg1));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 55, column 5>
//   // proto:  void QMatrix::QMatrix(qreal m11, qreal m12, qreal m21, qreal m22, qreal dx, qreal dy);
extern "C"
QMatrix*
C_ZN7QMatrixC2Edddddd(qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4,
qreal arg5,
qreal arg6) {
  auto ret = new QMatrix(arg1,
arg2,
arg3,
arg4,
arg5,
arg6);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 65, column 11>
//   // proto:  qreal QMatrix::m22();
// _ZNK7QMatrix3m22Ev m22()
extern "C"
double
C_ZNK7QMatrix3m22Ev(void *qthis) {
  auto ret =
  ((QMatrix*)qthis)->m22();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix.h', line 79, column 14>
//   // proto:  QPolygon QMatrix::map(const QPolygon & a);
// _ZNK7QMatrix3mapERK8QPolygon map(const class QPolygon &)
extern "C"
QPolygon*
C_ZNK7QMatrix3mapERK8QPolygon(void *qthis,
const QPolygon* arg1) {
  auto ret =
  ((QMatrix*)qthis)->map(*((const QPolygon*)arg1));
  return new QPolygon(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

