#include <qglobal.h>
#include <qpoint.h>
#include <qrect.h>
#include <qpolygon.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qgraphicsitem.h
// dst-file: /src/widgets/qgraphicsitem.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qgraphicsitem.h>

extern "C" {

int QGraphicsTextItem_Class_Size()
{
  return sizeof(QGraphicsTextItem);
}

int QGraphicsPixmapItem_Class_Size()
{
  return sizeof(QGraphicsPixmapItem);
}

int QGraphicsRectItem_Class_Size()
{
  return sizeof(QGraphicsRectItem);
}

int QGraphicsEllipseItem_Class_Size()
{
  return sizeof(QGraphicsEllipseItem);
}

int QGraphicsPolygonItem_Class_Size()
{
  return sizeof(QGraphicsPolygonItem);
}

int QGraphicsPathItem_Class_Size()
{
  return sizeof(QGraphicsPathItem);
}

int QGraphicsLineItem_Class_Size()
{
  return sizeof(QGraphicsLineItem);
}

int QGraphicsItemGroup_Class_Size()
{
  return sizeof(QGraphicsItemGroup);
}

int QAbstractGraphicsShapeItem_Class_Size()
{
  return sizeof(QAbstractGraphicsShapeItem);
}

int QGraphicsItem_Class_Size()
{
  return sizeof(QGraphicsItem);
}

int QGraphicsObject_Class_Size()
{
  return sizeof(QGraphicsObject);
}

int QGraphicsSimpleTextItem_Class_Size()
{
  return sizeof(QGraphicsSimpleTextItem);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qgraphicsitem_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 832, column 17>
//   // proto:  void QGraphicsPixmapItem::setOffset(qreal x, qreal y);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsPixmapItem*)0)->setOffset(arg1, arg2);
  };
}
// _ZN19QGraphicsPixmapItem9setOffsetEdd setOffset(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 663, column 17>
//   // proto:  void QGraphicsRectItem::setRect(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsRectItem*)0)->setRect(arg1, arg2, arg3, arg4);
  };
}
// _ZN17QGraphicsRectItem7setRectEdddd setRect(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 701, column 17>
//   // proto:  void QGraphicsEllipseItem::setRect(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsEllipseItem*)0)->setRect(arg1, arg2, arg3, arg4);
  };
}
// _ZN20QGraphicsEllipseItem7setRectEdddd setRect(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 785, column 17>
//   // proto:  void QGraphicsLineItem::setLine(qreal x1, qreal y1, qreal x2, qreal y2);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsLineItem*)0)->setLine(arg1, arg2, arg3, arg4);
  };
}
// _ZN17QGraphicsLineItem7setLineEdddd setLine(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 388, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapFromItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](const QGraphicsItem * arg1, qreal arg2, qreal arg3, qreal arg4, qreal arg5) {
    ((QGraphicsItem*)0)->mapFromItem(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZNK13QGraphicsItem11mapFromItemEPKS_dddd mapFromItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 389, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapFromParent(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapFromParent(arg1, arg2, arg3, arg4);
  };
}
// _ZNK13QGraphicsItem13mapFromParentEdddd mapFromParent(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 330, column 17>
//   // proto:  bool QGraphicsItem::isObscured(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->isObscured(arg1, arg2, arg3, arg4);
  };
}
// _ZNK13QGraphicsItem10isObscuredEdddd isObscured(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 382, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectToItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](const QGraphicsItem * arg1, qreal arg2, qreal arg3, qreal arg4, qreal arg5) {
    ((QGraphicsItem*)0)->mapRectToItem(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZNK13QGraphicsItem13mapRectToItemEPKS_dddd mapRectToItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 278, column 17>
//   // proto:  void QGraphicsItem::ensureVisible(qreal x, qreal y, qreal w, qreal h, int xmargin, int ymargin);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4, int arg5, int arg6) {
    ((QGraphicsItem*)0)->ensureVisible(arg1, arg2, arg3, arg4, arg5, arg6);
  };
}
// _ZN13QGraphicsItem13ensureVisibleEddddii ensureVisible(qreal, qreal, qreal, qreal, int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 379, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapToItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](const QGraphicsItem * arg1, qreal arg2, qreal arg3, qreal arg4, qreal arg5) {
    ((QGraphicsItem*)0)->mapToItem(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZNK13QGraphicsItem9mapToItemEPKS_dddd mapToItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 376, column 20>
//   // proto:  QPointF QGraphicsItem::mapToItem(const QGraphicsItem * item, qreal x, qreal y);
if (false) {
  auto f = [](const QGraphicsItem * arg1, qreal arg2, qreal arg3) {
    ((QGraphicsItem*)0)->mapToItem(arg1, arg2, arg3);
  };
}
// _ZNK13QGraphicsItem9mapToItemEPKS_dd mapToItem(const class QGraphicsItem *, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 383, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectToParent(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapRectToParent(arg1, arg2, arg3, arg4);
  };
}
// _ZNK13QGraphicsItem15mapRectToParentEdddd mapRectToParent(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 341, column 17>
//   // proto:  void QGraphicsItem::update(qreal x, qreal y, qreal width, qreal height);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->update(arg1, arg2, arg3, arg4);
  };
}
// _ZN13QGraphicsItem6updateEdddd update(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 385, column 20>
//   // proto:  QPointF QGraphicsItem::mapFromItem(const QGraphicsItem * item, qreal x, qreal y);
if (false) {
  auto f = [](const QGraphicsItem * arg1, qreal arg2, qreal arg3) {
    ((QGraphicsItem*)0)->mapFromItem(arg1, arg2, arg3);
  };
}
// _ZNK13QGraphicsItem11mapFromItemEPKS_dd mapFromItem(const class QGraphicsItem *, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 386, column 20>
//   // proto:  QPointF QGraphicsItem::mapFromParent(qreal x, qreal y);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsItem*)0)->mapFromParent(arg1, arg2);
  };
}
// _ZNK13QGraphicsItem13mapFromParentEdd mapFromParent(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 391, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectFromItem(const QGraphicsItem * item, qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](const QGraphicsItem * arg1, qreal arg2, qreal arg3, qreal arg4, qreal arg5) {
    ((QGraphicsItem*)0)->mapRectFromItem(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZNK13QGraphicsItem15mapRectFromItemEPKS_dddd mapRectFromItem(const class QGraphicsItem *, qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 390, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapFromScene(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapFromScene(arg1, arg2, arg3, arg4);
  };
}
// _ZNK13QGraphicsItem12mapFromSceneEdddd mapFromScene(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 381, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapToScene(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapToScene(arg1, arg2, arg3, arg4);
  };
}
// _ZNK13QGraphicsItem10mapToSceneEdddd mapToScene(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 378, column 20>
//   // proto:  QPointF QGraphicsItem::mapToScene(qreal x, qreal y);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsItem*)0)->mapToScene(arg1, arg2);
  };
}
// _ZNK13QGraphicsItem10mapToSceneEdd mapToScene(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 393, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectFromScene(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapRectFromScene(arg1, arg2, arg3, arg4);
  };
}
// _ZNK13QGraphicsItem16mapRectFromSceneEdddd mapRectFromScene(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 308, column 17>
//   // proto:  void QGraphicsItem::setTransformOriginPoint(qreal ax, qreal ay);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsItem*)0)->setTransformOriginPoint(arg1, arg2);
  };
}
// _ZN13QGraphicsItem23setTransformOriginPointEdd setTransformOriginPoint(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 275, column 17>
//   // proto:  void QGraphicsItem::moveBy(qreal dx, qreal dy);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsItem*)0)->moveBy(arg1, arg2);
  };
}
// _ZN13QGraphicsItem6moveByEdd moveBy(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 387, column 20>
//   // proto:  QPointF QGraphicsItem::mapFromScene(qreal x, qreal y);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsItem*)0)->mapFromScene(arg1, arg2);
  };
}
// _ZNK13QGraphicsItem12mapFromSceneEdd mapFromScene(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 380, column 22>
//   // proto:  QPolygonF QGraphicsItem::mapToParent(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapToParent(arg1, arg2, arg3, arg4);
  };
}
// _ZNK13QGraphicsItem11mapToParentEdddd mapToParent(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 392, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectFromParent(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapRectFromParent(arg1, arg2, arg3, arg4);
  };
}
// _ZNK13QGraphicsItem17mapRectFromParentEdddd mapRectFromParent(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 210, column 17>
//   // proto:  void QGraphicsItem::show();
if (false) {
  auto f = []() {
    ((QGraphicsItem*)0)->show();
  };
}
// _ZN13QGraphicsItem4showEv show()
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 270, column 18>
//   // proto:  qreal QGraphicsItem::y();
if (false) {
  auto f = []() {
    ((QGraphicsItem*)0)->y();
  };
}
// _ZNK13QGraphicsItem1yEv y()
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 274, column 17>
//   // proto:  void QGraphicsItem::setPos(qreal x, qreal y);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsItem*)0)->setPos(arg1, arg2);
  };
}
// _ZN13QGraphicsItem6setPosEdd setPos(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 377, column 20>
//   // proto:  QPointF QGraphicsItem::mapToParent(qreal x, qreal y);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QGraphicsItem*)0)->mapToParent(arg1, arg2);
  };
}
// _ZNK13QGraphicsItem11mapToParentEdd mapToParent(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 209, column 17>
//   // proto:  void QGraphicsItem::hide();
if (false) {
  auto f = []() {
    ((QGraphicsItem*)0)->hide();
  };
}
// _ZN13QGraphicsItem4hideEv hide()
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 384, column 19>
//   // proto:  QRectF QGraphicsItem::mapRectToScene(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QGraphicsItem*)0)->mapRectToScene(arg1, arg2, arg3, arg4);
  };
}
// _ZNK13QGraphicsItem14mapRectToSceneEdddd mapRectToScene(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitem.h', line 268, column 18>
//   // proto:  qreal QGraphicsItem::x();
if (false) {
  auto f = []() {
    ((QGraphicsItem*)0)->x();
  };
}
// _ZNK13QGraphicsItem1xEv x()
} // <= main block end

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

