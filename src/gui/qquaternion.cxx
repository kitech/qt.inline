// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtGui/qquaternion.h
// dst-file: /src/gui/qquaternion.cxx
//

// header block begin =>
#include <qquaternion.h>

extern "C" {

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

