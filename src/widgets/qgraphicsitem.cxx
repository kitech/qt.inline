// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtWidgets/qgraphicsitem.h
// dst-file: /src/widgets/qgraphicsitem.cxx
//

// header block begin =>
#include <qgraphicsitem.h>

extern "C" {

int QGraphicsTextItem_Class_Size()
{
  return sizeof(QGraphicsTextItem);
}

// QGraphicsTextItem(const class QString &, class QGraphicsItem *)
QGraphicsTextItem* dector_ZN17QGraphicsTextItemC1ERK7QStringP13QGraphicsItem(const QString & text, QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsTextItem) == 32, "tyszerr");
  QGraphicsTextItem* rthis = new QGraphicsTextItem(text, parent);
  return rthis;
}

// ~QGraphicsTextItem()
void dedtor_ZN17QGraphicsTextItemD0Ev(QGraphicsTextItem* that)
{
  QGraphicsTextItem* rthis = (QGraphicsTextItem*)that;
  delete rthis;
}

// QGraphicsTextItem(class QGraphicsItem *)
QGraphicsTextItem* dector_ZN17QGraphicsTextItemC1EP13QGraphicsItem(QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsTextItem) == 32, "tyszerr");
  QGraphicsTextItem* rthis = new QGraphicsTextItem(parent);
  return rthis;
}

int QGraphicsPixmapItem_Class_Size()
{
  return sizeof(QGraphicsPixmapItem);
}

// QGraphicsPixmapItem(class QGraphicsItem *)
QGraphicsPixmapItem* dector_ZN19QGraphicsPixmapItemC1EP13QGraphicsItem(QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsPixmapItem) == 32, "tyszerr");
  QGraphicsPixmapItem* rthis = new QGraphicsPixmapItem(parent);
  return rthis;
}

// QGraphicsPixmapItem(const class QPixmap &, class QGraphicsItem *)
QGraphicsPixmapItem* dector_ZN19QGraphicsPixmapItemC1ERK7QPixmapP13QGraphicsItem(const QPixmap & pixmap, QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsPixmapItem) == 32, "tyszerr");
  QGraphicsPixmapItem* rthis = new QGraphicsPixmapItem(pixmap, parent);
  return rthis;
}

// ~QGraphicsPixmapItem()
void dedtor_ZN19QGraphicsPixmapItemD0Ev(QGraphicsPixmapItem* that)
{
  QGraphicsPixmapItem* rthis = (QGraphicsPixmapItem*)that;
  delete rthis;
}

  // proto:  void QGraphicsPixmapItem::setOffset(qreal x, qreal y);
void demth_ZN19QGraphicsPixmapItem9setOffsetEdd(void *that, double x, double y)
{
  QGraphicsPixmapItem *cthat = (QGraphicsPixmapItem *)that;
   cthat->setOffset(x, y);
}

int QGraphicsRectItem_Class_Size()
{
  return sizeof(QGraphicsRectItem);
}

// ~QGraphicsRectItem()
void dedtor_ZN17QGraphicsRectItemD0Ev(QGraphicsRectItem* that)
{
  QGraphicsRectItem* rthis = (QGraphicsRectItem*)that;
  delete rthis;
}

// QGraphicsRectItem(const class QRectF &, class QGraphicsItem *)
QGraphicsRectItem* dector_ZN17QGraphicsRectItemC1ERK6QRectFP13QGraphicsItem(const QRectF & rect, QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsRectItem) == 32, "tyszerr");
  QGraphicsRectItem* rthis = new QGraphicsRectItem(rect, parent);
  return rthis;
}

// QGraphicsRectItem(class QGraphicsItem *)
QGraphicsRectItem* dector_ZN17QGraphicsRectItemC1EP13QGraphicsItem(QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsRectItem) == 32, "tyszerr");
  QGraphicsRectItem* rthis = new QGraphicsRectItem(parent);
  return rthis;
}

