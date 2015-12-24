// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtWidgets/qgraphicsview.h
// dst-file: /src/widgets/qgraphicsview.cxx
//

// header block begin =>
#include <qgraphicsview.h>

extern "C" {

  // proto:  QPointF QGraphicsView::mapToScene(int x, int y);
QPointF* _ZNK13QGraphicsView10mapToSceneEii(void *that, int x, int y)

{
  QGraphicsView *cthat = (QGraphicsView *)that;
  auto recret = cthat->mapToScene(x, y);
  return new QPointF(recret);
}

  // proto:  void QGraphicsView::setSceneRect(qreal x, qreal y, qreal w, qreal h);
void _ZN13QGraphicsView12setSceneRectEdddd(void *that, double x, double y, double w, double h)

{
  QGraphicsView *cthat = (QGraphicsView *)that;
   cthat->setSceneRect(x, y, w, h);
}

  // proto:  QGraphicsItem * QGraphicsView::itemAt(int x, int y);
QGraphicsItem * _ZNK13QGraphicsView6itemAtEii(void *that, int x, int y)

{
  QGraphicsView *cthat = (QGraphicsView *)that;
  return cthat->itemAt(x, y);
}

  // proto:  QPolygonF QGraphicsView::mapToScene(int x, int y, int w, int h);
QPolygonF* _ZNK13QGraphicsView10mapToSceneEiiii(void *that, int x, int y, int w, int h)

{
  QGraphicsView *cthat = (QGraphicsView *)that;
  auto recret = cthat->mapToScene(x, y, w, h);
  return new QPolygonF(recret);
}

  // proto:  QList<QGraphicsItem *> QGraphicsView::items(int x, int y, int w, int h, Qt::ItemSelectionMode mode);
QList<QGraphicsItem *> _ZNK13QGraphicsView5itemsEiiiiN2Qt17ItemSelectionModeE(void *that, int x, int y, int w, int h, Qt::ItemSelectionMode mode)

{
  QGraphicsView *cthat = (QGraphicsView *)that;
  return cthat->items(x, y, w, h, mode);
}

  // proto:  QPoint QGraphicsView::mapFromScene(qreal x, qreal y);
QPoint* _ZNK13QGraphicsView12mapFromSceneEdd(void *that, double x, double y)

{
  QGraphicsView *cthat = (QGraphicsView *)that;
  auto recret = cthat->mapFromScene(x, y);
  return new QPoint(recret);
}

  // proto:  QList<QGraphicsItem *> QGraphicsView::items(int x, int y);
QList<QGraphicsItem *> _ZNK13QGraphicsView5itemsEii(void *that, int x, int y)

{
  QGraphicsView *cthat = (QGraphicsView *)that;
  return cthat->items(x, y);
}

  // proto:  void QGraphicsView::centerOn(qreal x, qreal y);
void _ZN13QGraphicsView8centerOnEdd(void *that, double x, double y)

{
  QGraphicsView *cthat = (QGraphicsView *)that;
   cthat->centerOn(x, y);
}

  // proto:  void QGraphicsView::ensureVisible(qreal x, qreal y, qreal w, qreal h, int xmargin, int ymargin);
void _ZN13QGraphicsView13ensureVisibleEddddii(void *that, double x, double y, double w, double h, int xmargin, int ymargin)

{
  QGraphicsView *cthat = (QGraphicsView *)that;
   cthat->ensureVisible(x, y, w, h, xmargin, ymargin);
}

  // proto:  QPolygon QGraphicsView::mapFromScene(qreal x, qreal y, qreal w, qreal h);
QPolygon* _ZNK13QGraphicsView12mapFromSceneEdddd(void *that, double x, double y, double w, double h)

{
  QGraphicsView *cthat = (QGraphicsView *)that;
  auto recret = cthat->mapFromScene(x, y, w, h);
  return new QPolygon(recret);
}

  // proto:  void QGraphicsView::fitInView(qreal x, qreal y, qreal w, qreal h, Qt::AspectRatioMode aspectRadioMode);
void _ZN13QGraphicsView9fitInViewEddddN2Qt15AspectRatioModeE(void *that, double x, double y, double w, double h, Qt::AspectRatioMode aspectRadioMode)

{
  QGraphicsView *cthat = (QGraphicsView *)that;
   cthat->fitInView(x, y, w, h, aspectRadioMode);
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

