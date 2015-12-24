// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtGui/qbrush.h
// dst-file: /src/gui/qbrush.cxx
//

// header block begin =>
#include <qbrush.h>

extern "C" {

  // proto:  void QRadialGradient::setFocalPoint(qreal x, qreal y);
void _ZN15QRadialGradient13setFocalPointEdd(void *that, double x, double y)

{
  QRadialGradient *cthat = (QRadialGradient *)that;
   cthat->setFocalPoint(x, y);
}

  // proto:  void QRadialGradient::setCenter(qreal x, qreal y);
void _ZN15QRadialGradient9setCenterEdd(void *that, double x, double y)

{
  QRadialGradient *cthat = (QRadialGradient *)that;
   cthat->setCenter(x, y);
}

  // proto:  void QConicalGradient::setCenter(qreal x, qreal y);
void _ZN16QConicalGradient9setCenterEdd(void *that, double x, double y)

{
  QConicalGradient *cthat = (QConicalGradient *)that;
   cthat->setCenter(x, y);
}

  // proto:  QTransform QBrush::transform();
QTransform* _ZNK6QBrush9transformEv(void *that)

{
  QBrush *cthat = (QBrush *)that;
  auto recret = cthat->transform();
  return new QTransform(recret);
}

  // proto:  const QMatrix & QBrush::matrix();
const QMatrix * _ZNK6QBrush6matrixEv(void *that)

{
  QBrush *cthat = (QBrush *)that;
  return &cthat->matrix();
}

  // proto:  bool QBrush::isDetached();
bool _ZNK6QBrush10isDetachedEv(void *that)

{
  QBrush *cthat = (QBrush *)that;
  return cthat->isDetached();
}

  // proto:  void QBrush::swap(QBrush & other);
void _ZN6QBrush4swapERS_(void *that, QBrush & other)

{
  QBrush *cthat = (QBrush *)that;
   cthat->swap(other);
}

  // proto:  void QBrush::setColor(Qt::GlobalColor color);
void _ZN6QBrush8setColorEN2Qt11GlobalColorE(void *that, Qt::GlobalColor color)

{
  QBrush *cthat = (QBrush *)that;
   cthat->setColor(color);
}

  // proto:  const QColor & QBrush::color();
const QColor * _ZNK6QBrush5colorEv(void *that)

{
  QBrush *cthat = (QBrush *)that;
  return &cthat->color();
}

  // proto:  void QGradient::setSpread(QGradient::Spread spread);
void _ZN9QGradient9setSpreadENS_6SpreadE(void *that, QGradient::Spread spread)

{
  QGradient *cthat = (QGradient *)that;
   cthat->setSpread(spread);
}

  // proto:  void QLinearGradient::setFinalStop(qreal x, qreal y);
void _ZN15QLinearGradient12setFinalStopEdd(void *that, double x, double y)

{
  QLinearGradient *cthat = (QLinearGradient *)that;
   cthat->setFinalStop(x, y);
}

  // proto:  void QLinearGradient::setStart(qreal x, qreal y);
void _ZN15QLinearGradient8setStartEdd(void *that, double x, double y)

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

