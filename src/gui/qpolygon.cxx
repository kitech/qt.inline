// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtGui/qpolygon.h
// dst-file: /src/gui/qpolygon.cxx
//

// header block begin =>
#include <qpolygon.h>

extern "C" {

  // proto:  void QPolygon::~QPolygon();
void _ZN8QPolygonD0Ev(void *that)

{
  QPolygon *cthat = (QPolygon *)that;
   cthat->~QPolygon();
}

  // proto:  QPolygon QPolygon::translated(const QPoint & offset);
QPolygon* _ZNK8QPolygon10translatedERK6QPoint(void *that, const QPoint & offset)

{
  QPolygon *cthat = (QPolygon *)that;
  auto recret = cthat->translated(offset);
  return new QPolygon(recret);
}

  // proto:  void QPolygon::QPolygon(const QVector<QPoint> & v);
void _ZN8QPolygonC1ERK7QVectorI6QPointE(void *that, const QVector<QPoint> & v)

{
  QPolygon *cthat = (QPolygon *)that;
  auto _o = new(that) QPolygon(v);
}

  // proto:  void QPolygon::swap(QPolygon & other);
void _ZN8QPolygon4swapERS_(void *that, QPolygon & other)

{
  QPolygon *cthat = (QPolygon *)that;
   cthat->swap(other);
}

  // proto:  void QPolygon::QPolygon(const QPolygon & a);
void _ZN8QPolygonC1ERKS_(void *that, const QPolygon & a)

{
  QPolygon *cthat = (QPolygon *)that;
  auto _o = new(that) QPolygon(a);
}

  // proto:  void QPolygon::QPolygon(int size);
void _ZN8QPolygonC1Ei(void *that, int size)

{
  QPolygon *cthat = (QPolygon *)that;
  auto _o = new(that) QPolygon(size);
}

  // proto:  void QPolygon::QPolygon();
void _ZN8QPolygonC1Ev(void *that)

{
  QPolygon *cthat = (QPolygon *)that;
  auto _o = new(that) QPolygon();
}

  // proto:  void QPolygonF::QPolygonF(const QVector<QPointF> & v);
void _ZN9QPolygonFC1ERK7QVectorI7QPointFE(void *that, const QVector<QPointF> & v)

{
  QPolygonF *cthat = (QPolygonF *)that;
  auto _o = new(that) QPolygonF(v);
}

  // proto:  void QPolygonF::~QPolygonF();
void _ZN9QPolygonFD0Ev(void *that)

{
  QPolygonF *cthat = (QPolygonF *)that;
   cthat->~QPolygonF();
}

  // proto:  void QPolygonF::QPolygonF(int size);
void _ZN9QPolygonFC1Ei(void *that, int size)

{
  QPolygonF *cthat = (QPolygonF *)that;
  auto _o = new(that) QPolygonF(size);
}

  // proto:  void QPolygonF::QPolygonF();
void _ZN9QPolygonFC1Ev(void *that)

{
  QPolygonF *cthat = (QPolygonF *)that;
  auto _o = new(that) QPolygonF();
}

  // proto:  void QPolygonF::swap(QPolygonF & other);
void _ZN9QPolygonF4swapERS_(void *that, QPolygonF & other)

{
  QPolygonF *cthat = (QPolygonF *)that;
   cthat->swap(other);
}

  // proto:  void QPolygonF::translate(qreal dx, qreal dy);
void _ZN9QPolygonF9translateEdd(void *that, double dx, double dy)

{
  QPolygonF *cthat = (QPolygonF *)that;
   cthat->translate(dx, dy);
}

  // proto:  void QPolygonF::QPolygonF(const QPolygonF & a);
void _ZN9QPolygonFC1ERKS_(void *that, const QPolygonF & a)

{
  QPolygonF *cthat = (QPolygonF *)that;
  auto _o = new(that) QPolygonF(a);
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

