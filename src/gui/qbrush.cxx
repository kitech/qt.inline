// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qbrush.h
// dst-file: /src/gui/qbrush.cxx
//

// header block begin =>
#include <qbrush.h>

extern "C" {

int QRadialGradient_Class_Size()
{
  return sizeof(QRadialGradient);
}

// QRadialGradient(qreal, qreal, qreal, qreal, qreal)
QRadialGradient* dector_ZN15QRadialGradientC1Eddddd(double cx, double cy, double radius, double fx, double fy)
{
  // static_assert(sizeof(QRadialGradient) == 32, "tyszerr");
  QRadialGradient* rthis = new QRadialGradient(cx, cy, radius, fx, fy);
  return rthis;
}

// QRadialGradient()
QRadialGradient* dector_ZN15QRadialGradientC1Ev()
{
  // static_assert(sizeof(QRadialGradient) == 32, "tyszerr");
  QRadialGradient* rthis = new QRadialGradient();
  return rthis;
}

// QRadialGradient(const class QPointF &, qreal, const class QPointF &)
QRadialGradient* dector_ZN15QRadialGradientC1ERK7QPointFdS2_(const QPointF & center, double radius, const QPointF & focalPoint)
{
  // static_assert(sizeof(QRadialGradient) == 32, "tyszerr");
  QRadialGradient* rthis = new QRadialGradient(center, radius, focalPoint);
  return rthis;
}

// QRadialGradient(const class QPointF &, qreal, const class QPointF &, qreal)
QRadialGradient* dector_ZN15QRadialGradientC1ERK7QPointFdS2_d(const QPointF & center, double centerRadius, const QPointF & focalPoint, double focalRadius)
{
  // static_assert(sizeof(QRadialGradient) == 32, "tyszerr");
  QRadialGradient* rthis = new QRadialGradient(center, centerRadius, focalPoint, focalRadius);
  return rthis;
}

// QRadialGradient(qreal, qreal, qreal, qreal, qreal, qreal)
QRadialGradient* dector_ZN15QRadialGradientC1Edddddd(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius)
{
  // static_assert(sizeof(QRadialGradient) == 32, "tyszerr");
  QRadialGradient* rthis = new QRadialGradient(cx, cy, centerRadius, fx, fy, focalRadius);
  return rthis;
}

// QRadialGradient(const class QPointF &, qreal)
QRadialGradient* dector_ZN15QRadialGradientC1ERK7QPointFd(const QPointF & center, double radius)
{
  // static_assert(sizeof(QRadialGradient) == 32, "tyszerr");
  QRadialGradient* rthis = new QRadialGradient(center, radius);
  return rthis;
}

// QRadialGradient(qreal, qreal, qreal)
QRadialGradient* dector_ZN15QRadialGradientC1Eddd(double cx, double cy, double radius)
{
  // static_assert(sizeof(QRadialGradient) == 32, "tyszerr");
  QRadialGradient* rthis = new QRadialGradient(cx, cy, radius);
  return rthis;
}

  // proto:  void QRadialGradient::setFocalPoint(qreal x, qreal y);
void demth_ZN15QRadialGradient13setFocalPointEdd(void *that, double x, double y)
{
  QRadialGradient *cthat = (QRadialGradient *)that;
   cthat->setFocalPoint(x, y);
}

  // proto:  void QRadialGradient::setCenter(qreal x, qreal y);
void demth_ZN15QRadialGradient9setCenterEdd(void *that, double x, double y)
{
  QRadialGradient *cthat = (QRadialGradient *)that;
   cthat->setCenter(x, y);
}

int QConicalGradient_Class_Size()
{
  return sizeof(QConicalGradient);
}

// QConicalGradient(const class QPointF &, qreal)
QConicalGradient* dector_ZN16QConicalGradientC1ERK7QPointFd(const QPointF & center, double startAngle)
{
  // static_assert(sizeof(QConicalGradient) == 32, "tyszerr");
  QConicalGradient* rthis = new QConicalGradient(center, startAngle);
  return rthis;
}

// QConicalGradient()
QConicalGradient* dector_ZN16QConicalGradientC1Ev()
{
  // static_assert(sizeof(QConicalGradient) == 32, "tyszerr");
  QConicalGradient* rthis = new QConicalGradient();
  return rthis;
}

// QConicalGradient(qreal, qreal, qreal)
QConicalGradient* dector_ZN16QConicalGradientC1Eddd(double cx, double cy, double startAngle)
{
  // static_assert(sizeof(QConicalGradient) == 32, "tyszerr");
  QConicalGradient* rthis = new QConicalGradient(cx, cy, startAngle);
  return rthis;
}

  // proto:  void QConicalGradient::setCenter(qreal x, qreal y);
void demth_ZN16QConicalGradient9setCenterEdd(void *that, double x, double y)
{
  QConicalGradient *cthat = (QConicalGradient *)that;
   cthat->setCenter(x, y);
}

int QBrush_Class_Size()
{
  return sizeof(QBrush);
}

// QBrush(Qt::GlobalColor, Qt::BrushStyle)
QBrush* dector_ZN6QBrushC1EN2Qt11GlobalColorENS0_10BrushStyleE(Qt::GlobalColor color, Qt::BrushStyle bs)
{
  // static_assert(sizeof(QBrush) == 32, "tyszerr");
  QBrush* rthis = new QBrush(color, bs);
  return rthis;
}

// QBrush()
QBrush* dector_ZN6QBrushC1Ev()
{
  // static_assert(sizeof(QBrush) == 32, "tyszerr");
  QBrush* rthis = new QBrush();
  return rthis;
}

// QBrush(const class QPixmap &)
QBrush* dector_ZN6QBrushC1ERK7QPixmap(const QPixmap & pixmap)
{
  // static_assert(sizeof(QBrush) == 32, "tyszerr");
  QBrush* rthis = new QBrush(pixmap);
  return rthis;
}

// QBrush(const class QColor &, const class QPixmap &)
QBrush* dector_ZN6QBrushC1ERK6QColorRK7QPixmap(const QColor & color, const QPixmap & pixmap)
{
  // static_assert(sizeof(QBrush) == 32, "tyszerr");
  QBrush* rthis = new QBrush(color, pixmap);
  return rthis;
}

// QBrush(Qt::BrushStyle)
QBrush* dector_ZN6QBrushC1EN2Qt10BrushStyleE(Qt::BrushStyle bs)
{
  // static_assert(sizeof(QBrush) == 32, "tyszerr");
  QBrush* rthis = new QBrush(bs);
  return rthis;
}

// QBrush(const class QGradient &)
QBrush* dector_ZN6QBrushC1ERK9QGradient(const QGradient & gradient)
{
  // static_assert(sizeof(QBrush) == 32, "tyszerr");
  QBrush* rthis = new QBrush(gradient);
  return rthis;
}

// QBrush(Qt::GlobalColor, const class QPixmap &)
QBrush* dector_ZN6QBrushC1EN2Qt11GlobalColorERK7QPixmap(Qt::GlobalColor color, const QPixmap & pixmap)
{
  // static_assert(sizeof(QBrush) == 32, "tyszerr");
  QBrush* rthis = new QBrush(color, pixmap);
  return rthis;
}

// ~QBrush()
void dedtor_ZN6QBrushD0Ev(QBrush* that)
{
  QBrush* rthis = (QBrush*)that;
  delete rthis;
}

// QBrush(const class QBrush &)
QBrush* dector_ZN6QBrushC1ERKS_(const QBrush & brush)
{
  // static_assert(sizeof(QBrush) == 32, "tyszerr");
  QBrush* rthis = new QBrush(brush);
  return rthis;
}

// QBrush(const class QImage &)
QBrush* dector_ZN6QBrushC1ERK6QImage(const QImage & image)
{
  // static_assert(sizeof(QBrush) == 32, "tyszerr");
  QBrush* rthis = new QBrush(image);
  return rthis;
}

// QBrush(const class QColor &, Qt::BrushStyle)
QBrush* dector_ZN6QBrushC1ERK6QColorN2Qt10BrushStyleE(const QColor & color, Qt::BrushStyle bs)
{
  // static_assert(sizeof(QBrush) == 32, "tyszerr");
  QBrush* rthis = new QBrush(color, bs);
  return rthis;
}

  // proto:  QTransform QBrush::transform();
QTransform* demth_ZNK6QBrush9transformEv(void *that)
{
  QBrush *cthat = (QBrush *)that;
  auto recret = cthat->transform();
  return new QTransform(recret);
}

  // proto:  const QMatrix & QBrush::matrix();
const QMatrix * demth_ZNK6QBrush6matrixEv(void *that)
{
  QBrush *cthat = (QBrush *)that;
  return &cthat->matrix();
}

  // proto:  bool QBrush::isDetached();
bool demth_ZNK6QBrush10isDetachedEv(void *that)
{
  QBrush *cthat = (QBrush *)that;
  return cthat->isDetached();
}

  // proto:  void QBrush::swap(QBrush & other);
void demth_ZN6QBrush4swapERS_(void *that, QBrush & other)
{
  QBrush *cthat = (QBrush *)that;
   cthat->swap(other);
}

  // proto:  void QBrush::setColor(Qt::GlobalColor color);
void demth_ZN6QBrush8setColorEN2Qt11GlobalColorE(void *that, Qt::GlobalColor color)
{
  QBrush *cthat = (QBrush *)that;
   cthat->setColor(color);
}

  // proto:  const QColor & QBrush::color();
const QColor * demth_ZNK6QBrush5colorEv(void *that)
{
  QBrush *cthat = (QBrush *)that;
  return &cthat->color();
}

int QGradient_Class_Size()
{
  return sizeof(QGradient);
}

// QGradient()
QGradient* dector_ZN9QGradientC1Ev()
{
  // static_assert(sizeof(QGradient) == 32, "tyszerr");
  QGradient* rthis = new QGradient();
  return rthis;
}

  // proto:  void QGradient::setSpread(QGradient::Spread spread);
void demth_ZN9QGradient9setSpreadENS_6SpreadE(void *that, QGradient::Spread spread)
{
  QGradient *cthat = (QGradient *)that;
   cthat->setSpread(spread);
}

int QBrushData_Class_Size()
{
  return sizeof(QBrushData);
}

int QLinearGradient_Class_Size()
{
  return sizeof(QLinearGradient);
}

// QLinearGradient(qreal, qreal, qreal, qreal)
QLinearGradient* dector_ZN15QLinearGradientC1Edddd(double xStart, double yStart, double xFinalStop, double yFinalStop)
{
  // static_assert(sizeof(QLinearGradient) == 32, "tyszerr");
  QLinearGradient* rthis = new QLinearGradient(xStart, yStart, xFinalStop, yFinalStop);
  return rthis;
}

// QLinearGradient(const class QPointF &, const class QPointF &)
QLinearGradient* dector_ZN15QLinearGradientC1ERK7QPointFS2_(const QPointF & start, const QPointF & finalStop)
{
  // static_assert(sizeof(QLinearGradient) == 32, "tyszerr");
  QLinearGradient* rthis = new QLinearGradient(start, finalStop);
  return rthis;
}

// QLinearGradient()
QLinearGradient* dector_ZN15QLinearGradientC1Ev()
{
  // static_assert(sizeof(QLinearGradient) == 32, "tyszerr");
  QLinearGradient* rthis = new QLinearGradient();
  return rthis;
}

  // proto:  void QLinearGradient::setFinalStop(qreal x, qreal y);
void demth_ZN15QLinearGradient12setFinalStopEdd(void *that, double x, double y)
{
  QLinearGradient *cthat = (QLinearGradient *)that;
   cthat->setFinalStop(x, y);
}

  // proto:  void QLinearGradient::setStart(qreal x, qreal y);
void demth_ZN15QLinearGradient8setStartEdd(void *that, double x, double y)
{
  QLinearGradient *cthat = (QLinearGradient *)that;
   cthat->setStart(x, y);
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

