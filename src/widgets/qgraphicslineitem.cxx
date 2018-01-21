//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h:781
// void QGraphicsLineItem(class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsLineItemC1EP13QGraphicsItem(QGraphicsItem * parent) {
  return new QGraphicsLineItem(parent);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:782
// void QGraphicsLineItem(const class QLineF &, class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsLineItemC1ERK6QLineFP13QGraphicsItem(const QLineF & line, QGraphicsItem * parent) {
  return new QGraphicsLineItem(line, parent);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:783
// void QGraphicsLineItem(qreal, qreal, qreal, qreal, class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsLineItemC1EddddP13QGraphicsItem(qreal x1, qreal y1, qreal x2, qreal y2, QGraphicsItem * parent) {
  return new QGraphicsLineItem(x1, y1, x2, y2, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:784
// void ~QGraphicsLineItem()
extern "C"
void C_ZN17QGraphicsLineItemD1Ev(void *this_) {
  delete (QGraphicsLineItem*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:786
// QPen pen()
extern "C"
void C_ZNK17QGraphicsLineItem3penEv(void *this_) {
  /*return*/ ((QGraphicsLineItem*)this_)->pen();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:787
// void setPen(const class QPen &)
extern "C"
void C_ZN17QGraphicsLineItem6setPenERK4QPen(void *this_, const QPen & pen) {
  ((QGraphicsLineItem*)this_)->setPen(pen);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:789
// QLineF line()
extern "C"
void C_ZNK17QGraphicsLineItem4lineEv(void *this_) {
  /*return*/ ((QGraphicsLineItem*)this_)->line();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:790
// void setLine(const class QLineF &)
extern "C"
void C_ZN17QGraphicsLineItem7setLineERK6QLineF(void *this_, const QLineF & line) {
  ((QGraphicsLineItem*)this_)->setLine(line);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsitem.h:791
// void setLine(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN17QGraphicsLineItem7setLineEdddd(void *this_, qreal x1, qreal y1, qreal x2, qreal y2) {
  ((QGraphicsLineItem*)this_)->setLine(x1, y1, x2, y2);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:794
// QRectF boundingRect()
extern "C"
void C_ZNK17QGraphicsLineItem12boundingRectEv(void *this_) {
  /*return*/ ((QGraphicsLineItem*)this_)->boundingRect();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:795
// QPainterPath shape()
extern "C"
void C_ZNK17QGraphicsLineItem5shapeEv(void *this_) {
  /*return*/ ((QGraphicsLineItem*)this_)->shape();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:796
// bool contains(const class QPointF &)
extern "C"
void C_ZNK17QGraphicsLineItem8containsERK7QPointF(void *this_, const QPointF & point) {
  /*return*/ ((QGraphicsLineItem*)this_)->contains(point);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:798
// void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN17QGraphicsLineItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsLineItem*)this_)->paint(painter, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:800
// bool isObscuredBy(const class QGraphicsItem *)
extern "C"
void C_ZNK17QGraphicsLineItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  /*return*/ ((QGraphicsLineItem*)this_)->isObscuredBy(item);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:801
// QPainterPath opaqueArea()
extern "C"
void C_ZNK17QGraphicsLineItem10opaqueAreaEv(void *this_) {
  /*return*/ ((QGraphicsLineItem*)this_)->opaqueArea();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:804
// int type()
extern "C"
void C_ZNK17QGraphicsLineItem4typeEv(void *this_) {
  /*return*/ ((QGraphicsLineItem*)this_)->type();
}
//  main block end
