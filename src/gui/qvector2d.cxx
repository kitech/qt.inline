// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qvector2d.h
// dst-file: /src/gui/qvector2d.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qvector2d.h>


#include <qpoint.h>
#include <qvector3d.h>
#include <qvector4d.h>
// <= header block end

// main block begin =>
void __keep_qvector2d_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 114, column 30>
//   // proto:  QPointF QVector2D::toPointF();
if (true) {
  auto f = [](QVector2D flythis) {
    ((QVector2D*)0)->toPointF();
    flythis.toPointF();
  };
  if (f == nullptr){}
}
// _ZNK9QVector2D8toPointFEv toPointF()
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 69, column 10>
//   // proto:  void QVector2D::setX(float x);
if (true) {
  auto f = [](QVector2D flythis, float arg1) {
    ((QVector2D*)0)->setX(arg1);
    flythis.setX(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QVector2D4setXEf setX(float)
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 113, column 29>
//   // proto:  QPoint QVector2D::toPoint();
if (true) {
  auto f = [](QVector2D flythis) {
    ((QVector2D*)0)->toPoint();
    flythis.toPoint();
  };
  if (f == nullptr){}
}
// _ZNK9QVector2D7toPointEv toPoint()
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 70, column 10>
//   // proto:  void QVector2D::setY(float y);
if (true) {
  auto f = [](QVector2D flythis, float arg1) {
    ((QVector2D*)0)->setY(arg1);
    flythis.setY(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QVector2D4setYEf setY(float)
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 55, column 31>
//   // proto:  void QVector2D::QVector2D(const QPoint & point);
if (true) {
  auto f = [](const QPoint & arg1) {
    new QVector2D(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 54, column 22>
//   // proto:  void QVector2D::QVector2D(float xpos, float ypos);
if (true) {
  auto f = [](float arg1, float arg2) {
    new QVector2D(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 64, column 10>
//   // proto:  bool QVector2D::isNull();
if (true) {
  auto f = [](QVector2D flythis) {
    ((QVector2D*)0)->isNull();
    flythis.isNull();
  };
  if (f == nullptr){}
}
// _ZNK9QVector2D6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 52, column 22>
//   // proto:  void QVector2D::QVector2D();
if (true) {
  auto f = []() {
    new QVector2D();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 67, column 28>
//   // proto:  float QVector2D::y();
if (true) {
  auto f = [](QVector2D flythis) {
    ((QVector2D*)0)->y();
    flythis.y();
  };
  if (f == nullptr){}
}
// _ZNK9QVector2D1yEv y()
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 66, column 28>
//   // proto:  float QVector2D::x();
if (true) {
  auto f = [](QVector2D flythis) {
    ((QVector2D*)0)->x();
    flythis.x();
  };
  if (f == nullptr){}
}
// _ZNK9QVector2D1xEv x()
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 56, column 31>
//   // proto:  void QVector2D::QVector2D(const QPointF & point);
if (true) {
  auto f = [](const QPointF & arg1) {
    new QVector2D(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 53, column 14>
//   // proto:  void QVector2D::QVector2D(Qt::Initialization );
if (true) {
  auto f = [](Qt::Initialization arg1) {
    new QVector2D(arg1);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QVector2D_Class_Size()
{
  return sizeof(QVector2D);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 114, column 30>
//   // proto:  QPointF QVector2D::toPointF();
// _ZNK9QVector2D8toPointFEv toPointF()
extern "C"
QPointF*
C_ZNK9QVector2D8toPointFEv(void *qthis) {
  auto ret =
  ((QVector2D*)qthis)->toPointF();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 69, column 10>
//   // proto:  void QVector2D::setX(float x);
// _ZN9QVector2D4setXEf setX(float)
extern "C"
void
C_ZN9QVector2D4setXEf(void *qthis,
float arg1) {
  ((QVector2D*)qthis)->setX(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 61, column 14>
//   // proto:  void QVector2D::QVector2D(const QVector4D & vector);
extern "C"
QVector2D*
C_ZN9QVector2DC2ERK9QVector4D(const QVector4D* arg1) {
  auto ret = new QVector2D(*((const QVector4D*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 113, column 29>
//   // proto:  QPoint QVector2D::toPoint();
// _ZNK9QVector2D7toPointEv toPoint()
extern "C"
QPoint*
C_ZNK9QVector2D7toPointEv(void *qthis) {
  auto ret =
  ((QVector2D*)qthis)->toPoint();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 75, column 11>
//   // proto:  float QVector2D::length();
// _ZNK9QVector2D6lengthEv length()
extern "C"
float
C_ZNK9QVector2D6lengthEv(void *qthis) {
  auto ret =
  ((QVector2D*)qthis)->length();
  return ret; // 0 TypeKind.FLOAT
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 70, column 10>
//   // proto:  void QVector2D::setY(float y);
// _ZN9QVector2D4setYEf setY(float)
extern "C"
void
C_ZN9QVector2D4setYEf(void *qthis,
float arg1) {
  ((QVector2D*)qthis)->setY(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 55, column 31>
//   // proto:  void QVector2D::QVector2D(const QPoint & point);
extern "C"
QVector2D*
C_ZN9QVector2DC2ERK6QPoint(const QPoint* arg1) {
  auto ret = new QVector2D(*((const QPoint*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 54, column 22>
//   // proto:  void QVector2D::QVector2D(float xpos, float ypos);
extern "C"
QVector2D*
C_ZN9QVector2DC2Eff(float arg1,
float arg2) {
  auto ret = new QVector2D(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 64, column 10>
//   // proto:  bool QVector2D::isNull();
// _ZNK9QVector2D6isNullEv isNull()
extern "C"
bool
C_ZNK9QVector2D6isNullEv(void *qthis) {
  auto ret =
  ((QVector2D*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 82, column 11>
//   // proto:  float QVector2D::distanceToLine(const QVector2D & point, const QVector2D & direction);
// _ZNK9QVector2D14distanceToLineERKS_S1_ distanceToLine(const class QVector2D &, const class QVector2D &)
extern "C"
float
C_ZNK9QVector2D14distanceToLineERKS_S1_(void *qthis,
const QVector2D* arg1,
const QVector2D* arg2) {
  auto ret =
  ((QVector2D*)qthis)->distanceToLine(*((const QVector2D*)arg1),
*((const QVector2D*)arg2));
  return ret; // 0 TypeKind.FLOAT
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 52, column 22>
//   // proto:  void QVector2D::QVector2D();
extern "C"
QVector2D*
C_ZN9QVector2DC2Ev() {
  auto ret = new QVector2D();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 107, column 15>
//   // proto:  QVector3D QVector2D::toVector3D();
// _ZNK9QVector2D10toVector3DEv toVector3D()
extern "C"
QVector3D*
C_ZNK9QVector2D10toVector3DEv(void *qthis) {
  auto ret =
  ((QVector2D*)qthis)->toVector3D();
  return new QVector3D(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 76, column 11>
//   // proto:  float QVector2D::lengthSquared();
// _ZNK9QVector2D13lengthSquaredEv lengthSquared()
extern "C"
float
C_ZNK9QVector2D13lengthSquaredEv(void *qthis) {
  auto ret =
  ((QVector2D*)qthis)->lengthSquared();
  return ret; // 0 TypeKind.FLOAT
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 67, column 28>
//   // proto:  float QVector2D::y();
// _ZNK9QVector2D1yEv y()
extern "C"
float
C_ZNK9QVector2D1yEv(void *qthis) {
  auto ret =
  ((QVector2D*)qthis)->y();
  return ret; // 0 TypeKind.FLOAT
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 58, column 14>
//   // proto:  void QVector2D::QVector2D(const QVector3D & vector);
extern "C"
QVector2D*
C_ZN9QVector2DC2ERK9QVector3D(const QVector3D* arg1) {
  auto ret = new QVector2D(*((const QVector3D*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 66, column 28>
//   // proto:  float QVector2D::x();
// _ZNK9QVector2D1xEv x()
extern "C"
float
C_ZNK9QVector2D1xEv(void *qthis) {
  auto ret =
  ((QVector2D*)qthis)->x();
  return ret; // 0 TypeKind.FLOAT
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 56, column 31>
//   // proto:  void QVector2D::QVector2D(const QPointF & point);
extern "C"
QVector2D*
C_ZN9QVector2DC2ERK7QPointF(const QPointF* arg1) {
  auto ret = new QVector2D(*((const QPointF*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 81, column 11>
//   // proto:  float QVector2D::distanceToPoint(const QVector2D & point);
// _ZNK9QVector2D15distanceToPointERKS_ distanceToPoint(const class QVector2D &)
extern "C"
float
C_ZNK9QVector2D15distanceToPointERKS_(void *qthis,
const QVector2D* arg1) {
  auto ret =
  ((QVector2D*)qthis)->distanceToPoint(*((const QVector2D*)arg1));
  return ret; // 0 TypeKind.FLOAT
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 110, column 15>
//   // proto:  QVector4D QVector2D::toVector4D();
// _ZNK9QVector2D10toVector4DEv toVector4D()
extern "C"
QVector4D*
C_ZNK9QVector2D10toVector4DEv(void *qthis) {
  auto ret =
  ((QVector2D*)qthis)->toVector4D();
  return new QVector4D(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 78, column 15>
//   // proto:  QVector2D QVector2D::normalized();
// _ZNK9QVector2D10normalizedEv normalized()
extern "C"
QVector2D*
C_ZNK9QVector2D10normalizedEv(void *qthis) {
  auto ret =
  ((QVector2D*)qthis)->normalized();
  return new QVector2D(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 79, column 10>
//   // proto:  void QVector2D::normalize();
// _ZN9QVector2D9normalizeEv normalize()
extern "C"
void
C_ZN9QVector2D9normalizeEv(void *qthis) {
  ((QVector2D*)qthis)->normalize();
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 53, column 14>
//   // proto:  void QVector2D::QVector2D(Qt::Initialization );
extern "C"
QVector2D*
C_ZN9QVector2DC2EN2Qt14InitializationE(Qt::Initialization* arg1) {
  auto ret = new QVector2D(*((Qt::Initialization*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qvector2d.h', line 91, column 18>
//   // proto: static float QVector2D::dotProduct(const QVector2D & v1, const QVector2D & v2);
// _ZN9QVector2D10dotProductERKS_S1_ dotProduct(const class QVector2D &, const class QVector2D &)
extern "C"
float
C_ZN9QVector2D10dotProductERKS_S1_(const QVector2D* arg1,
const QVector2D* arg2) {
  auto ret =
  QVector2D::dotProduct(*((const QVector2D*)arg1),
*((const QVector2D*)arg2));
  return ret; // 0 TypeKind.FLOAT
}
// <= ext block end

// body block begin =>
// <= body block end

