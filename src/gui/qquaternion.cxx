// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
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

// QQuaternion(Qt::Initialization)
QQuaternion* dector_ZN11QQuaternionC1EN2Qt14InitializationE(Qt::Initialization arg1)
{
  // static_assert(sizeof(QQuaternion) == 32, "tyszerr");
  QQuaternion* rthis = new QQuaternion(arg1);
  return rthis;
}

  // proto:  float QQuaternion::scalar();
float demth_ZNK11QQuaternion6scalarEv(void *that)
{
  QQuaternion *cthat = (QQuaternion *)that;
  return cthat->scalar();
}

  // proto:  void QQuaternion::setX(float x);
void demth_ZN11QQuaternion4setXEf(void *that, float x)
{
  QQuaternion *cthat = (QQuaternion *)that;
   cthat->setX(x);
}

  // proto:  void QQuaternion::setVector(const QVector3D & vector);
void demth_ZN11QQuaternion9setVectorERK9QVector3D(void *that, const QVector3D & vector)
{
  QQuaternion *cthat = (QQuaternion *)that;
   cthat->setVector(vector);
}

  // proto:  void QQuaternion::QQuaternion(const QVector4D & vector);
void demth_ZN11QQuaternionC1ERK9QVector4D(void *that, const QVector4D & vector)
{
  QQuaternion *cthat = (QQuaternion *)that;
  auto _o = new(that) QQuaternion(vector);
}

  // proto:  void QQuaternion::setY(float y);
void demth_ZN11QQuaternion4setYEf(void *that, float y)
{
  QQuaternion *cthat = (QQuaternion *)that;
   cthat->setY(y);
}

  // proto:  QVector3D QQuaternion::toEulerAngles();
QVector3D* demth_ZNK11QQuaternion13toEulerAnglesEv(void *that)
{
  QQuaternion *cthat = (QQuaternion *)that;
  auto recret = cthat->toEulerAngles();
  return new QVector3D(recret);
}

  // proto:  QQuaternion QQuaternion::inverted();
QQuaternion* demth_ZNK11QQuaternion8invertedEv(void *that)
{
  QQuaternion *cthat = (QQuaternion *)that;
  auto recret = cthat->inverted();
  return new QQuaternion(recret);
}

  // proto:  void QQuaternion::setZ(float z);
void demth_ZN11QQuaternion4setZEf(void *that, float z)
{
  QQuaternion *cthat = (QQuaternion *)that;
   cthat->setZ(z);
}

  // proto:  bool QQuaternion::isIdentity();
bool demth_ZNK11QQuaternion10isIdentityEv(void *that)
{
  QQuaternion *cthat = (QQuaternion *)that;
  return cthat->isIdentity();
}

  // proto:  void QQuaternion::QQuaternion();
void demth_ZN11QQuaternionC1Ev(void *that)
{
  QQuaternion *cthat = (QQuaternion *)that;
  auto _o = new(that) QQuaternion();
}

  // proto:  QVector4D QQuaternion::toVector4D();
QVector4D* demth_ZNK11QQuaternion10toVector4DEv(void *that)
{
  QQuaternion *cthat = (QQuaternion *)that;
  auto recret = cthat->toVector4D();
  return new QVector4D(recret);
}

  // proto:  QQuaternion QQuaternion::conjugate();
QQuaternion* demth_ZNK11QQuaternion9conjugateEv(void *that)
{
  QQuaternion *cthat = (QQuaternion *)that;
  auto recret = cthat->conjugate();
  return new QQuaternion(recret);
}

  // proto:  bool QQuaternion::isNull();
bool demth_ZNK11QQuaternion6isNullEv(void *that)
{
  QQuaternion *cthat = (QQuaternion *)that;
  return cthat->isNull();
}

  // proto:  void QQuaternion::getAxisAndAngle(QVector3D * axis, float * angle);
void demth_ZNK11QQuaternion15getAxisAndAngleEP9QVector3DPf(void *that, QVector3D * axis, float * angle)
{
  QQuaternion *cthat = (QQuaternion *)that;
   cthat->getAxisAndAngle(axis, angle);
}

  // proto: static QQuaternion QQuaternion::fromEulerAngles(const QVector3D & eulerAngles);
QQuaternion* demth_ZN11QQuaternion15fromEulerAnglesERK9QVector3D(void *that, const QVector3D & eulerAngles)
{
  QQuaternion *cthat = (QQuaternion *)that;
  auto recret = cthat->fromEulerAngles(eulerAngles);
  return new QQuaternion(recret);
}

  // proto:  void QQuaternion::setScalar(float scalar);
void demth_ZN11QQuaternion9setScalarEf(void *that, float scalar)
{
  QQuaternion *cthat = (QQuaternion *)that;
   cthat->setScalar(scalar);
}

  // proto:  float QQuaternion::y();
float demth_ZNK11QQuaternion1yEv(void *that)
{
  QQuaternion *cthat = (QQuaternion *)that;
  return cthat->y();
}

  // proto:  QVector3D QQuaternion::vector();
QVector3D* demth_ZNK11QQuaternion6vectorEv(void *that)
{
  QQuaternion *cthat = (QQuaternion *)that;
  auto recret = cthat->vector();
  return new QVector3D(recret);
}

  // proto: static float QQuaternion::dotProduct(const QQuaternion & q1, const QQuaternion & q2);
float demth_ZN11QQuaternion10dotProductERKS_S1_(void *that, const QQuaternion & q1, const QQuaternion & q2)
{
  QQuaternion *cthat = (QQuaternion *)that;
  return cthat->dotProduct(q1, q2);
}

  // proto:  void QQuaternion::setVector(float x, float y, float z);
void demth_ZN11QQuaternion9setVectorEfff(void *that, float x, float y, float z)
{
  QQuaternion *cthat = (QQuaternion *)that;
   cthat->setVector(x, y, z);
}

  // proto:  void QQuaternion::QQuaternion(float scalar, float xpos, float ypos, float zpos);
void demth_ZN11QQuaternionC1Effff(void *that, float scalar, float xpos, float ypos, float zpos)
{
  QQuaternion *cthat = (QQuaternion *)that;
  auto _o = new(that) QQuaternion(scalar, xpos, ypos, zpos);
}

  // proto:  void QQuaternion::QQuaternion(float scalar, const QVector3D & vector);
void demth_ZN11QQuaternionC1EfRK9QVector3D(void *that, float scalar, const QVector3D & vector)
{
  QQuaternion *cthat = (QQuaternion *)that;
  auto _o = new(that) QQuaternion(scalar, vector);
}

  // proto:  QQuaternion QQuaternion::conjugated();
QQuaternion* demth_ZNK11QQuaternion10conjugatedEv(void *that)
{
  QQuaternion *cthat = (QQuaternion *)that;
  auto recret = cthat->conjugated();
  return new QQuaternion(recret);
}

  // proto:  float QQuaternion::x();
float demth_ZNK11QQuaternion1xEv(void *that)
{
  QQuaternion *cthat = (QQuaternion *)that;
  return cthat->x();
}

  // proto:  float QQuaternion::z();
float demth_ZNK11QQuaternion1zEv(void *that)
{
  QQuaternion *cthat = (QQuaternion *)that;
  return cthat->z();
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

