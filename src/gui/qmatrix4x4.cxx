#include <qpoint.h>
#include <qvector4d.h>
#include <qvector3d.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qmatrix4x4.h
// dst-file: /src/gui/qmatrix4x4.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qmatrix4x4.h>

extern "C" {

int QMatrix4x4_Class_Size()
{
  return sizeof(QMatrix4x4);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qmatrix4x4_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 173, column 25>
//   // proto:  const float * QMatrix4x4::constData();
if (false) {
  auto f = []() {
    ((QMatrix4x4*)0)->constData();
  };
}
// _ZNK10QMatrix4x49constDataEv constData()
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 171, column 19>
//   // proto:  float * QMatrix4x4::data();
if (false) {
  auto f = []() {
    ((QMatrix4x4*)0)->data();
  };
}
// _ZN10QMatrix4x44dataEv data()
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 160, column 15>
//   // proto:  QVector3D QMatrix4x4::mapVector(const QVector3D & vector);
if (false) {
  auto f = [](const QVector3D & arg1) {
    ((QMatrix4x4*)0)->mapVector(arg1);
  };
}
// _ZNK10QMatrix4x49mapVectorERK9QVector3D mapVector(const class QVector3D &)
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 55, column 12>
//   // proto:  void QMatrix4x4::QMatrix4x4();
if (false) {
  auto f = []() {
    new QMatrix4x4();
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 75, column 17>
//   // proto:  void QMatrix4x4::setColumn(int index, const QVector4D & value);
if (false) {
  auto f = [](int arg1, const QVector4D & arg2) {
    ((QMatrix4x4*)0)->setColumn(arg1, arg2);
  };
}
// _ZN10QMatrix4x49setColumnEiRK9QVector4D setColumn(int, const class QVector4D &)
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 83, column 17>
//   // proto:  bool QMatrix4x4::isIdentity();
if (false) {
  auto f = []() {
    ((QMatrix4x4*)0)->isIdentity();
  };
}
// _ZNK10QMatrix4x410isIdentityEv isIdentity()
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 74, column 22>
//   // proto:  QVector4D QMatrix4x4::column(int index);
if (false) {
  auto f = [](int arg1) {
    ((QMatrix4x4*)0)->column(arg1);
  };
}
// _ZNK10QMatrix4x46columnEi column(int)
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 78, column 17>
//   // proto:  void QMatrix4x4::setRow(int index, const QVector4D & value);
if (false) {
  auto f = [](int arg1, const QVector4D & arg2) {
    ((QMatrix4x4*)0)->setRow(arg1, arg2);
  };
}
// _ZN10QMatrix4x46setRowEiRK9QVector4D setRow(int, const class QVector4D &)
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 81, column 17>
//   // proto:  bool QMatrix4x4::isAffine();
if (false) {
  auto f = []() {
    ((QMatrix4x4*)0)->isAffine();
  };
}
// _ZNK10QMatrix4x48isAffineEv isAffine()
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 172, column 25>
//   // proto:  const float * QMatrix4x4::data();
if (false) {
  auto f = []() {
    ((QMatrix4x4*)0)->data();
  };
}
// _ZNK10QMatrix4x44dataEv data()
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 156, column 12>
//   // proto:  QPoint QMatrix4x4::map(const QPoint & point);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QMatrix4x4*)0)->map(arg1);
  };
}
// _ZNK10QMatrix4x43mapERK6QPoint map(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 56, column 14>
//   // proto:  void QMatrix4x4::QMatrix4x4(Qt::Initialization );
if (false) {
  auto f = [](Qt::Initialization arg1) {
    new QMatrix4x4(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 84, column 17>
//   // proto:  void QMatrix4x4::setToIdentity();
if (false) {
  auto f = []() {
    ((QMatrix4x4*)0)->setToIdentity();
  };
}
// _ZN10QMatrix4x413setToIdentityEv setToIdentity()
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 58, column 12>
//   // proto:  void QMatrix4x4::QMatrix4x4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44);
if (false) {
  auto f = [](float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10, float arg11, float arg12, float arg13, float arg14, float arg15, float arg16) {
    new QMatrix4x4(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 159, column 15>
//   // proto:  QVector3D QMatrix4x4::map(const QVector3D & point);
if (false) {
  auto f = [](const QVector3D & arg1) {
    ((QMatrix4x4*)0)->map(arg1);
  };
}
// _ZNK10QMatrix4x43mapERK9QVector3D map(const class QVector3D &)
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 146, column 10>
//   // proto:  void QMatrix4x4::viewport(const QRectF & rect);
if (false) {
  auto f = [](const QRectF & arg1) {
    ((QMatrix4x4*)0)->viewport(arg1);
  };
}
// _ZN10QMatrix4x48viewportERK6QRectF viewport(const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 86, column 17>
//   // proto:  void QMatrix4x4::fill(float value);
if (false) {
  auto f = [](float arg1) {
    ((QMatrix4x4*)0)->fill(arg1);
  };
}
// _ZN10QMatrix4x44fillEf fill(float)
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 157, column 13>
//   // proto:  QPointF QMatrix4x4::map(const QPointF & point);
if (false) {
  auto f = [](const QPointF & arg1) {
    ((QMatrix4x4*)0)->map(arg1);
  };
}
// _ZNK10QMatrix4x43mapERK7QPointF map(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 77, column 22>
//   // proto:  QVector4D QMatrix4x4::row(int index);
if (false) {
  auto f = [](int arg1) {
    ((QMatrix4x4*)0)->row(arg1);
  };
}
// _ZNK10QMatrix4x43rowEi row(int)
// <SourceLocation file '/usr/include/qt/QtGui/qmatrix4x4.h', line 163, column 15>
//   // proto:  QVector4D QMatrix4x4::map(const QVector4D & point);
if (false) {
  auto f = [](const QVector4D & arg1) {
    ((QMatrix4x4*)0)->map(arg1);
  };
}
// _ZNK10QMatrix4x43mapERK9QVector4D map(const class QVector4D &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

