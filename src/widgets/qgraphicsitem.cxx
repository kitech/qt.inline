// /usr/include/qt/QtWidgets/qgraphicsitem.h
#include <qgraphicsitem.h>
#include <QtWidgets>

// /usr/include/qt/QtWidgets/qgraphicsitem.h:1005
// void QGraphicsItemGroup(class QGraphicsItem *)
extern "C"
void* C_ZN18QGraphicsItemGroupC1EP13QGraphicsItem(QGraphicsItem * parent) {
  return new QGraphicsItemGroup(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1006
// void ~QGraphicsItemGroup()
extern "C"
void C_ZN18QGraphicsItemGroupD1Ev(void *this_) {
  delete (QGraphicsItemGroup*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1008
// void addToGroup(class QGraphicsItem *)
extern "C"
void C_ZN18QGraphicsItemGroup10addToGroupEP13QGraphicsItem(void *this_, QGraphicsItem * item) {
  ((QGraphicsItemGroup*)this_)->addToGroup(item);
}
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1009
// void removeFromGroup(class QGraphicsItem *)
extern "C"
void C_ZN18QGraphicsItemGroup15removeFromGroupEP13QGraphicsItem(void *this_, QGraphicsItem * item) {
  ((QGraphicsItemGroup*)this_)->removeFromGroup(item);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1011
// QRectF boundingRect()
extern "C"
void C_ZNK18QGraphicsItemGroup12boundingRectEv(void *this_) {
  /*return*/ ((QGraphicsItemGroup*)this_)->boundingRect();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1012
// void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN18QGraphicsItemGroup5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsItemGroup*)this_)->paint(painter, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1014
// bool isObscuredBy(const class QGraphicsItem *)
extern "C"
void C_ZNK18QGraphicsItemGroup12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  /*return*/ ((QGraphicsItemGroup*)this_)->isObscuredBy(item);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1015
// QPainterPath opaqueArea()
extern "C"
void C_ZNK18QGraphicsItemGroup10opaqueAreaEv(void *this_) {
  /*return*/ ((QGraphicsItemGroup*)this_)->opaqueArea();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1018
// int type()
extern "C"
void C_ZNK18QGraphicsItemGroup4typeEv(void *this_) {
  /*return*/ ((QGraphicsItemGroup*)this_)->type();
}