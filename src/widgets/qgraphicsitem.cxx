// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtWidgets/qgraphicsitem.h
// dst-file: /src/widgets/qgraphicsitem.cxx
//

// header block begin =>
#include <qgraphicsitem.h>

extern "C" {

  // proto:  void QGraphicsPixmapItem::setOffset(qreal x, qreal y);
void _ZN19QGraphicsPixmapItem9setOffsetEdd(void *that, double x, double y)

{
  QGraphicsPixmapItem *cthat = (QGraphicsPixmapItem *)that;
   cthat->setOffset(x, y);
}

  // proto:  void QGraphicsRectItem::setRect(qreal x, qreal y, qreal w, qreal h);
void _ZN17QGraphicsRectItem7setRectEdddd(void *that, double x, double y, double w, double h)

{
  QGraphicsRectItem *cthat = (QGraphicsRectItem *)that;
   cthat->setRect(x, y, w, h);
}

  // proto:  void QGraphicsEllipseItem::setRect(qreal x, qreal y, qreal w, qreal h);
void _ZN20QGraphicsEllipseItem7setRectEdddd(void *that, double x, double y, double w, double h)

{
  QGraphicsEllipseItem *cthat = (QGraphicsEllipseItem *)that;
   cthat->setRect(x, y, w, h);
}

  // proto:  void QGraphicsLineItem::setLine(qreal x1, qreal y1, qreal x2, qreal y2);
void _ZN17QGraphicsLineItem7setLineEdddd(void *that, double x1, double y1, double x2, double y2)

{
  QGraphicsLineItem *cthat = (QGraphicsLineItem *)that;
   cthat->setLine(x1, y1, x2, y2);
}

  // proto:  QPolygonF QGraphicsItem::mapFromItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
QPolygonF* _ZNK13QGraphicsItem11mapFromItemEPKS_dddd(void *that, const QGraphicsItem * item, double x, double y, double w, double h)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapFromItem(item, x, y, w, h);
  return new QPolygonF(recret);
}

  // proto:  QPolygonF QGraphicsItem::mapFromParent(qreal x, qreal y, qreal w, qreal h);
QPolygonF* _ZNK13QGraphicsItem13mapFromParentEdddd(void *that, double x, double y, double w, double h)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapFromParent(x, y, w, h);
  return new QPolygonF(recret);
}

  // proto:  bool QGraphicsItem::isObscured(qreal x, qreal y, qreal w, qreal h);
bool _ZNK13QGraphicsItem10isObscuredEdddd(void *that, double x, double y, double w, double h)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  return cthat->isObscured(x, y, w, h);
}

  // proto:  QRectF QGraphicsItem::mapRectToItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
QRectF* _ZNK13QGraphicsItem13mapRectToItemEPKS_dddd(void *that, const QGraphicsItem * item, double x, double y, double w, double h)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapRectToItem(item, x, y, w, h);
  return new QRectF(recret);
}

  // proto:  void QGraphicsItem::ensureVisible(qreal x, qreal y, qreal w, qreal h, int xmargin, int ymargin);
void _ZN13QGraphicsItem13ensureVisibleEddddii(void *that, double x, double y, double w, double h, int xmargin, int ymargin)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
   cthat->ensureVisible(x, y, w, h, xmargin, ymargin);
}

  // proto:  QPolygonF QGraphicsItem::mapToItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
QPolygonF* _ZNK13QGraphicsItem9mapToItemEPKS_dddd(void *that, const QGraphicsItem * item, double x, double y, double w, double h)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapToItem(item, x, y, w, h);
  return new QPolygonF(recret);
}

  // proto:  QPointF QGraphicsItem::mapToItem(const QGraphicsItem * item, qreal x, qreal y);
QPointF* _ZNK13QGraphicsItem9mapToItemEPKS_dd(void *that, const QGraphicsItem * item, double x, double y)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapToItem(item, x, y);
  return new QPointF(recret);
}

  // proto:  QRectF QGraphicsItem::mapRectToParent(qreal x, qreal y, qreal w, qreal h);
QRectF* _ZNK13QGraphicsItem15mapRectToParentEdddd(void *that, double x, double y, double w, double h)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapRectToParent(x, y, w, h);
  return new QRectF(recret);
}

  // proto:  void QGraphicsItem::update(qreal x, qreal y, qreal width, qreal height);
void _ZN13QGraphicsItem6updateEdddd(void *that, double x, double y, double width, double height)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
   cthat->update(x, y, width, height);
}

  // proto:  QPointF QGraphicsItem::mapFromItem(const QGraphicsItem * item, qreal x, qreal y);
