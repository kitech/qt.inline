// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtWidgets/qgraphicsscene.h
// dst-file: /src/widgets/qgraphicsscene.cxx
//

// header block begin =>
#include <qgraphicsscene.h>

extern "C" {

  // proto:  QList<QGraphicsItem *> QGraphicsScene::items(qreal x, qreal y, qreal w, qreal h, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform);
QList<QGraphicsItem *> _ZNK14QGraphicsScene5itemsEddddN2Qt17ItemSelectionModeENS0_9SortOrderERK10QTransform(void *that, double x, double y, double w, double h, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform)

{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
  return cthat->items(x, y, w, h, mode, order, deviceTransform);
}

  // proto:  QGraphicsLineItem * QGraphicsScene::addLine(qreal x1, qreal y1, qreal x2, qreal y2, const QPen & pen);
QGraphicsLineItem * _ZN14QGraphicsScene7addLineEddddRK4QPen(void *that, double x1, double y1, double x2, double y2, const QPen & pen)

{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
  return cthat->addLine(x1, y1, x2, y2, pen);
}

  // proto:  QGraphicsItem * QGraphicsScene::itemAt(qreal x, qreal y, const QTransform & deviceTransform);
QGraphicsItem * _ZNK14QGraphicsScene6itemAtEddRK10QTransform(void *that, double x, double y, const QTransform & deviceTransform)

{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
  return cthat->itemAt(x, y, deviceTransform);
}

  // proto:  QGraphicsRectItem * QGraphicsScene::addRect(qreal x, qreal y, qreal w, qreal h, const QPen & pen, const QBrush & brush);
QGraphicsRectItem * _ZN14QGraphicsScene7addRectEddddRK4QPenRK6QBrush(void *that, double x, double y, double w, double h, const QPen & pen, const QBrush & brush)

{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
  return cthat->addRect(x, y, w, h, pen, brush);
}

  // proto:  void QGraphicsScene::setSceneRect(qreal x, qreal y, qreal w, qreal h);
void _ZN14QGraphicsScene12setSceneRectEdddd(void *that, double x, double y, double w, double h)

{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
   cthat->setSceneRect(x, y, w, h);
}

  // proto:  qreal QGraphicsScene::height();
qreal _ZNK14QGraphicsScene6heightEv(void *that)

{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
  return cthat->height();
}

  // proto:  QGraphicsEllipseItem * QGraphicsScene::addEllipse(qreal x, qreal y, qreal w, qreal h, const QPen & pen, const QBrush & brush);
QGraphicsEllipseItem * _ZN14QGraphicsScene10addEllipseEddddRK4QPenRK6QBrush(void *that, double x, double y, double w, double h, const QPen & pen, const QBrush & brush)

{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
  return cthat->addEllipse(x, y, w, h, pen, brush);
}

  // proto:  qreal QGraphicsScene::width();
qreal _ZNK14QGraphicsScene5widthEv(void *that)

{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
  return cthat->width();
}

  // proto:  void QGraphicsScene::update(qreal x, qreal y, qreal w, qreal h);
void _ZN14QGraphicsScene6updateEdddd(void *that, double x, double y, double w, double h)

{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
   cthat->update(x, y, w, h);
}

  // proto:  void QGraphicsScene::invalidate(qreal x, qreal y, qreal w, qreal h, SceneLayers layers);
void _ZN14QGraphicsScene10invalidateEdddd6QFlagsINS_10SceneLayerEE(void *that, double x, double y, double w, double h, QGraphicsScene::SceneLayer layers)

{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
   cthat->invalidate(x, y, w, h, layers);
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

