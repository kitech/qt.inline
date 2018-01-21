//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicsitem.h:969
// void QGraphicsSimpleTextItem(class QGraphicsItem *)
extern "C"
void* C_ZN23QGraphicsSimpleTextItemC1EP13QGraphicsItem(QGraphicsItem * parent) {
  return new QGraphicsSimpleTextItem(parent);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:970
// void QGraphicsSimpleTextItem(const class QString &, class QGraphicsItem *)
extern "C"
void* C_ZN23QGraphicsSimpleTextItemC1ERK7QStringP13QGraphicsItem(const QString & text, QGraphicsItem * parent) {
  return new QGraphicsSimpleTextItem(text, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:971
// void ~QGraphicsSimpleTextItem()
extern "C"
void C_ZN23QGraphicsSimpleTextItemD1Ev(void *this_) {
  delete (QGraphicsSimpleTextItem*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:973
// void setText(const class QString &)
extern "C"
void C_ZN23QGraphicsSimpleTextItem7setTextERK7QString(void *this_, const QString & text) {
  ((QGraphicsSimpleTextItem*)this_)->setText(text);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:974
// QString text()
extern "C"
void C_ZNK23QGraphicsSimpleTextItem4textEv(void *this_) {
  /*return*/ ((QGraphicsSimpleTextItem*)this_)->text();
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:976
// void setFont(const class QFont &)
extern "C"
void C_ZN23QGraphicsSimpleTextItem7setFontERK5QFont(void *this_, const QFont & font) {
  ((QGraphicsSimpleTextItem*)this_)->setFont(font);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:977
// QFont font()
extern "C"
void C_ZNK23QGraphicsSimpleTextItem4fontEv(void *this_) {
  /*return*/ ((QGraphicsSimpleTextItem*)this_)->font();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:979
// QRectF boundingRect()
extern "C"
void C_ZNK23QGraphicsSimpleTextItem12boundingRectEv(void *this_) {
  /*return*/ ((QGraphicsSimpleTextItem*)this_)->boundingRect();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:980
// QPainterPath shape()
extern "C"
void C_ZNK23QGraphicsSimpleTextItem5shapeEv(void *this_) {
  /*return*/ ((QGraphicsSimpleTextItem*)this_)->shape();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:981
// bool contains(const class QPointF &)
extern "C"
void C_ZNK23QGraphicsSimpleTextItem8containsERK7QPointF(void *this_, const QPointF & point) {
  /*return*/ ((QGraphicsSimpleTextItem*)this_)->contains(point);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:983
// void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN23QGraphicsSimpleTextItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsSimpleTextItem*)this_)->paint(painter, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:985
// bool isObscuredBy(const class QGraphicsItem *)
extern "C"
void C_ZNK23QGraphicsSimpleTextItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  /*return*/ ((QGraphicsSimpleTextItem*)this_)->isObscuredBy(item);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:986
// QPainterPath opaqueArea()
extern "C"
void C_ZNK23QGraphicsSimpleTextItem10opaqueAreaEv(void *this_) {
  /*return*/ ((QGraphicsSimpleTextItem*)this_)->opaqueArea();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:989
// int type()
extern "C"
void C_ZNK23QGraphicsSimpleTextItem4typeEv(void *this_) {
  /*return*/ ((QGraphicsSimpleTextItem*)this_)->type();
}
//  main block end
