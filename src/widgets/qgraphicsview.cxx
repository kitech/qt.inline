#include <qfontdatabase.h>
#include <qlist.h>
#include <qpolygon.h>
#include <qpoint.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qgraphicsview.h
// dst-file: /src/widgets/qgraphicsview.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qgraphicsview.h>

extern "C" {

int QGraphicsView_Class_Size()
{
  return sizeof(QGraphicsView);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qgraphicsview_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 206, column 20>
//   // proto:  QPointF QGraphicsView::mapToScene(int x, int y);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QGraphicsView*)0)->mapToScene(arg1, arg2);
  };
}
// _ZNK13QGraphicsView10mapToSceneEii mapToScene(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 158, column 17>
//   // proto:  void QGraphicsView::setSceneRect(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsView*)0)->setSceneRect(arg1, arg2, arg3, arg4);
  };
}
// _ZN13QGraphicsView12setSceneRectEdddd setSceneRect(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 196, column 27>
//   // proto:  QGraphicsItem * QGraphicsView::itemAt(int x, int y);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QGraphicsView*)0)->itemAt(arg1, arg2);
  };
}
// _ZNK13QGraphicsView6itemAtEii itemAt(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 207, column 22>
//   // proto:  QPolygonF QGraphicsView::mapToScene(int x, int y, int w, int h);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    ((QGraphicsView*)0)->mapToScene(arg1, arg2, arg3, arg4);
  };
}
// _ZNK13QGraphicsView10mapToSceneEiiii mapToScene(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 192, column 35>
//   // proto:  QList<QGraphicsItem *> QGraphicsView::items(int x, int y, int w, int h, Qt::ItemSelectionMode mode);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4, Qt::ItemSelectionMode arg5) {
    ((QGraphicsView*)0)->items(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZNK13QGraphicsView5itemsEiiiiN2Qt17ItemSelectionModeE items(int, int, int, int, Qt::ItemSelectionMode)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 208, column 19>
//   // proto:  QPoint QGraphicsView::mapFromScene(qreal x, qreal y);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsView*)0)->mapFromScene(arg1, arg2);
  };
}
// _ZNK13QGraphicsView12mapFromSceneEdd mapFromScene(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 190, column 35>
//   // proto:  QList<QGraphicsItem *> QGraphicsView::items(int x, int y);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QGraphicsView*)0)->items(arg1, arg2);
  };
}
// _ZNK13QGraphicsView5itemsEii items(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 174, column 17>
//   // proto:  void QGraphicsView::centerOn(qreal x, qreal y);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsView*)0)->centerOn(arg1, arg2);
  };
}
// _ZN13QGraphicsView8centerOnEdd centerOn(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 177, column 17>
//   // proto:  void QGraphicsView::ensureVisible(qreal x, qreal y, qreal w, qreal h, int xmargin, int ymargin);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4, int arg5, int arg6) {
    ((QGraphicsView*)0)->ensureVisible(arg1, arg2, arg3, arg4, arg5, arg6);
  };
}
// _ZN13QGraphicsView13ensureVisibleEddddii ensureVisible(qreal, qreal, qreal, qreal, int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 209, column 21>
//   // proto:  QPolygon QGraphicsView::mapFromScene(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsView*)0)->mapFromScene(arg1, arg2, arg3, arg4);
  };
}
// _ZNK13QGraphicsView12mapFromSceneEdddd mapFromScene(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsview.h', line 180, column 17>
//   // proto:  void QGraphicsView::fitInView(qreal x, qreal y, qreal w, qreal h, Qt::AspectRatioMode aspectRadioMode);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4, Qt::AspectRatioMode arg5) {
    ((QGraphicsView*)0)->fitInView(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN13QGraphicsView9fitInViewEddddN2Qt15AspectRatioModeE fitInView(qreal, qreal, qreal, qreal, Qt::AspectRatioMode)
} // <= main block end

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

