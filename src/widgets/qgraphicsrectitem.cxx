//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>

// QGraphicsRectItem is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:683
// [1] bool supportsExtension(enum QGraphicsItem::Extension)
extern "C"
void* callback_ZNK17QGraphicsRectItem17supportsExtensionEN13QGraphicsItem9ExtensionE = 0;
extern "C" void set_callback_ZNK17QGraphicsRectItem17supportsExtensionEN13QGraphicsItem9ExtensionE(void*cbfn)
{ callback_ZNK17QGraphicsRectItem17supportsExtensionEN13QGraphicsItem9ExtensionE = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:684
// [-2] void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
extern "C"
void* callback_ZN17QGraphicsRectItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant = 0;
extern "C" void set_callback_ZN17QGraphicsRectItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(void*cbfn)
{ callback_ZN17QGraphicsRectItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:685
// [16] QVariant extension(const class QVariant &)
extern "C"
void* callback_ZNK17QGraphicsRectItem9extensionERK8QVariant = 0;
extern "C" void set_callback_ZNK17QGraphicsRectItem9extensionERK8QVariant(void*cbfn)
{ callback_ZNK17QGraphicsRectItem9extensionERK8QVariant = cbfn; }

class MyQGraphicsRectItem : public QGraphicsRectItem {
public:
MyQGraphicsRectItem(QGraphicsItem * parent) : QGraphicsRectItem(parent) {}
MyQGraphicsRectItem(const QRectF & rect, QGraphicsItem * parent) : QGraphicsRectItem(rect, parent) {}
MyQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent) : QGraphicsRectItem(x, y, w, h, parent) {}
// bool supportsExtension(enum QGraphicsItem::Extension)
// bool supportsExtension(enum QGraphicsItem::Extension)
virtual bool supportsExtension(QGraphicsItem::Extension extension) {
  if (callback_ZNK17QGraphicsRectItem17supportsExtensionEN13QGraphicsItem9ExtensionE != 0) {
  // callback_ZNK17QGraphicsRectItem17supportsExtensionEN13QGraphicsItem9ExtensionE(extension);
}}
// void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
// void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
virtual void setExtension(QGraphicsItem::Extension extension, const QVariant & variant) {
  if (callback_ZN17QGraphicsRectItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant != 0) {
  // callback_ZN17QGraphicsRectItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(extension, variant);
}}
// QVariant extension(const class QVariant &)
// QVariant extension(const class QVariant &)
virtual QVariant extension(const QVariant & variant) {
  if (callback_ZNK17QGraphicsRectItem9extensionERK8QVariant != 0) {
  // callback_ZNK17QGraphicsRectItem9extensionERK8QVariant(variant);
}}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:661
// [-2] void QGraphicsRectItem(class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsRectItemC1EP13QGraphicsItem(QGraphicsItem * parent) {
  (MyQGraphicsRectItem*)(0);
  return  new MyQGraphicsRectItem(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:662
// [-2] void QGraphicsRectItem(const class QRectF &, class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsRectItemC1ERK6QRectFP13QGraphicsItem(const QRectF & rect, QGraphicsItem * parent) {
  (MyQGraphicsRectItem*)(0);
  return  new MyQGraphicsRectItem(rect, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:663
// [-2] void QGraphicsRectItem(qreal, qreal, qreal, qreal, class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsRectItemC1EddddP13QGraphicsItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent) {
  (MyQGraphicsRectItem*)(0);
  return  new MyQGraphicsRectItem(x, y, w, h, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:664
// [-2] void ~QGraphicsRectItem()
extern "C"
void C_ZN17QGraphicsRectItemD1Ev(void *this_) {
  delete (QGraphicsRectItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:666
// [32] QRectF rect()
extern "C"
void* C_ZNK17QGraphicsRectItem4rectEv(void *this_) {
  auto rv = ((QGraphicsRectItem*)this_)->rect();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:667
// [-2] void setRect(const class QRectF &)
extern "C"
void C_ZN17QGraphicsRectItem7setRectERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsRectItem*)this_)->setRect(rect);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:668
// [-2] void setRect(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN17QGraphicsRectItem7setRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QGraphicsRectItem*)this_)->setRect(x, y, w, h);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:670
// [32] QRectF boundingRect()
extern "C"
void* C_ZNK17QGraphicsRectItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsRectItem*)this_)->boundingRect();
return new QRectF(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:671
// [8] QPainterPath shape()
extern "C"
void* C_ZNK17QGraphicsRectItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsRectItem*)this_)->shape();
return new QPainterPath(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:672
// [1] bool contains(const class QPointF &)
extern "C"
bool C_ZNK17QGraphicsRectItem8containsERK7QPointF(void *this_, const QPointF & point) {
  return (bool)((QGraphicsRectItem*)this_)->contains(point);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:674
// [-2] void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN17QGraphicsRectItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsRectItem*)this_)->paint(painter, option, widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:676
// [1] bool isObscuredBy(const class QGraphicsItem *)
extern "C"
bool C_ZNK17QGraphicsRectItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsRectItem*)this_)->isObscuredBy(item);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:677
// [8] QPainterPath opaqueArea()
extern "C"
void* C_ZNK17QGraphicsRectItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsRectItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:680
// [4] int type()
extern "C"
int C_ZNK17QGraphicsRectItem4typeEv(void *this_) {
  return (int)((QGraphicsRectItem*)this_)->type();
}
//  main block end
