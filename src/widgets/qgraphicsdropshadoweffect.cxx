//  header block begin
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#include <qgraphicseffect.h>
#include <QtWidgets>

// QGraphicsDropShadowEffect is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:244
// [-2] void draw(class QPainter *)
extern "C"
void* callback_ZN25QGraphicsDropShadowEffect4drawEP8QPainter = 0;
extern "C" void set_callback_ZN25QGraphicsDropShadowEffect4drawEP8QPainter(void*cbfn)
{ callback_ZN25QGraphicsDropShadowEffect4drawEP8QPainter = cbfn; }

class MyQGraphicsDropShadowEffect : public QGraphicsDropShadowEffect {
public:
MyQGraphicsDropShadowEffect(QObject * parent) : QGraphicsDropShadowEffect(parent) {}
// void draw(class QPainter *)
// void draw(class QPainter *)
virtual void draw(QPainter * painter) {
  if (callback_ZN25QGraphicsDropShadowEffect4drawEP8QPainter != 0) {
  // callback_ZN25QGraphicsDropShadowEffect4drawEP8QPainter(painter);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:198
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK25QGraphicsDropShadowEffect10metaObjectEv(void *this_) {
  return (void*)((QGraphicsDropShadowEffect*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:205
// [-2] void QGraphicsDropShadowEffect(class QObject *)
extern "C"
void* C_ZN25QGraphicsDropShadowEffectC1EP7QObject(QObject * parent) {
  (MyQGraphicsDropShadowEffect*)(0);
  return  new MyQGraphicsDropShadowEffect(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:206
// [-2] void ~QGraphicsDropShadowEffect()
extern "C"
void C_ZN25QGraphicsDropShadowEffectD1Ev(void *this_) {
  delete (QGraphicsDropShadowEffect*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:208
// [32] QRectF boundingRectFor(const class QRectF &)
extern "C"
void* C_ZNK25QGraphicsDropShadowEffect15boundingRectForERK6QRectF(void *this_, const QRectF & rect) {
  auto rv = ((QGraphicsDropShadowEffect*)this_)->boundingRectFor(rect);
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:209
// [16] QPointF offset()
extern "C"
void* C_ZNK25QGraphicsDropShadowEffect6offsetEv(void *this_) {
  auto rv = ((QGraphicsDropShadowEffect*)this_)->offset();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:211
// [8] qreal xOffset()
extern "C"
qreal C_ZNK25QGraphicsDropShadowEffect7xOffsetEv(void *this_) {
  return (qreal)((QGraphicsDropShadowEffect*)this_)->xOffset();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:214
// [8] qreal yOffset()
extern "C"
qreal C_ZNK25QGraphicsDropShadowEffect7yOffsetEv(void *this_) {
  return (qreal)((QGraphicsDropShadowEffect*)this_)->yOffset();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:217
// [8] qreal blurRadius()
extern "C"
qreal C_ZNK25QGraphicsDropShadowEffect10blurRadiusEv(void *this_) {
  return (qreal)((QGraphicsDropShadowEffect*)this_)->blurRadius();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:218
// [16] QColor color()
extern "C"
void* C_ZNK25QGraphicsDropShadowEffect5colorEv(void *this_) {
  auto rv = ((QGraphicsDropShadowEffect*)this_)->color();
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:221
// [-2] void setOffset(const class QPointF &)
extern "C"
void C_ZN25QGraphicsDropShadowEffect9setOffsetERK7QPointF(void *this_, const QPointF & ofs) {
  ((QGraphicsDropShadowEffect*)this_)->setOffset(ofs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:223
// [-2] void setOffset(qreal, qreal)
extern "C"
void C_ZN25QGraphicsDropShadowEffect9setOffsetEdd(void *this_, qreal dx, qreal dy) {
  ((QGraphicsDropShadowEffect*)this_)->setOffset(dx, dy);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:226
// [-2] void setOffset(qreal)
extern "C"
void C_ZN25QGraphicsDropShadowEffect9setOffsetEd(void *this_, qreal d) {
  ((QGraphicsDropShadowEffect*)this_)->setOffset(d);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:229
// [-2] void setXOffset(qreal)
extern "C"
void C_ZN25QGraphicsDropShadowEffect10setXOffsetEd(void *this_, qreal dx) {
  ((QGraphicsDropShadowEffect*)this_)->setXOffset(dx);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:232
// [-2] void setYOffset(qreal)
extern "C"
void C_ZN25QGraphicsDropShadowEffect10setYOffsetEd(void *this_, qreal dy) {
  ((QGraphicsDropShadowEffect*)this_)->setYOffset(dy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:235
// [-2] void setBlurRadius(qreal)
extern "C"
void C_ZN25QGraphicsDropShadowEffect13setBlurRadiusEd(void *this_, qreal blurRadius) {
  ((QGraphicsDropShadowEffect*)this_)->setBlurRadius(blurRadius);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:236
// [-2] void setColor(const class QColor &)
extern "C"
void C_ZN25QGraphicsDropShadowEffect8setColorERK6QColor(void *this_, const QColor & color) {
  ((QGraphicsDropShadowEffect*)this_)->setColor(color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:239
// [-2] void offsetChanged(const class QPointF &)
extern "C"
void C_ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(void *this_, const QPointF & offset) {
  ((QGraphicsDropShadowEffect*)this_)->offsetChanged(offset);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:240
// [-2] void blurRadiusChanged(qreal)
extern "C"
void C_ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(void *this_, qreal blurRadius) {
  ((QGraphicsDropShadowEffect*)this_)->blurRadiusChanged(blurRadius);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:241
// [-2] void colorChanged(const class QColor &)
extern "C"
void C_ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(void *this_, const QColor & color) {
  ((QGraphicsDropShadowEffect*)this_)->colorChanged(color);
}
//  main block end
