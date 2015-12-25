// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtGui/qpolygon.h
// dst-file: /src/gui/qpolygon.cxx
//

// header block begin =>
#include <qpolygon.h>

extern "C" {

// QPolygon(int, const int *)
QPolygon* dector_ZN8QPolygonC1EiPKi(int nPoints, const int * points)
{
  // static_assert(sizeof(QPolygon) == 32, "tyszerr");
  QPolygon* rthis = new QPolygon(nPoints, points);
  return rthis;
}

// QPolygon(int)
QPolygon* dector_ZN8QPolygonC1Ei(int size)
{
  // static_assert(sizeof(QPolygon) == 32, "tyszerr");
  QPolygon* rthis = new QPolygon(size);
  return rthis;
}

// QPolygon(const class QRect &, _Bool)
QPolygon* dector_ZN8QPolygonC1ERK5QRectb(const QRect & r, bool closed)
{
  // static_assert(sizeof(QPolygon) == 32, "tyszerr");
  QPolygon* rthis = new QPolygon(r, closed);
  return rthis;
}

  // proto:  void QPolygon::QPolygon(int size);
void _ZN8QPolygonC1Ei(void *that, int size)
{
  QPolygon *cthat = (QPolygon *)that;
  auto _o = new(that) QPolygon(size);
}

  // proto:  QPolygon QPolygon::translated(const QPoint & offset);
QPolygon* _ZNK8QPolygon10translatedERK6QPoint(void *that, const QPoint & offset)
{
  QPolygon *cthat = (QPolygon *)that;
  auto recret = cthat->translated(offset);
  return new QPolygon(recret);
}

// QPolygonF(const class QPolygon &)
QPolygonF* dector_ZN9QPolygonFC1ERK8QPolygon(const QPolygon & a)
{
  // static_assert(sizeof(QPolygonF) == 32, "tyszerr");
  QPolygonF* rthis = new QPolygonF(a);
  return rthis;
}

// QPolygonF(const class QRectF &)
QPolygonF* dector_ZN9QPolygonFC1ERK6QRectF(const QRectF & r)
{
  // static_assert(sizeof(QPolygonF) == 32, "tyszerr");
  QPolygonF* rthis = new QPolygonF(r);
  return rthis;
}

// QPolygonF(int)
QPolygonF* dector_ZN9QPolygonFC1Ei(int size)
{
  // static_assert(sizeof(QPolygonF) == 32, "tyszerr");
  QPolygonF* rthis = new QPolygonF(size);
  return rthis;
}

  // proto:  void QPolygonF::QPolygonF(int size);
void _ZN9QPolygonFC1Ei(void *that, int size)
{
  QPolygonF *cthat = (QPolygonF *)that;
  auto _o = new(that) QPolygonF(size);
}

  // proto:  void QPolygonF::translate(qreal dx, qreal dy);
void _ZN9QPolygonF9translateEdd(void *that, double dx, double dy)
{
  QPolygonF *cthat = (QPolygonF *)that;
   cthat->translate(dx, dy);
}

  // proto:  QPolygonF QPolygonF::translated(qreal dx, qreal dy);
QPolygonF* _ZNK9QPolygonF10translatedEdd(void *that, double dx, double dy)
{
  QPolygonF *cthat = (QPolygonF *)that;
  auto recret = cthat->translated(dx, dy);
  return new QPolygonF(recret);
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