// QGraphicsRectItem(qreal, qreal, qreal, qreal, class QGraphicsItem *)
QGraphicsRectItem* dector_ZN17QGraphicsRectItemC1EddddP13QGraphicsItem(double x, double y, double w, double h, QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsRectItem) == 32, "tyszerr");
  QGraphicsRectItem* rthis = new QGraphicsRectItem(x, y, w, h, parent);
  return rthis;
}

  // proto:  void QGraphicsRectItem::setRect(qreal x, qreal y, qreal w, qreal h);
void demth_ZN17QGraphicsRectItem7setRectEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsRectItem *cthat = (QGraphicsRectItem *)that;
   cthat->setRect(x, y, w, h);
}

int QGraphicsEllipseItem_Class_Size()
{
  return sizeof(QGraphicsEllipseItem);
}

// QGraphicsEllipseItem(const class QRectF &, class QGraphicsItem *)
QGraphicsEllipseItem* dector_ZN20QGraphicsEllipseItemC1ERK6QRectFP13QGraphicsItem(const QRectF & rect, QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsEllipseItem) == 32, "tyszerr");
  QGraphicsEllipseItem* rthis = new QGraphicsEllipseItem(rect, parent);
  return rthis;
}

// QGraphicsEllipseItem(qreal, qreal, qreal, qreal, class QGraphicsItem *)
QGraphicsEllipseItem* dector_ZN20QGraphicsEllipseItemC1EddddP13QGraphicsItem(double x, double y, double w, double h, QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsEllipseItem) == 32, "tyszerr");
  QGraphicsEllipseItem* rthis = new QGraphicsEllipseItem(x, y, w, h, parent);
  return rthis;
}

// ~QGraphicsEllipseItem()
void dedtor_ZN20QGraphicsEllipseItemD0Ev(QGraphicsEllipseItem* that)
{
  QGraphicsEllipseItem* rthis = (QGraphicsEllipseItem*)that;
  delete rthis;
}

// QGraphicsEllipseItem(class QGraphicsItem *)
QGraphicsEllipseItem* dector_ZN20QGraphicsEllipseItemC1EP13QGraphicsItem(QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsEllipseItem) == 32, "tyszerr");
  QGraphicsEllipseItem* rthis = new QGraphicsEllipseItem(parent);
  return rthis;
}

  // proto:  void QGraphicsEllipseItem::setRect(qreal x, qreal y, qreal w, qreal h);
void demth_ZN20QGraphicsEllipseItem7setRectEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsEllipseItem *cthat = (QGraphicsEllipseItem *)that;
   cthat->setRect(x, y, w, h);
}

int QGraphicsPolygonItem_Class_Size()
{
  return sizeof(QGraphicsPolygonItem);
}

// QGraphicsPolygonItem(class QGraphicsItem *)
QGraphicsPolygonItem* dector_ZN20QGraphicsPolygonItemC1EP13QGraphicsItem(QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsPolygonItem) == 32, "tyszerr");
  QGraphicsPolygonItem* rthis = new QGraphicsPolygonItem(parent);
  return rthis;
}

// ~QGraphicsPolygonItem()
void dedtor_ZN20QGraphicsPolygonItemD0Ev(QGraphicsPolygonItem* that)
{
  QGraphicsPolygonItem* rthis = (QGraphicsPolygonItem*)that;
  delete rthis;
}

// QGraphicsPolygonItem(const class QPolygonF &, class QGraphicsItem *)
QGraphicsPolygonItem* dector_ZN20QGraphicsPolygonItemC1ERK9QPolygonFP13QGraphicsItem(const QPolygonF & polygon, QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsPolygonItem) == 32, "tyszerr");
  QGraphicsPolygonItem* rthis = new QGraphicsPolygonItem(polygon, parent);
  return rthis;
}

int QGraphicsPathItem_Class_Size()
{
  return sizeof(QGraphicsPathItem);
}

// QGraphicsPathItem(const class QPainterPath &, class QGraphicsItem *)
QGraphicsPathItem* dector_ZN17QGraphicsPathItemC1ERK12QPainterPathP13QGraphicsItem(const QPainterPath & path, QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsPathItem) == 32, "tyszerr");
  QGraphicsPathItem* rthis = new QGraphicsPathItem(path, parent);
  return rthis;
}

