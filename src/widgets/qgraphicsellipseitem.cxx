//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h:700
// void QGraphicsEllipseItem(class QGraphicsItem *)
extern "C"
void* C_ZN20QGraphicsEllipseItemC1EP13QGraphicsItem(QGraphicsItem * parent) {
  return new QGraphicsEllipseItem(parent);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:701
// void QGraphicsEllipseItem(const class QRectF &, class QGraphicsItem *)
extern "C"
void* C_ZN20QGraphicsEllipseItemC1ERK6QRectFP13QGraphicsItem(const QRectF & rect, QGraphicsItem * parent) {
  return new QGraphicsEllipseItem(rect, parent);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:702
// void QGraphicsEllipseItem(qreal, qreal, qreal, qreal, class QGraphicsItem *)
extern "C"
void* C_ZN20QGraphicsEllipseItemC1EddddP13QGraphicsItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent) {
  return new QGraphicsEllipseItem(x, y, w, h, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:703
// void ~QGraphicsEllipseItem()
extern "C"
void C_ZN20QGraphicsEllipseItemD1Ev(void *this_) {
  delete (QGraphicsEllipseItem*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:705
// QRectF rect()
extern "C"
void C_ZNK20QGraphicsEllipseItem4rectEv(void *this_) {
  /*return*/ ((QGraphicsEllipseItem*)this_)->rect();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:706
// void setRect(const class QRectF &)
extern "C"
void C_ZN20QGraphicsEllipseItem7setRectERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsEllipseItem*)this_)->setRect(rect);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsitem.h:707
// void setRect(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN20QGraphicsEllipseItem7setRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QGraphicsEllipseItem*)this_)->setRect(x, y, w, h);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:709
// int startAngle()
extern "C"
void C_ZNK20QGraphicsEllipseItem10startAngleEv(void *this_) {
  /*return*/ ((QGraphicsEllipseItem*)this_)->startAngle();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:710
// void setStartAngle(int)
extern "C"
void C_ZN20QGraphicsEllipseItem13setStartAngleEi(void *this_, int angle) {
  ((QGraphicsEllipseItem*)this_)->setStartAngle(angle);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:712
// int spanAngle()
extern "C"
void C_ZNK20QGraphicsEllipseItem9spanAngleEv(void *this_) {
  /*return*/ ((QGraphicsEllipseItem*)this_)->spanAngle();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:713
// void setSpanAngle(int)
extern "C"
void C_ZN20QGraphicsEllipseItem12setSpanAngleEi(void *this_, int angle) {
  ((QGraphicsEllipseItem*)this_)->setSpanAngle(angle);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:715
// QRectF boundingRect()
extern "C"
void C_ZNK20QGraphicsEllipseItem12boundingRectEv(void *this_) {
  /*return*/ ((QGraphicsEllipseItem*)this_)->boundingRect();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:716
// QPainterPath shape()
extern "C"
void C_ZNK20QGraphicsEllipseItem5shapeEv(void *this_) {
  /*return*/ ((QGraphicsEllipseItem*)this_)->shape();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:717
// bool contains(const class QPointF &)
extern "C"
void C_ZNK20QGraphicsEllipseItem8containsERK7QPointF(void *this_, const QPointF & point) {
  /*return*/ ((QGraphicsEllipseItem*)this_)->contains(point);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:719
// void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN20QGraphicsEllipseItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsEllipseItem*)this_)->paint(painter, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:721
// bool isObscuredBy(const class QGraphicsItem *)
extern "C"
void C_ZNK20QGraphicsEllipseItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  /*return*/ ((QGraphicsEllipseItem*)this_)->isObscuredBy(item);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:722
// QPainterPath opaqueArea()
extern "C"
void C_ZNK20QGraphicsEllipseItem10opaqueAreaEv(void *this_) {
  /*return*/ ((QGraphicsEllipseItem*)this_)->opaqueArea();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:725
// int type()
extern "C"
void C_ZNK20QGraphicsEllipseItem4typeEv(void *this_) {
  /*return*/ ((QGraphicsEllipseItem*)this_)->type();
}
//  main block end
