#include <qglobal.h>
#include <qfontdatabase.h>
#include <qlist.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qgraphicsscene.h
// dst-file: /src/widgets/qgraphicsscene.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qgraphicsscene.h>

extern "C" {

int QGraphicsScene_Class_Size()
{
  return sizeof(QGraphicsScene);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qgraphicsscene_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsscene.h', line 164, column 35>
//   // proto:  QList<QGraphicsItem *> QGraphicsScene::items(qreal x, qreal y, qreal w, qreal h, Qt::ItemSelectionMode mode, Qt::SortOrder order, const QTransform & deviceTransform);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4, Qt::ItemSelectionMode arg5, Qt::SortOrder arg6, const QTransform & arg7) {
    ((QGraphicsScene*)0)->items(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
  };
}
// _ZNK14QGraphicsScene5itemsEddddN2Qt17ItemSelectionModeENS0_9SortOrderERK10QTransform items(qreal, qreal, qreal, qreal, Qt::ItemSelectionMode, Qt::SortOrder, const class QTransform &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsscene.h', line 198, column 31>
//   // proto:  QGraphicsLineItem * QGraphicsScene::addLine(qreal x1, qreal y1, qreal x2, qreal y2, const QPen & pen);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4, const QPen & arg5) {
    ((QGraphicsScene*)0)->addLine(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN14QGraphicsScene7addLineEddddRK4QPen addLine(qreal, qreal, qreal, qreal, const class QPen &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsscene.h', line 173, column 27>
//   // proto:  QGraphicsItem * QGraphicsScene::itemAt(qreal x, qreal y, const QTransform & deviceTransform);
if (false) {
  auto f = [](qreal arg1, qreal arg2, const QTransform & arg3) {
    ((QGraphicsScene*)0)->itemAt(arg1, arg2, arg3);
  };
}
// _ZNK14QGraphicsScene6itemAtEddRK10QTransform itemAt(qreal, qreal, const class QTransform &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsscene.h', line 200, column 31>
//   // proto:  QGraphicsRectItem * QGraphicsScene::addRect(qreal x, qreal y, qreal w, qreal h, const QPen & pen, const QBrush & brush);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4, const QPen & arg5, const QBrush & arg6) {
    ((QGraphicsScene*)0)->addRect(arg1, arg2, arg3, arg4, arg5, arg6);
  };
}
// _ZN14QGraphicsScene7addRectEddddRK4QPenRK6QBrush addRect(qreal, qreal, qreal, qreal, const class QPen &, const class QBrush &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsscene.h', line 127, column 17>
//   // proto:  void QGraphicsScene::setSceneRect(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsScene*)0)->setSceneRect(arg1, arg2, arg3, arg4);
  };
}
// _ZN14QGraphicsScene12setSceneRectEdddd setSceneRect(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsscene.h', line 125, column 18>
//   // proto:  qreal QGraphicsScene::height();
if (false) {
  auto f = []() {
    ((QGraphicsScene*)0)->height();
  };
}
// _ZNK14QGraphicsScene6heightEv height()
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsscene.h', line 196, column 34>
//   // proto:  QGraphicsEllipseItem * QGraphicsScene::addEllipse(qreal x, qreal y, qreal w, qreal h, const QPen & pen, const QBrush & brush);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4, const QPen & arg5, const QBrush & arg6) {
    ((QGraphicsScene*)0)->addEllipse(arg1, arg2, arg3, arg4, arg5, arg6);
  };
}
// _ZN14QGraphicsScene10addEllipseEddddRK4QPenRK6QBrush addEllipse(qreal, qreal, qreal, qreal, const class QPen &, const class QBrush &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsscene.h', line 124, column 18>
//   // proto:  qreal QGraphicsScene::width();
if (false) {
  auto f = []() {
    ((QGraphicsScene*)0)->width();
  };
}
// _ZNK14QGraphicsScene5widthEv width()
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsscene.h', line 225, column 17>
//   // proto:  void QGraphicsScene::update(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsScene*)0)->update(arg1, arg2, arg3, arg4);
  };
}
// _ZN14QGraphicsScene6updateEdddd update(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsscene.h', line 227, column 17>
//   // proto:  void QGraphicsScene::invalidate(qreal x, qreal y, qreal w, qreal h, SceneLayers layers);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4, QGraphicsScene::SceneLayers arg5) {
    ((QGraphicsScene*)0)->invalidate(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN14QGraphicsScene10invalidateEdddd6QFlagsINS_10SceneLayerEE invalidate(qreal, qreal, qreal, qreal, SceneLayers)
} // <= main block end

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
  // selectionChanged()
  void slot_proxy_func__ZN14QGraphicsScene16selectionChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScene16selectionChangedEv)(void* rsfptr) = NULL;
public slots:
  // focusItemChanged(class QGraphicsItem *, class QGraphicsItem *, Qt::FocusReason)
  void slot_proxy_func__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE(QGraphicsItem * arg0, QGraphicsItem * arg1, Qt::FocusReason arg2);
public:
  void (*slot_func__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE)(void* rsfptr, QGraphicsItem * arg0, QGraphicsItem * arg1, Qt::FocusReason arg2) = NULL;
public slots:
  // sceneRectChanged(const class QRectF &)
  void slot_proxy_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF(const QRectF & arg0);
public:
  void (*slot_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF)(void* rsfptr, const QRectF & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicsscene.moc"

extern "C" {
  QGraphicsScene_SlotProxy* QGraphicsScene_SlotProxy_new()
  {
    return new QGraphicsScene_SlotProxy();
  }
};

void QGraphicsScene_SlotProxy::slot_proxy_func__ZN14QGraphicsScene16selectionChangedEv() {
  if (this->slot_func__ZN14QGraphicsScene16selectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScene16selectionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsScene_SlotProxy_connect__ZN14QGraphicsScene16selectionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsScene_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QGraphicsScene16selectionChangedEv = (decltype(that->slot_func__ZN14QGraphicsScene16selectionChangedEv))ffifptr;
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
    this->slot_func__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE(this->rsfptr, arg0, arg1, arg2);
  }
}
extern "C"
void* QGraphicsScene_SlotProxy_connect__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsScene_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE = (decltype(that->slot_func__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE))ffifptr;
  QObject::connect((QGraphicsScene*)sender, SIGNAL(focusItemChanged(class QGraphicsItem *, class QGraphicsItem *, Qt::FocusReason)), that, SLOT(slot_proxy_func__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE(QGraphicsItem * arg0, QGraphicsItem * arg1, Qt::FocusReason arg2)));
  return that;
}
extern "C"
void QGraphicsScene_SlotProxy_disconnect__ZN14QGraphicsScene16focusItemChangedEP13QGraphicsItemS1_N2Qt11FocusReasonE(QGraphicsScene_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsScene_SlotProxy::slot_proxy_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF(const QRectF & arg0) {
  if (this->slot_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsScene_SlotProxy_connect__ZN14QGraphicsScene16sceneRectChangedERK6QRectF(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsScene_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF = (decltype(that->slot_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF))ffifptr;
  QObject::connect((QGraphicsScene*)sender, SIGNAL(sceneRectChanged(const class QRectF &)), that, SLOT(slot_proxy_func__ZN14QGraphicsScene16sceneRectChangedERK6QRectF(const QRectF & arg0)));
  return that;
}
extern "C"
void QGraphicsScene_SlotProxy_disconnect__ZN14QGraphicsScene16sceneRectChangedERK6QRectF(QGraphicsScene_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

