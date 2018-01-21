//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h:629
// void QGraphicsPathItem(class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsPathItemC1EP13QGraphicsItem(QGraphicsItem * parent) {
  return new QGraphicsPathItem(parent);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:630
// void QGraphicsPathItem(const class QPainterPath &, class QGraphicsItem *)
extern "C"
void* C_ZN17QGraphicsPathItemC1ERK12QPainterPathP13QGraphicsItem(const QPainterPath & path, QGraphicsItem * parent) {
  return new QGraphicsPathItem(path, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:631
// void ~QGraphicsPathItem()
extern "C"
void C_ZN17QGraphicsPathItemD1Ev(void *this_) {
  delete (QGraphicsPathItem*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:633
// QPainterPath path()
extern "C"
void C_ZNK17QGraphicsPathItem4pathEv(void *this_) {
  /*return*/ ((QGraphicsPathItem*)this_)->path();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:634
// void setPath(const class QPainterPath &)
extern "C"
void C_ZN17QGraphicsPathItem7setPathERK12QPainterPath(void *this_, const QPainterPath & path) {
  ((QGraphicsPathItem*)this_)->setPath(path);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:636
// QRectF boundingRect()
extern "C"
void C_ZNK17QGraphicsPathItem12boundingRectEv(void *this_) {
  /*return*/ ((QGraphicsPathItem*)this_)->boundingRect();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:637
// QPainterPath shape()
extern "C"
void C_ZNK17QGraphicsPathItem5shapeEv(void *this_) {
  /*return*/ ((QGraphicsPathItem*)this_)->shape();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:638
// bool contains(const class QPointF &)
extern "C"
void C_ZNK17QGraphicsPathItem8containsERK7QPointF(void *this_, const QPointF & point) {
  /*return*/ ((QGraphicsPathItem*)this_)->contains(point);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:640
// void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN17QGraphicsPathItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsPathItem*)this_)->paint(painter, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:642
// bool isObscuredBy(const class QGraphicsItem *)
extern "C"
void C_ZNK17QGraphicsPathItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  /*return*/ ((QGraphicsPathItem*)this_)->isObscuredBy(item);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:643
// QPainterPath opaqueArea()
extern "C"
void C_ZNK17QGraphicsPathItem10opaqueAreaEv(void *this_) {
  /*return*/ ((QGraphicsPathItem*)this_)->opaqueArea();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:646
// int type()
extern "C"
void C_ZNK17QGraphicsPathItem4typeEv(void *this_) {
  /*return*/ ((QGraphicsPathItem*)this_)->type();
}
//  main block end
