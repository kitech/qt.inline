//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicseffect.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsDropShadowEffect is pure virtual: false
// QGraphicsDropShadowEffect has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsDropShadowEffect : public QGraphicsDropShadowEffect {
public:
  virtual ~MyQGraphicsDropShadowEffect() {}
// void QGraphicsDropShadowEffect(QObject *)
MyQGraphicsDropShadowEffect(QObject * parent) : QGraphicsDropShadowEffect(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void draw(QPainter *)
  virtual void draw(QPainter * painter)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"draw", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsDropShadowEffect::draw(painter);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:244
// [-2] void draw(QPainter *)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect4drawEP8QPainter(void *this_, QPainter * painter) {
  ((QGraphicsDropShadowEffect*)this_)->QGraphicsDropShadowEffect::draw(painter);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:198
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QGraphicsDropShadowEffect10metaObjectEv(void *this_) {
  return (void*)((QGraphicsDropShadowEffect*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:198
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN25QGraphicsDropShadowEffect11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsDropShadowEffect*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:198
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN25QGraphicsDropShadowEffect11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsDropShadowEffect*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:198
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QGraphicsDropShadowEffect2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsDropShadowEffect::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:198
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QGraphicsDropShadowEffect6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsDropShadowEffect::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:205
// [-2] void QGraphicsDropShadowEffect(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN25QGraphicsDropShadowEffectC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsDropShadowEffect*)(0);
  return  new MyQGraphicsDropShadowEffect(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:206
// [-2] void ~QGraphicsDropShadowEffect()
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffectD2Ev(void *this_) {
  delete (QGraphicsDropShadowEffect*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:208
// [32] QRectF boundingRectFor(const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK25QGraphicsDropShadowEffect15boundingRectForERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QGraphicsDropShadowEffect*)this_)->boundingRectFor(*rect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:209
// [16] QPointF offset()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QGraphicsDropShadowEffect6offsetEv(void *this_) {
  auto rv = ((QGraphicsDropShadowEffect*)this_)->offset();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:211
// [8] qreal xOffset()
extern "C" Q_DECL_EXPORT
qreal C_ZNK25QGraphicsDropShadowEffect7xOffsetEv(void *this_) {
  return (qreal)((QGraphicsDropShadowEffect*)this_)->xOffset();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:214
// [8] qreal yOffset()
extern "C" Q_DECL_EXPORT
qreal C_ZNK25QGraphicsDropShadowEffect7yOffsetEv(void *this_) {
  return (qreal)((QGraphicsDropShadowEffect*)this_)->yOffset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:217
// [8] qreal blurRadius()
extern "C" Q_DECL_EXPORT
qreal C_ZNK25QGraphicsDropShadowEffect10blurRadiusEv(void *this_) {
  return (qreal)((QGraphicsDropShadowEffect*)this_)->blurRadius();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:218
// [16] QColor color()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QGraphicsDropShadowEffect5colorEv(void *this_) {
  auto rv = ((QGraphicsDropShadowEffect*)this_)->color();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:221
// [-2] void setOffset(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect9setOffsetERK7QPointF(void *this_, QPointF* ofs) {
  ((QGraphicsDropShadowEffect*)this_)->setOffset(*ofs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:223
// [-2] void setOffset(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect9setOffsetEdd(void *this_, qreal dx, qreal dy) {
  ((QGraphicsDropShadowEffect*)this_)->setOffset(dx, dy);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:226
// [-2] void setOffset(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect9setOffsetEd(void *this_, qreal d) {
  ((QGraphicsDropShadowEffect*)this_)->setOffset(d);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:229
// [-2] void setXOffset(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect10setXOffsetEd(void *this_, qreal dx) {
  ((QGraphicsDropShadowEffect*)this_)->setXOffset(dx);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:232
// [-2] void setYOffset(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect10setYOffsetEd(void *this_, qreal dy) {
  ((QGraphicsDropShadowEffect*)this_)->setYOffset(dy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:235
// [-2] void setBlurRadius(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect13setBlurRadiusEd(void *this_, qreal blurRadius) {
  ((QGraphicsDropShadowEffect*)this_)->setBlurRadius(blurRadius);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:236
// [-2] void setColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect8setColorERK6QColor(void *this_, QColor* color) {
  ((QGraphicsDropShadowEffect*)this_)->setColor(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:239
// [-2] void offsetChanged(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(void *this_, QPointF* offset) {
  ((QGraphicsDropShadowEffect*)this_)->offsetChanged(*offset);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:240
// [-2] void blurRadiusChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(void *this_, qreal blurRadius) {
  ((QGraphicsDropShadowEffect*)this_)->blurRadiusChanged(blurRadius);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:241
// [-2] void colorChanged(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(void *this_, QColor* color) {
  ((QGraphicsDropShadowEffect*)this_)->colorChanged(*color);
}

//  main block end
