// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qgraphicsscene.h
// dst-file: /src/widgets/qgraphicsscene.cxx
//

// header block begin =>
#include <qgraphicsscene.h>

extern "C" {

int QGraphicsScene_Class_Size()
{
  return sizeof(QGraphicsScene);
}

// QGraphicsScene(const class QRectF &, class QObject *)
QGraphicsScene* dector_ZN14QGraphicsSceneC1ERK6QRectFP7QObject(const QRectF & sceneRect, QObject * parent)
{
  // static_assert(sizeof(QGraphicsScene) == 32, "tyszerr");
  QGraphicsScene* rthis = new QGraphicsScene(sceneRect, parent);
  return rthis;
}

// QGraphicsScene(class QObject *)
QGraphicsScene* dector_ZN14QGraphicsSceneC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QGraphicsScene) == 32, "tyszerr");
  QGraphicsScene* rthis = new QGraphicsScene(parent);
  return rthis;
}

// ~QGraphicsScene()
void dedtor_ZN14QGraphicsSceneD0Ev(QGraphicsScene* that)
{
  QGraphicsScene* rthis = (QGraphicsScene*)that;
  delete rthis;
}

// QGraphicsScene(qreal, qreal, qreal, qreal, class QObject *)
QGraphicsScene* dector_ZN14QGraphicsSceneC1EddddP7QObject(double x, double y, double width, double height, QObject * parent)
{
  // static_assert(sizeof(QGraphicsScene) == 32, "tyszerr");
  QGraphicsScene* rthis = new QGraphicsScene(x, y, width, height, parent);
  return rthis;
}

  // proto:  QList<QGraphicsItem *> QGraphicsScene::items(qreal x, qreal y, qreal w, qreal h, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform);
QList<QGraphicsItem *> demth_ZNK14QGraphicsScene5itemsEddddN2Qt17ItemSelectionModeENS0_9SortOrderERK10QTransform(void *that, double x, double y, double w, double h, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform)
{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
  return cthat->items(x, y, w, h, mode, order, deviceTransform);
}

  // proto:  QGraphicsLineItem * QGraphicsScene::addLine(qreal x1, qreal y1, qreal x2, qreal y2, const QPen & pen);
QGraphicsLineItem * demth_ZN14QGraphicsScene7addLineEddddRK4QPen(void *that, double x1, double y1, double x2, double y2, const QPen & pen)
{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
  return cthat->addLine(x1, y1, x2, y2, pen);
}

  // proto:  QGraphicsItem * QGraphicsScene::itemAt(qreal x, qreal y, const QTransform & deviceTransform);
QGraphicsItem * demth_ZNK14QGraphicsScene6itemAtEddRK10QTransform(void *that, double x, double y, const QTransform & deviceTransform)
{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
  return cthat->itemAt(x, y, deviceTransform);
}

  // proto:  QGraphicsRectItem * QGraphicsScene::addRect(qreal x, qreal y, qreal w, qreal h, const QPen & pen, const QBrush & brush);
QGraphicsRectItem * demth_ZN14QGraphicsScene7addRectEddddRK4QPenRK6QBrush(void *that, double x, double y, double w, double h, const QPen & pen, const QBrush & brush)
{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
  return cthat->addRect(x, y, w, h, pen, brush);
}

  // proto:  void QGraphicsScene::setSceneRect(qreal x, qreal y, qreal w, qreal h);
void demth_ZN14QGraphicsScene12setSceneRectEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
   cthat->setSceneRect(x, y, w, h);
}

  // proto:  qreal QGraphicsScene::height();
qreal demth_ZNK14QGraphicsScene6heightEv(void *that)
{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
  return cthat->height();
}

  // proto:  QGraphicsEllipseItem * QGraphicsScene::addEllipse(qreal x, qreal y, qreal w, qreal h, const QPen & pen, const QBrush & brush);
QGraphicsEllipseItem * demth_ZN14QGraphicsScene10addEllipseEddddRK4QPenRK6QBrush(void *that, double x, double y, double w, double h, const QPen & pen, const QBrush & brush)
{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
  return cthat->addEllipse(x, y, w, h, pen, brush);
}

  // proto:  qreal QGraphicsScene::width();
qreal demth_ZNK14QGraphicsScene5widthEv(void *that)
{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
  return cthat->width();
}

  // proto:  void QGraphicsScene::update(qreal x, qreal y, qreal w, qreal h);