// ~QGraphicsPathItem()
void dedtor_ZN17QGraphicsPathItemD0Ev(QGraphicsPathItem* that)
{
  QGraphicsPathItem* rthis = (QGraphicsPathItem*)that;
  delete rthis;
}

// QGraphicsPathItem(class QGraphicsItem *)
QGraphicsPathItem* dector_ZN17QGraphicsPathItemC1EP13QGraphicsItem(QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsPathItem) == 32, "tyszerr");
  QGraphicsPathItem* rthis = new QGraphicsPathItem(parent);
  return rthis;
}

int QGraphicsLineItem_Class_Size()
{
  return sizeof(QGraphicsLineItem);
}

// QGraphicsLineItem(class QGraphicsItem *)
QGraphicsLineItem* dector_ZN17QGraphicsLineItemC1EP13QGraphicsItem(QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsLineItem) == 32, "tyszerr");
  QGraphicsLineItem* rthis = new QGraphicsLineItem(parent);
  return rthis;
}

// QGraphicsLineItem(const class QLineF &, class QGraphicsItem *)
QGraphicsLineItem* dector_ZN17QGraphicsLineItemC1ERK6QLineFP13QGraphicsItem(const QLineF & line, QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsLineItem) == 32, "tyszerr");
  QGraphicsLineItem* rthis = new QGraphicsLineItem(line, parent);
  return rthis;
}

// QGraphicsLineItem(qreal, qreal, qreal, qreal, class QGraphicsItem *)
QGraphicsLineItem* dector_ZN17QGraphicsLineItemC1EddddP13QGraphicsItem(double x1, double y1, double x2, double y2, QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsLineItem) == 32, "tyszerr");
  QGraphicsLineItem* rthis = new QGraphicsLineItem(x1, y1, x2, y2, parent);
  return rthis;
}

// ~QGraphicsLineItem()
void dedtor_ZN17QGraphicsLineItemD0Ev(QGraphicsLineItem* that)
{
  QGraphicsLineItem* rthis = (QGraphicsLineItem*)that;
  delete rthis;
}

  // proto:  void QGraphicsLineItem::setLine(qreal x1, qreal y1, qreal x2, qreal y2);
void demth_ZN17QGraphicsLineItem7setLineEdddd(void *that, double x1, double y1, double x2, double y2)
{
  QGraphicsLineItem *cthat = (QGraphicsLineItem *)that;
   cthat->setLine(x1, y1, x2, y2);
}

int QGraphicsItemGroup_Class_Size()
{
  return sizeof(QGraphicsItemGroup);
}

// ~QGraphicsItemGroup()
void dedtor_ZN18QGraphicsItemGroupD0Ev(QGraphicsItemGroup* that)
{
  QGraphicsItemGroup* rthis = (QGraphicsItemGroup*)that;
  delete rthis;
}

// QGraphicsItemGroup(class QGraphicsItem *)
QGraphicsItemGroup* dector_ZN18QGraphicsItemGroupC1EP13QGraphicsItem(QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsItemGroup) == 32, "tyszerr");
  QGraphicsItemGroup* rthis = new QGraphicsItemGroup(parent);
  return rthis;
}

int QAbstractGraphicsShapeItem_Class_Size()
{
  return sizeof(QAbstractGraphicsShapeItem);
}

int QGraphicsItem_Class_Size()
{
  return sizeof(QGraphicsItem);
}

  // proto:  QPolygonF QGraphicsItem::mapFromItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
QPolygonF* demth_ZNK13QGraphicsItem11mapFromItemEPKS_dddd(void *that, const QGraphicsItem * item, double x, double y, double w, double h)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapFromItem(item, x, y, w, h);
  return new QPolygonF(recret);
}

  // proto:  QPolygonF QGraphicsItem::mapFromParent(qreal x, qreal y, qreal w, qreal h);
QPolygonF* demth_ZNK13QGraphicsItem13mapFromParentEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapFromParent(x, y, w, h);
  return new QPolygonF(recret);
}

  // proto:  bool QGraphicsItem::isObscured(qreal x, qreal y, qreal w, qreal h);
bool demth_ZNK13QGraphicsItem10isObscuredEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  return cthat->isObscured(x, y, w, h);
}

  // proto:  QRectF QGraphicsItem::mapRectToItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
