// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
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
// QGraphicsTextItem_SlotProxy here
class QGraphicsTextItem_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsTextItem_SlotProxy():QObject(){}

public slots:
  // linkHovered(const class QString &)
  void slot_proxy_func__ZN17QGraphicsTextItem11linkHoveredERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN17QGraphicsTextItem11linkHoveredERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // linkActivated(const class QString &)
  void slot_proxy_func__ZN17QGraphicsTextItem13linkActivatedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN17QGraphicsTextItem13linkActivatedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QGraphicsTextItem_SlotProxy* QGraphicsTextItem_SlotProxy_new()
  {
    return new QGraphicsTextItem_SlotProxy();
  }
};

void QGraphicsTextItem_SlotProxy::slot_proxy_func__ZN17QGraphicsTextItem11linkHoveredERK7QString(const QString & arg0) {
  if (this->slot_func__ZN17QGraphicsTextItem11linkHoveredERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN17QGraphicsTextItem11linkHoveredERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsTextItem_SlotProxy_connect__ZN17QGraphicsTextItem11linkHoveredERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsTextItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QGraphicsTextItem11linkHoveredERK7QString = (decltype(that->slot_func__ZN17QGraphicsTextItem11linkHoveredERK7QString))ffifptr;
  QObject::connect((QGraphicsTextItem*)sender, SIGNAL(linkHovered(const class QString &)), that, SLOT(slot_proxy_func__ZN17QGraphicsTextItem11linkHoveredERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QGraphicsTextItem_SlotProxy_disconnect__ZN17QGraphicsTextItem11linkHoveredERK7QString(QGraphicsTextItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsTextItem_SlotProxy::slot_proxy_func__ZN17QGraphicsTextItem13linkActivatedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN17QGraphicsTextItem13linkActivatedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN17QGraphicsTextItem13linkActivatedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsTextItem_SlotProxy_connect__ZN17QGraphicsTextItem13linkActivatedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsTextItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QGraphicsTextItem13linkActivatedERK7QString = (decltype(that->slot_func__ZN17QGraphicsTextItem13linkActivatedERK7QString))ffifptr;
  QObject::connect((QGraphicsTextItem*)sender, SIGNAL(linkActivated(const class QString &)), that, SLOT(slot_proxy_func__ZN17QGraphicsTextItem13linkActivatedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QGraphicsTextItem_SlotProxy_disconnect__ZN17QGraphicsTextItem13linkActivatedERK7QString(QGraphicsTextItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QGraphicsObject_SlotProxy here
class QGraphicsObject_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsObject_SlotProxy():QObject(){}

public slots:
  // yChanged()
  void slot_proxy_func__ZN15QGraphicsObject8yChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject8yChangedEv)(void* rsfptr) = NULL;
public slots:
  // opacityChanged()
  void slot_proxy_func__ZN15QGraphicsObject14opacityChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject14opacityChangedEv)(void* rsfptr) = NULL;
public slots:
  // visibleChanged()
  void slot_proxy_func__ZN15QGraphicsObject14visibleChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject14visibleChangedEv)(void* rsfptr) = NULL;
public slots:
  // childrenChanged()
  void slot_proxy_func__ZN15QGraphicsObject15childrenChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject15childrenChangedEv)(void* rsfptr) = NULL;
public slots:
  // zChanged()
  void slot_proxy_func__ZN15QGraphicsObject8zChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject8zChangedEv)(void* rsfptr) = NULL;
public slots:
  // widthChanged()
  void slot_proxy_func__ZN15QGraphicsObject12widthChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject12widthChangedEv)(void* rsfptr) = NULL;
public slots:
  // rotationChanged()
  void slot_proxy_func__ZN15QGraphicsObject15rotationChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject15rotationChangedEv)(void* rsfptr) = NULL;
public slots:
  // enabledChanged()
  void slot_proxy_func__ZN15QGraphicsObject14enabledChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject14enabledChangedEv)(void* rsfptr) = NULL;
public slots:
  // scaleChanged()
  void slot_proxy_func__ZN15QGraphicsObject12scaleChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject12scaleChangedEv)(void* rsfptr) = NULL;
public slots:
  // heightChanged()
  void slot_proxy_func__ZN15QGraphicsObject13heightChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject13heightChangedEv)(void* rsfptr) = NULL;
public slots:
  // parentChanged()
  void slot_proxy_func__ZN15QGraphicsObject13parentChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject13parentChangedEv)(void* rsfptr) = NULL;
public slots:
  // xChanged()
  void slot_proxy_func__ZN15QGraphicsObject8xChangedEv();
public:
  void (*slot_func__ZN15QGraphicsObject8xChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicsitem.moc"

extern "C" {
  QGraphicsObject_SlotProxy* QGraphicsObject_SlotProxy_new()
  {
    return new QGraphicsObject_SlotProxy();
  }
};

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject8yChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject8yChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject8yChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject8yChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject8yChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject8yChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(yChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject8yChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject8yChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject14opacityChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject14opacityChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject14opacityChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject14opacityChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject14opacityChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject14opacityChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(opacityChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject14opacityChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject14opacityChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject14visibleChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject14visibleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject14visibleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject14visibleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject14visibleChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject14visibleChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(visibleChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject14visibleChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject14visibleChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject15childrenChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject15childrenChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject15childrenChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject15childrenChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject15childrenChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject15childrenChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(childrenChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject15childrenChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject15childrenChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject8zChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject8zChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject8zChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject8zChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject8zChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject8zChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(zChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject8zChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject8zChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject12widthChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject12widthChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject12widthChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject12widthChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject12widthChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject12widthChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(widthChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject12widthChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject12widthChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject15rotationChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject15rotationChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject15rotationChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject15rotationChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject15rotationChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject15rotationChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(rotationChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject15rotationChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject15rotationChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject14enabledChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject14enabledChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject14enabledChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject14enabledChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject14enabledChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject14enabledChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(enabledChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject14enabledChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject14enabledChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject12scaleChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject12scaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject12scaleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject12scaleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject12scaleChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject12scaleChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(scaleChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject12scaleChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject12scaleChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject13heightChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject13heightChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject13heightChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject13heightChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject13heightChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject13heightChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(heightChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject13heightChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject13heightChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject13parentChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject13parentChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject13parentChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject13parentChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject13parentChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject13parentChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(parentChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject13parentChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject13parentChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsObject_SlotProxy::slot_proxy_func__ZN15QGraphicsObject8xChangedEv() {
  if (this->slot_func__ZN15QGraphicsObject8xChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsObject8xChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsObject_SlotProxy_connect__ZN15QGraphicsObject8xChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsObject8xChangedEv = (decltype(that->slot_func__ZN15QGraphicsObject8xChangedEv))ffifptr;
  QObject::connect((QGraphicsObject*)sender, SIGNAL(xChanged()), that, SLOT(slot_proxy_func__ZN15QGraphicsObject8xChangedEv()));
  return that;
}
extern "C"
void QGraphicsObject_SlotProxy_disconnect__ZN15QGraphicsObject8xChangedEv(QGraphicsObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

