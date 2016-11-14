// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h
#include <qgraphicsproxywidget.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK20QGraphicsProxyWidget10metaObjectEv(void *this_) {
  /*return*/ ((QGraphicsProxyWidget*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:56
// void QGraphicsProxyWidget(class QGraphicsItem *, Qt::WindowFlags)
extern "C"
void* C_ZN20QGraphicsProxyWidgetC1EP13QGraphicsItem6QFlagsIN2Qt10WindowTypeEE(QGraphicsItem * parent, QFlags<Qt::WindowType> wFlags) {
  return new QGraphicsProxyWidget(parent, wFlags);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:57
// void ~QGraphicsProxyWidget()
extern "C"
void C_ZN20QGraphicsProxyWidgetD1Ev(void *this_) {
  delete (QGraphicsProxyWidget*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:59
// void setWidget(class QWidget *)
extern "C"
void C_ZN20QGraphicsProxyWidget9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QGraphicsProxyWidget*)this_)->setWidget(widget);
}
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:60
// QWidget * widget()
extern "C"
void C_ZNK20QGraphicsProxyWidget6widgetEv(void *this_) {
  /*return*/ ((QGraphicsProxyWidget*)this_)->widget();
}
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:62
// QRectF subWidgetRect(const class QWidget *)
extern "C"
void C_ZNK20QGraphicsProxyWidget13subWidgetRectEPK7QWidget(void *this_, const QWidget * widget) {
  /*return*/ ((QGraphicsProxyWidget*)this_)->subWidgetRect(widget);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:64
// void setGeometry(const class QRectF &)
extern "C"
void C_ZN20QGraphicsProxyWidget11setGeometryERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsProxyWidget*)this_)->setGeometry(rect);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:66
// void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN20QGraphicsProxyWidget5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsProxyWidget*)this_)->paint(painter, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:71
// int type()
extern "C"
void C_ZNK20QGraphicsProxyWidget4typeEv(void *this_) {
  /*return*/ ((QGraphicsProxyWidget*)this_)->type();
}
// /usr/include/qt/QtWidgets/qgraphicsproxywidget.h:73
// QGraphicsProxyWidget * createProxyForChildWidget(class QWidget *)
extern "C"
void C_ZN20QGraphicsProxyWidget25createProxyForChildWidgetEP7QWidget(void *this_, QWidget * child) {
  /*return*/ ((QGraphicsProxyWidget*)this_)->createProxyForChildWidget(child);
}