QRectF* demth_ZNK13QGraphicsItem13mapRectToItemEPKS_dddd(void *that, const QGraphicsItem * item, double x, double y, double w, double h)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapRectToItem(item, x, y, w, h);
  return new QRectF(recret);
}

  // proto:  void QGraphicsItem::ensureVisible(qreal x, qreal y, qreal w, qreal h, int xmargin, int ymargin);
void demth_ZN13QGraphicsItem13ensureVisibleEddddii(void *that, double x, double y, double w, double h, int xmargin, int ymargin)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
   cthat->ensureVisible(x, y, w, h, xmargin, ymargin);
}

  // proto:  QPolygonF QGraphicsItem::mapToItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
QPolygonF* demth_ZNK13QGraphicsItem9mapToItemEPKS_dddd(void *that, const QGraphicsItem * item, double x, double y, double w, double h)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapToItem(item, x, y, w, h);
  return new QPolygonF(recret);
}

  // proto:  QPointF QGraphicsItem::mapToItem(const QGraphicsItem * item, qreal x, qreal y);
QPointF* demth_ZNK13QGraphicsItem9mapToItemEPKS_dd(void *that, const QGraphicsItem * item, double x, double y)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapToItem(item, x, y);
  return new QPointF(recret);
}

  // proto:  QRectF QGraphicsItem::mapRectToParent(qreal x, qreal y, qreal w, qreal h);
QRectF* demth_ZNK13QGraphicsItem15mapRectToParentEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapRectToParent(x, y, w, h);
  return new QRectF(recret);
}

  // proto:  void QGraphicsItem::update(qreal x, qreal y, qreal width, qreal height);
void demth_ZN13QGraphicsItem6updateEdddd(void *that, double x, double y, double width, double height)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
   cthat->update(x, y, width, height);
}

  // proto:  QPointF QGraphicsItem::mapFromItem(const QGraphicsItem * item, qreal x, qreal y);
QPointF* demth_ZNK13QGraphicsItem11mapFromItemEPKS_dd(void *that, const QGraphicsItem * item, double x, double y)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapFromItem(item, x, y);
  return new QPointF(recret);
}

  // proto:  QPointF QGraphicsItem::mapFromParent(qreal x, qreal y);
QPointF* demth_ZNK13QGraphicsItem13mapFromParentEdd(void *that, double x, double y)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapFromParent(x, y);
  return new QPointF(recret);
}

  // proto:  QRectF QGraphicsItem::mapRectFromItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
QRectF* demth_ZNK13QGraphicsItem15mapRectFromItemEPKS_dddd(void *that, const QGraphicsItem * item, double x, double y, double w, double h)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapRectFromItem(item, x, y, w, h);
  return new QRectF(recret);
}

  // proto:  QPolygonF QGraphicsItem::mapFromScene(qreal x, qreal y, qreal w, qreal h);
QPolygonF* demth_ZNK13QGraphicsItem12mapFromSceneEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapFromScene(x, y, w, h);
  return new QPolygonF(recret);
}

  // proto:  QPolygonF QGraphicsItem::mapToScene(qreal x, qreal y, qreal w, qreal h);
QPolygonF* demth_ZNK13QGraphicsItem10mapToSceneEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapToScene(x, y, w, h);
  return new QPolygonF(recret);
}

  // proto:  QPointF QGraphicsItem::mapToScene(qreal x, qreal y);
QPointF* demth_ZNK13QGraphicsItem10mapToSceneEdd(void *that, double x, double y)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapToScene(x, y);
  return new QPointF(recret);
}

  // proto:  QRectF QGraphicsItem::mapRectFromScene(qreal x, qreal y, qreal w, qreal h);
QRectF* demth_ZNK13QGraphicsItem16mapRectFromSceneEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapRectFromScene(x, y, w, h);
  return new QRectF(recret);
}

  // proto:  void QGraphicsItem::setTransformOriginPoint(qreal ax, qreal ay);
void demth_ZN13QGraphicsItem23setTransformOriginPointEdd(void *that, double ax, double ay)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
   cthat->setTransformOriginPoint(ax, ay);
}

  // proto:  void QGraphicsItem::moveBy(qreal dx, qreal dy);