void demth_ZN14QGraphicsScene6updateEdddd(void *that, double x, double y, double w, double h)
{
  QGraphicsScene *cthat = (QGraphicsScene *)that;
   cthat->update(x, y, w, h);
}

  // proto:  void QGraphicsScene::invalidate(qreal x, qreal y, qreal w, qreal h, SceneLayers layers);
void demth_ZN14QGraphicsScene10invalidateEdddd6QFlagsINS_10SceneLayerEE(void *that, double x, double y, double w, double h, QGraphicsScene::SceneLayer layers)
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
// QGraphicsScene_SlotProxy here
class QGraphicsScene_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QGraphicsScene_SlotProxy():QObject(){}

public slots:
  // sceneRectChanged(const class QRectF &)
  void slot_proxy_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF(const QRectF & arg0);
public:
  void (*slot_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF)(const QRectF & arg0) = NULL;
public slots:
  // selectionChanged()
  void slot_proxy_func__ZN14QGraphicsScene16selectionChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScene16selectionChangedEv)() = NULL;
public slots:
  // focusItemChanged(class QGraphicsItem *, class QGraphicsItem *, Qt::FocusReason)
  void slot_proxy_func__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE(QGraphicsItem * arg0, QGraphicsItem * arg1, Qt::FocusReason arg2);
public:
  void (*slot_func__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE)(QGraphicsItem * arg0, QGraphicsItem * arg1, Qt::FocusReason arg2) = NULL;
};
#include "src/widgets/qgraphicsscene.moc"

extern "C" {
  QGraphicsScene_SlotProxy* QGraphicsScene_SlotProxy_new()
  {
    return new QGraphicsScene_SlotProxy();
  }
};

void QGraphicsScene_SlotProxy::slot_proxy_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF(const QRectF & arg0) {
  if (this->slot_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF(arg0);
  }
}
extern "C"
void* QGraphicsScene_SlotProxy_connect__ZN14QGraphicsScene16sceneRectChangedERK6QRectF(QObject* sender, void* fptr){
  auto that = new QGraphicsScene_SlotProxy();
  that->slot_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF = (decltype(that->slot_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF))fptr;
  QObject::connect((QGraphicsScene*)sender, SIGNAL(sceneRectChanged(const class QRectF &)), that, SLOT(slot_proxy_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF(const QRectF & arg0)));
  return that;
}
extern "C"
void QGraphicsScene_SlotProxy_disconnect__ZN14QGraphicsScene16sceneRectChangedERK6QRectF(QGraphicsScene_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsScene_SlotProxy::slot_proxy_func__ZN14QGraphicsScene16selectionChangedEv() {
  if (this->slot_func__ZN14QGraphicsScene16selectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScene16selectionChangedEv();
  }
}
extern "C"
void* QGraphicsScene_SlotProxy_connect__ZN14QGraphicsScene16selectionChangedEv(QObject* sender, void* fptr){
  auto that = new QGraphicsScene_SlotProxy();
  that->slot_func__ZN14QGraphicsScene16selectionChangedEv = (decltype(that->slot_func__ZN14QGraphicsScene16selectionChangedEv))fptr;
  QObject::connect((QGraphicsScene*)sender, SIGNAL(selectionChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScene16selectionChangedEv()));
  return that;
}
extern "C"
void QGraphicsScene_SlotProxy_disconnect__ZN14QGraphicsScene16selectionChangedEv(QGraphicsScene_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsScene_SlotProxy::slot_proxy_func__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE(QGraphicsItem * arg0, QGraphicsItem * arg1, Qt::FocusReason arg2) {
  if (this->slot_func__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE(arg0, arg1, arg2);
  }
}
extern "C"
void* QGraphicsScene_SlotProxy_connect__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE(QObject* sender, void* fptr){
  auto that = new QGraphicsScene_SlotProxy();
  that->slot_func__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE = (decltype(that->slot_func__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE))fptr;
  QObject::connect((QGraphicsScene*)sender, SIGNAL(focusItemChanged(class QGraphicsItem *, class QGraphicsItem *, Qt::FocusReason)), that, SLOT(slot_proxy_func__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE(QGraphicsItem * arg0, QGraphicsItem * arg1, Qt::FocusReason arg2)));
  return that;
}
extern "C"
void QGraphicsScene_SlotProxy_disconnect__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE(QGraphicsScene_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

