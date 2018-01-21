//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h:662
// void QGraphicsRectItem(class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsRectItemC1EP13QGraphicsItem(QGraphicsItem * parent) {
  return new QGraphicsRectItem(parent);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:663
// void QGraphicsRectItem(const class QRectF &, class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsRectItemC1ERK6QRectFP13QGraphicsItem(const QRectF & rect, QGraphicsItem * parent) {
  return new QGraphicsRectItem(rect, parent);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:664
// void QGraphicsRectItem(qreal, qreal, qreal, qreal, class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsRectItemC1EddddP13QGraphicsItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent) {
  return new QGraphicsRectItem(x, y, w, h, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:665
// void ~QGraphicsRectItem()
extern "C"
void C_ZN17QGraphicsRectItemD1Ev(void *this_) {
  delete (QGraphicsRectItem*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:667
// QRectF rect()
extern "C"
void C_ZNK17QGraphicsRectItem4rectEv(void *this_) {
  /*return*/ ((QGraphicsRectItem*)this_)->rect();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:668
// void setRect(const class QRectF &)
extern "C"
void C_ZN17QGraphicsRectItem7setRectERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsRectItem*)this_)->setRect(rect);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsitem.h:669
// void setRect(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN17QGraphicsRectItem7setRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QGraphicsRectItem*)this_)->setRect(x, y, w, h);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:671
// QRectF boundingRect()
extern "C"
void C_ZNK17QGraphicsRectItem12boundingRectEv(void *this_) {
  /*return*/ ((QGraphicsRectItem*)this_)->boundingRect();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:672
// QPainterPath shape()
extern "C"
void C_ZNK17QGraphicsRectItem5shapeEv(void *this_) {
  /*return*/ ((QGraphicsRectItem*)this_)->shape();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:673
// bool contains(const class QPointF &)
extern "C"
void C_ZNK17QGraphicsRectItem8containsERK7QPointF(void *this_, const QPointF & point) {
  /*return*/ ((QGraphicsRectItem*)this_)->contains(point);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:675
// void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN17QGraphicsRectItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsRectItem*)this_)->paint(painter, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:677
// bool isObscuredBy(const class QGraphicsItem *)
extern "C"
void C_ZNK17QGraphicsRectItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  /*return*/ ((QGraphicsRectItem*)this_)->isObscuredBy(item);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:678
// QPainterPath opaqueArea()
extern "C"
void C_ZNK17QGraphicsRectItem10opaqueAreaEv(void *this_) {
  /*return*/ ((QGraphicsRectItem*)this_)->opaqueArea();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:681
// int type()
extern "C"
void C_ZNK17QGraphicsRectItem4typeEv(void *this_) {
  /*return*/ ((QGraphicsRectItem*)this_)->type();
}
//  main block end
