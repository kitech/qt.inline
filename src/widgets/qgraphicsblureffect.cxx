//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#ifndef protected
#define protected public
#endif
#include <qgraphicseffect.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsBlurEffect is pure virtual: false
// QGraphicsBlurEffect has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsBlurEffect : public QGraphicsBlurEffect {
public:
  virtual ~MyQGraphicsBlurEffect() {}
// void QGraphicsBlurEffect(QObject *)
MyQGraphicsBlurEffect(QObject * parent) : QGraphicsBlurEffect(parent) {}
// Protected virtual Visibility=Default Availability=Available
// void draw(QPainter *)
  virtual void draw(QPainter * painter) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"draw", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsBlurEffect::draw(painter);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:186
// [-2] void draw(QPainter *)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsBlurEffect4drawEP8QPainter(void *this_, QPainter * painter) {
  ((QGraphicsBlurEffect*)this_)->QGraphicsBlurEffect::draw(painter);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:157
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsBlurEffect10metaObjectEv(void *this_) {
  return (void*)((QGraphicsBlurEffect*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:170
// [-2] void QGraphicsBlurEffect(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QGraphicsBlurEffectC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsBlurEffect*)(0);
  return  new MyQGraphicsBlurEffect(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:171
// [-2] void ~QGraphicsBlurEffect()
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsBlurEffectD2Ev(void *this_) {
  delete (QGraphicsBlurEffect*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:173
// [32] QRectF boundingRectFor(const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsBlurEffect15boundingRectForERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QGraphicsBlurEffect*)this_)->boundingRectFor(*rect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:174
// [8] qreal blurRadius()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsBlurEffect10blurRadiusEv(void *this_) {
  return (qreal)((QGraphicsBlurEffect*)this_)->blurRadius();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:175
// [4] QGraphicsBlurEffect::BlurHints blurHints()
extern "C" Q_DECL_EXPORT
QGraphicsBlurEffect::BlurHints* C_ZNK19QGraphicsBlurEffect9blurHintsEv(void *this_) {
  auto rv = ((QGraphicsBlurEffect*)this_)->blurHints();
return new QGraphicsBlurEffect::BlurHints(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:178
// [-2] void setBlurRadius(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsBlurEffect13setBlurRadiusEd(void *this_, qreal blurRadius) {
  ((QGraphicsBlurEffect*)this_)->setBlurRadius(blurRadius);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:179
// [-2] void setBlurHints(QGraphicsBlurEffect::BlurHints)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsBlurEffect12setBlurHintsE6QFlagsINS_8BlurHintEE(void *this_, QFlags<QGraphicsBlurEffect::BlurHint> hints) {
  ((QGraphicsBlurEffect*)this_)->setBlurHints(hints);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:182
// [-2] void blurRadiusChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsBlurEffect17blurRadiusChangedEd(void *this_, qreal blurRadius) {
  ((QGraphicsBlurEffect*)this_)->blurRadiusChanged(blurRadius);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:183
// [-2] void blurHintsChanged(QGraphicsBlurEffect::BlurHints)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(void *this_, QFlags<QGraphicsBlurEffect::BlurHint> hints) {
  ((QGraphicsBlurEffect*)this_)->blurHintsChanged(hints);
}

//  main block end
