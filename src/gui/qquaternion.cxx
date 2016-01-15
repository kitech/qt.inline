#include <qvector4d.h>
#include <qvector3d.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qquaternion.h
// dst-file: /src/gui/qquaternion.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qquaternion.h>

extern "C" {

int QQuaternion_Class_Size()
{
  return sizeof(QQuaternion);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qquaternion_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 74, column 11>
//   // proto:  float QQuaternion::scalar();
if (false) {
  auto f = []() {
    ((QQuaternion*)0)->scalar();
  };
}
// _ZNK11QQuaternion6scalarEv scalar()
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 76, column 10>
//   // proto:  void QQuaternion::setX(float x);
if (false) {
  auto f = [](float arg1) {
    ((QQuaternion*)0)->setX(arg1);
  };
}
// _ZN11QQuaternion4setXEf setX(float)
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 67, column 10>
//   // proto:  void QQuaternion::setVector(const QVector3D & vector);
if (false) {
  auto f = [](const QVector3D & arg1) {
    ((QQuaternion*)0)->setVector(arg1);
  };
}
// _ZN11QQuaternion9setVectorERK9QVector3D setVector(const class QVector3D &)
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 59, column 14>
//   // proto:  void QQuaternion::QQuaternion(const QVector4D & vector);
if (false) {
  auto f = [](const QVector4D & arg1) {
    new QQuaternion(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 77, column 10>
//   // proto:  void QQuaternion::setY(float y);
if (false) {
  auto f = [](float arg1) {
    ((QQuaternion*)0)->setY(arg1);
  };
}
// _ZN11QQuaternion4setYEf setY(float)
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 131, column 22>
//   // proto:  QVector3D QQuaternion::toEulerAngles();
if (false) {
  auto f = []() {
    ((QQuaternion*)0)->toEulerAngles();
  };
}
// _ZNK11QQuaternion13toEulerAnglesEv toEulerAngles()
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 89, column 24>
//   // proto:  QQuaternion QQuaternion::inverted();
if (false) {
  auto f = []() {
    ((QQuaternion*)0)->inverted();
  };
}
// _ZNK11QQuaternion8invertedEv inverted()
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 78, column 10>
//   // proto:  void QQuaternion::setZ(float z);
if (false) {
  auto f = [](float arg1) {
    ((QQuaternion*)0)->setZ(arg1);
  };
}
// _ZN11QQuaternion4setZEf setZ(float)
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 63, column 10>
//   // proto:  bool QQuaternion::isIdentity();
if (false) {
  auto f = []() {
    ((QQuaternion*)0)->isIdentity();
  };
}
// _ZNK11QQuaternion10isIdentityEv isIdentity()
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 52, column 5>
//   // proto:  void QQuaternion::QQuaternion();
if (false) {
  auto f = []() {
    new QQuaternion();
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 117, column 15>
//   // proto:  QVector4D QQuaternion::toVector4D();
if (false) {
  auto f = []() {
    ((QQuaternion*)0)->toVector4D();
  };
}
// _ZNK11QQuaternion10toVector4DEv toVector4D()
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 93, column 31>
//   // proto:  QQuaternion QQuaternion::conjugate();
if (false) {
  auto f = []() {
    ((QQuaternion*)0)->conjugate();
  };
}
// _ZNK11QQuaternion9conjugateEv conjugate()
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 62, column 10>
//   // proto:  bool QQuaternion::isNull();
if (false) {
  auto f = []() {
    ((QQuaternion*)0)->isNull();
  };
}
// _ZNK11QQuaternion6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 123, column 17>
//   // proto:  void QQuaternion::getAxisAndAngle(QVector3D * axis, float * angle);
if (false) {
  auto f = [](QVector3D * arg1, float * arg2) {
    ((QQuaternion*)0)->getAxisAndAngle(arg1, arg2);
  };
}
// _ZNK11QQuaternion15getAxisAndAngleEP9QVector3DPf getAxisAndAngle(class QVector3D *, float *)
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 132, column 31>
//   // proto: static QQuaternion QQuaternion::fromEulerAngles(const QVector3D & eulerAngles);
if (false) {
  auto f = [](const QVector3D & arg1) {
    ((QQuaternion*)0)->fromEulerAngles(arg1);
  };
}
// _ZN11QQuaternion15fromEulerAnglesERK9QVector3D fromEulerAngles(const class QVector3D &)
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 79, column 10>
//   // proto:  void QQuaternion::setScalar(float scalar);
if (false) {
  auto f = [](float arg1) {
    ((QQuaternion*)0)->setScalar(arg1);
  };
}
// _ZN11QQuaternion9setScalarEf setScalar(float)
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 72, column 11>
//   // proto:  float QQuaternion::y();
if (false) {
  auto f = []() {
    ((QQuaternion*)0)->y();
  };
}
// _ZNK11QQuaternion1yEv y()
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 66, column 15>
//   // proto:  QVector3D QQuaternion::vector();
if (false) {
  auto f = []() {
    ((QQuaternion*)0)->vector();
  };
}
// _ZNK11QQuaternion6vectorEv vector()
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 81, column 42>
//   // proto: static float QQuaternion::dotProduct(const QQuaternion & q1, const QQuaternion & q2);
if (false) {
  auto f = [](const QQuaternion & arg1, const QQuaternion & arg2) {
    ((QQuaternion*)0)->dotProduct(arg1, arg2);
  };
}
// _ZN11QQuaternion10dotProductERKS_S1_ dotProduct(const class QQuaternion &, const class QQuaternion &)
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 69, column 10>
//   // proto:  void QQuaternion::setVector(float x, float y, float z);
if (false) {
  auto f = [](float arg1, float arg2, float arg3) {
    ((QQuaternion*)0)->setVector(arg1, arg2, arg3);
  };
}
// _ZN11QQuaternion9setVectorEfff setVector(float, float, float)
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 54, column 5>
//   // proto:  void QQuaternion::QQuaternion(float scalar, float xpos, float ypos, float zpos);
if (false) {
  auto f = [](float arg1, float arg2, float arg3, float arg4) {
    new QQuaternion(arg1, arg2, arg3, arg4);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 56, column 5>
//   // proto:  void QQuaternion::QQuaternion(float scalar, const QVector3D & vector);
if (false) {
  auto f = [](float arg1, const QVector3D & arg2) {
    new QQuaternion(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 91, column 17>
//   // proto:  QQuaternion QQuaternion::conjugated();
if (false) {
  auto f = []() {
    ((QQuaternion*)0)->conjugated();
  };
}
// _ZNK11QQuaternion10conjugatedEv conjugated()
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 53, column 14>
//   // proto:  void QQuaternion::QQuaternion(Qt::Initialization );
if (false) {
  auto f = [](Qt::Initialization arg1) {
    new QQuaternion(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 71, column 11>
//   // proto:  float QQuaternion::x();
if (false) {
  auto f = []() {
    ((QQuaternion*)0)->x();
  };
}
// _ZNK11QQuaternion1xEv x()
// <SourceLocation file '/usr/include/qt/QtGui/qquaternion.h', line 73, column 11>
//   // proto:  float QQuaternion::z();
if (false) {
  auto f = []() {
    ((QQuaternion*)0)->z();
  };
}
// _ZNK11QQuaternion1zEv z()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

