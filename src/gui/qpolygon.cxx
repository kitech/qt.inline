// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qpolygon.h
// dst-file: /src/gui/qpolygon.cxx
//

// header block begin =>
#include <qpolygon.h>

extern "C" {

int QPolygon_Class_Size()
{
  return sizeof(QPolygon);
}

// ~QPolygon()
void dedtor_ZN8QPolygonD0Ev(QPolygon* that)
{
  QPolygon* rthis = (QPolygon*)that;
  delete rthis;
}

// QPolygon(const QVector<class QPoint> &)
QPolygon* dector_ZN8QPolygonC1ERK7QVectorI6QPointE(const QVector<QPoint> & v)
{
  // static_assert(sizeof(QPolygon) == 32, "tyszerr");
  QPolygon* rthis = new QPolygon(v);
  return rthis;
}

// QPolygon(const class QPolygon &)
QPolygon* dector_ZN8QPolygonC1ERKS_(const QPolygon & a)
{
  // static_assert(sizeof(QPolygon) == 32, "tyszerr");
  QPolygon* rthis = new QPolygon(a);
  return rthis;
}

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

// QPolygon()
QPolygon* dector_ZN8QPolygonC1Ev()
{
  // static_assert(sizeof(QPolygon) == 32, "tyszerr");
  QPolygon* rthis = new QPolygon();
  return rthis;
}

// QPolygon(const class QRect &, _Bool)
QPolygon* dector_ZN8QPolygonC1ERK5QRectb(const QRect & r, bool closed)
{
  // static_assert(sizeof(QPolygon) == 32, "tyszerr");
  QPolygon* rthis = new QPolygon(r, closed);
  return rthis;
}

  // proto:  void QPolygon::setPoint(int index, int x, int y);
void demth_ZN8QPolygon8setPointEiii(void *that, int index, int x, int y)
{
  QPolygon *cthat = (QPolygon *)that;
   cthat->setPoint(index, x, y);
}

  // proto:  void QPolygon::~QPolygon();
void demth_ZN8QPolygonD0Ev(void *that)
{
  QPolygon *cthat = (QPolygon *)that;
   cthat->~QPolygon();
}

  // proto:  QPolygon QPolygon::translated(const QPoint & offset);
QPolygon* demth_ZNK8QPolygon10translatedERK6QPoint(void *that, const QPoint & offset)
{
  QPolygon *cthat = (QPolygon *)that;
  auto recret = cthat->translated(offset);
  return new QPolygon(recret);
}

  // proto:  void QPolygon::QPolygon(const QVector<QPoint> & v);
void demth_ZN8QPolygonC1ERK7QVectorI6QPointE(void *that, const QVector<QPoint> & v)
{
  QPolygon *cthat = (QPolygon *)that;
  auto _o = new(that) QPolygon(v);
}

  // proto:  void QPolygon::setPoint(int index, const QPoint & p);
void demth_ZN8QPolygon8setPointEiRK6QPoint(void *that, int index, const QPoint & p)
{
  QPolygon *cthat = (QPolygon *)that;
   cthat->setPoint(index, p);
}

  // proto:  void QPolygon::translate(const QPoint & offset);
void demth_ZN8QPolygon9translateERK6QPoint(void *that, const QPoint & offset)
{
  QPolygon *cthat = (QPolygon *)that;
   cthat->translate(offset);
}

  // proto:  void QPolygon::swap(QPolygon & other);
void demth_ZN8QPolygon4swapERS_(void *that, QPolygon & other)
{
  QPolygon *cthat = (QPolygon *)that;
   cthat->swap(other);
}

  // proto:  QPoint QPolygon::point(int i);
QPoint* demth_ZNK8QPolygon5pointEi(void *that, int i)
{
  QPolygon *cthat = (QPolygon *)that;
  auto recret = cthat->point(i);
  return new QPoint(recret);
}

  // proto:  void QPolygon::QPolygon(const QPolygon & a);
void demth_ZN8QPolygonC1ERKS_(void *that, const QPolygon & a)
{
  QPolygon *cthat = (QPolygon *)that;
  auto _o = new(that) QPolygon(a);
}

  // proto:  void QPolygon::QPolygon(int size);
void demth_ZN8QPolygonC1Ei(void *that, int size)
{
  QPolygon *cthat = (QPolygon *)that;
  auto _o = new(that) QPolygon(size);
}

  // proto:  void QPolygon::QPolygon();
void demth_ZN8QPolygonC1Ev(void *that)
{
  QPolygon *cthat = (QPolygon *)that;
  auto _o = new(that) QPolygon();
}

int QPolygonF_Class_Size()
{
  return sizeof(QPolygonF);
}

// QPolygonF(const class QPolygon &)
QPolygonF* dector_ZN9QPolygonFC1ERK8QPolygon(const QPolygon & a)
{
  // static_assert(sizeof(QPolygonF) == 32, "tyszerr");
  QPolygonF* rthis = new QPolygonF(a);
  return rthis;
}

// QPolygonF(const QVector<class QPointF> &)
QPolygonF* dector_ZN9QPolygonFC1ERK7QVectorI7QPointFE(const QVector<QPointF> & v)
{
  // static_assert(sizeof(QPolygonF) == 32, "tyszerr");
  QPolygonF* rthis = new QPolygonF(v);
  return rthis;
}

// QPolygonF(const class QRectF &)
QPolygonF* dector_ZN9QPolygonFC1ERK6QRectF(const QRectF & r)
{
  // static_assert(sizeof(QPolygonF) == 32, "tyszerr");
  QPolygonF* rthis = new QPolygonF(r);
  return rthis;
}

// ~QPolygonF()
void dedtor_ZN9QPolygonFD0Ev(QPolygonF* that)
{
  QPolygonF* rthis = (QPolygonF*)that;
  delete rthis;
}

// QPolygonF(int)
QPolygonF* dector_ZN9QPolygonFC1Ei(int size)
{
  // static_assert(sizeof(QPolygonF) == 32, "tyszerr");
  QPolygonF* rthis = new QPolygonF(size);
  return rthis;
}

// QPolygonF()
QPolygonF* dector_ZN9QPolygonFC1Ev()
{
  // static_assert(sizeof(QPolygonF) == 32, "tyszerr");
  QPolygonF* rthis = new QPolygonF();
  return rthis;
}

// QPolygonF(const class QPolygonF &)
QPolygonF* dector_ZN9QPolygonFC1ERKS_(const QPolygonF & a)
{
  // static_assert(sizeof(QPolygonF) == 32, "tyszerr");
  QPolygonF* rthis = new QPolygonF(a);
  return rthis;
}

  // proto:  void QPolygonF::QPolygonF(const QVector<QPointF> & v);
void demth_ZN9QPolygonFC1ERK7QVectorI7QPointFE(void *that, const QVector<QPointF> & v)
{
  QPolygonF *cthat = (QPolygonF *)that;
  auto _o = new(that) QPolygonF(v);
}

  // proto:  void QPolygonF::~QPolygonF();
void demth_ZN9QPolygonFD0Ev(void *that)
{
  QPolygonF *cthat = (QPolygonF *)that;
   cthat->~QPolygonF();
}

  // proto:  void QPolygonF::QPolygonF(int size);
void demth_ZN9QPolygonFC1Ei(void *that, int size)
{
  QPolygonF *cthat = (QPolygonF *)that;
  auto _o = new(that) QPolygonF(size);
}

  // proto:  void QPolygonF::QPolygonF();
void demth_ZN9QPolygonFC1Ev(void *that)
{
  QPolygonF *cthat = (QPolygonF *)that;
  auto _o = new(that) QPolygonF();
}

  // proto:  void QPolygonF::swap(QPolygonF & other);
void demth_ZN9QPolygonF4swapERS_(void *that, QPolygonF & other)
{
  QPolygonF *cthat = (QPolygonF *)that;
   cthat->swap(other);
}

  // proto:  void QPolygonF::translate(qreal dx, qreal dy);
void demth_ZN9QPolygonF9translateEdd(void *that, double dx, double dy)
{
  QPolygonF *cthat = (QPolygonF *)that;
   cthat->translate(dx, dy);
}

  // proto:  void QPolygonF::QPolygonF(const QPolygonF & a);
void demth_ZN9QPolygonFC1ERKS_(void *that, const QPolygonF & a)
{
  QPolygonF *cthat = (QPolygonF *)that;
  auto _o = new(that) QPolygonF(a);
}

  // proto:  QPolygonF QPolygonF::translated(qreal dx, qreal dy);
QPolygonF* demth_ZNK9QPolygonF10translatedEdd(void *that, double dx, double dy)
{
  QPolygonF *cthat = (QPolygonF *)that;
  auto recret = cthat->translated(dx, dy);
  return new QPolygonF(recret);
}

  // proto:  bool QPolygonF::isClosed();
bool demth_ZNK9QPolygonF8isClosedEv(void *that)
{
  QPolygonF *cthat = (QPolygonF *)that;
  return cthat->isClosed();
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