QPointF* _ZNK13QGraphicsItem11mapFromItemEPKS_dd(void *that, const QGraphicsItem * item, double x, double y)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapFromItem(item, x, y);
  return new QPointF(recret);
}

  // proto:  QPointF QGraphicsItem::mapFromParent(qreal x, qreal y);
QPointF* _ZNK13QGraphicsItem13mapFromParentEdd(void *that, double x, double y)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapFromParent(x, y);
  return new QPointF(recret);
}

  // proto:  QRectF QGraphicsItem::mapRectFromItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
QRectF* _ZNK13QGraphicsItem15mapRectFromItemEPKS_dddd(void *that, const QGraphicsItem * item, double x, double y, double w, double h)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapRectFromItem(item, x, y, w, h);
  return new QRectF(recret);
}

  // proto:  QPolygonF QGraphicsItem::mapFromScene(qreal x, qreal y, qreal w, qreal h);
QPolygonF* _ZNK13QGraphicsItem12mapFromSceneEdddd(void *that, double x, double y, double w, double h)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapFromScene(x, y, w, h);
  return new QPolygonF(recret);
}

  // proto:  QPolygonF QGraphicsItem::mapToScene(qreal x, qreal y, qreal w, qreal h);
QPolygonF* _ZNK13QGraphicsItem10mapToSceneEdddd(void *that, double x, double y, double w, double h)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapToScene(x, y, w, h);
  return new QPolygonF(recret);
}

  // proto:  QPointF QGraphicsItem::mapToScene(qreal x, qreal y);
QPointF* _ZNK13QGraphicsItem10mapToSceneEdd(void *that, double x, double y)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapToScene(x, y);
  return new QPointF(recret);
}

  // proto:  QRectF QGraphicsItem::mapRectFromScene(qreal x, qreal y, qreal w, qreal h);
QRectF* _ZNK13QGraphicsItem16mapRectFromSceneEdddd(void *that, double x, double y, double w, double h)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapRectFromScene(x, y, w, h);
  return new QRectF(recret);
}

  // proto:  void QGraphicsItem::setTransformOriginPoint(qreal ax, qreal ay);
void _ZN13QGraphicsItem23setTransformOriginPointEdd(void *that, double ax, double ay)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
   cthat->setTransformOriginPoint(ax, ay);
}

  // proto:  void QGraphicsItem::moveBy(qreal dx, qreal dy);
void _ZN13QGraphicsItem6moveByEdd(void *that, double dx, double dy)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
   cthat->moveBy(dx, dy);
}

  // proto:  QPointF QGraphicsItem::mapFromScene(qreal x, qreal y);
QPointF* _ZNK13QGraphicsItem12mapFromSceneEdd(void *that, double x, double y)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapFromScene(x, y);
  return new QPointF(recret);
}

  // proto:  QPolygonF QGraphicsItem::mapToParent(qreal x, qreal y, qreal w, qreal h);
QPolygonF* _ZNK13QGraphicsItem11mapToParentEdddd(void *that, double x, double y, double w, double h)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapToParent(x, y, w, h);
  return new QPolygonF(recret);
}

  // proto:  QRectF QGraphicsItem::mapRectFromParent(qreal x, qreal y, qreal w, qreal h);
QRectF* _ZNK13QGraphicsItem17mapRectFromParentEdddd(void *that, double x, double y, double w, double h)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapRectFromParent(x, y, w, h);
  return new QRectF(recret);
}

  // proto:  void QGraphicsItem::show();
void _ZN13QGraphicsItem4showEv(void *that)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
   cthat->show();
}

  // proto:  qreal QGraphicsItem::y();
qreal _ZNK13QGraphicsItem1yEv(void *that)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  return cthat->y();
}

  // proto:  void QGraphicsItem::setPos(qreal x, qreal y);
void _ZN13QGraphicsItem6setPosEdd(void *that, double x, double y)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
   cthat->setPos(x, y);
}

  // proto:  QPointF QGraphicsItem::mapToParent(qreal x, qreal y);
QPointF* _ZNK13QGraphicsItem11mapToParentEdd(void *that, double x, double y)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapToParent(x, y);
  return new QPointF(recret);
}

  // proto:  void QGraphicsItem::hide();
void _ZN13QGraphicsItem4hideEv(void *that)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
   cthat->hide();
}

  // proto:  QRectF QGraphicsItem::mapRectToScene(qreal x, qreal y, qreal w, qreal h);
QRectF* _ZNK13QGraphicsItem14mapRectToSceneEdddd(void *that, double x, double y, double w, double h)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapRectToScene(x, y, w, h);
  return new QRectF(recret);
}

  // proto:  qreal QGraphicsItem::x();
qreal _ZNK13QGraphicsItem1xEv(void *that)

{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  return cthat->x();
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

