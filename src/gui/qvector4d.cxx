// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qvector4d.h
// dst-file: /src/gui/qvector4d.cxx
//

// header block begin =>
#include <qvector4d.h>

extern "C" {

int QVector4D_Class_Size()
{
  return sizeof(QVector4D);
}

// QVector4D(const class QVector2D &, float, float)
QVector4D* dector_ZN9QVector4DC1ERK9QVector2Dff(const QVector2D & vector, float zpos, float wpos)
{
  // static_assert(sizeof(QVector4D) == 32, "tyszerr");
  QVector4D* rthis = new QVector4D(vector, zpos, wpos);
  return rthis;
}

// QVector4D(const class QVector2D &)
QVector4D* dector_ZN9QVector4DC1ERK9QVector2D(const QVector2D & vector)
{
  // static_assert(sizeof(QVector4D) == 32, "tyszerr");
  QVector4D* rthis = new QVector4D(vector);
  return rthis;
}

// QVector4D(float, float, float, float)
QVector4D* dector_ZN9QVector4DC1Effff(float xpos, float ypos, float zpos, float wpos)
{
  // static_assert(sizeof(QVector4D) == 32, "tyszerr");
  QVector4D* rthis = new QVector4D(xpos, ypos, zpos, wpos);
  return rthis;
}

// QVector4D(const class QVector3D &, float)
QVector4D* dector_ZN9QVector4DC1ERK9QVector3Df(const QVector3D & vector, float wpos)
{
  // static_assert(sizeof(QVector4D) == 32, "tyszerr");
  QVector4D* rthis = new QVector4D(vector, wpos);
  return rthis;
}

// QVector4D(Qt::Initialization)
QVector4D* dector_ZN9QVector4DC1EN2Qt14InitializationE(Qt::Initialization arg1)
{
  // static_assert(sizeof(QVector4D) == 32, "tyszerr");
  QVector4D* rthis = new QVector4D(arg1);
  return rthis;
}

// QVector4D(const class QPointF &)
QVector4D* dector_ZN9QVector4DC1ERK7QPointF(const QPointF & point)
{
  // static_assert(sizeof(QVector4D) == 32, "tyszerr");
  QVector4D* rthis = new QVector4D(point);
  return rthis;
}

// QVector4D()
QVector4D* dector_ZN9QVector4DC1Ev()
{
  // static_assert(sizeof(QVector4D) == 32, "tyszerr");
  QVector4D* rthis = new QVector4D();
  return rthis;
}

// QVector4D(const class QPoint &)
QVector4D* dector_ZN9QVector4DC1ERK6QPoint(const QPoint & point)
{
  // static_assert(sizeof(QVector4D) == 32, "tyszerr");
  QVector4D* rthis = new QVector4D(point);
  return rthis;
}

// QVector4D(const class QVector3D &)
QVector4D* dector_ZN9QVector4DC1ERK9QVector3D(const QVector3D & vector)
{
  // static_assert(sizeof(QVector4D) == 32, "tyszerr");
  QVector4D* rthis = new QVector4D(vector);
  return rthis;
}

  // proto:  void QVector4D::setW(float w);
void demth_ZN9QVector4D4setWEf(void *that, float w)
{
  QVector4D *cthat = (QVector4D *)that;
   cthat->setW(w);
}

  // proto:  void QVector4D::setZ(float z);
void demth_ZN9QVector4D4setZEf(void *that, float z)
{
  QVector4D *cthat = (QVector4D *)that;
   cthat->setZ(z);
}

  // proto:  void QVector4D::setX(float x);
void demth_ZN9QVector4D4setXEf(void *that, float x)
{
  QVector4D *cthat = (QVector4D *)that;
   cthat->setX(x);
}

  // proto:  void QVector4D::setY(float y);
void demth_ZN9QVector4D4setYEf(void *that, float y)
{
  QVector4D *cthat = (QVector4D *)that;
   cthat->setY(y);
}

  // proto:  bool QVector4D::isNull();
bool demth_ZNK9QVector4D6isNullEv(void *that)
{
  QVector4D *cthat = (QVector4D *)that;
  return cthat->isNull();
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

