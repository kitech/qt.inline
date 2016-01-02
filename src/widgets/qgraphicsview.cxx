// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qgraphicsview.h
// dst-file: /src/widgets/qgraphicsview.cxx
//

// header block begin =>
#include <qgraphicsview.h>

extern "C" {

int QGraphicsView_Class_Size()
{
  return sizeof(QGraphicsView);
}

// QGraphicsView(class QGraphicsScene *, class QWidget *)
QGraphicsView* dector_ZN13QGraphicsViewC1EP14QGraphicsSceneP7QWidget(QGraphicsScene * scene, QWidget * parent)
{
  // static_assert(sizeof(QGraphicsView) == 32, "tyszerr");
  QGraphicsView* rthis = new QGraphicsView(scene, parent);
  return rthis;
}

// QGraphicsView(class QWidget *)
QGraphicsView* dector_ZN13QGraphicsViewC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QGraphicsView) == 32, "tyszerr");
  QGraphicsView* rthis = new QGraphicsView(parent);
  return rthis;
}

// ~QGraphicsView()
void dedtor_ZN13QGraphicsViewD0Ev(QGraphicsView* that)
{
  QGraphicsView* rthis = (QGraphicsView*)that;
  delete rthis;
}

  // proto:  QPointF QGraphicsView::mapToScene(int x, int y);
QPointF* demth_ZNK13QGraphicsView10mapToSceneEii(void *that, int x, int y)
{
  QGraphicsView *cthat = (QGraphicsView *)that;
  auto recret = cthat->mapToScene(x, y);
  return new QPointF(recret);
}

  // proto:  void QGraphicsView::setSceneRect(qreal x, qreal y, qreal w, qreal h);
void demth_ZN13QGraphicsView12setSceneRectEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsView *cthat = (QGraphicsView *)that;
   cthat->setSceneRect(x, y, w, h);
}

  // proto:  QGraphicsItem * QGraphicsView::itemAt(int x, int y);
QGraphicsItem * demth_ZNK13QGraphicsView6itemAtEii(void *that, int x, int y)
{
  QGraphicsView *cthat = (QGraphicsView *)that;
  return cthat->itemAt(x, y);
}

  // proto:  QPolygonF QGraphicsView::mapToScene(int x, int y, int w, int h);
QPolygonF* demth_ZNK13QGraphicsView10mapToSceneEiiii(void *that, int x, int y, int w, int h)
{
  QGraphicsView *cthat = (QGraphicsView *)that;
  auto recret = cthat->mapToScene(x, y, w, h);
  return new QPolygonF(recret);
}

  // proto:  QList<QGraphicsItem *> QGraphicsView::items(int x, int y, int w, int h, Qt::ItemSelectionMode mode);
QList<QGraphicsItem *> demth_ZNK13QGraphicsView5itemsEiiiiN2Qt17ItemSelectionModeE(void *that, int x, int y, int w, int h, Qt::ItemSelectionMode mode)
{
  QGraphicsView *cthat = (QGraphicsView *)that;
  return cthat->items(x, y, w, h, mode);
}

  // proto:  QPoint QGraphicsView::mapFromScene(qreal x, qreal y);
QPoint* demth_ZNK13QGraphicsView12mapFromSceneEdd(void *that, double x, double y)
{
  QGraphicsView *cthat = (QGraphicsView *)that;
  auto recret = cthat->mapFromScene(x, y);
  return new QPoint(recret);
}

  // proto:  QList<QGraphicsItem *> QGraphicsView::items(int x, int y);
QList<QGraphicsItem *> demth_ZNK13QGraphicsView5itemsEii(void *that, int x, int y)
{
  QGraphicsView *cthat = (QGraphicsView *)that;
  return cthat->items(x, y);
}

  // proto:  void QGraphicsView::centerOn(qreal x, qreal y);
void demth_ZN13QGraphicsView8centerOnEdd(void *that, double x, double y)
{
  QGraphicsView *cthat = (QGraphicsView *)that;
   cthat->centerOn(x, y);
}

  // proto:  void QGraphicsView::ensureVisible(qreal x, qreal y, qreal w, qreal h, int xmargin, int ymargin);
void demth_ZN13QGraphicsView13ensureVisibleEddddii(void *that, double x, double y, double w, double h, int xmargin, int ymargin)
{
  QGraphicsView *cthat = (QGraphicsView *)that;
   cthat->ensureVisible(x, y, w, h, xmargin, ymargin);
}

  // proto:  QPolygon QGraphicsView::mapFromScene(qreal x, qreal y, qreal w, qreal h);
QPolygon* demth_ZNK13QGraphicsView12mapFromSceneEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsView *cthat = (QGraphicsView *)that;
  auto recret = cthat->mapFromScene(x, y, w, h);
  return new QPolygon(recret);
}

  // proto:  void QGraphicsView::fitInView(qreal x, qreal y, qreal w, qreal h, Qt::AspectRatioMode aspectRadioMode);
void demth_ZN13QGraphicsView9fitInViewEddddN2Qt15AspectRatioModeE(void *that, double x, double y, double w, double h, Qt::AspectRatioMode aspectRadioMode)
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
// QGraphicsView_SlotProxy here
class QGraphicsView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsView_SlotProxy():QObject(){}

public slots:
  // rubberBandChanged(class QRect, class QPointF, class QPointF)
  void slot_proxy_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_(QRect arg0, QPointF arg1, QPointF arg2);
public:
  void (*slot_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_)(void* rsfptr, QRect arg0, QPointF arg1, QPointF arg2) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicsview.moc"

extern "C" {
  QGraphicsView_SlotProxy* QGraphicsView_SlotProxy_new()
  {
    return new QGraphicsView_SlotProxy();
  }
};

void QGraphicsView_SlotProxy::slot_proxy_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_(QRect arg0, QPointF arg1, QPointF arg2) {
  if (this->slot_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_ != NULL) {
    // do smth...
    this->slot_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_(this->rsfptr, arg0, arg1, arg2);
  }
}
extern "C"
void* QGraphicsView_SlotProxy_connect__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_ = (decltype(that->slot_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_))ffifptr;
  QObject::connect((QGraphicsView*)sender, SIGNAL(rubberBandChanged(class QRect, class QPointF, class QPointF)), that, SLOT(slot_proxy_func__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_(QRect arg0, QPointF arg1, QPointF arg2)));
  return that;
}
extern "C"
void QGraphicsView_SlotProxy_disconnect__ZN13QGraphicsView17rubberBandChangedE5QRect7QPointFS1_(QGraphicsView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

