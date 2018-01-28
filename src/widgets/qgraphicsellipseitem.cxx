//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>

// QGraphicsEllipseItem is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:727
// [1] bool supportsExtension(enum QGraphicsItem::Extension)
extern "C"
void* callback_ZNK20QGraphicsEllipseItem17supportsExtensionEN13QGraphicsItem9ExtensionE = 0;
extern "C" void set_callback_ZNK20QGraphicsEllipseItem17supportsExtensionEN13QGraphicsItem9ExtensionE(void*cbfn)
{ callback_ZNK20QGraphicsEllipseItem17supportsExtensionEN13QGraphicsItem9ExtensionE = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:728
// [-2] void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
extern "C"
void* callback_ZN20QGraphicsEllipseItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant = 0;
extern "C" void set_callback_ZN20QGraphicsEllipseItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(void*cbfn)
{ callback_ZN20QGraphicsEllipseItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:729
// [16] QVariant extension(const class QVariant &)
extern "C"
void* callback_ZNK20QGraphicsEllipseItem9extensionERK8QVariant = 0;
extern "C" void set_callback_ZNK20QGraphicsEllipseItem9extensionERK8QVariant(void*cbfn)
{ callback_ZNK20QGraphicsEllipseItem9extensionERK8QVariant = cbfn; }

class MyQGraphicsEllipseItem : public QGraphicsEllipseItem {
public:
MyQGraphicsEllipseItem(QGraphicsItem * parent) : QGraphicsEllipseItem(parent) {}
MyQGraphicsEllipseItem(const QRectF & rect, QGraphicsItem * parent) : QGraphicsEllipseItem(rect, parent) {}
MyQGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent) : QGraphicsEllipseItem(x, y, w, h, parent) {}
// bool supportsExtension(enum QGraphicsItem::Extension)
// bool supportsExtension(enum QGraphicsItem::Extension)
virtual bool supportsExtension(QGraphicsItem::Extension extension) {
  if (callback_ZNK20QGraphicsEllipseItem17supportsExtensionEN13QGraphicsItem9ExtensionE != 0) {
  // callback_ZNK20QGraphicsEllipseItem17supportsExtensionEN13QGraphicsItem9ExtensionE(extension);
}}
// void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
// void setExtension(enum QGraphicsItem::Extension, const class QVariant &)
virtual void setExtension(QGraphicsItem::Extension extension, const QVariant & variant) {
  if (callback_ZN20QGraphicsEllipseItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant != 0) {
  // callback_ZN20QGraphicsEllipseItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(extension, variant);
}}
// QVariant extension(const class QVariant &)
// QVariant extension(const class QVariant &)
virtual QVariant extension(const QVariant & variant) {
  if (callback_ZNK20QGraphicsEllipseItem9extensionERK8QVariant != 0) {
  // callback_ZNK20QGraphicsEllipseItem9extensionERK8QVariant(variant);
}}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:699
// [-2] void QGraphicsEllipseItem(class QGraphicsItem *)
extern "C"
void* C_ZN20QGraphicsEllipseItemC1EP13QGraphicsItem(QGraphicsItem * parent) {
  (MyQGraphicsEllipseItem*)(0);
  return  new MyQGraphicsEllipseItem(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:700
// [-2] void QGraphicsEllipseItem(const class QRectF &, class QGraphicsItem *)
extern "C"
void* C_ZN20QGraphicsEllipseItemC1ERK6QRectFP13QGraphicsItem(const QRectF & rect, QGraphicsItem * parent) {
  (MyQGraphicsEllipseItem*)(0);
  return  new MyQGraphicsEllipseItem(rect, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:701
// [-2] void QGraphicsEllipseItem(qreal, qreal, qreal, qreal, class QGraphicsItem *)
extern "C"
void* C_ZN20QGraphicsEllipseItemC1EddddP13QGraphicsItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent) {
  (MyQGraphicsEllipseItem*)(0);
  return  new MyQGraphicsEllipseItem(x, y, w, h, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:702
// [-2] void ~QGraphicsEllipseItem()
extern "C"
void C_ZN20QGraphicsEllipseItemD1Ev(void *this_) {
  delete (QGraphicsEllipseItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:704
// [32] QRectF rect()
extern "C"
void* C_ZNK20QGraphicsEllipseItem4rectEv(void *this_) {
  auto rv = ((QGraphicsEllipseItem*)this_)->rect();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:705
// [-2] void setRect(const class QRectF &)
extern "C"
void C_ZN20QGraphicsEllipseItem7setRectERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsEllipseItem*)this_)->setRect(rect);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:706
// [-2] void setRect(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN20QGraphicsEllipseItem7setRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QGraphicsEllipseItem*)this_)->setRect(x, y, w, h);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:708
// [4] int startAngle()
extern "C"
int C_ZNK20QGraphicsEllipseItem10startAngleEv(void *this_) {
  return (int)((QGraphicsEllipseItem*)this_)->startAngle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:709
// [-2] void setStartAngle(int)
extern "C"
void C_ZN20QGraphicsEllipseItem13setStartAngleEi(void *this_, int angle) {
  ((QGraphicsEllipseItem*)this_)->setStartAngle(angle);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:711
// [4] int spanAngle()
extern "C"
int C_ZNK20QGraphicsEllipseItem9spanAngleEv(void *this_) {
  return (int)((QGraphicsEllipseItem*)this_)->spanAngle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:712
// [-2] void setSpanAngle(int)
extern "C"
void C_ZN20QGraphicsEllipseItem12setSpanAngleEi(void *this_, int angle) {
  ((QGraphicsEllipseItem*)this_)->setSpanAngle(angle);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:714
// [32] QRectF boundingRect()
extern "C"
void* C_ZNK20QGraphicsEllipseItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsEllipseItem*)this_)->boundingRect();
return new QRectF(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:715
// [8] QPainterPath shape()
extern "C"
void* C_ZNK20QGraphicsEllipseItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsEllipseItem*)this_)->shape();
return new QPainterPath(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:716
// [1] bool contains(const class QPointF &)
extern "C"
bool C_ZNK20QGraphicsEllipseItem8containsERK7QPointF(void *this_, const QPointF & point) {
  return (bool)((QGraphicsEllipseItem*)this_)->contains(point);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:718
// [-2] void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN20QGraphicsEllipseItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsEllipseItem*)this_)->paint(painter, option, widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:720
// [1] bool isObscuredBy(const class QGraphicsItem *)
extern "C"
bool C_ZNK20QGraphicsEllipseItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsEllipseItem*)this_)->isObscuredBy(item);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:721
// [8] QPainterPath opaqueArea()
extern "C"
void* C_ZNK20QGraphicsEllipseItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsEllipseItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:724
// [4] int type()
extern "C"
int C_ZNK20QGraphicsEllipseItem4typeEv(void *this_) {
  return (int)((QGraphicsEllipseItem*)this_)->type();
}
//  main block end