void demth_ZN13QGraphicsItem6moveByEdd(void *that, double dx, double dy)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
   cthat->moveBy(dx, dy);
}

  // proto:  QPointF QGraphicsItem::mapFromScene(qreal x, qreal y);
QPointF* demth_ZNK13QGraphicsItem12mapFromSceneEdd(void *that, double x, double y)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapFromScene(x, y);
  return new QPointF(recret);
}

  // proto:  QPolygonF QGraphicsItem::mapToParent(qreal x, qreal y, qreal w, qreal h);
QPolygonF* demth_ZNK13QGraphicsItem11mapToParentEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapToParent(x, y, w, h);
  return new QPolygonF(recret);
}

  // proto:  QRectF QGraphicsItem::mapRectFromParent(qreal x, qreal y, qreal w, qreal h);
QRectF* demth_ZNK13QGraphicsItem17mapRectFromParentEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapRectFromParent(x, y, w, h);
  return new QRectF(recret);
}

  // proto:  void QGraphicsItem::show();
void demth_ZN13QGraphicsItem4showEv(void *that)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
   cthat->show();
}

  // proto:  qreal QGraphicsItem::y();
qreal demth_ZNK13QGraphicsItem1yEv(void *that)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  return cthat->y();
}

  // proto:  void QGraphicsItem::setPos(qreal x, qreal y);
void demth_ZN13QGraphicsItem6setPosEdd(void *that, double x, double y)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
   cthat->setPos(x, y);
}

  // proto:  QPointF QGraphicsItem::mapToParent(qreal x, qreal y);
QPointF* demth_ZNK13QGraphicsItem11mapToParentEdd(void *that, double x, double y)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapToParent(x, y);
  return new QPointF(recret);
}

  // proto:  void QGraphicsItem::hide();
void demth_ZN13QGraphicsItem4hideEv(void *that)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
   cthat->hide();
}

  // proto:  QRectF QGraphicsItem::mapRectToScene(qreal x, qreal y, qreal w, qreal h);
QRectF* demth_ZNK13QGraphicsItem14mapRectToSceneEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  auto recret = cthat->mapRectToScene(x, y, w, h);
  return new QRectF(recret);
}

  // proto:  qreal QGraphicsItem::x();
qreal demth_ZNK13QGraphicsItem1xEv(void *that)
{
  QGraphicsItem *cthat = (QGraphicsItem *)that;
  return cthat->x();
}

int QGraphicsObject_Class_Size()
{
  return sizeof(QGraphicsObject);
}

// ~QGraphicsObject()
void dedtor_ZN15QGraphicsObjectD0Ev(QGraphicsObject* that)
{
  QGraphicsObject* rthis = (QGraphicsObject*)that;
  delete rthis;
}

int QGraphicsSimpleTextItem_Class_Size()
{
  return sizeof(QGraphicsSimpleTextItem);
}

// ~QGraphicsSimpleTextItem()
void dedtor_ZN23QGraphicsSimpleTextItemD0Ev(QGraphicsSimpleTextItem* that)
{
  QGraphicsSimpleTextItem* rthis = (QGraphicsSimpleTextItem*)that;
  delete rthis;
}

// QGraphicsSimpleTextItem(const class QString &, class QGraphicsItem *)
QGraphicsSimpleTextItem* dector_ZN23QGraphicsSimpleTextItemC1ERK7QStringP13QGraphicsItem(const QString & text, QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsSimpleTextItem) == 32, "tyszerr");
  QGraphicsSimpleTextItem* rthis = new QGraphicsSimpleTextItem(text, parent);
  return rthis;
}

// QGraphicsSimpleTextItem(class QGraphicsItem *)
QGraphicsSimpleTextItem* dector_ZN23QGraphicsSimpleTextItemC1EP13QGraphicsItem(QGraphicsItem * parent)
{
  // static_assert(sizeof(QGraphicsSimpleTextItem) == 32, "tyszerr");
  QGraphicsSimpleTextItem* rthis = new QGraphicsSimpleTextItem(parent);
  return rthis;
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

