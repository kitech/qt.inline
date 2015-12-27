// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qline.h
// dst-file: /src/core/qline.cxx
//

// header block begin =>
#include <qline.h>

extern "C" {

int QLine_Class_Size()
{
  return sizeof(QLine);
}

// QLine(const class QPoint &, const class QPoint &)
QLine* dector_ZN5QLineC1ERK6QPointS2_(const QPoint & pt1, const QPoint & pt2)
{
  // static_assert(sizeof(QLine) == 32, "tyszerr");
  QLine* rthis = new QLine(pt1, pt2);
  return rthis;
}

// QLine(int, int, int, int)
QLine* dector_ZN5QLineC1Eiiii(int x1, int y1, int x2, int y2)
{
  // static_assert(sizeof(QLine) == 32, "tyszerr");
  QLine* rthis = new QLine(x1, y1, x2, y2);
  return rthis;
}

// QLine()
QLine* dector_ZN5QLineC1Ev()
{
  // static_assert(sizeof(QLine) == 32, "tyszerr");
  QLine* rthis = new QLine();
  return rthis;
}

  // proto:  void QLine::setP2(const QPoint & p2);
void demth_ZN5QLine5setP2ERK6QPoint(void *that, const QPoint & p2)
{
  QLine *cthat = (QLine *)that;
   cthat->setP2(p2);
}

  // proto:  void QLine::setP1(const QPoint & p1);
void demth_ZN5QLine5setP1ERK6QPoint(void *that, const QPoint & p1)
{
  QLine *cthat = (QLine *)that;
   cthat->setP1(p1);
}

  // proto:  void QLine::translate(const QPoint & p);
void demth_ZN5QLine9translateERK6QPoint(void *that, const QPoint & p)
{
  QLine *cthat = (QLine *)that;
   cthat->translate(p);
}

  // proto:  void QLine::translate(int dx, int dy);
void demth_ZN5QLine9translateEii(void *that, int dx, int dy)
{
  QLine *cthat = (QLine *)that;
   cthat->translate(dx, dy);
}

  // proto:  void QLine::setPoints(const QPoint & p1, const QPoint & p2);
void demth_ZN5QLine9setPointsERK6QPointS2_(void *that, const QPoint & p1, const QPoint & p2)
{
  QLine *cthat = (QLine *)that;
   cthat->setPoints(p1, p2);
}

  // proto:  void QLine::setLine(int x1, int y1, int x2, int y2);
void demth_ZN5QLine7setLineEiiii(void *that, int x1, int y1, int x2, int y2)
{
  QLine *cthat = (QLine *)that;
   cthat->setLine(x1, y1, x2, y2);
}

int QLineF_Class_Size()
{
  return sizeof(QLineF);
}

// QLineF(const class QPointF &, const class QPointF &)
QLineF* dector_ZN6QLineFC1ERK7QPointFS2_(const QPointF & pt1, const QPointF & pt2)
{
  // static_assert(sizeof(QLineF) == 32, "tyszerr");
  QLineF* rthis = new QLineF(pt1, pt2);
  return rthis;
}

// QLineF(const class QLine &)
QLineF* dector_ZN6QLineFC1ERK5QLine(const QLine & line)
{
  // static_assert(sizeof(QLineF) == 32, "tyszerr");
  QLineF* rthis = new QLineF(line);
  return rthis;
}

// QLineF()
QLineF* dector_ZN6QLineFC1Ev()
{
  // static_assert(sizeof(QLineF) == 32, "tyszerr");
  QLineF* rthis = new QLineF();
  return rthis;
}

// QLineF(qreal, qreal, qreal, qreal)
QLineF* dector_ZN6QLineFC1Edddd(double x1, double y1, double x2, double y2)
{
  // static_assert(sizeof(QLineF) == 32, "tyszerr");
  QLineF* rthis = new QLineF(x1, y1, x2, y2);
  return rthis;
}

  // proto:  void QLineF::translate(qreal dx, qreal dy);
void demth_ZN6QLineF9translateEdd(void *that, double dx, double dy)
{
  QLineF *cthat = (QLineF *)that;
   cthat->translate(dx, dy);
}

  // proto:  void QLineF::setPoints(const QPointF & p1, const QPointF & p2);
void demth_ZN6QLineF9setPointsERK7QPointFS2_(void *that, const QPointF & p1, const QPointF & p2)
{
  QLineF *cthat = (QLineF *)that;
   cthat->setPoints(p1, p2);
}

  // proto:  void QLineF::setP2(const QPointF & p2);
void demth_ZN6QLineF5setP2ERK7QPointF(void *that, const QPointF & p2)
{
  QLineF *cthat = (QLineF *)that;
   cthat->setP2(p2);
}

  // proto:  void QLineF::translate(const QPointF & p);
void demth_ZN6QLineF9translateERK7QPointF(void *that, const QPointF & p)
{
  QLineF *cthat = (QLineF *)that;
   cthat->translate(p);
}

  // proto:  void QLineF::setLine(qreal x1, qreal y1, qreal x2, qreal y2);
void demth_ZN6QLineF7setLineEdddd(void *that, double x1, double y1, double x2, double y2)
{
  QLineF *cthat = (QLineF *)that;
   cthat->setLine(x1, y1, x2, y2);
}

  // proto:  void QLineF::setP1(const QPointF & p1);
void demth_ZN6QLineF5setP1ERK7QPointF(void *that, const QPointF & p1)
{
  QLineF *cthat = (QLineF *)that;
   cthat->setP1(p1);
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

