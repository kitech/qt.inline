//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h:826
// void QGraphicsPixmapItem(class QGraphicsItem *)
extern "C"
void* C_ZN19QGraphicsPixmapItemC1EP13QGraphicsItem(QGraphicsItem * parent) {
  return new QGraphicsPixmapItem(parent);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:827
// void QGraphicsPixmapItem(const class QPixmap &, class QGraphicsItem *)
extern "C"
void* C_ZN19QGraphicsPixmapItemC1ERK7QPixmapP13QGraphicsItem(const QPixmap & pixmap, QGraphicsItem * parent) {
  return new QGraphicsPixmapItem(pixmap, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:828
// void ~QGraphicsPixmapItem()
extern "C"
void C_ZN19QGraphicsPixmapItemD1Ev(void *this_) {
  delete (QGraphicsPixmapItem*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:830
// QPixmap pixmap()
extern "C"
void C_ZNK19QGraphicsPixmapItem6pixmapEv(void *this_) {
  /*return*/ ((QGraphicsPixmapItem*)this_)->pixmap();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:831
// void setPixmap(const class QPixmap &)
extern "C"
void C_ZN19QGraphicsPixmapItem9setPixmapERK7QPixmap(void *this_, const QPixmap & pixmap) {
  ((QGraphicsPixmapItem*)this_)->setPixmap(pixmap);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:833
// Qt::TransformationMode transformationMode()
extern "C"
void C_ZNK19QGraphicsPixmapItem18transformationModeEv(void *this_) {
  /*return*/ ((QGraphicsPixmapItem*)this_)->transformationMode();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:834
// void setTransformationMode(Qt::TransformationMode)
extern "C"
void C_ZN19QGraphicsPixmapItem21setTransformationModeEN2Qt18TransformationModeE(void *this_, Qt::TransformationMode mode) {
  ((QGraphicsPixmapItem*)this_)->setTransformationMode(mode);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:836
// QPointF offset()
extern "C"
void C_ZNK19QGraphicsPixmapItem6offsetEv(void *this_) {
  /*return*/ ((QGraphicsPixmapItem*)this_)->offset();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:837
// void setOffset(const class QPointF &)
extern "C"
void C_ZN19QGraphicsPixmapItem9setOffsetERK7QPointF(void *this_, const QPointF & offset) {
  ((QGraphicsPixmapItem*)this_)->setOffset(offset);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicsitem.h:838
// void setOffset(qreal, qreal)
extern "C"
void C_ZN19QGraphicsPixmapItem9setOffsetEdd(void *this_, qreal x, qreal y) {
  ((QGraphicsPixmapItem*)this_)->setOffset(x, y);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:840
// QRectF boundingRect()
extern "C"
void C_ZNK19QGraphicsPixmapItem12boundingRectEv(void *this_) {
  /*return*/ ((QGraphicsPixmapItem*)this_)->boundingRect();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:841
// QPainterPath shape()
extern "C"
void C_ZNK19QGraphicsPixmapItem5shapeEv(void *this_) {
  /*return*/ ((QGraphicsPixmapItem*)this_)->shape();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:842
// bool contains(const class QPointF &)
extern "C"
void C_ZNK19QGraphicsPixmapItem8containsERK7QPointF(void *this_, const QPointF & point) {
  /*return*/ ((QGraphicsPixmapItem*)this_)->contains(point);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:844
// void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN19QGraphicsPixmapItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsPixmapItem*)this_)->paint(painter, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:846
// bool isObscuredBy(const class QGraphicsItem *)
extern "C"
void C_ZNK19QGraphicsPixmapItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  /*return*/ ((QGraphicsPixmapItem*)this_)->isObscuredBy(item);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:847
// QPainterPath opaqueArea()
extern "C"
void C_ZNK19QGraphicsPixmapItem10opaqueAreaEv(void *this_) {
  /*return*/ ((QGraphicsPixmapItem*)this_)->opaqueArea();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:850
// int type()
extern "C"
void C_ZNK19QGraphicsPixmapItem4typeEv(void *this_) {
  /*return*/ ((QGraphicsPixmapItem*)this_)->type();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:852
// QGraphicsPixmapItem::ShapeMode shapeMode()
extern "C"
void C_ZNK19QGraphicsPixmapItem9shapeModeEv(void *this_) {
  /*return*/ ((QGraphicsPixmapItem*)this_)->shapeMode();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:853
// void setShapeMode(enum QGraphicsPixmapItem::ShapeMode)
extern "C"
void C_ZN19QGraphicsPixmapItem12setShapeModeENS_9ShapeModeE(void *this_, QGraphicsPixmapItem::ShapeMode mode) {
  ((QGraphicsPixmapItem*)this_)->setShapeMode(mode);
}
//  main block end
