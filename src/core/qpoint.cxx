// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qpoint.h
// dst-file: /src/core/qpoint.cxx
//

// header block begin =>
#include <qpoint.h>

extern "C" {

int QPoint_Class_Size()
{
  return sizeof(QPoint);
}

// QPoint(int, int)
QPoint* dector_ZN6QPointC1Eii(int xpos, int ypos)
{
  // static_assert(sizeof(QPoint) == 32, "tyszerr");
  QPoint* rthis = new QPoint(xpos, ypos);
  return rthis;
}

// QPoint()
QPoint* dector_ZN6QPointC1Ev()
{
  // static_assert(sizeof(QPoint) == 32, "tyszerr");
  QPoint* rthis = new QPoint();
  return rthis;
}

  // proto:  int & QPoint::ry();
int * demth_ZN6QPoint2ryEv(void *that)
{
  QPoint *cthat = (QPoint *)that;
  return &cthat->ry();
}

  // proto: static int QPoint::dotProduct(const QPoint & p1, const QPoint & p2);
int demth_ZN6QPoint10dotProductERKS_S1_(void *that, const QPoint & p1, const QPoint & p2)
{
  QPoint *cthat = (QPoint *)that;
  return cthat->dotProduct(p1, p2);
}

  // proto:  int QPoint::x();
int demth_ZNK6QPoint1xEv(void *that)
{
  QPoint *cthat = (QPoint *)that;
  return cthat->x();
}

  // proto:  int QPoint::y();
int demth_ZNK6QPoint1yEv(void *that)
{
  QPoint *cthat = (QPoint *)that;
  return cthat->y();
}

  // proto:  void QPoint::setX(int x);
void demth_ZN6QPoint4setXEi(void *that, int x)
{
  QPoint *cthat = (QPoint *)that;
   cthat->setX(x);
}

  // proto:  bool QPoint::isNull();
bool demth_ZNK6QPoint6isNullEv(void *that)
{
  QPoint *cthat = (QPoint *)that;
  return cthat->isNull();
}

  // proto:  void QPoint::setY(int y);
void demth_ZN6QPoint4setYEi(void *that, int y)
{
  QPoint *cthat = (QPoint *)that;
   cthat->setY(y);
}

  // proto:  int & QPoint::rx();
int * demth_ZN6QPoint2rxEv(void *that)
{
  QPoint *cthat = (QPoint *)that;
  return &cthat->rx();
}

  // proto:  int QPoint::manhattanLength();
int demth_ZNK6QPoint15manhattanLengthEv(void *that)
{
  QPoint *cthat = (QPoint *)that;
  return cthat->manhattanLength();
}

int QPointF_Class_Size()
{
  return sizeof(QPointF);
}

// QPointF(qreal, qreal)
QPointF* dector_ZN7QPointFC1Edd(double xpos, double ypos)
{
  // static_assert(sizeof(QPointF) == 32, "tyszerr");
  QPointF* rthis = new QPointF(xpos, ypos);
  return rthis;
}

// QPointF()
QPointF* dector_ZN7QPointFC1Ev()
{
  // static_assert(sizeof(QPointF) == 32, "tyszerr");
  QPointF* rthis = new QPointF();
  return rthis;
}

// QPointF(const class QPoint &)
QPointF* dector_ZN7QPointFC1ERK6QPoint(const QPoint & p)
{
  // static_assert(sizeof(QPointF) == 32, "tyszerr");
  QPointF* rthis = new QPointF(p);
  return rthis;
}

  // proto:  qreal QPointF::manhattanLength();
qreal demth_ZNK7QPointF15manhattanLengthEv(void *that)
{
  QPointF *cthat = (QPointF *)that;
  return cthat->manhattanLength();
}

  // proto:  QPoint QPointF::toPoint();
QPoint* demth_ZNK7QPointF7toPointEv(void *that)
{
  QPointF *cthat = (QPointF *)that;
  auto recret = cthat->toPoint();
  return new QPoint(recret);
}

  // proto:  qreal & QPointF::rx();
qreal * demth_ZN7QPointF2rxEv(void *that)
{
  QPointF *cthat = (QPointF *)that;
  return &cthat->rx();
}

  // proto:  qreal QPointF::y();
qreal demth_ZNK7QPointF1yEv(void *that)
{
  QPointF *cthat = (QPointF *)that;
  return cthat->y();
}

  // proto:  bool QPointF::isNull();
bool demth_ZNK7QPointF6isNullEv(void *that)
{
  QPointF *cthat = (QPointF *)that;
  return cthat->isNull();
}

  // proto:  qreal QPointF::x();
qreal demth_ZNK7QPointF1xEv(void *that)
{
  QPointF *cthat = (QPointF *)that;
  return cthat->x();
}

  // proto:  void QPointF::setX(qreal x);
void demth_ZN7QPointF4setXEd(void *that, double x)
{
  QPointF *cthat = (QPointF *)that;
   cthat->setX(x);
}

  // proto:  qreal & QPointF::ry();
qreal * demth_ZN7QPointF2ryEv(void *that)
{
  QPointF *cthat = (QPointF *)that;
  return &cthat->ry();
}

  // proto: static qreal QPointF::dotProduct(const QPointF & p1, const QPointF & p2);
qreal demth_ZN7QPointF10dotProductERKS_S1_(void *that, const QPointF & p1, const QPointF & p2)
{
  QPointF *cthat = (QPointF *)that;
  return cthat->dotProduct(p1, p2);
}

  // proto:  void QPointF::setY(qreal y);
void demth_ZN7QPointF4setYEd(void *that, double y)
{
  QPointF *cthat = (QPointF *)that;
   cthat->setY(y);
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

