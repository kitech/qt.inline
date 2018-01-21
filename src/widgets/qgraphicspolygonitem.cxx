//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h:744
// void QGraphicsPolygonItem(class QGraphicsItem *)
extern "C"
void* C_ZN20QGraphicsPolygonItemC1EP13QGraphicsItem(QGraphicsItem * parent) {
  return new QGraphicsPolygonItem(parent);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:745
// void QGraphicsPolygonItem(const class QPolygonF &, class QGraphicsItem *)
extern "C"
void* C_ZN20QGraphicsPolygonItemC1ERK9QPolygonFP13QGraphicsItem(const QPolygonF & polygon, QGraphicsItem * parent) {
  return new QGraphicsPolygonItem(polygon, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:747
// void ~QGraphicsPolygonItem()
extern "C"
void C_ZN20QGraphicsPolygonItemD1Ev(void *this_) {
  delete (QGraphicsPolygonItem*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:749
// QPolygonF polygon()
extern "C"
void C_ZNK20QGraphicsPolygonItem7polygonEv(void *this_) {
  /*return*/ ((QGraphicsPolygonItem*)this_)->polygon();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:750
// void setPolygon(const class QPolygonF &)
extern "C"
void C_ZN20QGraphicsPolygonItem10setPolygonERK9QPolygonF(void *this_, const QPolygonF & polygon) {
  ((QGraphicsPolygonItem*)this_)->setPolygon(polygon);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:752
// Qt::FillRule fillRule()
extern "C"
void C_ZNK20QGraphicsPolygonItem8fillRuleEv(void *this_) {
  /*return*/ ((QGraphicsPolygonItem*)this_)->fillRule();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:753
// void setFillRule(Qt::FillRule)
extern "C"
void C_ZN20QGraphicsPolygonItem11setFillRuleEN2Qt8FillRuleE(void *this_, Qt::FillRule rule) {
  ((QGraphicsPolygonItem*)this_)->setFillRule(rule);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:755
// QRectF boundingRect()
extern "C"
void C_ZNK20QGraphicsPolygonItem12boundingRectEv(void *this_) {
  /*return*/ ((QGraphicsPolygonItem*)this_)->boundingRect();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:756
// QPainterPath shape()
extern "C"
void C_ZNK20QGraphicsPolygonItem5shapeEv(void *this_) {
  /*return*/ ((QGraphicsPolygonItem*)this_)->shape();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:757
// bool contains(const class QPointF &)
extern "C"
void C_ZNK20QGraphicsPolygonItem8containsERK7QPointF(void *this_, const QPointF & point) {
  /*return*/ ((QGraphicsPolygonItem*)this_)->contains(point);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:759
// void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN20QGraphicsPolygonItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsPolygonItem*)this_)->paint(painter, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:761
// bool isObscuredBy(const class QGraphicsItem *)
extern "C"
void C_ZNK20QGraphicsPolygonItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  /*return*/ ((QGraphicsPolygonItem*)this_)->isObscuredBy(item);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:762
// QPainterPath opaqueArea()
extern "C"
void C_ZNK20QGraphicsPolygonItem10opaqueAreaEv(void *this_) {
  /*return*/ ((QGraphicsPolygonItem*)this_)->opaqueArea();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:765
// int type()
extern "C"
void C_ZNK20QGraphicsPolygonItem4typeEv(void *this_) {
  /*return*/ ((QGraphicsPolygonItem*)this_)->type();
}
//  main block end
