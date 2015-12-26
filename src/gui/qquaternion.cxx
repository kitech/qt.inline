// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtGui/qquaternion.h
// dst-file: /src/gui/qquaternion.cxx
//

// header block begin =>
#include <qquaternion.h>

extern "C" {

int QQuaternion_Class_Size()
{
  return sizeof(QQuaternion);
}

// QQuaternion(const class QVector4D &)
QQuaternion* dector_ZN11QQuaternionC1ERK9QVector4D(const QVector4D & vector)
{
  // static_assert(sizeof(QQuaternion) == 32, "tyszerr");
  QQuaternion* rthis = new QQuaternion(vector);
  return rthis;
}

// QQuaternion()
QQuaternion* dector_ZN11QQuaternionC1Ev()
{
  // static_assert(sizeof(QQuaternion) == 32, "tyszerr");
  QQuaternion* rthis = new QQuaternion();
  return rthis;
}

// QQuaternion(float, float, float, float)
QQuaternion* dector_ZN11QQuaternionC1Effff(float scalar, float xpos, float ypos, float zpos)
{
  // static_assert(sizeof(QQuaternion) == 32, "tyszerr");
  QQuaternion* rthis = new QQuaternion(scalar, xpos, ypos, zpos);
  return rthis;
}

// QQuaternion(float, const class QVector3D &)
QQuaternion* dector_ZN11QQuaternionC1EfRK9QVector3D(float scalar, const QVector3D & vector)
{
  // static_assert(sizeof(QQuaternion) == 32, "tyszerr");
  QQuaternion* rthis = new QQuaternion(scalar, vector);
  return rthis;
}

  // proto:  QVector3D QQuaternion::toEulerAngles();
QVector3D* _ZNK11QQuaternion13toEulerAnglesEv(void *that)
{
  QQuaternion *cthat = (QQuaternion *)that;
  auto recret = cthat->toEulerAngles();
  return new QVector3D(recret);
}

  // proto:  QQuaternion QQuaternion::inverted();
QQuaternion* _ZNK11QQuaternion8invertedEv(void *that)
{
  QQuaternion *cthat = (QQuaternion *)that;
  auto recret = cthat->inverted();
  return new QQuaternion(recret);
}

  // proto:  void QQuaternion::getAxisAndAngle(QVector3D * axis, float * angle);
void _ZNK11QQuaternion15getAxisAndAngleEP9QVector3DPf(void *that, QVector3D * axis, float * angle)
{
  QQuaternion *cthat = (QQuaternion *)that;
   cthat->getAxisAndAngle(axis, angle);
}

  // proto: static QQuaternion QQuaternion::fromEulerAngles(const QVector3D & eulerAngles);
QQuaternion* _ZN11QQuaternion15fromEulerAnglesERK9QVector3D(void *that, const QVector3D & eulerAngles)
{
  QQuaternion *cthat = (QQuaternion *)that;
  auto recret = cthat->fromEulerAngles(eulerAngles);
  return new QQuaternion(recret);
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

