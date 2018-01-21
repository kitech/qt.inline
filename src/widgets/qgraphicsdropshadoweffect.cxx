//  header block begin
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#include <qgraphicseffect.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgraphicseffect.h:196
// const QMetaObject * metaObject()
extern "C"
void C_ZNK25QGraphicsDropShadowEffect10metaObjectEv(void *this_) {
  /*return*/ ((QGraphicsDropShadowEffect*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:203
// void QGraphicsDropShadowEffect(class QObject *)
extern "C"
void* C_ZN25QGraphicsDropShadowEffectC1EP7QObject(QObject * parent) {
  return new QGraphicsDropShadowEffect(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicseffect.h:204
// void ~QGraphicsDropShadowEffect()
extern "C"
void C_ZN25QGraphicsDropShadowEffectD1Ev(void *this_) {
  delete (QGraphicsDropShadowEffect*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicseffect.h:206
// QRectF boundingRectFor(const class QRectF &)
extern "C"
void C_ZNK25QGraphicsDropShadowEffect15boundingRectForERK6QRectF(void *this_, const QRectF & rect) {
  /*return*/ ((QGraphicsDropShadowEffect*)this_)->boundingRectFor(rect);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:207
// QPointF offset()
extern "C"
void C_ZNK25QGraphicsDropShadowEffect6offsetEv(void *this_) {
  /*return*/ ((QGraphicsDropShadowEffect*)this_)->offset();
}
// inline
// /usr/include/qt/QtWidgets/qgraphicseffect.h:209
// qreal xOffset()
extern "C"
void C_ZNK25QGraphicsDropShadowEffect7xOffsetEv(void *this_) {
  /*return*/ ((QGraphicsDropShadowEffect*)this_)->xOffset();
}
// inline
// /usr/include/qt/QtWidgets/qgraphicseffect.h:212
// qreal yOffset()
extern "C"
void C_ZNK25QGraphicsDropShadowEffect7yOffsetEv(void *this_) {
  /*return*/ ((QGraphicsDropShadowEffect*)this_)->yOffset();
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:215
// qreal blurRadius()
extern "C"
void C_ZNK25QGraphicsDropShadowEffect10blurRadiusEv(void *this_) {
  /*return*/ ((QGraphicsDropShadowEffect*)this_)->blurRadius();
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:216
// QColor color()
extern "C"
void C_ZNK25QGraphicsDropShadowEffect5colorEv(void *this_) {
  /*return*/ ((QGraphicsDropShadowEffect*)this_)->color();
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:219
// void setOffset(const class QPointF &)
extern "C"
void C_ZN25QGraphicsDropShadowEffect9setOffsetERK7QPointF(void *this_, const QPointF & ofs) {
  ((QGraphicsDropShadowEffect*)this_)->setOffset(ofs);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicseffect.h:221
// void setOffset(qreal, qreal)
extern "C"
void C_ZN25QGraphicsDropShadowEffect9setOffsetEdd(void *this_, qreal dx, qreal dy) {
  ((QGraphicsDropShadowEffect*)this_)->setOffset(dx, dy);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicseffect.h:224
// void setOffset(qreal)
extern "C"
void C_ZN25QGraphicsDropShadowEffect9setOffsetEd(void *this_, qreal d) {
  ((QGraphicsDropShadowEffect*)this_)->setOffset(d);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicseffect.h:227
// void setXOffset(qreal)
extern "C"
void C_ZN25QGraphicsDropShadowEffect10setXOffsetEd(void *this_, qreal dx) {
  ((QGraphicsDropShadowEffect*)this_)->setXOffset(dx);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicseffect.h:230
// void setYOffset(qreal)
extern "C"
void C_ZN25QGraphicsDropShadowEffect10setYOffsetEd(void *this_, qreal dy) {
  ((QGraphicsDropShadowEffect*)this_)->setYOffset(dy);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:233
// void setBlurRadius(qreal)
extern "C"
void C_ZN25QGraphicsDropShadowEffect13setBlurRadiusEd(void *this_, qreal blurRadius) {
  ((QGraphicsDropShadowEffect*)this_)->setBlurRadius(blurRadius);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:234
// void setColor(const class QColor &)
extern "C"
void C_ZN25QGraphicsDropShadowEffect8setColorERK6QColor(void *this_, const QColor & color) {
  ((QGraphicsDropShadowEffect*)this_)->setColor(color);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:237
// void offsetChanged(const class QPointF &)
extern "C"
void C_ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(void *this_, const QPointF & offset) {
  ((QGraphicsDropShadowEffect*)this_)->offsetChanged(offset);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:238
// void blurRadiusChanged(qreal)
extern "C"
void C_ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(void *this_, qreal blurRadius) {
  ((QGraphicsDropShadowEffect*)this_)->blurRadiusChanged(blurRadius);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:239
// void colorChanged(const class QColor &)
extern "C"
void C_ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(void *this_, const QColor & color) {
  ((QGraphicsDropShadowEffect*)this_)->colorChanged(color);
}
//  main block end
