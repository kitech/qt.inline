// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qvector2d.h
// dst-file: /src/gui/qvector2d.cxx
//

// header block begin =>
#include <qvector2d.h>

extern "C" {

int QVector2D_Class_Size()
{
  return sizeof(QVector2D);
}

// QVector2D(const class QVector4D &)
QVector2D* dector_ZN9QVector2DC1ERK9QVector4D(const QVector4D & vector)
{
  // static_assert(sizeof(QVector2D) == 32, "tyszerr");
  QVector2D* rthis = new QVector2D(vector);
  return rthis;
}

// QVector2D(const class QPoint &)
QVector2D* dector_ZN9QVector2DC1ERK6QPoint(const QPoint & point)
{
  // static_assert(sizeof(QVector2D) == 32, "tyszerr");
  QVector2D* rthis = new QVector2D(point);
  return rthis;
}

// QVector2D(float, float)
QVector2D* dector_ZN9QVector2DC1Eff(float xpos, float ypos)
{
  // static_assert(sizeof(QVector2D) == 32, "tyszerr");
  QVector2D* rthis = new QVector2D(xpos, ypos);
  return rthis;
}

// QVector2D()
QVector2D* dector_ZN9QVector2DC1Ev()
{
  // static_assert(sizeof(QVector2D) == 32, "tyszerr");
  QVector2D* rthis = new QVector2D();
  return rthis;
}

// QVector2D(const class QVector3D &)
QVector2D* dector_ZN9QVector2DC1ERK9QVector3D(const QVector3D & vector)
{
  // static_assert(sizeof(QVector2D) == 32, "tyszerr");
  QVector2D* rthis = new QVector2D(vector);
  return rthis;
}

// QVector2D(const class QPointF &)
QVector2D* dector_ZN9QVector2DC1ERK7QPointF(const QPointF & point)
{
  // static_assert(sizeof(QVector2D) == 32, "tyszerr");
  QVector2D* rthis = new QVector2D(point);
  return rthis;
}

// QVector2D(Qt::Initialization)
QVector2D* dector_ZN9QVector2DC1EN2Qt14InitializationE(Qt::Initialization arg1)
{
  // static_assert(sizeof(QVector2D) == 32, "tyszerr");
  QVector2D* rthis = new QVector2D(arg1);
  return rthis;
}

  // proto:  void QVector2D::setX(float x);
void demth_ZN9QVector2D4setXEf(void *that, float x)
{
  QVector2D *cthat = (QVector2D *)that;
   cthat->setX(x);
}

  // proto:  void QVector2D::setY(float y);
void demth_ZN9QVector2D4setYEf(void *that, float y)
{
  QVector2D *cthat = (QVector2D *)that;
   cthat->setY(y);
}

  // proto:  bool QVector2D::isNull();
bool demth_ZNK9QVector2D6isNullEv(void *that)
{
  QVector2D *cthat = (QVector2D *)that;
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

