// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtGui/qpainterpath.h
// dst-file: /src/gui/qpainterpath.cxx
//

// header block begin =>
#include <qpainterpath.h>

extern "C" {

  // proto:  QPainterPath QPainterPath::translated(const QPointF & offset);
QPainterPath* _ZNK12QPainterPath10translatedERK7QPointF(void *that, const QPointF & offset)

{
  QPainterPath *cthat = (QPainterPath *)that;
  auto recret = cthat->translated(offset);
  return new QPainterPath(recret);
}

  // proto:  void QPainterPath::arcTo(qreal x, qreal y, qreal w, qreal h, qreal startAngle, qreal arcLength);
void _ZN12QPainterPath5arcToEdddddd(void *that, double x, double y, double w, double h, double startAngle, double arcLength)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->arcTo(x, y, w, h, startAngle, arcLength);
}

  // proto:  void QPainterPath::addText(qreal x, qreal y, const QFont & f, const QString & text);
void _ZN12QPainterPath7addTextEddRK5QFontRK7QString(void *that, double x, double y, const QFont & f, const QString & text)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->addText(x, y, f, text);
}

  // proto:  void QPainterPath::addRoundRect(const QRectF & rect, int roundness);
void _ZN12QPainterPath12addRoundRectERK6QRectFi(void *that, const QRectF & rect, int roundness)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->addRoundRect(rect, roundness);
}

  // proto:  void QPainterPath::addEllipse(const QPointF & center, qreal rx, qreal ry);
void _ZN12QPainterPath10addEllipseERK7QPointFdd(void *that, const QPointF & center, double rx, double ry)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->addEllipse(center, rx, ry);
}

  // proto:  void QPainterPath::lineTo(qreal x, qreal y);
void _ZN12QPainterPath6lineToEdd(void *that, double x, double y)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->lineTo(x, y);
}

  // proto:  void QPainterPath::addEllipse(qreal x, qreal y, qreal w, qreal h);
void _ZN12QPainterPath10addEllipseEdddd(void *that, double x, double y, double w, double h)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->addEllipse(x, y, w, h);
}

  // proto:  void QPainterPath::addRoundRect(qreal x, qreal y, qreal w, qreal h, int roundness);
void _ZN12QPainterPath12addRoundRectEddddi(void *that, double x, double y, double w, double h, int roundness)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->addRoundRect(x, y, w, h, roundness);
}

  // proto:  void QPainterPath::translate(const QPointF & offset);
void _ZN12QPainterPath9translateERK7QPointF(void *that, const QPointF & offset)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->translate(offset);
}

  // proto:  void QPainterPath::quadTo(qreal ctrlPtx, qreal ctrlPty, qreal endPtx, qreal endPty);
void _ZN12QPainterPath6quadToEdddd(void *that, double ctrlPtx, double ctrlPty, double endPtx, double endPty)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->quadTo(ctrlPtx, ctrlPty, endPtx, endPty);
}

  // proto:  void QPainterPath::addRoundRect(qreal x, qreal y, qreal w, qreal h, int xRnd, int yRnd);
void _ZN12QPainterPath12addRoundRectEddddii(void *that, double x, double y, double w, double h, int xRnd, int yRnd)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->addRoundRect(x, y, w, h, xRnd, yRnd);
}

  // proto:  void QPainterPath::swap(QPainterPath & other);
void _ZN12QPainterPath4swapERS_(void *that, QPainterPath & other)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->swap(other);
}

  // proto:  void QPainterPath::moveTo(qreal x, qreal y);
void _ZN12QPainterPath6moveToEdd(void *that, double x, double y)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->moveTo(x, y);
}

  // proto:  void QPainterPath::cubicTo(qreal ctrlPt1x, qreal ctrlPt1y, qreal ctrlPt2x, qreal ctrlPt2y, qreal endPtx, qreal endPty);
void _ZN12QPainterPath7cubicToEdddddd(void *that, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->cubicTo(ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty);
}

  // proto:  void QPainterPath::addRoundedRect(qreal x, qreal y, qreal w, qreal h, qreal xRadius, qreal yRadius, Qt::SizeMode mode);
void _ZN12QPainterPath14addRoundedRectEddddddN2Qt8SizeModeE(void *that, double x, double y, double w, double h, double xRadius, double yRadius, Qt::SizeMode mode)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->addRoundedRect(x, y, w, h, xRadius, yRadius, mode);
}

  // proto:  void QPainterPath::arcMoveTo(qreal x, qreal y, qreal w, qreal h, qreal angle);
void _ZN12QPainterPath9arcMoveToEddddd(void *that, double x, double y, double w, double h, double angle)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->arcMoveTo(x, y, w, h, angle);
}

  // proto:  void QPainterPath::addRect(qreal x, qreal y, qreal w, qreal h);
void _ZN12QPainterPath7addRectEdddd(void *that, double x, double y, double w, double h)

{
  QPainterPath *cthat = (QPainterPath *)that;
   cthat->addRect(x, y, w, h);
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

